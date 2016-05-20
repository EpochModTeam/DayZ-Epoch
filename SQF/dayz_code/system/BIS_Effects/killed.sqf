private ["_v","_int","_t","_b","_KillEject"];
_v=_this select 0;
_KillEject = { //leave as local compile for a tiny bit more security
	private ["_cancel","_radius","_SZPos"];
	_cancel = false;
	{
		_SZPos = _x select 0;
		_radius =  _x select 1;
		if ((isInTraderCity || !canbuild) && {(player distance _SZPos) < _radius}) then {_cancel = true;};
	} count DZE_SafeZonePosArray;
	player action ["Eject",vehicle player]; //eject player so their gear is accessible if dead and they aren't stuck in wreck if alive
	if (!_cancel) then {
		sleep 0.01; //don't use uisleep here
		[player, "explosion"] spawn player_death;
	};
};
if (!DZE_NoVehicleExplosions) then {
	if (_v iskindof "helicopter" || _v iskindof "plane") then {
		if (player in (crew _v)) then {
			[] spawn _KillEject;
		};
		//_v setVehicleInit "[this] spawn BIS_Effects_AirDestruction";
		//processInitCommands; //ClearvehicleInit done at end of burn script
		["AirDestruction", _v] call BIS_Effects_globalEvent;
	};
	if (_v iskindof "tank") then {
		if (player in (crew _v)) then {
			[] spawn _KillEject;
		};
		_int = (fuel _v)*(2+random 2);
		_t = time;
		//_v setVehicleInit format ["[this, %1, %2]spawn BIS_Effects_Burn",_int, _t];   - disabled to prepaire for move into engine
		//processInitCommands; //ClearvehicleInit done at end of burn script
		[_v,_int] spawn BIS_Effects_Secondaries;
	};
	if (_v iskindof "car" || _v iskindof "ship")then {
		if (player in (crew _v)) then {
			[] spawn _KillEject;
		};
		_int = (fuel _v)*(2 + random 1);
		_t = time;

		//_v setVehicleInit format ["[this, %1, %2]spawn BIS_Effects_Burn; ",_int, _t];  - disabled to prepaire for move into engine
		//processInitCommands; //ClearvehicleInit done at end of burn script
		[_v,_int] spawn BIS_Effects_Secondaries;

		//Possible initial explosion
		if ((random _int)>2.2) then
		{
				_b = createVehicle ["SmallSecondary", (getPosATL _v), [], 0, "CAN_COLLIDE"];
		};
	};
} else {
	_isVeh = (_v iskindof "helicopter" || _v iskindof "plane" || _v iskindof "tank" || _v iskindof "car" || _v iskindof "ship");
	if (_isVeh) then {
		if (player in (crew _v)) then {
			[] spawn _KillEject;
		};
	};
};
