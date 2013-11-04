/*
	DayZ Epoch anti wall
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/

private ["_vehicle","_intersects","_vehiclePos","_position","_playerPos"];

// Vehicle 
_vehicle = _this;

_vehiclePos = aimpos _vehicle;

diag_log format["Vehicle: %1", _vehiclePos];

/*
_veh = createVehicle ["Sign_sphere10cm_EP1", _vehiclePos, [], 0, "CAN_COLLIDE"];
_veh setPosASL _vehiclePos;
_tagColor = "#(argb,8,8,3)color(0,1,0,0.5,ca)";
_veh setobjecttexture [0,_tagColor];
*/

_playerPos = visiblePositionASL player;
_playerPos set [2,(_playerPos select 2)+1];

diag_log format["Player: %1", _playerPos];

/*
_veh2 = createVehicle ["Sign_sphere10cm_EP1", _playerPos, [], 0, "CAN_COLLIDE"];
_veh2 setPosASL _playerPos;
*/

_intersectsWith = lineIntersectsWith [_playerPos, _vehiclePos, player, _vehicle];

diag_log format["intersectsWith : %1", _intersectsWith];

_position = "driver";

if ((count _intersectsWith) > 0) then {
	diag_log format["Player Wall glitched %1 Result: %2 - player: %3 vehicle:%4", player,_intersects,_playerPos,_vehiclePos];
	switch(true)do{ 
		case (_position == "driver"): { 
			player moveInDriver _vehicle;
		}; 
		case (_position == "gunner"): { 
			player moveInGunner _vehicle;
		}; 
		case (_position == "commander"): { 
			player moveInCommander _vehicle;
		}; 
		case (_position == "cargo"): { 
			player moveInCargo _vehicle;
		}; 
	};	
};