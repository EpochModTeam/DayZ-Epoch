/*
	DayZ Epoch anti wall
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/

private ["_vehicle","_intersects","_vehiclePos","_position","_playerPos"];

_debug = true;
_activated = false;

// Vehicle 
_vehicle = _this;
_vehiclePos = aimpos _vehicle;

_playerPos = visiblePositionASL player;
_playerPos set [2,(_playerPos select 2)+1];

if(_debug) then {
	diag_log format["Vehicle: %1", _vehiclePos];
	_veh = createVehicle ["Sign_sphere10cm_EP1", _vehiclePos, [], 0, "CAN_COLLIDE"];
	_veh setPosASL _vehiclePos;
	_tagColor = "#(argb,8,8,3)color(0,1,0,0.5,ca)";
	_veh setobjecttexture [0,_tagColor];
	// player
	diag_log format["Player: %1", _playerPos];
	_veh2 = createVehicle ["Sign_sphere10cm_EP1", _playerPos, [], 0, "CAN_COLLIDE"];
	_veh2 setPosASL _playerPos;
};

_intersectsWith = lineIntersectsWith [_playerPos, _vehiclePos, player, _vehicle];

if ((count _intersectsWith) > 0) then {
	
	{
		if (_x isKindOf "Building" or _x isKindOf "DZE_Housebase") exitWith {
			_activated = true;
		};
	} forEach _intersectsWith;

	if(_activated) then {
		diag_log format["Player Wall glitched %1 Result: %2 - player: %3 vehicle:%4", player,_intersects,_playerPos,_vehiclePos];
		switch(true)do{
			default {
				_id = [player,"bled"] spawn player_death;
			};
			case ((_vehicle emptyPositions "driver") > 0): { 
				player moveInDriver _vehicle;
			}; 
			case ((_vehicle emptyPositions "gunner") > 0): { 
				player moveInGunner _vehicle;
			}; 
			case ((_vehicle emptyPositions "commander") > 0): { 
				player moveInCommander _vehicle;
			}; 
			case ((_vehicle emptyPositions "cargo") > 0): { 
				player moveInCargo _vehicle;
			}; 
		};	
	};
};