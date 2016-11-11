// Load_act.sqf
// JULY 2010 - norrin

private ["_args","_dragger","_vcl","_wounded"];

_args = _this select 3;
_dragger = _args select 0;
_vcl = _args select 1;
_wounded = _args select 2;
r_drag_sqf = false;
r_action = false;
r_action_load = false;
call fnc_usec_medic_removeActions;

_wounded removeAction NORRN_loadWoundedAction;

if ((_vcl emptyPositions "cargo") > 0) then
{
	detach _wounded;
	_dragger switchMove "";
	_wounded setVariable ["NORRN_LoadVcl", _vcl, true];
	uiSleep 1;
	//["PVDZ_drg_RLact",_wounded] call broadcastRpcCallAll;
	[_wounded] execVM "\z\addons\dayz_code\medical\load\load_wounded.sqf";
	PVDZ_drg_RLact = _wounded;
	publicVariable "PVDZ_drg_RLact";
	player removeAction NORRN_dropAction;
} else {
	localize "str_dragnospace" call dayz_rollingMessages;//hint "No space left in vehicle";
};
NORRN_load_wounded_action = true;
