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
if (
	(_isOwner select 0) or // door owner
	(_isOwner select 2) or // plot owner
	(_isOwner select 3) or // plot friend
	(_isOwner select 4) or // plot admin
	(_isOwner select 5) or // door friend
	(_isOwner select 6)    // door admin
) then {
	createDialog "DoorManagement";
	call DoorNearbyHumans;
	call DoorGetFriends;
} else {
	localize "STR_EPOCH_DOORMANAGEMENT_NORIGHTS" call dayz_rollingMessages;
};