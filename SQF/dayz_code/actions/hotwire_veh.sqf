private ["_vehicle","_removed"];
_vehicle = _this select 3;

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_32") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

{player removeAction _x} count s_player_lockunlock;s_player_lockunlock = [];
s_player_lockUnlock_crtl = 1;

_removed = ([player,"ItemHotwireKit",1] call BIS_fnc_invRemove);

if (_removed == 1) then {

	if((random 10) <= 7.5) then {

		PVDZE_veh_Lock = [_vehicle,false];
		if(player distance _vehicle < 10) then {
			
			if (local _vehicle) then {
				PVDZE_veh_Lock spawn local_lockUnlock
			} else {
				publicVariable "PVDZE_veh_Lock";
			};
		};
	} else {
		cutText [(localize "str_epoch_player_33") , "PLAIN DOWN"];
	};
};

s_player_lockUnlock_crtl = -1;
DZE_ActionInProgress = false;