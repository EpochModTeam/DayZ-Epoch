/*
	DayZ Epoch anti wall
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_vehicle","_vehiclePos","_playerPos","_activated","_intersectsWith"];

_activated = false;
_vehicle = _this;

// position usually the drivers head area
_vehiclePos = aimpos _vehicle;

// works best for this type of check on players
_playerPos = visiblePositionASL player;

// ignore if distance is too far
if((_playerPos distance _vehiclePos) > 10) exitWith {};

// Important! without this we looking at the players feet this gets us torso area
_playerPos set [2,(_playerPos select 2)+1];

// Look for any intersecting objects
_intersectsWith = lineIntersectsWith [_playerPos, _vehiclePos, player, _vehicle];
if ((count _intersectsWith) > 0) then {
	{
		// buildings
		if (_x isKindOf "Building" || _x isKindOf "DZE_Housebase") exitWith {
			_activated = true;
		};
		// walls
		if ((typeOf _x) == "" && {["wall_", str _x, false] call fnc_inString}) exitWith {
			_activated = true;
		};
	} count _intersectsWith;
};

if(_activated) then {
	
	// this method is said to be faster than switch, lets try it.
	call {
		if (DZE_AntiWallCounter == DZE_AntiWallLimit) exitWith {
			localize "str_epoch_player_9" call dayz_rollingMessages;
			[player,"crushed"] call player_death;
		};
		if ((_vehicle emptyPositions "driver") > 0) exitWith {
			localize "STR_EPOCH_ACTIONS_15" call dayz_rollingMessages;
			player moveInDriver _vehicle;
			DZE_AntiWallCounter = DZE_AntiWallCounter + 1;
		};
		if ((_vehicle emptyPositions "gunner") > 0) exitWith {
			localize "STR_EPOCH_ACTIONS_15" call dayz_rollingMessages;
			player moveInGunner _vehicle;
			DZE_AntiWallCounter = DZE_AntiWallCounter + 1;
		};
		if ((_vehicle emptyPositions "commander") > 0) exitWith {
			localize "STR_EPOCH_ACTIONS_15" call dayz_rollingMessages;
			player moveInCommander _vehicle;
			DZE_AntiWallCounter = DZE_AntiWallCounter + 1;
		};
		if ((_vehicle emptyPositions "cargo") > 0) exitWith {
			localize "STR_EPOCH_ACTIONS_15" call dayz_rollingMessages;
			player moveInCargo _vehicle;
			DZE_AntiWallCounter = DZE_AntiWallCounter + 1;
		};
		// kill player if none of the above are matched
		localize "str_epoch_player_9" call dayz_rollingMessages;
		[player,"crushed"] call player_death;
	};
	
} else {
	DZE_AntiWallCounter = 0;
};
