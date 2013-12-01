private["_target", "_caller", "_action", "_callerID", "_targetID", "_friendlies", "_rfriendlies"];
_target = _this select 0;
_caller = _this select 1;
_action = _this select 2;

call fnc_usec_medic_removeActions;
r_action = false;

_callerID = _caller getVariable "CharacterID";
_targetID = _target getVariable "CharacterID";

_friendlies = _caller getVariable ["friendlies", []];
_friendlies set [count _friendlies, _targetID];
_caller setVariable ["friendlies", _friendlies, true];

_rfriendlies = _target getVariable ["friendlies", []];

if (!(_callerID in _rfriendlies)) then {
	// caller
	titleText ["You have tagged a player as friendly. Waiting for other player to accept.", "PLAIN DOWN"]; // TODO: localize
	// target
	PVDZE_plr_FriendRQ = _target;
	publicVariable "PVDZE_plr_FriendRQ";
};