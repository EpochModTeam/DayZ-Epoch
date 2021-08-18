/*
	Vehicle Service Point by Axe Cop
	Rewritten for single currency, gems, briefcase support and 1.0.7 epoch compatibility by salival - https://github.com/oiad/
	
	Requires DayZ Epoch 1.0.7

	This version adds support for both single currency and gems (from the epoch 1.0.7 update) as well as the original epoch briefcase currency system. 
	Instead of pricing things like the original way, prices are now done on a "worth" similar to how coins are done. The price value of items are below.
	
	1 silver = 1 worth
	1 10oz silver = 10 worth
	1 gold = 100 worth
	1 10oz gold = 1,000 worth
	1 briefcase = 10,000 worth

	Please see dayz_code\configVariables.sqf for the value of gems (DZE_GemWorthArray) and their relevant worth if they are enabled.

	Example config settings for DZE_SP_Refuel_Costs, DZE_SP_Repair_Costs and DZE_SP_Rearm_Costs:

	All 3 sections can either be made free, disabled or a specifc price with the following examples:

	["Air",localize "strwffree"] will make the vehicle config class of "Air" free for the specific action.
	["Air",localize "str_temp_param_disabled"] will make the vehicle config class of "Air" disabled for the specific action.
	["Air",2000] will make the vehicle config class of "Air" have a worth of 2000 for the specific action.
	["Armored_SUV_PMC",2000] will make the specific vehicle have a worth of 2000 for the specific action.
	["Armored_SUV_PMC",localize "strwffree"] will make the specific vehicle be free for the specific action.
	["Armored_SUV_PMC",localize "str_temp_param_disabled"] will make the specific vehicle be disabled for the specific action.

	Valid vehicle config classes as an example: "Air", "AllVehicles", "All", "APC", "Bicycle", "Car", "Helicopter", "Land", "Motorcycle", "Plane", "Ship", "Tank"
*/

private ["_folder","_actionTitleFormat","_actionCostsFormat","_message","_messageShown","_lastVehicle","_lastRole","_fnc_removeActions","_fnc_getCostsWep","_fnc_getCostsWep","_fnc_actionTitle","_fnc_isArmed","_fnc_getWeapons","_cycleTime","_servicePoints","_vehicle","_role","_costs","_actionTitle","_weapons","_weaponName"];

// general settings
_folder = "\z\addons\dayz_code\actions\servicePoints\"; // folder where the service point scripts are saved, relative to the mission file
_actionTitleFormat = "%1 (%2)"; // text of the vehicle menu, %1 = action name (Refuel, Repair, Rearm), %2 = costs (see format below)
_actionCostsFormat = "%2 %1"; // %1 = item name, %2 = item count
_message = localize "STR_CL_SP_MESSAGE"; // This is translated from your stringtable.xml in your mission folder root. Set to "" to disable
_cycleTime = 5; // Time in sections for how often the action menu will be refreshed and how often it will search for a nearby fuel station (setting this too low can make a lot of lag)

_lastVehicle = objNull;
_lastRole = [];
_messageShown = false;

SP_refuel_action = -1;
SP_repair_action = -1;
SP_rearm_actions = [];

_fnc_removeActions = {
	if (isNull _lastVehicle) exitWith {};
	_lastVehicle removeAction SP_refuel_action;
	SP_refuel_action = -1;
	_lastVehicle removeAction SP_repair_action;
	SP_repair_action = -1;
	{
		_lastVehicle removeAction _x;
	} forEach SP_rearm_actions;
	SP_rearm_actions = [];
	_lastVehicle = objNull;
	_lastRole = [];
};

_fnc_getCosts = {
	private ["_getVehicle","_getCosts","_cost","_getTypeName"];
	_getVehicle = _this select 0;
	_getCosts = _this select 1;
	_cost = [];
	{
		_getTypeName = _x select 0;
		if (_getVehicle isKindOf _getTypeName) exitWith {
			_cost = _x select 1;
		};
	} forEach _getCosts;
	_cost
};

_fnc_getCostsWep = {
	private ["_weapon","_getCostsWep","_returnCostWep","_typeName"];
	_weapon = _this select 0;
	_getCostsWep = _this select 1;
	_returnCostWep = DZE_SP_Rearm_Defaultcost;
	{
		_typeName = _x select 0;
		if (_weapon == _typeName) exitWith {
			_returnCostWep = _x select 1;
		};
	} forEach _getCostsWep;
	_returnCostWep
};

_fnc_actionTitle = {
	private ["_actionName","_actionCosts","_costsText","_return"];
	_actionName = _this select 0;
	_actionCosts = _this select 1;
	if (typeName _actionCosts == "STRING") then {
		_costsText = _actionCosts; 
	} else {
		_costsText = if (Z_SingleCurrency) then {format ["%1 %2",[_actionCosts] call BIS_fnc_numberText,CurrencyName]} else {format ["%1",[_actionCosts,true] call z_calcCurrency]};
	};
	_return = format [_actionTitleFormat,_actionName,_costsText];
	_return
};

_fnc_getWeapons = {
	private ["_gWeaponsVehicle","_gWeaponsRole","_gWeapons","_gWeaponName","_gTurret","_gWeaponsTurret"];
	_gWeaponsVehicle = _this select 0;
	_gWeaponsRole = _this select 1;
	_gWeapons = [];
	if (count _gWeaponsRole > 1) then {
		_gTurret = _gWeaponsRole select 1;
		_gWeaponsTurret = _gWeaponsVehicle weaponsTurret _gTurret;
		{
			_gWeaponName = getText (configFile >> "CfgWeapons" >> _x >> "displayName");
			if !(_gWeaponName in DZE_SP_Rearm_Ignore) then {
				_gWeapons set [count _gWeapons, [_x,_gWeaponName,_gTurret]];
			}; 
		} forEach _gWeaponsTurret;
	};
	_gWeapons
};

while {1==1} do {
	_vehicle = vehicle player;
	if (_vehicle != player) then {
		_servicePoints = (nearestObjects [getPosATL _vehicle,DZE_SP_Classes,DZE_SP_MaxDistance]) - [_vehicle];
		if (count _servicePoints > 0) then {
			if (assignedDriver _vehicle == player) then {
				_role = ["Driver", [-1]];
			} else {
				_role = assignedVehicleRole player;
			};
			if (((str _role) != (str _lastRole)) || {_vehicle != _lastVehicle}) then {
				call _fnc_removeActions;
			};
			_lastVehicle = _vehicle;
			_lastRole = _role;
			if (DZE_SP_Refuel_Enable) then {
				if (SP_refuel_action < 0) then {
					_costs = [_vehicle,DZE_SP_Refuel_Costs] call _fnc_getCosts;
					_actionTitle = [localize "config_depot.sqf8",_costs] call _fnc_actionTitle;
					SP_refuel_action = _vehicle addAction [_actionTitle,_folder + "servicePointActions.sqf",["refuel",_costs,DZE_SP_Refuel_UpdateInterval,DZE_SP_Refuel_Amount],-1,false,true];
				};
			};
			if (DZE_SP_Repair_Enable) then {
				if (SP_repair_action < 0) then {
					_costs = [_vehicle,DZE_SP_Repair_Costs] call _fnc_getCosts;
					_actionTitle = [localize "config_depot.sqf1",_costs] call _fnc_actionTitle;
					SP_repair_action = _vehicle addAction [_actionTitle,_folder + "servicePointActions.sqf",["repair",_costs,DZE_SP_Repair_RepairTime],-1,false,true];
				};
			};
			if (DZE_SP_Rearm_Enable) then {
				if ((count _role > 1) && {count SP_rearm_actions == 0}) then {
					_weapons = [_vehicle,_role] call _fnc_getWeapons;
					{
						_weaponName = _x select 1;
						_costs = [_weaponName,DZE_SP_Rearm_Costs] call _fnc_getCostsWep;
						_actionTitle = [format["%1 %2",localize "config_depot.sqf5",_weaponName],_costs] call _fnc_actionTitle;
						SP_rearm_action = _vehicle addAction [_actionTitle,_folder + "servicePointActions.sqf",["rearm",_costs,DZE_SP_Rearm_MagazineCount,_x],-1,false,true];
						SP_rearm_actions set [count SP_rearm_actions, SP_rearm_action];
					} forEach _weapons;
				};
			};
			if (!_messageShown && {_message != ""}) then {
				_messageShown = true;
				_vehicle vehicleChat _message;
			};
		} else {
			call _fnc_removeActions;
			_messageShown = false;
		};
	} else {
		call _fnc_removeActions;
		_messageShown = false;
	};
	uiSleep _cycleTime;
};
