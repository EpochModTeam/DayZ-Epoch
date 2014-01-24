private["_target", "_caller", "_callerID", "_targetID", "_friendlies", "_rfriendlies"];
_target = _this select 0;
_caller = _this select 1;

call fnc_usec_medic_removeActions;
r_action = false;

_callerID = _caller getVariable "CharacterID";
_targetID = _target getVariable "CharacterID";

_friendlies = _caller getVariable ["friendlies", []];
_friendlies set [count _friendlies, _targetID];
_caller setVariable ["friendlies", _friendlies, true];

_rfriendlies = _target getVariable ["friendlies", []];

if !(_callerID in _rfriendlies) then {
	titleText [(localize "STR_EPOCH_ACTIONS_8"), "PLAIN DOWN"]; //To Caller
	/* PVS/PVC - Skaronator */
	PVDZE_send = [_target,"tagFriendly",[_target]]; //To Target
	publicVariableServer "PVDZE_send";
};
