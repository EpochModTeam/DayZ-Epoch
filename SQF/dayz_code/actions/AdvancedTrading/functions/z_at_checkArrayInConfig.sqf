/**
*	[_weaps,_mags,_extraText] call Z_checkArrayInConfig
*
*   @param Array of Strings _this select 0 (_weaps) -> all weapons/items in the container
*   @param Array of Strings _this select 1 (_mags) -> all magazines in the container
*	@param String 			_this select 2 (_extraText) -> Indicator what container you are trading from
*
*	Fills up the sell or buy list if the item has a valid config.
**/
private ["_weaps","_mags","_extraText","_all","_total","_arrayOfTraderCat","_totalPrice","_ctrltext","_backUpText"];
#include "defines.sqf";

_weaps = _this select 0;
_mags = _this select 1;
_extraText = _this select 2;
_all = _weaps + _mags ;
_total = count(_all);
_arrayOfTraderCat = Z_traderData;
_totalPrice = 0;
if(_total > 0)then{
	{
		_y = _x;
		{
			private ["_cat","_excists","_pic","_text","_type","_sell","_buy","_buyCurrency","_sellCurrency","_worth"];
			_cat =  format["Category_%1",(_arrayOfTraderCat select _forEachIndex select 1)];
			_excists = isClass(missionConfigFile >> "CfgTraderCategory"  >> _cat >> _y );

			if(_excists)exitWith{
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
					case (_type in ["trade_backpacks", "trade_any_vehicle"]) :
					{
						_pic = getText (configFile >> 'CfgVehicles' >> _y >> 'displayName');
						_text = getText (configFile >> 'CfgVehicles' >> _y >> 'displayName');
					};
				};

				if( isNil '_text')then{
					_text = _y;
				};

				_worth = 0;

				if(!Z_SingleCurrency) then {
					_buyCurrency = 	_buy select 1;
					_sellCurrency = _sell select 1;
					_part =  (configFile >> "CfgMagazines" >> _sellCurrency);
					_worth =  getNumber(_part >> "worth");
				}else{
					_buyCurrency = CurrencyName;
					_sellCurrency = CurrencyName;
				};

				Z_SellableArray set [count(Z_SellableArray) , [_y, _type, _sell select 0, _text, _pic, _forEachIndex, _buy select 0, _sellCurrency, _buyCurrency, 0 ,_cat, _worth]];
       	_totalPrice = _totalPrice + (_sell select 0);
			};
		}forEach _arrayOfTraderCat;
	}count _all;

	Z_OriginalSellableArray = [] + Z_SellableArray;

	_backUpText = _extraText;

	if(Z_SellingFrom != 2)then{
		_extraText = getText (configFile >> 'CfgVehicles' >> _extraText >> 'displayName');
	};
	if (isNil '_extraText')then{
		_extraText = _backUpText;
	};

	if (Z_SingleCurrency) then {
		_ctrltext = format["I would offer %1 %2.", _totalPrice,CurrencyName];
		ctrlSetText [Z_AT_TRADERLINE2, _ctrltext];
	} else {
		ctrlSetText [Z_AT_TRADERLINE2, ''];
	};

	_ctrltext = format["I accept %1 items from %2.", count(Z_SellableArray) , _extraText];
	ctrlSetText [Z_AT_TRADERLINE1, _ctrltext];

	call Z_fillSellList;
};
