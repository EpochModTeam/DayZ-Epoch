private["_vehicle"];
_vehicle = _this select 3;

if(TradeInprogress) exitWith { cutText ["Lock vehicle already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

{player removeAction _x} forEach s_player_lockunlock;s_player_lockunlock = [];
s_player_lockUnlock_crtl = 1;

dayzLockVehicle = [_vehicle,true];
if(player distance _vehicle < 10) then {
	if (local _vehicle) then {
		dayzLockVehicle spawn local_lockUnlock
	} else {
		publicVariable "dayzLockVehicle";
	};
};

s_player_lockUnlock_crtl = -1;
TradeInprogress = false;