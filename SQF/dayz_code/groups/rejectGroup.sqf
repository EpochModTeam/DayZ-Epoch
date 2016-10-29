private ["_display","_inviteText","_joinButton","_uid"];

_display = findDisplay 80000;
_joinButton = _display displayCtrl 7;
_inviteText = _display displayCtrl 9;
{_x ctrlShow false} count [_inviteText,_joinButton];

_uid = getPlayerUID player;

//Remove all invites to this player
{
	if (_uid == _x select 1) then {
		dayz_activeInvites set [_forEachIndex,"delete"];
	};
} forEach dayz_activeInvites;
dayz_activeInvites = dayz_activeInvites - ["delete"];

//Sync change to all remote machines (less data than sending whole array)
PVDZ_groupInvite = [false,_uid];
publicVariableServer "PVDZ_groupInvite";