private["_unit"];
_unit = _this select 0;

diag_log ("CLEANUP: DELETE UNCONTROLLED ZOMBIE: " + (typeOf _unit) + " OF: " + str(_unit) );
deleteVehicle _unit;