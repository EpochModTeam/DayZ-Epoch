// Vehicle Service Point (Rearm) by Axe Cop
// Rewritten for single currency, gems, briefcase support and 1.0.7 epoch compatibility by salival - https://github.com/oiad/
// Requires DayZ Epoch 1.0.7 for gem support.

private ["_vehicle","_costs","_fuel","_magazineCount","_weapon","_type","_name","_weaponType","_weaponName","_turret","_magazines","_ammo","_textMissing","_pos","_message","_action","_damage","_selection","_strH","_disabled","_amount","_enoughMoney","_moneyInfo","_wealth","_success","_reason","_cmpt"];

_vehicle = _this select 0;

_ammo = "";
_reason = "";

_action = (_this select 3) select 0;

_type = typeOf _vehicle;
_disabled = false;
_name = getText(configFile >> "cfgVehicles" >> _type >> "displayName");

_amount = (_this select 3) select 1;

if (_action == "rearm") then {
	_magazineCount = (_this select 3) select 2;
	_weapon = (_this select 3) select 3;

	_weaponType = _weapon select 0;
	_weaponName = _weapon select 1;
	_turret = _weapon select 2;
};

if (typeName _amount == "STRING") then {
	if (_amount == (localize "str_temp_param_disabled")) then {
		if (_action == "rearm") then {_reason = format[localize "STR_CL_SP_UNABLE_REARM",_weaponName]; _disabled = true};
		if (_action == "repair") then {_reason = format[localize "STR_CL_SP_UNABLE_REPAIR",_name]; _disabled = true};
		if (_action == "refuel") then {_reason = format[localize "STR_CL_SP_UNABLE_REFUEL",_name]; _disabled = true};
	};
	if (_amount == (localize "strwffree")) then {_amount = 0};
};

if (_disabled) exitWith {[_reason,1] call dayz_rollingMessages};

_enoughMoney = false;
_moneyInfo = [false, [], [], [], 0];
_wealth = player getVariable [(["cashMoney","globalMoney"] select Z_persistentMoney),0];

if (Z_SingleCurrency) then {
	_enoughMoney = (_wealth >= _amount);
} else {
	Z_Selling = false;
	if (Z_AllowTakingMoneyFromVehicle) then {false call Z_checkCloseVehicle};
	_moneyInfo = _amount call Z_canAfford;
	_enoughMoney = _moneyInfo select 0;
};

_success = if (Z_SingleCurrency) then {true} else {[player,_amount,_moneyInfo,true,0] call Z_payDefault};

if (!_success && _enoughMoney) exitWith {systemChat localize "STR_EPOCH_TRADE_GEAR_AND_BAG_FULL"}; // Not enough room in gear or bag to accept change

if (_enoughMoney) then {
	_success = if (Z_SingleCurrency) then {_amount <= _wealth} else {[player,_amount,_moneyInfo,false,0] call Z_payDefault};
	if (_success) then {
		if (Z_SingleCurrency) then {			
			player setVariable [(["cashMoney","globalMoney"] select Z_persistentMoney),(_wealth - _amount),true];
		};

		[player,(getPosATL player),50,"refuel"] spawn fnc_alertZombies;
		_vehicle engineOn false;
		if (_action == "refuel") then {
			[format[localize "STR_CL_SP_REFUELING",_name],1] call dayz_rollingMessages;

			while {vehicle player == _vehicle} do {
				if ([0,0,0] distance (velocity _vehicle) > 1) exitWith {[format[localize "STR_CL_SP_REFUELING_STOPPED",_name],1] call dayz_rollingMessages};
				_fuel = (fuel _vehicle) + ((_this select 3) select 3);
				if (_fuel > 0.99) exitWith {
					_vehicle setFuel 1;
					[format[localize "STR_CL_SP_REFUEL_OK",_name],1] call dayz_rollingMessages;
				};
				_vehicle setFuel _fuel;
				uiSleep ((_this select 3) select 2);
			};
		};
		if (_action == "repair") then {
			[player,(getPosATL player),50,"repair"] spawn fnc_alertZombies;

			_hitpoints = _vehicle call vehicle_getHitpoints;
			_allRepaired = true;
			{
				if ((vehicle player != _vehicle) || {[0,0,0] distance (velocity _vehicle) > 1}) exitWith {
					_allRepaired = false;
					[format[localize "STR_CL_SP_REPAIRING_STOPPED",_name],1] call dayz_rollingMessages;
				};
				_hits = [_vehicle,_x] call object_getHit;
				_damage = _hits select 0;
				if (_damage > 0) then {
					_cmpt = [];
					{
						if (_forEachIndex > 2) then {_cmpt set [count _cmpt,_x]};
					} forEach toArray (_x);
					_cmpt = toString _cmpt;
					[format[localize "STR_CL_SP_REPAIRING",_cmpt],1] call dayz_rollingMessages;
					_selection = getText(configFile >> "cfgVehicles" >> _type >> "HitPoints" >> _x >> "name");
					_strH = "hit_" + (_selection);
					_vehicle setHit[_selection,0];
					_vehicle setVariable [_strH,0,true];
					uiSleep ((_this select 3) select 2);
				};
			} forEach _hitpoints;
			PVDZ_veh_Save = [_vehicle,"repair",true];
			publicVariableServer "PVDZ_veh_Save";

			if (_allRepaired) then {
				_vehicle setDamage 0;
				_vehicle setVelocity [0,0,1];
				[format[localize "STR_CL_SP_REPAIR_OK",_name],1] call dayz_rollingMessages;
			};
		};

		if (_action == "rearm") then {
			_magazines = getArray (configFile >> "CfgWeapons" >> _weaponType >> "magazines");
			_ammo = _magazines select 0;

			if (_weaponType == "CMFlareLauncher") then {
				_vehicle removeWeaponTurret ["CMFlareLauncher",_turret];
				for "_i" from 1 to _magazineCount do {_vehicle addMagazineTurret [_ammo,_turret];};
				_vehicle addWeaponTurret ["CMFlareLauncher",_turret];
			} else {
				{_vehicle removeMagazinesTurret [_x,_turret];} forEach _magazines;

				for "_i" from 1 to _magazineCount do {_vehicle addMagazineTurret [_ammo,_turret];};
			};

			[format[localize "STR_CL_SP_REARMED",_weaponName,_name],1] call dayz_rollingMessages;
		};
		call player_forceSave;
	} else {
		systemChat localize "STR_EPOCH_TRADE_DEBUG";
	};
} else {
	_itemText = if (Z_SingleCurrency) then {CurrencyName} else {[_amount,true] call z_calcCurrency};
	if (Z_SingleCurrency) then {
		systemChat format[localize "STR_CL_SP_FAIL_COINS",[_amount] call BIS_fnc_numberText,_itemText,_action,_name];
	} else {
		systemChat format[localize "STR_CL_SP_FAIL_BRIEFCASES",_itemText,_action,_name];
	};
};
