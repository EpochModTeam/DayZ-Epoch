private ["_disbandButton","_display","_group","_kickButton","_myGroup","_target","_uid"];

disableSerialization;
_display = findDisplay 80000;
_myGroup = _display displayCtrl 2;
_kickButton = _display displayCtrl 4;
_disbandButton = _display displayCtrl 5;
_uid = _myGroup lbData (lbCurSel _myGroup);

_group = group player;
_target = _uid call dayz_getPlayer;

if (player == leader _group && {!isNull _target} && {_target != player}) then {
	_group selectLeader _target;
	{_x ctrlShow false} count [_disbandButton,_kickButton];
};