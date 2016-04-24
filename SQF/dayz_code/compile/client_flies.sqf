// (c) facoptere@gmail.com, licensed to DayZMod for the community

"PVCDZ_flies" addPublicVariableEventHandler { 
	//diag_log format [ "%1 -------------------------------- %2", __FILE__, _this ];
	_that = (_this select 1);
	_onoff = _that select 0;
	_body = _that select 1;
	switch _onoff do {
		case 0: {
			_flies = _body getVariable [ "flies_particle", objNull ]; 
			if (!isNull _flies) then {
				deleteVehicle _flies;
				_body setVariable [ "flies_particle", nil ];
			};
		};
		default {
			if ((isNull (_body getVariable [ "flies_particle", objNull ])) AND {(rain < 0.25)}) then {
				_pos = ASLtoATL eyePos _body;
				_pos set [2, 0.5 + (_pos select 2)];
				_interval = 0.1;
				_size = 1.5;
				//diag_log format [ "%1 adding flies to %2, at %3", __FILE__, _body, _pos ];

				_flies = "#particlesource" createVehicleLocal _pos;
				_body setVariable [ "flies_particle", _flies ];
				_flies setParticleParams 
				/*Sprite*/              [["\ca\characters2\OTHER\FLY.p3d", 1, 0, 1, 0], "", // File, Ntieth, Index, Count, Loop(Bool)
				/*Type*/                        "spaceObject",
				/*TimmerPer*/           1,
				/*Lifetime*/            4,
				/*Position*/            [0, 0, 0],
				/*MoveVelocity*/        [0, 0, 0.5],
				/*Simulation*/          1, 1.30, 1, 0, //rotationVel, weight, volume, rubbing
				/*Scale*/               [0.03, 0.03, 0.03, 0],
				/*Color*/               [[1, 1, 1, 1],[1, 1, 1, 1]],
				/*AnimSpeed*/           [1.5,0.5],
				/*randDirPeriod*/       0.01,
				/*randDirIntesity*/     0.08,
				/*onTimerScript*/       "",
				/*DestroyScript*/       "",
				/*Follow*/              _body];

				// RANDOM / TOLERANCE PARAMS
				_flies setParticleRandom
				/*LifeTime*/            [2,
				/*Position*/            [_size, _size, 0.25], 
				/*MoveVelocity*/        [0, 0, 0],
				/*rotationVel*/         1, 
				/*Scale*/               0.02, 
				/*Color*/               [0, 0, 0, 0.1],
				/*randDirPeriod*/       0.01,
				/*randDirIntesity*/     0.03,
				/*Angle*/               10];

				_flies setDropInterval _interval;
				_pos set [2, -0.2 + (_pos select 2)];
			};
		};
	};
};

