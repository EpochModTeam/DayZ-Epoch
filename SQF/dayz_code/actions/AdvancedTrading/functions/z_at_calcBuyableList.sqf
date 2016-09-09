private ["_arrayOfTraderCat","_counter","_cat","_cfgtraders","_y","_type","_buy","_sell","_pic","_text","_worth","_buyCurrency","_sellCurrency","_ignore","_categoryNumber","_BcurrencyQty","_ScurrencyQty"];

call Z_clearBuyList;
Z_BuyableArray = [];
_arrayOfTraderCat = Z_traderData;
_counter = 0;
{
	_categoryNumber = _x select 1;
	if (_categoryNumber == _this) exitWith {
		_cat = format["Category_%1",_categoryNumber];
		_cfgtraders = missionConfigFile >> "CfgTraderCategory"  >> _cat;
		if (isNumber (_cfgtraders >> "duplicate")) then {
			_cat =  format["Category_%1",getNumber (_cfgtraders >> "duplicate")];
			_cfgtraders = missionConfigFile >> "CfgTraderCategory" >> _cat;
		};
		for "_i" from 0 to (count _cfgtraders) - 1 do
		{
			_y  = _cfgtraders select _i;
			if (isClass _y) then
			{
				_y  = configName (_y);

				_type =  getText(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "type");
				_buy = getArray(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "buy");
				_sell = getArray(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "sell");
				_pic = "";
				_text = "";
				_buyCurrency = "";
				_sellCurrency = "";
				_worth = 0;
				_ignore = false;
				_BcurrencyQty = _buy select 0;
				_ScurrencyQty = _sell select 0;
				if (dayz_classicBloodBagSystem && _y in dayz_typedBags) then {
					if (_y == "bloodBagONEG") then {_y = "ItemBloodbag";} else {_ignore = true;};
				};

				if (_type == "trade_items") then {
					_pic = getText (configFile >> 'CfgMagazines' >> _y >> 'picture');
					_text = getText (configFile >> 'CfgMagazines' >> _y >> 'displayName');
				};
				if (_type == "trade_weapons") then {
					_pic = getText (configFile >> 'CfgWeapons' >> _y >> 'picture');
					_text = getText (configFile >> 'CfgWeapons' >> _y >> 'displayName');
				};
				if (_type in DZE_tradeObject) then {
					_pic = getText (configFile >> 'CfgVehicles' >> _y >> 'picture');
					_text = getText (configFile >> 'CfgVehicles' >> _y >> 'displayName');
				};

				if (!Z_SingleCurrency) then {
					_buyCurrency = 	_buy select 1;
					_sellCurrency = _sell select 1,
					_part =  (configFile >> "CfgMagazines" >> _buyCurrency);
					_worth =  getNumber(_part >> "worth");
					if (_worth == 0) then {
						_worth = DZE_GemWorthList select (DZE_GemList find _buyCurrency);
					};
				} else {
					_buyCurrency = CurrencyName;
					_sellCurrency = CurrencyName;
				};
				if (_BcurrencyQty < 0) then {_buyCurrency = localize "STR_EPOCH_UNAVAILABLE"; _ignore = true;};
				if (_ScurrencyQty < 0) then {_sellCurrency = localize "STR_EPOCH_UNAVAILABLE";};
				if (!_ignore) then { // Fill buyable list for one category only
					Z_BuyableArray set [count Z_BuyableArray, [_y,_type,_BcurrencyQty,_text,_pic,_forEachIndex, _ScurrencyQty, _buyCurrency, _sellCurrency, 0,_cat, _worth]];
				};
			};
		};
	};
} forEach _arrayOfTraderCat;

Z_CategoryView = false;
Z_Selling = true; // flipped in ChangeBuySell
call Z_ChangeBuySell;

Z_OriginalBuyableArray = [] + Z_BuyableArray;
call Z_fillBuyableList;
call Z_calcPrice;
