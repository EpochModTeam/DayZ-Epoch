	_v = _this select 0;
	_int = _this select 1;
	_t =_this select 2;
	_pos = getpos _v;

	// No explosion CorePatch flag
	_no_explosion = getNumber(configFile >> "CfgVehicles" >> typeOf _v >> "NoDestructionExplosion_CP") > 0;

	// Particle effects
	private ["_smoke", "_fire", "_dirt"];

	if(!isDedicated) then {
		_smoke = "#particlesource" createVehicleLocal _pos;
		_smoke attachto [_v,[0,0,0],"destructionEffect1"];
		_smoke setParticleParams [["\ca\Data\ParticleEffects\Universal\Universal",16,7,48],
					"", "Billboard", 1, 15, [0, 0, 0], [0, 0, 0], 1, 1.275, 1, 0, [8,14],
					[[0.1,0.1,0.1,1],[0.1,0.1,0.1,0]], [0.5], 0.1, 0.1, "", "", _v];
		_smoke setParticleRandom [4, [2, 2, 2], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
		_smoke setDropInterval 0.02;

		_fire = "#particlesource" createVehicleLocal _pos;
		_fire attachto [_v,[0,0,0],"destructionEffect2"];

		_fire setParticleParams [["\ca\Data\ParticleEffects\Universal\Universal",16,2,80],
				"", "Billboard", 1, 2, [0, 1, 0], [0, 0, 0], 1, 1.275, 1, 0, [7,13],
						[[1,1,1,-1],[1,1,1,0]], [0.5], 0.01, 0.01, "", "", _v,360];
		_fire setParticleRandom [0.5, [0.5, 0.5, 0.5], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
		_fire setDropInterval 0.01;

		_dirt = "#particlesource" createVehicleLocal _pos;
		_dirt attachto [_v,[0,0,0],"destructionEffect1"];
		_dirt setParticleParams [["\ca\Data\ParticleEffects\Universal\Universal",16,12,9,0], "", "Billboard", 1, 5, [0, 0, 0], [0, 0, 5], 0, 5, 1, 0, [10,20],
			  [[0.1,0.1,0.1,1],[0.1,0.1,0.1,0.7],[0.1,0.1,0.1,0]], [1000], 0, 0, "", "", _v,360];
			  _dirt setParticleRandom [0, [1, 1, 1], [1, 1, 2.5], 0, 0, [0, 0, 0, 0.5], 0, 0];
		_dirt setDropInterval 0.05;
	};

	// Ground craters
	if(local _v && !_no_explosion) then {
		_v spawn {
			_index = 0;
			_old_pos = [0,0,0];
			_failsafe = diag_tickTime + 30;
			waitUntil {
				_pos = getPosASL _this;
				_pos set [2, _old_pos select 2];

				if(_old_pos distance _pos > 4 || speed _this <= 0.1) then {
					if(getTerrainHeightASL _pos > -1 && getPosATL _this select 2 < 10) then {
						_pos set [2, random 0.1 + (_index min 14) / -14];
						if(getTerrainHeightASL _pos < 0) then {_pos = ATLtoASL _pos};

						_crater = createVehicle ["CraterLong", _pos, [], 0, "CAN_COLLIDE"];
						_crater setDir ((velocity _this select 0) atan2 (velocity _this select 1) - 5 + random 10 + 180 * (_index % 2));
						_crater setVectorUp surfaceNormal _pos;

						_old_pos = _pos;
						_index = _index + 1;
					};
				};

				speed _this <= 0.1 || diag_tickTime > _failsafe;
			};
		};
	};

	// Ground particles
	_i = 0;
	while {(speed _v) > 0.1} do
	{
		if(!isDedicated) then {
			_pos = getpos _v;
			_xv = velocity _v select 0;
			_yv = velocity _v select 1;
			_dir = abs(_xv atan2 _yv);

			_speed = (speed _v);
			_zv = velocity _v select 2;

			_tv = abs(_xv)+abs(_yv)+abs(_zv);
			_dr = 1;
			if (_tv>2) then {_dr = 1/_tv};
			_smoke setDropInterval _dr*1.5;
			_fire setDropInterval _dr*1.5;
			_dirt setDropInterval _dr;

			sleep (0.25 - (_speed / 1000));
		};
	};

	if(!isDedicated) then {
		deleteVehicle _smoke;
		deleteVehicle _fire;
		deleteVehicle _dirt;
	};

	_v setvelocity [0,0,-0.01];

	if (local _v) then {
		["Burn", _v, _int, _t] call BIS_Effects_globalEvent;
		if(!_no_explosion) then {
			[_v,_int,false] spawn BIS_Effects_Secondaries;
		};
	};

	sleep 0.5;