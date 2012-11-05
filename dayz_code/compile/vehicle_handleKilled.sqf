private["_unit","_selection","_killer"];

_unit = _this select 0;
_killer = _this select 1;

// Prevent spazzing out vehicles from spamming server/MySQL
_waskilled = _unit getVariable ['waskilled', 0];
if (_waskilled) exitWith{};

_unit setVariable ['waskilled', 1, true];

_hitPoints = _unit call vehicle_getHitpoints;
{
	_selection = getText (configFile >> "CfgVehicles" >> (typeof _unit) >> "HitPoints" >> _x >> "name");
	_unit setVariable [_selection, 1, true];
} forEach _hitPoints;

dayzUpdateVehicle = [_unit, "damage", true];

if (isServer) then {
	if (allowConnection) then {
		dayzUpdateVehicle call server_updateObject;
	};
} else {
	publicVariable "dayzUpdateVehicle";
};

_unit removeAllEventHandlers "HandleDamage";
_unit removeAllEventHandlers "Killed";
_unit removeAllEventHandlers "GetIn";
_unit removeAllEventHandlers "GetOut";
