private ["_hasInvite","_invite","_playerList","_recipient","_uid"];

disableSerialization;
_playerList = findDisplay 80000 displayCtrl 1;
_uid = _playerList lbData (lbCurSel _playerList);
_recipient = _uid call dayz_getPlayer;

if (isNull _recipient or player != leader group player or count (units group _recipient) > 1) exitWith {};

_hasInvite = false;
{
	if (_x select 1 == _uid) then {
		_hasInvite = true;
	};
} forEach dayz_activeInvites;

if (_hasInvite) exitWith {
	systemChat localize "STR_EPOCH_INVITE_PENDING";
};

_invite = [getPlayerUID player,_uid];

//Update locally with change
dayz_activeInvites set [count dayz_activeInvites,_invite];

//Sync change to all remote machines (less data than sending whole array)
PVDZ_groupInvite = [true,_invite];
publicVariableServer "PVDZ_groupInvite";

systemChat format[localize "STR_EPOCH_INVITE_TO",name _recipient];