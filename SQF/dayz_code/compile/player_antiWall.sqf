/*
	DayZ Epoch anti wall
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/

private ["_vehicle","_vehiclePos","_playerPos","_activated","_id","_intersectsWith"];

_activated = false;

// Vehicle 
_vehicle = _this;
_vehiclePos = aimpos _vehicle;

_playerPos = visiblePositionASL player;
_playerPos set [2,(_playerPos select 2)+1];

_intersectsWith = lineIntersectsWith [_playerPos, _vehiclePos, player, _vehicle];

if ((count _intersectsWith) > 0) then {
	
	{
		if (_x isKindOf "Building" or _x isKindOf "DZE_Housebase") exitWith {
			_activated = true;
		};
	} forEach _intersectsWith;
	if(_activated) then {
		diag_log format["Player Wall glitched %1 - player: %2 vehicle:%4", player,_playerPos,_vehiclePos];
		cutText ["You have been crushed between two objects.", "PLAIN DOWN"];	
		_id = [player,"bled"] spawn player_death;
		
	};
};