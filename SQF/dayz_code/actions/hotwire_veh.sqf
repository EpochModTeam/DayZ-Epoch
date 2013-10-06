private["_vehicle"];
_vehicle = _this select 3;

if(TradeInprogress) exitWith { cutText ["Hotwire vehicle already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

{player removeAction _x} forEach s_player_lockunlock;s_player_lockunlock = [];
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

			/*
			player moveInDriver _vehicle;

			if (local vehicle player) then {
				vehicle player engineOn true; 
			};
			*/
		};
	} else {
		cutText ["Failed to unlock car hotwire kit broken." , "PLAIN DOWN"];
	};
};

s_player_lockUnlock_crtl = -1;
TradeInprogress = false;