private ["_display","_isOwner"];
disableSerialization;

if (count(_this) > 0) then
{
	TheDoor = _this select 3;
} else {
	TheDoor = dayz_selectedDoor;
};

// close DoorAccess if open
_display = findDisplay 61144;
_display closeDisplay 3000;

// Check player access
_isOwner = [player, TheDoor] call FNC_check_access;
if( 		((_isOwner select 0) && DZE_doorManagementAllowManage_owner) // door owner
		||	((_isOwner select 1) && DZE_doorManagementAllowManage_ownerFriendlies) // door owner's friendly tagged
		||	((_isOwner select 2) && DZE_doorManagementAllowManage_plotOwner) // plot owner
		||	((_isOwner select 3) && DZE_doorManagementAllowManage_plotFriends) // plot friends
		||	((_isOwner select 4) && DZE_doorManagementAllowManage_plotAdmins) // plot management admins
		||	((_isOwner select 5) && DZE_doorManagementAllowManage_doorFriends) // door friends
		||	((_isOwner select 6) && DZE_doorManagementAllowManage_doorAdmins) // door management admins
) then {
	createDialog "DoorManagement";
	call DoorNearbyHumans;
	call DoorGetFriends;
} else {
	localize "STR_EPOCH_DOORMANAGEMENT_NORIGHTS" call dayz_rollingMessages;
};