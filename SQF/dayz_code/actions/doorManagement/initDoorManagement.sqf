disableSerialization;
if(count(_this) > 0) then
{
	TheDoor = _this select 3;
} else {
	TheDoor = dayz_selectedDoor;
};

// close DoorAccess if open
_display = findDisplay 61144;
_display closeDisplay 3000;

// Check player access
_isowner = [player, TheDoor] call FNC_check_access;
if( 		((_isowner select 0) && DZE_doorManagementAllowManage_owner) // door owner
		||	((_isowner select 1) && DZE_doorManagementAllowManage_ownerFriendlies) // door owner's friendly tagged
		||	((_isowner select 2) && DZE_doorManagementAllowManage_plotOwner) // plot owner
		||	((_isowner select 3) && DZE_doorManagementAllowManage_plotFriends) // plot friends
		||	((_isowner select 4) && DZE_doorManagementAllowManage_plotAdmins) // plot management admins
		||	((_isowner select 5) && DZE_doorManagementAllowManage_doorFriends) // door friends
		||	((_isowner select 6) && DZE_doorManagementAllowManage_doorAdmins) // door management admins
) then {
	createDialog "DoorManagement";
	call DoorNearbyHumans;
	call DoorGetFriends;
} else {
	localize "STR_EPOCH_DOORMANAGEMENT_NORIGHTS" call dayz_rollingMessages;
};

