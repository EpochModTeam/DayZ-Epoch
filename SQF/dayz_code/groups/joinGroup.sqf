private ["_inviter","_inviterUID","_oldGroup","_uid"];

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
	[player] join (group _inviter);
	if (count (units _oldGroup) == 0) then {deleteGroup _oldGroup;};
	[] spawn {
		uiSleep 1; //Required for group change to update on server
		// Update saved group in DB
		PVDZ_Server_UpdateGroup = [1,player];
		publicVariableServer "PVDZ_Server_UpdateGroup";
	};
} else {
	_this ctrlShow false;
	systemChat localize "STR_EPOCH_INVITE_EXPIRED";
};