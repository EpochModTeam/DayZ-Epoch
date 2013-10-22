/*
	Anti-Teleport
	Created By Razor
	Refactored By Alby
*/

private ["_curpos","_lastpos","_curheight","_lastheight","_terrainHeight","_curtime","_lasttime","_distance","_difftime","_speed","_topSpeed","_debug"];

waitUntil {vehicle player == player};

_lastpos = getPosATL (vehicle player);
_lastheight = (ATLtoASL _lastpos) select 2;
_lasttime = time;

while {alive player} do
{
	_curpos = getPosATL (vehicle player);
	_curheight = (ATLtoASL _curpos) select 2;
	_curtime = time;
	_distance = _lastpos distance _curpos;
	_difftime = (_curtime - _lasttime) max 0.001;
	_speed = _distance / _difftime;
	_topSpeed = 10;
	
	if (vehicle player != player) then {
		_topSpeed = getNumber (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "maxSpeed");
	};
	
	_terrainHeight = getTerrainHeightASL [_curpos select 0, _curpos select 1];
	
	//diag_log format["DEBUG: terrain: %1    current: %2", _terrainHeight, _curheight];
	//diag_log format["DEBUG: all: %1		player: %2		fall: %3		terrain: %4", !((vehicle player == player) && (_curheight < _lastheight) && ((_curheight - _terrainHeight) > 1)), (vehicle player == player), (_curheight < _lastheight), (_curheight - _terrainHeight) > 1];
	
	_debug = getMarkerPos "respawn_west";
	if ((_speed > _topSpeed) && (alive player) && ((driver (vehicle player) == player) or (isNull (driver (vehicle player)))) && (_debug distance _lastpos > 3000) && !((vehicle player == player) && (_curheight < _lastheight) && ((_curheight - _terrainHeight) > 1))) then {
		(vehicle player) setpos _lastpos;
		atp = [name player, dayz_characterID, _lastpos, _curPos, getPosATL player];
		publicVariableServer "atp";
	} else {

		_lastpos = _curpos;
		_lastheight = _curheight;		
	};
	
	_lasttime = _curtime;
	sleep 0.5;
};