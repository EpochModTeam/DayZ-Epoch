/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/

/***********************************************************
REPAIR A PART OF A UNIT.
Called by "PVDZ_veh_SF" PV
or by action/repair.sqf

- Function fnc_veh_handleRepair
- [unit, selectionName, damage, broadcast] call fnc_veh_handleRepair;
- return : 0 :)
broadcast: boolean. if true, then the request will be sent to all players if the vehicle is not local.
************************************************************/
private ["_hitpointnames","_log"];

_unit = _this select 0;
_selection = _this select 1;

_hitpointnames = [];
{
	_hitpointnames set [count _hitpointnames, getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "HitPoints" >> _x >> "name")];
} forEach (_unit call vehicle_getHitpoints);

if ((isNil "_selection") OR {(!(_selection IN _hitpointnames))}) exitWith {_this select 2};

_SVname = "hit_" + _selection;

_log = format["%1 vehicle:%2#%3 part:""%4"" current_part_damage:%5", __FILE__,
typeOf _unit, _unit getVariable ["ObjectID",""],
_selection, _unit getVariable [_SVname, 0] ];

if (local _unit) then {
	// only local unit can set the damage of a vehicle part
	_unit setVariable [_SVname, 0, true];
	_unit setHit [_selection, 0];
	_log = format["%1. setH!t[%2,0]", _log, _selection];
	if (!isServer) then {
		PVDZ_veh_Save = [_unit, "repair"];
		publicVariableServer "PVDZ_veh_Save";
		_log = _log + ". Requesting server hive write";
	}
	else {
		[_unit, "repair"] call server_updateObject;
		_log = _log + ". Writing to hive";
	};
}
else {
	if ( (count _this > 3) AND {(_this select 3)}) then {
		// vehicle is not local to this client, ask the client which vehicle is local to set damage
		_this resize 3; // delete "broadcast" boolean
		_log = _log + ". Broadcasting to all";
		PVDZ_veh_SF = _this;
		publicVariable "PVDZ_veh_SF";
	};
};

//diag_log _log;

0
