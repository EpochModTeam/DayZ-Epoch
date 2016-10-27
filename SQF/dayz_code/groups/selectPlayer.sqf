private ["_inviteButton","_playerList","_target","_uid"];

disableSerialization;
_playerList = _this;
_inviteButton = findDisplay 80000 displayCtrl 3;
_uid = _playerList lbData (lbCurSel _playerList);
_target = _uid call dayz_getPlayer;

if (player == leader group player && {!isNull _target} && {count (units group _target) == 1}) then {
	_inviteButton ctrlShow true;
} else {
	_inviteButton ctrlShow false;
};