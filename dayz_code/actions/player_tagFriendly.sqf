private["_target", "_caller", "_action", "_callerID", "_targetID", "_friendlies", "_rfriendlies"];
_target = _this select 0;
_caller = _this select 1;
_action = _this select 2;

_caller removeAction _action;

_callerID = _caller getVariable ["characterID", 0];
_targetID = _target getVariable ["characterID", 0];

if (_callerID != 0 && _targetID != 0) then {

	_friendlies = _caller getVariable ["friendlies", []];
	_friendlies set [count _friendlies, _targetID];
	_caller setVariable ["friendlies", _friendlies, true];

	_rfriendlies = _target getVariable ["friendlies", []];

	if ((isNil "_rfriendlies") or !(_callerID in _rfriendlies)) then {
		// caller
		titleText [format["You have tagged %1 as friendly. Waiting for %1 to accept that.",(name _target)]];
		// target
		[_caller,_target,"loc",rTITLETEXT,format["%1 wants to tag you as friendly. To accept, tag %1 as friendly.", (name _caller)],"PLAIN DOWN"] call RE;
	};
};