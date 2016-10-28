private "_uid";
_uid = getPlayerUID player;

//Remove all invites to this player
{
	if (_uid == _x select 1) then {
		dayz_activeInvites set [_forEachIndex,"delete"];
	};
} forEach dayz_activeInvites;
dayz_activeInvites = dayz_activeInvites - ["delete"];

_this ctrlShow false;

//Sync change to all remote machines (less data than sending whole array)
PVDZ_groupInvite = [false,_uid];
publicVariableServer "PVDZ_groupInvite";