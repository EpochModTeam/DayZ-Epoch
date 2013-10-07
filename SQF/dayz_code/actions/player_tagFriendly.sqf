private["_target", "_caller", "_action", "_callerID", "_targetID", "_friendlies", "_rfriendlies"];
_target = _this select 0;
_caller = _this select 1;
_action = _this select 2;

_caller removeAction _action;

_callerID = _caller getVariable "CharacterID";
_targetID = _target getVariable "CharacterID";

_friendlies = _caller getVariable ["friendlies", []];
_friendlies set [count _friendlies, _targetID];
_caller setVariable ["friendlies", _friendlies, true];

_rfriendlies = _target getVariable ["friendlies", []];

if (!(_callerID in _rfriendlies)) then {
	// caller
	titleText [format["You have tagged a player as friendly. Waiting for other player to accept.",(name _target)], "PLAIN DOWN"];
	// target
	PVDZE_plr_FriendRQ = format["%1 wants to tag you as friendly. To accept, tag %1 as friendly.", (name _caller)];
	(owner _target) publicVariableClient "PVDZE_plr_FriendRQ";
};