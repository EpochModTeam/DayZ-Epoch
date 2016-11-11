private ["_display","_hasAccess"];
disableSerialization;

if (count(_this) > 0) then
{
	TheDoor = _this select 3;
} else {
	TheDoor = dayz_selectedDoor;
};

// close DoorAccess if open
_display = findDisplay 61144;
_display closeDisplay 2;

// Check player access
_hasAccess = [player, TheDoor] call FNC_check_access;
if (
	(_hasAccess select 0) or // door owner
	(_hasAccess select 2) or // plot owner
	(_hasAccess select 3) or // plot friend
	(_hasAccess select 4) or // plot admin
	(_hasAccess select 5) or // door friend
	(_hasAccess select 6)    // door admin
) then {
	createDialog "DoorManagement";
	call DoorNearbyHumans;
	call DoorGetFriends;
} else {
	localize "STR_EPOCH_DOORMANAGEMENT_NORIGHTS" call dayz_rollingMessages;
};