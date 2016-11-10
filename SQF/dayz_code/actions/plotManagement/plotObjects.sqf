private ["_range","_buildables","_count","_colour","_ctrl","_target"];
disableSerialization;

_range = DZE_PlotPole select 0;
_target = nearestObject [[player] call FNC_getPos,"Plastic_Pole_EP1_DZ"];
// Also count safes, lockboxes, vanilla buildables, tents and stashes against DZE_BuildingLimit
_buildables = DZE_maintainClasses + DZE_LockableStorage + ["DZ_buildables","DZ_storage_base"];
_count = count (nearestObjects [_target,_buildables,_range]);

_colour = "#ffffff";

if (_count / DZE_BuildingLimit * 100 < 40) then {
	_colour = "#00ff00";
};
if (_count / DZE_BuildingLimit * 100 > 75) then {
	_colour = "#ff0000";
};

_ctrl = findDisplay 711194 displayCtrl 7014;
_ctrl ctrlSetStructuredText parseText format["<t color='%3'>%1 / %2</t>" , _count, DZE_BuildingLimit,_colour];