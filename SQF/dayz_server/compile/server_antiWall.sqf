/*
	DayZ Epoch anti wall
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/

private ["_vehicle","_player","_intersects","_vehiclePos","_position","_playerPos"];

// Vehicle 
_vehicle = _this select 0;
_vehiclePos = visiblePositionASL _vehicle;

diag_log format["Vehicle: %1", _vehiclePos];

// Position
_position = _this select 1;

// Player
_player = _this select 2;
 
_playerPos = visiblePositionASL _player;

diag_log format["Player: %1", _playerPos];

// check if intersects anything
_intersects = lineIntersects [_playerPos, _vehiclePos, _player, _vehicle];

if (_intersects) then {

	diag_log format["Player Wall glitched %1 Result: %2 - player: %3 vehicle:%4", _player,_intersects,_playerPos,_vehiclePos];

	switch(true)do{ 
		case (_position == "driver"): { 
			_player action ["getInDriver", _vehicle];
		}; 
		case (_position == "gunner"): { 
			_player action ["GetInGunner", _vehicle];
		}; 
		case (_position == "commander"): { 
			_player action ["GetInCommander", _vehicle];
		}; 
		case (_position == "cargo"): { 
			_player action ["GetInCargo", _vehicle];
		}; 
	};	
};