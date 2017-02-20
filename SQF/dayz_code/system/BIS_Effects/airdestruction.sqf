private ["_fl", "_sm"];
_v=_this select 0;
_int = (fuel _v)*(8+random 2);
_t=time;

// No explosion CorePatch flag
_no_explosion = getNumber(configFile >> "CfgVehicles" >> typeOf _v >> "NoDestructionExplosion_CP") > 0;

if !(isDedicated) then { //dw, particle stuff don't need run on dedicated
	_fl = "#particlesource" createVehicleLocal getpos _v;
	_fl attachto [_v,[0,0,0],"destructionEffect2"];
	_fl setParticleRandom [0.3, [1, 1, 0], [0, 0, 0], 0, 0.3, [0, 0, 0, 0], 0, 0];
	_fl setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 1, 2, "destructionEffect2",
					[0, 0, 5], 0, 10, 7.9, 0.075, [4,7,9,10], [[1, 1, 1, -1], [1, 1, 1, -1],
					[1, 1, 1, -1], [1, 1, 1, -0.5], [1, 1, 1, -0]], [1,0.5], 1, 0, "", "", _v];
	_fl setDropInterval 1;

	_sm = "#particlesource" createVehicleLocal getpos _v;
	_sm attachto [_v,[0,0,0],"destructionEffect1"];
	_sm setParticleRandom [2, [2, 2, 0], [0, 0, 0], 0, 0.3, [0, 0, 0, 0.1], 0, 0];
	_sm setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 7, 48], "", "Billboard", 1, 5, "destructionEffect1",
					[0, 0, 5], 0, 10, 7.9, 0.075, [4,8,12,14], [[0.3, 0.3, 0.3, 1],
					[0.45, 0.45, 0.45, 1],[0.6, 0.6, 0.6, 0.6], [0.7, 0.7, 0.7, 0.25], [1, 1, 1, 0]], [0.8,0.3,0.25], 1, 0, "", "", _v];
	_sm setDropInterval 1;
}; // end of dedicated check

_i=0;
_dr=0.2;
_tv=11;


//Remove weapons/ammo to prevent explosion. Script will create its own explosions (doesnt work?)
removeallweapons _v;

if (local _v && !_no_explosion) then { // Sa-Matra: Small explosion regardless of where vehicle landed
	_trig = "EmptyDetector" createVehicleLocal [0,0,0];
	_trig setTriggerArea [0,0,0,false];
	_trig setVariable ["obj", _v];
	_trig setTriggerStatements ["
		_v = thisTrigger getVariable [""obj"", objNull];
		createVehicle [""HelicopterExploSmall"", getPos _v, [], 0, ""CAN_COLLIDE""] setPosATL getPosATL _v;
		deleteVehicle thisTrigger;
	", "", ""];
};

while {_i <1200 && ((velocity _v select 2)<-20 || (getpos _v select 2)>8) && !(alive _v) && !(isnull _v) && (getpos _v select 2)>1} do {
	if(!isDedicated) then { // particle stuff is not needed on dedicated
		_tv=abs(velocity _v select 0)+abs(velocity _v select 1)+abs(velocity _v select 2);
		if (_tv>2) then {_dr=1/_tv} else {_dr=1};
		_fl setDropInterval _dr;
		_sm setDropInterval _dr;
	};
	_i=_i+1;
	sleep 0.2;
};

if !(isDedicated) then { //dw, particle stuff don't need run on dedicated
	deletevehicle _fl;
	deletevehicle _sm;
}; // end of dedicated check

//if (surfaceiswater(_pos) && (_pos select 2)<9 ) then
if((getTerrainHeightASL getPosASL _v < -1) && (getPosASL _v select 2 < 1)) then {
	if !(isDedicated) then { //dw, particle stuff don't need run on dedicated
		_wave = "#particlesource" createVehicleLocal getpos _v;
		_wave attachto [_v,[0,0,0],"destructionEffect1"];
		_wave setParticleRandom [0.3, [1, 1, 0], [0.5, 0.5, 0], 0, 0.3, [0, 0, 0, 0], 0, 0];
		_wave setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 12, 13,0], "", "Billboard", 1, 1.6, "destructionEffect1",
				[0, 0, 0], 0, 10, 7.9, 0.075, [3,8],
				[[0.7,0.8,1,0.6],[0.85,0.9,1,0.0]], [1000], 1, 0, "", "", _v];
		_wave setparticlecircle [2,[0,16,0]];
		_wave setDropInterval 0.0015;

		_splash = "#particlesource" createVehicleLocal getpos _v;
		_splash attachto [_v,[0,0,0],"destructionEffect1"];
		_splash setParticleRandom [2, [2, 2, 0], [2, 2, 7], 0, 0.5, [0, 0, 0, 0], 0, 0];
		_splash setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 13, 6, 0], "", "Billboard", 1, 4, "destructionEffect1",
				[0, 0, 0], 0, 30, 7.9, 0.075, [8,15],
				[[0.7,0.7,0.7,1],[1,1,1,0]], [1000], 1, 0, "", "", _v];
		_splash setparticlecircle [2,[0,3,15]];
		_splash setDropInterval 0.002;

		sleep 0.2;

		deletevehicle _wave;
		deletevehicle _splash;
	}; // end of dedicated check
} else {
	if (local _v) then {
		//_velx = velocity _v select 0; _velx = _velx / 4;
		//_vely = velocity _v select 1; _vely = _vely / 4;
		_velz=velocity _v select 2;
		if (_velz>1) then (_v setvelocity [velocity _v select 0,velocity _v select 1,0]);
		//_expl="HelicopterExploBig" createvehicle [_pos select 0,_pos select 1,(_pos select 2) + 1];

		// Sa-Matra: Big explosion only if landed on solid ground
		if(!_no_explosion) then {
			_trig = "EmptyDetector" createVehicleLocal [0,0,0];
			_trig setTriggerArea [0,0,0,false];
			_trig setVariable ["obj", _v];
			_trig setTriggerStatements ["
				_v = thisTrigger getVariable [""obj"", objNull];
				_atl = getPosATL _v; _atl set [2, (_atl select 2) + 1];
				createVehicle [""HelicopterExploBig"", getPos _v, [], 0, ""CAN_COLLIDE""] setPosATL _atl;
				deleteVehicle thisTrigger;
			", "", ""];
		};

		sleep 0.05;

		["AirDestructionStage2", _v, _int, _t] call BIS_Effects_globalEvent;
	};
};