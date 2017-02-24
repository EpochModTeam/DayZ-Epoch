private ["_display","_inviter","_inviteText","_inviterUID","_oldGroup","_rejectButton","_uid"];

_display = findDisplay 80000;
_rejectButton = _display displayCtrl 8;
_inviteText = _display displayCtrl 9;
{_x ctrlShow false} count [_inviteText,_rejectButton];

_inviterUID = "0";
_uid = getPlayerUID player;

//Remove all invites to this player since they joined a group
{
	if (_uid == _x select 1) then {
		_inviterUID = _x select 0; //Take most recent invite
		dayz_activeInvites set [_forEachIndex,"delete"];
	};
} forEach dayz_activeInvites;
dayz_activeInvites = dayz_activeInvites - ["delete"];

//Sync change to all remote machines (less data than sending whole array)
PVDZ_groupInvite = [false,_uid];
publicVariableServer "PVDZ_groupInvite";

_inviter = _inviterUID call dayz_getPlayer;

if (!isNull _inviter) then {
	_oldGroup = group player;
	[player] joinSilent (group _inviter);
	if (count (units _oldGroup) == 0) then {deleteGroup _oldGroup;};

	// Update saved group in DB
	PVDZ_Server_UpdateGroup = [1,player];
	publicVariableServer "PVDZ_Server_UpdateGroup";
} else {
	systemChat localize "STR_EPOCH_INVITE_EXPIRED";
};