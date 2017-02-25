private ["_time","_vehicle"];
_vehicle = _this select 3;

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_37" call dayz_rollingMessages;};
dayz_actionInProgress = true;

{player removeAction _x} count s_player_lockunlock;s_player_lockunlock = [];
s_player_lockUnlock_crtl = 1;
{DZE_myVehicle removeAction _x} count s_player_lockUnlockInside;s_player_lockUnlockInside = [];
s_player_lockUnlockInside_ctrl = 1;

PVDZE_veh_Lock = [_vehicle,true];
_time = diag_tickTime;

if (player distance _vehicle < 10) then {
	if (local _vehicle) then {
		PVDZE_veh_Lock call local_lockUnlock;
	} else {
		publicVariable "PVDZE_veh_Lock";
		//Wait for lock status to update over network (can take up to a few seconds)
		waitUntil {uiSleep 0.1;(locked _vehicle or (diag_tickTime - _time > 4))};
	};
};

//Let fn_selfActions run now
s_player_lockUnlock_crtl = -1;
s_player_lockUnlockInside_ctrl = -1;
dayz_actionInProgress = false;