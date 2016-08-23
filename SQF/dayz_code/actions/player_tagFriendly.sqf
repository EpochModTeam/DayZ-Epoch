private["_target", "_caller", "_callerID", "_targetID", "_friendlies", "_rfriendlies"];
_target = _this select 0;
_caller = _this select 1;

call fnc_usec_medic_removeActions;
r_action = false;

if (DZE_permanentPlot) then {
	_callerID = getPlayerUID _caller;
	_targetID = getPlayerUID _target;
} else {
	_callerID = _caller getVariable ["CharacterID", "0"];
	_targetID = _target getVariable ["CharacterID", "0"];
};
if ((_callerID != "0") && (_targetID != "0")) then {
	_friendlies = _caller getVariable ["friendlies", []];
	_friendlies set [count _friendlies, _targetID];
	_caller setVariable ["friendlies", _friendlies, true];

	_rfriendlies = _target getVariable ["friendlies", []];

	if !(_callerID in _rfriendlies) then {
		localize "STR_EPOCH_ACTIONS_8" call dayz_rollingMessages; //To Caller
		/* PVS/PVC - Skaronator */
		PVDZ_send = [_target,"tagFriendly",[_target]]; //To Target
		publicVariableServer "PVDZ_send";
	};
};
