#include "Util.hpp"

dz_fn_util_pv = { Util_PublicVariable_Fast(_this select 0, _this select 1); };
dz_fn_util_pvs = { Util_PublicVariableServer_Fast(_this select 0, _this select 1); };
dz_fn_util_pvc = { Util_PublicVariableClient_Fast(_this select 0, _this select 1, _this select 2); };

dz_fn_util_waitUntil =
{
	waitUntil { ((_this select 2) + (_this select 3)) > diag_tickTime || { (_this select 0) call (_this select 1) } };
	(_this select 0) call (_this select 1);
};