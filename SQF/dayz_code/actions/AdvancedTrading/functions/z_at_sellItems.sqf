private ["_index","_tempArray","_outcome","_weaponsArray","_itemsArray","_bpArray","_bpCheckArray","_weaponsCheckArray","_itemsCheckArray"];

_index = count (Z_SellArray) - 1;
_tempArray = Z_SellArray;
if(_index > -1)then{
	closeDialog 2;
	_outcome = [];
	_weaponsArray = [];
	_itemsArray = [];
	_bpArray = [];
	_bpCheckArray = [];
	_weaponsCheckArray = [];
	_itemsCheckArray = [];
	{
		private ["_type","_name"];
		_type = _x select 1;
		_name = _x select 0;

		switch (true) do {
			case (_type == "trade_items") :
			{
				_itemsArray set [count(_itemsArray),_name];
				_itemsCheckArray set [count(_itemsCheckArray),[_x select 2, _x select 11]];
			};
			case (_type == "trade_weapons") :
			{
				_weaponsArray set [count(_weaponsArray),_name];
				_weaponsCheckArray set [count(_weaponsCheckArray),[_x select 2, _x select 11]];
			};
			case (_type == "trade_backpacks") :
			{
				_bpArray set [count(_bpArray),_name];
				_bpCheckArray set [count(_bpCheckArray),[_x select 2, _x select 11]];
			};

		};
	}count Z_SellArray;

	if(Z_SellingFrom == 0)then{
		_outcome = [unitBackpack player,_itemsArray,_weaponsArray] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
	};
	if(Z_SellingFrom == 1)then{
		_outcome = [Z_vehicle,_itemsArray,_weaponsArray,_bpArray] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
	};

	//gear
	if(Z_SellingFrom == 2)then{
		_wA = [];
		_mA = [];
		{
			_localResult = [player,(_x select 0),1] call BIS_fnc_invRemove;
			if( _localResult != 1)then{
				if(_x select 1 == "trade_items")then{
					_mA set [count(_mA),0];
				}else{
					_wA set [count(_wA),0];
				};
			}else{
				if(_x select 1 == "trade_items")then{
					_mA set [count(_mA),1];
				}else{
					_wA set [count(_wA),1];
				};
			};

		}count Z_SellArray;

		_outcome set [0,_mA];
		_outcome set [1,_wA];
		_outcome set [2,[]];
	};

	_money = 0;

	if (Z_SingleCurrency) then {
		{
			_money = _money + ( (((_itemsCheckArray select _forEachIndex) select 0)) * _x) ;
		}forEach (_outcome select 0);
		{
			_money = _money + ( (((_weaponsCheckArray select _forEachIndex) select 0)) * _x) ;
		}forEach (_outcome select 1);
		{
			_money = _money + ( ( ((_bpCheckArray select _forEachIndex) select 0) ) * _x) ;
		}forEach (_outcome select 2);
	} else {
		{
			_itemData = _itemsCheckArray select _forEachIndex;
			_money = _money + ( (_itemData select 0) * (_itemData select 1) * _x);
		}forEach (_outcome select 0);
		{
			_itemData = _weaponsCheckArray select _forEachIndex;
			_money = _money + ( (_itemData select 0) * (_itemData select 1) * _x);
		}forEach (_outcome select 1);
		{
			_itemData = _bpCheckArray select _forEachIndex;
			_money = _money + ( (_itemData select 0) * (_itemData select 1) * _x);
		}forEach (_outcome select 2);
	};

	if(typeName _money  == "SCALAR") then {
		if (Z_SingleCurrency) then {
				_success = [player,_money] call SC_fnc_addCoins;
				systemChat format["Trade successfull, received %1 %2", _money , CurrencyName];
		} else {
				_success = [_money, 0] call Z_returnChange;
				systemChat format["Trade successfull."];
		};
	}else{
		systemChat format["Money is not a number. Something went wrong."];
	};
}else{
	systemChat format["No Items to sell"];
};
