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
private ["_weaps","_mags","_extraText","_all","_arrayOfTraderCat","_totalPrice","_backUpText","_bags"];
#include "defines.hpp"

_weaps = _this select 0;
_mags = _this select 1;
_extraText = _this select 2;
_bags = _this select 3;
_vehTrade = false;

if (false call Z_checkCloseVehicle) then {
	_all = _weaps + _mags + _bags + [(typeOf Z_vehicle)];
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
	{
		private ["_cat","_exists","_pic","_text","_type","_sell","_buy","_buyCurrency","_sellCurrency","_worth"];
		_cat =  format["Category_%1",(_arrayOfTraderCat select _forEachIndex select 1)];
		if (isNumber (missionConfigFile >> "CfgTraderCategory" >> _cat >> "duplicate")) then {
			_cat = format["Category_%1",getNumber (missionConfigFile >> "CfgTraderCategory" >> _cat >> "duplicate")];
		};
		_exists = isClass(missionConfigFile >> "CfgTraderCategory"  >> _cat >> _y);
		if (_exists) exitWith {
			_pic = "";
			_text = "";
			_type = getText(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "type");
			_sell = getArray(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "sell");
			_buy = getArray(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "buy");
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
				case (_type in ["trade_backpacks", "trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"]) :
				{
					_pic = getText (configFile >> 'CfgVehicles' >> _y >> 'picture');
					_text = getText (configFile >> 'CfgVehicles' >> _y >> 'displayName');
				};
			};

			if (isNil '_text') then { _text = _y; };
			_HasKey = true;
			if (_vehTrade && {(typeOf Z_vehicle) == _y}) then {
				if (!(_type in ["trade_any_bicycle", "trade_any_bicycle_old", "trade_any_vehicle_free"]) && DZE_SaleRequiresKey) then {
					_HasKey = [Z_vehicle, _all] call _HasKeyCheck;
				};
			};
			if (!_HasKey) exitWith {};

			_worth = 0;

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

			Z_SellableArray set [count(Z_SellableArray) , [_y, _type, _sell select 0, _text, _pic, _forEachIndex, _buy select 0, _sellCurrency, _buyCurrency, 0 ,_cat, _worth]];
			_totalPrice = _totalPrice + (_sell select 0);
		};
	} forEach _arrayOfTraderCat;
} count _all;

Z_OriginalSellableArray = [] + Z_SellableArray;

_backUpText = _extraText;

if (Z_SellingFrom != 2) then { _extraText = getText (configFile >> 'CfgVehicles' >> _extraText >> 'displayName'); };
if (isNil '_extraText') then { _extraText = _backUpText; };

if (Z_SingleCurrency) then {
	ctrlSetText [Z_AT_TRADERLINE2, format[localize "STR_EPOCH_TRADE_OFFER", _totalPrice,CurrencyName]];
} else {
	ctrlSetText [Z_AT_TRADERLINE2, ''];
};
ctrlSetText [Z_AT_TRADERLINE1, format[localize "STR_EPOCH_TRADE_ACCEPT", count(Z_SellableArray) , _extraText]];

call Z_fillSellList;
