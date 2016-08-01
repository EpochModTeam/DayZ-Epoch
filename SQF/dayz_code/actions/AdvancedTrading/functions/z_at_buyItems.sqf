private ["_weaponsToBuy","_backpacksToBuy","_toolsToBuy","_sidearmToBuy","_primaryToBuy","_priceToBuy"
,"_enoughMoney","_myMoney","_canBuy","_moneyInfo","_count","_success","_toolClasses","_itemsToLog"
,"_tCost","_bTotal","_backpack","_pistolMagsToBuy","_regularMagsToBuy"];

if (count Z_BuyingArray < 1) exitWith { systemChat localize "STR_EPOCH_TRADE_BUY_NO_ITEMS"; };

_pistolMagsToBuy = 0;
_regularMagsToBuy = 0;
_weaponsToBuy = 0;
_backpacksToBuy = 0;
_toolsToBuy = 0;
_sidearmToBuy = 0;
_primaryToBuy = 0;
_vehiclesToBuy = 0;
_priceToBuy = 0;

_toolClasses = [];
_itemsToLog = [[],[],[],"buy"];

if (Z_SingleCurrency) then {
	{
		if (_x select 1 == "trade_weapons") then {
			_parentClasses =  [(configFile >> "CfgWeapons" >> (_x select 0)),true] call BIS_fnc_returnParents;
			if ('ItemCore' in _parentClasses || 'Binocular' in _parentClasses) then {
				_toolsToBuy = _toolsToBuy + (_x select 9);
				_toolClasses set [count _toolClasses,(_x select 0)];
			} else {
				_weaponsToBuy = _weaponsToBuy + (_x select 9);
				if ('PistolCore' in _parentClasses) then {
					_sidearmToBuy = _sidearmToBuy + (_x select 9);
				} else {
					_primaryToBuy = _primaryToBuy + (_x select 9); // _ammount
				};
			};
			_priceToBuy	= _priceToBuy + ((_x select 9)*(_x select 2));
		};
		if (_x select 1 == "trade_items") then {
			if (getNumber (configFile >> "CfgMagazines" >> (_x select 0) >> "type") == 16) then { // 16 = WeaponSlotHandGunItem (pistol ammo slot)
				_pistolMagsToBuy = _pistolMagsToBuy + (_x select 9);
			} else {
				_regularMagsToBuy = _regularMagsToBuy + (_x select 9);
			};
			_priceToBuy	= _priceToBuy + ((_x select 9)*(_x select 2));
		};
		if (_x select 1 == "trade_backpacks") then {
			_backpacksToBuy = _backpacksToBuy + (_x select 9) ;
			_priceToBuy	= _priceToBuy + ((_x select 9)*(_x select 2)); // _price * _amount
		};
		if ((_x select 1) in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"]) then {
			_vehiclesToBuy = _vehiclesToBuy + (_x select 9) ;
			_priceToBuy	= _priceToBuy + ((_x select 9)*(_x select 2)); // _price * _amount
		};
		_itemsToLog set [0, (_itemsToLog select 0) + [_x select 0]];
		_itemsToLog set [1, (_itemsToLog select 1) + [_x select 9]];
		_itemsToLog set [2, (_itemsToLog select 2) + [((_x select 9)*(_x select 2))]];
	} count Z_BuyingArray;
} else {
	{
		if (_x select 1 == "trade_weapons") then {
			_parentClasses =  [(configFile >> "CfgWeapons" >> (_x select 0)),true] call BIS_fnc_returnParents;
			if ('ItemCore' in _parentClasses || 'Binocular' in _parentClasses) then {
				_toolsToBuy = _toolsToBuy + (_x select 9);
				_toolClasses set [count _toolClasses,(_x select 0)];
			} else {
				_weaponsToBuy = _weaponsToBuy + (_x select 9);
				if ('PistolCore' in _parentClasses) then {
					_sidearmToBuy = _sidearmToBuy + (_x select 9);
				} else {
					_primaryToBuy = _primaryToBuy + (_x select 9);
				};
			};
			_priceToBuy	= _priceToBuy + ((_x select 11)*(_x select 2)*(_x select 9)); // _worth * _price * _amount
		};
		if (_x select 1 == "trade_items") then {
			if (getNumber (configFile >> "CfgMagazines" >> (_x select 0) >> "type") == 16) then { // 16 = WeaponSlotHandGunItem (pistol ammo slot)
				_pistolMagsToBuy = _pistolMagsToBuy + (_x select 9);
			} else {
				_regularMagsToBuy = _regularMagsToBuy + (_x select 9);
			};
			_priceToBuy	= _priceToBuy + ((_x select 11) *(_x select 2)*(_x select 9));
		};
		if (_x select 1 == "trade_backpacks") then {
			_backpacksToBuy = _backpacksToBuy + (_x select 9) ;
			_priceToBuy	= _priceToBuy + ((_x select 11)*(_x select 2)*(_x select 9));
		};
		if ((_x select 1) in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"]) then {
			_vehiclesToBuy = _vehiclesToBuy + (_x select 9) ;
			_priceToBuy	= _priceToBuy + ((_x select 11)*(_x select 2)*(_x select 9));
		};
		_itemsToLog set [0, (_itemsToLog select 0) + [_x select 0]];
		_itemsToLog set [1, (_itemsToLog select 1) + [_x select 9]];
		_itemsToLog set [2, (_itemsToLog select 2) + [((_x select 11)*(_x select 2)*(_x select 9))]];
	} count Z_BuyingArray;
};

_canBuy = [_weaponsToBuy,[_pistolMagsToBuy,_regularMagsToBuy],_backpacksToBuy,_toolsToBuy,_sidearmToBuy,_primaryToBuy,_vehiclesToBuy,_toolClasses] call Z_allowBuying;
if (!_canBuy) exitWith {}; // Keep systemChat reasons for failure in Z_allowBuying for sanity

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

// Pre-check if player has enough room to accept change
_success = if (Z_SingleCurrency) then { true } else { [player,_priceToBuy,_moneyInfo,true,_regularMagsToBuy] call Z_payDefault };
if (!_success) exitWith { systemChat localize "STR_EPOCH_TRADE_GEAR_AND_BAG_FULL"; }; // Not enough room in gear or bag to accept change

if (_enoughMoney) then {
	_bTotal = 0;
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
		
		if (count _helipad > 0) then {
			_location = (getPosATL (_helipad select 0));
		} else {
			_location = [([player] call FNC_GetPos),0,20,1,0,2000,0] call BIS_fnc_findSafePos;
		};

		_veh = createVehicle ["Sign_arrow_down_large_EP1", _location, [], 0, "CAN_COLLIDE"];
		_location = ([_veh] call FNC_GetPos);
		
		if (_buyingType in ["trade_any_vehicle_free", "trade_any_bicycle", "trade_any_bicycle_old"]) then {
			PVDZE_veh_Publish2 = [_veh,[_dir,_location],_part_out,true,"0",_activatingPlayer];
		} else {
			PVDZE_veh_Publish2 = [_veh,[_dir,_location],_part_out,false,_keySelected,_activatingPlayer];
		};
		publicVariableServer  "PVDZE_veh_Publish2";
		_keySelected;
	};
	systemChat localize "STR_EPOCH_PLAYER_105";

	closeDialog 2;

	if (Z_SellingFrom == 0) then { //backpack
		_backpack = unitBackpack player;
		{
			if (_x select 1 == "trade_weapons") then {
				_backpack addWeaponCargoGlobal [_x select 0, _x select 9];
			};
			if (_x select 1 == "trade_items") then {
				_backpack addMagazineCargoGlobal  [_x select 0, _x select 9];
			};				
			if ((_x select 1) in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"]) then {
				_item2Add = [(_x select 0), (_x select 1)] call _buyVehicle;
				if (_item2Add != "0") then {
					_backpack addWeaponCargoGlobal  [_item2Add, 1];
				};
			};
			_bTotal = _bTotal + (_x select 9);
		} count Z_BuyingArray;
		systemChat format[localize "STR_EPOCH_TRADE_BUY_IN_BACKPACK",_bTotal];
	};

	if (Z_SellingFrom == 1) then { //vehicle
		{
			if (_x select 1 == "trade_weapons") then {
				Z_vehicle addWeaponCargoGlobal [_x select 0, _x select 9];
			};
			if (_x select 1 == "trade_items") then {
				Z_vehicle addMagazineCargoGlobal [_x select 0, _x select 9];
			};
			if (_x select 1 == "trade_backpacks") then {
				Z_vehicle addBackpackCargoGlobal [_x select 0, _x select 9];
			};
			if ((_x select 1) in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"]) then {
				_item2Add = [(_x select 0), (_x select 1)] call _buyVehicle;
				if (_item2Add != "0") then {
					Z_vehicle addWeaponCargoGlobal [_item2Add, 1];
				};
			};
			_bTotal = _bTotal + (_x select 9);
		} count Z_BuyingArray;
		systemChat format[localize "STR_EPOCH_TRADE_BUY_IN_VEHICLE",_bTotal,typeOf Z_vehicle];
	};

	if (Z_SellingFrom == 2) then { //gear
		{
			if (_x select 1 == "trade_weapons") then {
				_count = 0;
				while { _count < (_x select 9)} do {
					player addWeapon (_x select 0);
					_count = _count + 1;
				};
			};
			if (_x select 1 == "trade_items") then {
				_count = 0;
				while { _count < (_x select 9)} do {
					player addMagazine (_x select 0);
					_count = _count + 1;
				};
			};
			if (_x select 1 == "trade_backpacks") then {
				player addBackpack (_x select 0);
			};
			if ((_x select 1) in ["trade_any_vehicle", "trade_any_vehicle_free", "trade_any_vehicle_old", "trade_any_bicycle", "trade_any_bicycle_old", "trade_any_boat", "trade_any_boat_old"]) then {
				_item2Add = [(_x select 0), (_x select 1)] call _buyVehicle;
				if (_item2Add != "0") then {
					player addWeapon _item2Add;
				};
			};
			_bTotal = _bTotal + (_x select 9);
		} count Z_BuyingArray;
		systemChat format[localize "STR_EPOCH_TRADE_BUY_IN_GEAR",_bTotal];
	};
	if (!Z_SingleCurrency) then {
		_success = [player,_priceToBuy,_moneyInfo,false,0] call Z_payDefault;
		if (_success) then {
			_tCost = "";
			_tCost = _priceToBuy call z_calcDefaultCurrencyNoImg;
			if (_tCost != "") then { systemChat format[localize "STR_EPOCH_TRADE_BUY_SUCCESS",_tCost]; };
		} else {
			systemChat localize "STR_EPOCH_TRADE_DEBUG";
		};
	} else {
		_success = [player,_priceToBuy] call SC_fnc_removeCoins;
		if (_success) then {
			systemChat format[localize "STR_EPOCH_TRADE_SUCCESS_COINS", _priceToBuy, CurrencyName];
		} else {
			systemChat localize "STR_EPOCH_TRADE_DEBUG";
		};
	};
	_itemsToLog call Z_logTrade;
} else {
	if (Z_SingleCurrency) then {
		systemChat format[localize "STR_EPOCH_TRADE_NEED_COINS",_priceToBuy,CurrencyName];
	} else {
		systemChat localize "STR_EPOCH_TRADE_NEED_MONEY";
	};
};
