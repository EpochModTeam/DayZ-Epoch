/**
*	[_weaps,_mags,_extraText,_bags] call Z_checkArrayInConfig
*
*   @param Array of Strings _this select 0 (_weaps) -> all weapons/items in the container
*   @param Array of Strings _this select 1 (_mags) -> all magazines in the container
*	@param String 			_this select 2 (_extraText) -> Indicator what container you are trading from
*   @param Array of Strings _this select 3 (_bags) -> all backpacks in the container
*
*	Fills up the sell or buy list if the item has a valid config.
**/
private ["_weaps","_mags","_extraText","_all","_arrayOfTraderCat","_totalPrice","_backUpText","_bags","_vehUpgraded","_currencyQty","_swap"];
#include "defines.hpp"

_weaps = _this select 0;
_mags = _this select 1;
_extraText = _this select 2;
_bags = _this select 3;
_vehTrade = false;
_vehUpgraded = "";

if (false call Z_checkCloseVehicle) then {
	_vehUpgraded = getText (configFile >> 'CfgVehicles' >> typeOf (DZE_myVehicle) >> 'original');
	_all = _weaps + _mags + _bags + [(typeOf DZE_myVehicle)];
	_vehTrade = true;
} else {
	_all = _weaps + _mags + _bags;
};

_arrayOfTraderCat = Z_traderData;
_HasKeyCheck = {
	_obj = _this select 0;
	_inventory = _this select 1;
	_keyFound = false;
	_objectCharacterId	= _obj getVariable ["CharacterID","0"];
	if (_objectCharacterId == "0") then {
		_keyFound = true;
	} else {
		_keyColor = ["ItemKeyYellow","ItemKeyBlue","ItemKeyRed","ItemKeyGreen","ItemKeyBlack"];
		{
			if (configName(inheritsFrom(configFile >> "CfgWeapons" >> _x)) in _keyColor) then {
				if (str(getNumber(configFile >> "CfgWeapons" >> _x >> "keyid")) == _objectCharacterId) then {
					_keyFound = true;
				};
			};
		} count _inventory;
	};
	_keyFound;
};
_totalPrice = 0;

{
	_y = _x;
	_swap = false;
	if (dayz_classicBloodBagSystem && _y == "ItemBloodbag") then {
		_y = "bloodBagONEG";
		_swap = true;
	};
	{
		private ["_cat","_exists","_pic","_text","_type","_sell","_buy","_buyCurrency","_sellCurrency","_worth"];
		_cat =  format["Category_%1",(_arrayOfTraderCat select _forEachIndex select 1)];
		if (isNumber (missionConfigFile >> "CfgTraderCategory" >> _cat >> "duplicate")) then {
			_cat = format["Category_%1",getNumber (missionConfigFile >> "CfgTraderCategory" >> _cat >> "duplicate")];
		};
		if (_vehUpgraded != "" && _y == (typeOf DZE_myVehicle)) then { _y = _vehUpgraded; };
		_exists = isClass(missionConfigFile >> "CfgTraderCategory"  >> _cat >> _y);
		if (_exists) exitWith {
			_pic = "";
			_text = "";
			_type = getText(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "type");
			// Make sure type matches for items that have the same weapon and magazine classname (i.e. PipeBomb, Mine, Javelin, etc.)
			if ((_type == "trade_items" && !(_y in _mags)) or (_type == "trade_weapons" && !(_y in _weaps))) exitWith {};
			_sell = getArray(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "sell");
			_buy = getArray(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "buy");
			if (_swap) then {_y = "ItemBloodbag"};
			switch (true) do {
				case (_type == "trade_items") :
				{
					_pic = getText (configFile >> 'CfgMagazines' >> _y >> 'picture');
					_text = getText (configFile >> 'CfgMagazines' >> _y >> 'displayName');
				};
				case (_type == "trade_weapons") :
				{
					_pic = getText (configFile >> 'CfgWeapons' >> _y >> 'picture');
					_text = getText (configFile >> 'CfgWeapons' >> _y >> 'displayName');
				};
				case (_type in DZE_tradeObject) :
				{
					_pic = getText (configFile >> 'CfgVehicles' >> _y >> 'picture');
					_text = getText (configFile >> 'CfgVehicles' >> _y >> 'displayName');
				};
			};

			if (isNil '_text') then { _text = _y; };
			_HasKey = true;
			if (_vehTrade && {(typeOf DZE_myVehicle) == _y}) then {
				if (!(_type in DZE_tradeVehicleKeyless) && DZE_SaleRequiresKey) then {
					_HasKey = [DZE_myVehicle, _all] call _HasKeyCheck;
				};
			};
			if (!_HasKey) exitWith {};

			_worth = 0;
			_currencyQty = _buy select 0;
			if (!Z_SingleCurrency) then {
				_buyCurrency = 	_buy select 1;
				_sellCurrency = _sell select 1;
				_part =  (configFile >> "CfgMagazines" >> _sellCurrency);
				_worth =  getNumber(_part >> "worth");
				if (_worth == 0) then { _worth = DZE_GemWorthList select (DZE_GemList find _buyCurrency); };
			} else {
				_buyCurrency = CurrencyName;
				_sellCurrency = CurrencyName;
			};
			if (_currencyQty < 0) then {_buyCurrency = localize "STR_EPOCH_UNAVAILABLE";};
			if ((_sell select 0) >= 0) then {
				Z_SellableArray set [count(Z_SellableArray) , [_y, _type, _sell select 0, _text, _pic, _forEachIndex, _currencyQty, _sellCurrency, _buyCurrency, 0 ,_cat, _worth]];
			};
			_totalPrice = _totalPrice + (_sell select 0);
		};
	} forEach _arrayOfTraderCat;
} count _all;

Z_OriginalSellableArray = [] + Z_SellableArray;

_backUpText = _extraText;

if (Z_SellingFrom != 2) then { _extraText = getText (configFile >> 'CfgVehicles' >> _extraText >> 'displayName'); };
if (isNil '_extraText') then { _extraText = _backUpText; };

if (Z_SingleCurrency) then {
	ctrlSetText [Z_AT_TRADERLINE2, format[localize "STR_EPOCH_TRADE_OFFER",[_totalPrice] call BIS_fnc_numberText,CurrencyName]];
} else {
	ctrlSetText [Z_AT_TRADERLINE2, ''];
};
ctrlSetText [Z_AT_TRADERLINE1, format[localize "STR_EPOCH_TRADE_ACCEPT", count(Z_SellableArray) , _extraText]];

call Z_fillSellList;
