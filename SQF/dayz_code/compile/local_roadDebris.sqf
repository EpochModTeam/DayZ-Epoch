private ["_spawnveh","_position","_direction","_veh"];
{
	_spawnveh = _x select 0;
	_position = _x select 1;
	_direction = _x select 2;
	
	//diag_log("DEBUG: Spawning a crashed " + _spawnveh + " with " + _spawnloot + " at " + str(_position));
			
	_veh = _spawnveh createVehicleLocal _position;
	_veh enableSimulation false;

	// Randomize placement a bit
	_veh setDir _direction;
	_veh setpos _position;

} count _this;