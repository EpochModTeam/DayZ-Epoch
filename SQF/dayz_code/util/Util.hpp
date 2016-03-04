#ifndef _INCLUDE_GUARD_UTIL
#define _INCLUDE_GUARD_UTIL

//Returns true if the current script is running in the unscheduled environment and otherwise false.
//If true a script error is also produced however this can be ignored.
//#define Util_IsUncheduled() ([diag_frameNo, sleep 0.005, diag_frameNo] call { _this select 0 == _this select 2 })

/* Send public variables atomically without fear of race conditions. The previous value of the
variable is restored automatically after transmission. For example:
	my_variable = 1;
	Util_PublicVariable(my_variable, 1337);
	diag_log str my_variable; //1
*/
#define Util_PublicVariable(variable, value) ([variable, value] call dz_fn_util_pv)
#define Util_PublicVariable_Fast(variable, value) (missionNamespace setVariable [variable, [missionNamespace getVariable (variable), missionNamespace setVariable [variable, value], publicVariable (variable)] select 0])
#define Util_PublicVariableServer(variable, value) ([variable, value] call dz_fn_util_pvs)
#define Util_PublicVariableServer_Fast(variable, value) (missionNamespace setVariable [variable, [missionNamespace getVariable (variable), missionNamespace setVariable [variable, value], publicVariableServer (variable)] select 0])
#define Util_PublicVariableClient(variable, value, client) ([variable, value, client] call dz_fn_util_pvc)
#define Util_PublicVariableClient_Fast(variable, value, client) (missionNamespace setVariable [variable, [missionNamespace getVariable (variable), missionNamespace setVariable [variable, value], (client) publicVariableClient (variable)] select 0])

//Waits until the specified predicate is true, or at most the specified time in seconds.
//Returns true if the predicate is true, false if timed out.
//Note: the predicate is evaluated once each frame. Expensive operations may cause performance issues.
#define Util_WaitUntil(predicate, timeout) ([_this, predicate, timeout, diag_tickTime] call dz_fn_util_waitUntil)

#endif