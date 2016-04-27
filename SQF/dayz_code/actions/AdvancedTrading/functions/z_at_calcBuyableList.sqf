private ["_arrayOfTraderCat","_counter","_cat","_cfgtraders","_y","_type","_buy","_sell","_pic","_text","_worth","_buyCurrency","_sellCurrency"];
call Z_clearBuyList;
call Z_clearBuyingList;
Z_BuyableArray = [];
Z_BuyingArray = [];
_arrayOfTraderCat = Z_traderData;
_counter = 0;
{
			_cat =  format["Category_%1",(_arrayOfTraderCat select _forEachIndex select 1)];
			_cfgtraders = missionConfigFile >> "CfgTraderCategory"  >> _cat;
			for "_i" from 0 to (count _cfgtraders) - 1 do
			{
				_y  = _cfgtraders select _i;
				if (isClass _y) then
				{
					_y  = configName (_y );
					_type =  getText(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "type");
					_buy = getArray(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "buy");
					_sell = getArray(missionConfigFile >> "CfgTraderCategory"  >> _cat  >> _y >> "sell");
					_pic = "";
					_text = "";
					_buyCurrency = "";
					_sellCurrency = "";
					_worth = 0;

					if(_type == "trade_items")then{
						_pic = getText (configFile >> 'CfgMagazines' >> _y >> 'picture');
						_text = getText (configFile >> 'CfgMagazines' >> _y >> 'displayName');
					};
					if(_type == "trade_weapons")then{
						_pic = getText (configFile >> 'CfgWeapons' >> _y >> 'picture');
						_text = getText (configFile >> 'CfgWeapons' >> _y >> 'displayName');
					};
					if(_type == "trade_any_vehicle" || _type == "trade_backpacks")then{
						_pic = getText (configFile >> 'CfgVehicles' >> _y >> 'picture');
						_text = getText (configFile >> 'CfgVehicles' >> _y >> 'displayName');
					};

					if(!Z_SingleCurrency) then {
						_buyCurrency = 	_buy select 1;
						_sellCurrency = _sell select 1,
						_part =  (configFile >> "CfgMagazines" >> _buyCurrency);
						_worth =  getNumber(_part >> "worth");
					}else{
						_buyCurrency = CurrencyName;
						_sellCurrency = CurrencyName;
					};

					Z_BuyableArray set [count(Z_BuyableArray) , [_y,_type,_buy select 0,_text,_pic,_forEachIndex,_sell select 0, _buyCurrency, _sellCurrency, 0,_cat, _worth]];
				};
			};
}forEach _arrayOfTraderCat;

Z_OriginalBuyableArray = [] + Z_BuyableArray;
call Z_fillBuyableList;
call Z_calcPrice;
