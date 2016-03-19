private["_unit","_hitPoints","_selection","_killer"];

_unit = _this select 0;
_killer = _this select 1;

_hitPoints = _unit call vehicle_getHitpoints;
{
	_selection = getText (configFile >> "CfgVehicles" >> (typeof _unit) >> "HitPoints" >> _x >> "name");
	_unit setVariable [_selection, 1, true];
} count _hitPoints;

// ask server to set global damage to 1, save to the hive
if (isServer) then {
	[_unit, "killed"] call server_updateObject;
} else {
	if (DZE_Debug_Damage && ((!isPlayer _unit) || ((isPlayer _unit) && (vehicle _unit != _unit) && (_unit != _killer)))) then {
		PVDZ_obj_Save = [_unit, "killed",_killer];
	} else {
		PVDZ_obj_Save = [_unit, "killed"];
	};
	publicVariableServer "PVDZ_obj_Save";
};

// everyone removes their EH for this vehicle
_unit removeAllEventHandlers "HandleDamage";
_unit removeAllEventHandlers "Killed";
_unit removeAllEventHandlers "GetIn";
_unit removeAllEventHandlers "GetOut";