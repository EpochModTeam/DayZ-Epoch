private ["_display","_kickButton","_myGroup","_promoteButton","_target","_uid"];

disableSerialization;
_display = findDisplay 80000;
_myGroup = _display displayCtrl 2;
_kickButton = _display displayCtrl 4;
_promoteButton = _display displayCtrl 10;
_uid = _myGroup lbData (lbCurSel _myGroup);
_target = _uid call dayz_getPlayer;

if (player == leader group player && {!isNull _target} && {_target != player}) then {
	{_x ctrlShow true} count [_kickButton,_promoteButton];
} else {
	{_x ctrlShow false} count [_kickButton,_promoteButton];
};