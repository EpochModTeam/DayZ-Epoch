/*
	DayZ Epoch anti wall
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/

private ["_vehicle","_vehiclePos","_playerPos","_activated","_id","_intersectsWith"];
_activated = false;
_vehicle = _this;

_vehiclePos = aimpos _vehicle;
_playerPos = visiblePositionASL player;
_playerPos set [2,(_playerPos select 2)+1];

_intersectsWith = lineIntersectsWith [_playerPos, _vehiclePos, player, _vehicle];

if ((count _intersectsWith) > 0) then {
	{
		//diag_log format ["DEBUG: AntiWall: %1", (typeOf _x)];
		//diag_log format ["DEBUG: AntiWall2: %1", _x];
		if (_x isKindOf "Building" or _x isKindOf "DZE_Housebase") exitWith {
			_activated = true;
		};
		if (["wall_", str _x, false] call fnc_inString) exitWith {
			_activated = true;
		};
	} forEach _intersectsWith;
	
	if(_activated) then {
		// limit distance just incase 
		if((_playerPos distance _vehiclePos) < 10) then {
			//diag_log format["Player Wall glitched %1 - player: %2 vehicle:%3", player,_playerPos,_vehiclePos];

			switch(true)do{
				case ((_vehicle emptyPositions "driver") > 0): 
				{
					player action ["getInDriver", _vehicle];
				};
				case ((_vehicle emptyPositions "gunner") > 0): 
				{
					player action ["GetInGunner", _vehicle];
				};
				case ((_vehicle emptyPositions "commander") > 0): 
				{
					player action ["GetInCommander", _vehicle];
				};
				case ((_vehicle emptyPositions "cargo") > 0): 
				{
					player action ["GetInCargo", _vehicle];
				};	
				default
				{
					cutText [(localize "str_epoch_player_9"), "PLAIN DOWN"];
					_id = [player,"crushed"] spawn player_death;
				};
			};
		};
	};
};
