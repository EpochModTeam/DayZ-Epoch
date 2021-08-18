// Developed by [GZA] David for German Zombie Apocalypse Servers (https://zombieapo.eu/)
// Rewritten by salival (https://github.com/oiad)

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_class","_control","_displayName","_heliPad","_isNearPlot","_itemText","_localVehicles","_plotCheck","_storedVehicles","_vgDisplCtl"];
disableSerialization;

vg_hasRun = false;
createDialog "virtualGarage";

{ctrlShow [_x,false]} count [2803,2830,2850,2851,2852,2853];

_plotCheck = [player,false] call FNC_find_plots;
_isNearPlot = (_plotCheck select 1) > 0;

PVDZE_queryVehicle = if (vg_tiedToPole) then {
	[player,if (_isNearPlot) then {(_plotCheck select 2) getVariable ["ownerPUID","0"]} else {dayz_playerUID}]
} else {
	[player]
};

publicVariableServer "PVDZE_queryVehicle";
waitUntil {!isNil "PVDZE_queryVehicleResult"};

_storedVehicles = PVDZE_queryVehicleResult;
PVDZE_queryVehicle = nil;
PVDZE_queryVehicleResult = nil;

_localVehicles = ([player] call FNC_getPos) nearEntities [["Air","LandVehicle","Ship"],Z_VehicleDistance];
_heliPad = nearestObjects [if (_isNearPlot) then {_plotCheck select 2} else {player},vg_heliPads,if (_isNearPlot) then {DZE_maintainRange} else {Z_VehicleDistance}];

if (count _heliPad > 0 && {_isNearPlot}) then {ctrlShow[2853,true];};

_control = ((findDisplay 2800) displayCtrl 2802);
lbClear _control;

if (count _storedVehicles == 0 && {isNull DZE_myVehicle || {!(alive DZE_myVehicle)} || {!(local DZE_myVehicle)}}) exitWith {ctrlSetText[2811,localize "STR_CL_VG_NO_VEHICLES"];};

vg_vehicleList = [];

{
	_displayName = getText(configFile >> "CfgVehicles" >> (_x select 1) >> "displayName");
	_control lbAdd _displayName;
	_control lbSetData [(lbSize _control)-1,str(_x)];
	vg_vehicleList set [count vg_vehicleList,_x];
} count _storedVehicles;

{
	if (!isNull DZE_myVehicle && {local DZE_myVehicle} && {alive DZE_myVehicle} && {DZE_myVehicle == _x}) then {
		_class = typeOf _x;
		_displayName = getText(configFile >> "CfgVehicles" >> _class >> "displayName");
		_control lbAdd _displayName;
		_control lbSetData [(lbSize _control)-1,_class];
		_control lbSetColor [(lbSize _control)-1,[0, 1, 0, 1]];
		vg_vehicleList set [count vg_vehicleList,_x];
	};
} count _localVehicles;

ctrlShow[2810,false];
ctrlShow[2811,false];

ctrlSetText [2804, format ["%1 (%2 %3)",localize "STR_CL_VG_YOUR_VEHICLES",count (_storedVehicles),localize "STR_CL_VG_VEHICLES"]];
