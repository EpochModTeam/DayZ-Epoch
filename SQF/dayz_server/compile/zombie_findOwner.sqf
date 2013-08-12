private["_unit"];
_unit = _this select 0;

#ifdef DZE_SERVER_DEBUG
diag_log ("CLEANUP: DELETE UNCONTROLLED ZOMBIE: " + (typeOf _unit) + " OF: " + str(_unit) );
#endif

deleteVehicle _unit;