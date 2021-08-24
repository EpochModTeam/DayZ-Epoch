// Developed by [GZA] David for German Zombie Apocalypse Servers (https://zombieapo.eu/)
// Rewritten by salival (https://github.com/oiad)

private ["_backPack","_charID","_dir","_heliPad","_inventory","_isNearPlot","_keyID","_keyName","_location","_plotCheck","_sign","_vehicle"];

closeDialog 0;
_vehicle = (call compile format["%1",lbData[2802,(lbCurSel 2802)]]);

if (vg_removeKey && {_vehicle select 3 != 0} && {({getNumber (configFile >> "CfgWeapons" >> _x >> "type") == 131072} count (weapons player)) == 12}) exitWith {localize "str_epoch_player_107" call dayz_rollingMessages;};

_dir = round(random 360);
_backPack = [];

_plotCheck = [player,false] call FNC_find_plots;
_isNearPlot = (_plotCheck select 1) > 0;

_heliPad = nearestObjects [if (_isNearPlot) then {_plotCheck select 2} else {player},vg_heliPads,if (_isNearPlot) then {DZE_maintainRange} else {Z_VehicleDistance}];
if ((count _heliPad == 0) && ((_vehicle select 1) isKindOf "Air")) exitWith {localize "STR_CL_VG_NEED_HELIPAD" call dayz_rollingMessages;};
if (count _heliPad > 0) then {
	_location = [(_heliPad select 0)] call FNC_GetPos;
} else {
	_location = [(position player),0,400,10,0,2000,0] call BIS_fnc_findSafePos;
	_location set [2,0];
};

_sign = "Sign_arrow_down_large_EP1" createVehicleLocal [0,0,0];
_sign setPos _location;

if (surfaceIsWater _location && {count (_location nearEntities ["Ship",8]) > 0}) then {
	deleteVehicle _sign;
	localize "STR_EPOCH_TRADE_OBSTRUCTED" call dayz_rollingMessages;
} else {
	[_vehicle select 1,_sign] call fn_waitForObject;
};

PVDZE_spawnVehicle = [[_dir,_location],player,_vehicle select 0];
publicVariableServer "PVDZE_spawnVehicle";

waitUntil {!isNil "PVDZE_spawnVehicleResult"};

if (PVDZE_spawnVehicleResult != "0") then {
	_keyID = "";
	_charID = parseNumber PVDZE_spawnVehicleResult;
	if ((_charID > 0) && (_charID <= 2500)) then {_keyID = format["ItemKeyGreen%1",_charID];};
	if ((_charID > 2500) && (_charID <= 5000)) then {_keyID = format["ItemKeyRed%1",_charID-2500];};
	if ((_charID > 5000) && (_charID <= 7500)) then {_keyID = format["ItemKeyBlue%1",_charID-5000];};
	if ((_charID > 7500) && (_charID <= 10000)) then {_keyID = format["ItemKeyYellow%1",_charID-7500];};
	if ((_charID > 10000) && (_charID <= 12500)) then {_keyID = format["ItemKeyBlack%1",_charID-10000];};
	_keyName = getText(configFile >> "CfgWeapons" >> _keyID >> "displayName");

	if (vg_removeKey) then {
		_inventory = weapons player;
		dayz_myBackpack = unitBackpack player;
		if (!isNull dayz_myBackpack) then {_backPack = (getWeaponCargo dayz_myBackpack) select 0;};
		if (_keyID in (_inventory+_backPack)) then {
			if (_keyID in _inventory) then {format[localize "STR_CL_VG_IN_INVENTORY",_keyName] call dayz_rollingMessages;};
			if (_keyID in _backPack) then {format[localize "STR_CL_VG_IN_BACKPACK",_keyName] call dayz_rollingMessages;};
		} else {
			player addWeapon _keyID;
			format[localize "STR_CL_VG_ADDED_INVENTORY",_keyName] call dayz_rollingMessages;
		};
	};
};

PVDZE_spawnVehicle = nil;
PVDZE_spawnVehicleResult = nil;
vg_vehicleList = nil;

localize "STR_CL_VG_VEHICLE_SPAWNED" call dayz_rollingMessages;
