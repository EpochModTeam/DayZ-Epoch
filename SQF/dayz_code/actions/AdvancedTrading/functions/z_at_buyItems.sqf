private ["_magazinesToBuy", "_weaponsToBuy", "_backpacksToBuy", "_toolsToBuy", "_sidearmToBuy", "_primaryToBuy", "_priceToBuy"
,"_enoughMoney", "_myMoney", "_canBuy", "_moneyInfo","_count","_success","_backpack"
];

_magazinesToBuy = 0;
_weaponsToBuy = 0;
_backpacksToBuy = 0;
_toolsToBuy = 0;
_sidearmToBuy = 0;
_primaryToBuy = 0;
_vehiclesToBuy = 0;

_priceToBuy = 0;

if (Z_SingleCurrency) then {
	{
		if( _x select 1 == "trade_weapons")then{
			_parentClasses =  [(configFile >> "CfgWeapons" >> (_x select 0)),true] call BIS_fnc_returnParents;
			if( 'ItemCore' in _parentClasses || 'Binocular' in _parentClasses) then {
				_toolsToBuy = _toolsToBuy + (_x select 9);
			} else {
				_weaponsToBuy = _weaponsToBuy + (_x select 9);
				if('PistolCore' in _parentClasses)then {
					_sidearmToBuy = _sidearmToBuy + (_x select 9);
				} else {
					_primaryToBuy = _primaryToBuy + (_x select 9); // _ammount
				};
			};
			_priceToBuy	= _priceToBuy + ((_x select 9)*(_x select 2));
		};
		if( _x select 1 == "trade_items")then{
			_magazinesToBuy = _magazinesToBuy + (_x select 9) ;
			_priceToBuy	= _priceToBuy + ((_x select 9)*(_x select 2));
		};
		if( _x select 1 == "trade_backpacks")then{
			_backpacksToBuy = _backpacksToBuy + (_x select 9) ;
			_priceToBuy	= _priceToBuy + ((_x select 9)*(_x select 2)); // _price * _amount
		};
		if((_x select 1) in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"])then{
			_vehiclesToBuy = _vehiclesToBuy + (_x select 9) ;
			_priceToBuy	= _priceToBuy + ((_x select 9)*(_x select 2)); // _price * _amount
		};
	} count Z_BuyingArray;
} else {
	{
		if( _x select 1 == "trade_weapons")then{
			_parentClasses =  [(configFile >> "CfgWeapons" >> (_x select 0)),true] call BIS_fnc_returnParents;
			if( 'ItemCore' in _parentClasses || 'Binocular' in _parentClasses) then {
				_toolsToBuy = _toolsToBuy + (_x select 9);
			} else {
				_weaponsToBuy = _weaponsToBuy + (_x select 9);
				if('PistolCore' in _parentClasses)then {
					_sidearmToBuy = _sidearmToBuy + (_x select 9);
				} else {
					_primaryToBuy = _primaryToBuy + (_x select 9);
				};
			};
			_priceToBuy	= _priceToBuy + ((_x select 11)*(_x select 2)*(_x select 9)); // _worth * _price * _amount
		};
		if( _x select 1 == "trade_items")then{
			_magazinesToBuy = _magazinesToBuy + (_x select 9) ;
			_priceToBuy	= _priceToBuy + ((_x select 11) *(_x select 2)*(_x select 9));
		};
		if( _x select 1 == "trade_backpacks")then{
			_backpacksToBuy = _backpacksToBuy + (_x select 9) ;
			_priceToBuy	= _priceToBuy + ((_x select 11)*(_x select 2)*(_x select 9));
		};
		if((_x select 1) in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"])then{
			_vehiclesToBuy = _vehiclesToBuy + (_x select 9) ;
			_priceToBuy	= _priceToBuy + ((_x select 11)*(_x select 2)*(_x select 9));
		};
	} count Z_BuyingArray;
};

_canBuy = [_weaponsToBuy,_magazinesToBuy,_backpacksToBuy,_toolsToBuy, _sidearmToBuy, _primaryToBuy,_vehiclesToBuy] call Z_allowBuying;

_myMoney = player getVariable[Z_MoneyVariable,0];

_enoughMoney = false;

_moneyInfo = [false, [], [], [], 0];

if (Z_SingleCurrency) then {
	if (_myMoney >= _priceToBuy) then {
		_enoughMoney = true;
	} else {
		_enoughMoney = false;
	};
} else {
	_moneyInfo = _priceToBuy call Z_canAfford;
	_enoughMoney = _moneyInfo select 0;
};

if(_enoughMoney) then {
	if(_canBuy) then {
	_buyVehicle = {
		private "_location";
		_part_out = _this select 0;
		_buyingType = _this select 1;
		_keySelected = "0";
		_isKeyOK= false;
		if (_buyingType in ["trade_any_vehicle_free", "trade_any_bicycle", "trade_any_bicycle_old"]) then {
			_isKeyOK = true;
		} else {
			_keyColor = ["Green","Red","Blue","Yellow","Black"] call BIS_fnc_selectRandom;
			_keyNumber = (floor(random 2500)) + 1;
			_keySelected = format["ItemKey%1%2",_keyColor,_keyNumber];
			_isKeyOK = 	isClass(configFile >> "CfgWeapons" >> _keySelected);
		};
		if (!_isKeyOK) exitWith {localize "str_epoch_player_107" call dayz_rollingMessages; "";};
		_activatingPlayer = player;
		_dir = round(random 360);
		_helipad = nearestObjects [player, ["HeliHCivil","HeliHempty"], 100];
		
		if(count _helipad > 0) then {
			_location = (getPosATL (_helipad select 0));
		} else {
			_location = [([player] call FNC_GetPos),0,20,1,0,2000,0] call BIS_fnc_findSafePos;
		};

		_veh = createVehicle ["Sign_arrow_down_large_EP1", _location, [], 0, "CAN_COLLIDE"];
		_location = ([_veh] call FNC_GetPos);
		
		if (_buyingType in ["trade_any_vehicle_free", "trade_any_bicycle", "trade_any_bicycle_old"]) then {
			PVDZE_veh_Publish2 = [_veh,[_dir,_location],_part_out,true,"0",_activatingPlayer];
			diag_log format ["Purchased vehicle %1 without a key", _x select 0];
		} else {
			PVDZE_veh_Publish2 = [_veh,[_dir,_location],_part_out,false,_keySelected,_activatingPlayer];
		};
		publicVariableServer  "PVDZE_veh_Publish2";
		_keySelected;
	};
	systemChat format["Starting trade."];

	closeDialog 2;

		if(Z_SellingFrom == 0) then { //backpack
		_backpack = unitBackpack player;
		systemChat format["Adding %1 items in backpack",count (Z_BuyingArray)];
			{
				if( _x select 1 == "trade_weapons")then{
					_backpack addWeaponCargoGlobal [_x select 0, _x select 9];
					diag_log format ["%1 x %2 added", _x select 0, _x select 9];
				};
				if( _x select 1 == "trade_items")then{
					_backpack addMagazineCargoGlobal  [_x select 0, _x select 9];
					diag_log format ["%1 x %2 added", _x select 0, _x select 9];
				};				
				if((_x select 1) in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"])then{
					_item2Add = [(_x select 0), (_x select 1)] call _buyVehicle;
					if (_item2Add != "0") then {
						_backpack addWeaponCargoGlobal  [_item2Add, 1];
						diag_log format ["Key %1 added for vehicle %2", _item2Add, _x select 0];
					};
				};
			} count Z_BuyingArray;
		};

		if(Z_SellingFrom == 1)then{ //vehicle
			{
				systemChat format["Adding %1 items in %2",count (Z_BuyingArray), typeOf Z_vehicle];
				if( _x select 1 == "trade_weapons")then{
					Z_vehicle addWeaponCargoGlobal [_x select 0, _x select 9];
					diag_log format ["%1 x %2 added", _x select 0, _x select 9];
				};
				if( _x select 1 == "trade_items")then{
					Z_vehicle addMagazineCargoGlobal [_x select 0, _x select 9];
					diag_log format ["%1 x %2 added", _x select 0, _x select 9];
				};
				if( _x select 1 == "trade_backpacks")then{
					Z_vehicle addBackpackCargoGlobal [_x select 0, _x select 9];
					diag_log format ["%1 x %2 added", _x select 0, _x select 9];
				};
				if((_x select 1) in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"])then{
					_item2Add = [(_x select 0), (_x select 1)] call _buyVehicle;
					if (_item2Add != "0") then {
						Z_vehicle addWeaponCargoGlobal [_item2Add, 1];
						diag_log format ["Key %1 added for vehicle %2", _item2Add, _x select 0];
					};
				};
			} count Z_BuyingArray;
		};

		if(Z_SellingFrom == 2)then{ //gear
			systemChat format["Adding %1 items in gear",count (Z_BuyingArray)];
			{
				if( _x select 1 == "trade_weapons") then {
					_count = 0;
					while{ _count < (_x select 9)}do{
						player addWeapon (_x select 0);
						diag_log format ["%1 added", _x select 0];
						_count = _count + 1;
					};
				};
				if( _x select 1 == "trade_items" ) then {
					_count = 0;
					 while{ _count < (_x select 9)} do {
						player addMagazine (_x select 0);
						diag_log format ["%1 added", _x select 0];
						_count = _count + 1;
					};
				};
				if( _x select 1 == "trade_backpacks")then{
						player addBackpack (_x select 0);
				};
				if((_x select 1) in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"])then{
					_item2Add = [(_x select 0), (_x select 1)] call _buyVehicle;
					if (_item2Add != "0") then {
						player addWeapon _item2Add;
						diag_log format ["Key %1 added for vehicle %2", _item2Add, _x select 0];
					};
				};
			} count Z_BuyingArray;
		};
		if (!Z_SingleCurrency) then {
				_success = [player,_priceToBuy, _moneyInfo] call Z_payDefault;
				if (_success) then {
					systemChat format["Trade successfull, payed %1 worth of items.", _priceToBuy];
				} else {
					systemchat "DEBUG: Something went wrong in the pay process. Please report this issue.";
				};
		} else {
				_success = [player,_priceToBuy] call SC_fnc_removeCoins;
				if (_success) then {
					systemChat format["Trade successfull, payed %1 %2.", _priceToBuy, CurrencyName];
				} else {
					systemchat "DEBUG: Something went wrong in the pay process. Please report this issue.";
				};
		};
	} else {
		systemChat "You could not buy these items because the container lacks space to hold them.";
	};
}else{
	if( Z_SingleCurrency) then {
		systemChat format["You need %1 %2 to buy all these items.",_priceToBuy,CurrencyName];
	} else {
		systemChat format["You need more money to buy all these items."];
	};
};
