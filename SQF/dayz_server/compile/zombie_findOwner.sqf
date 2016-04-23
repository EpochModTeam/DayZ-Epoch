private["_unit"];
_unit = _this select 0;
#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

#ifdef SERVER_DEBUG
diag_log ("CLEANUP: DELETE UNCONTROLLED ZOMBIE: " + (typeOf _unit) + " OF: " + str(_unit) );
#endif
deleteVehicle _unit;
