fnc_usec_damageHandle = {
	/***********************************************************
	ASSIGN DAMAGE HANDLER TO A UNIT
	- Function
	- [unit] call fnc_usec_damageHandle;
	************************************************************/
	private["_unit","_eh"];
	_unit = _this select 0;
	
	// Remove handle damage override
	// _unit removeEventHandler ["HandleDamage",temp_handler];

	mydamage_eh1 = _unit addeventhandler ["HandleDamage",{_this call fnc_usec_damageHandler;} ];
	mydamage_eh2 = _unit addEventHandler ["Fired", {_this call player_fired;}];
	mydamage_eh3 = _unit addEventHandler ["Killed", {_id = [] spawn player_death;}];
};

fnc_usec_pitchWhine = {
	_visual = _this select 0;
	_sound = _this select 1;
	//affect the player
	0 fadeSound 0;
	playMusic ["PitchWhine",0];
	if (!r_player_unconscious) then {
		_visual call fnc_usec_bulletHit;
		_sound fadeSound 1;
	};
	r_pitchWhine = true;
	[] spawn {
		sleep 32;
		r_pitchWhine = false;
	};
};

fnc_usec_damageUnconscious = {
	private["_unit","_damage"];
	_unit = _this select 0;
	_damage = _this select 1;
	_inVehicle = (vehicle _unit != _unit);
	if (_unit == player) then {
		r_player_timeout = round(((random 2) * _damage) * 40);
		if (_type == 1) then {r_player_timeout = r_player_timeout + 90};
		if (_type == 2) then {r_player_timeout = r_player_timeout + 60};
		r_player_unconscious = true;
		player setVariable["medForceUpdate",true,true];
		player setVariable ["unconsciousTime", r_player_timeout, true];
	};
	if (_inVehicle) then {
		_unit spawn {
			private["_veh","_unit"];
			_veh = vehicle _this;
			_unit = _this;
			waitUntil{(((position _veh select 2 < 1) and (speed _veh < 1)) or (!r_player_unconscious))};
			if (r_player_unconscious) then {
				_unit action ["eject", _veh];
				waitUntil{((vehicle _this) != _this)};
				sleep 1;
				_unit setVariable ["NORRN_unconscious", true, true];
				_unit playActionNow "Die";
			};
		};
	} else {
		_unit setVariable ["NORRN_unconscious", true, true];
		_unit playActionNow "Die";
	};
};

//Action Handlers added to init file

fnc_usec_bulletHit = {
	private["_commit"];
	_commit = _this;
	if (!r_player_unconscious) then {
		"colorCorrections" ppEffectEnable true;"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.1],  [1, 1, 1, 0.0]];"colorCorrections" ppEffectCommit 0;
		"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [2]; "dynamicBlur" ppEffectCommit 0;
		addCamShake [5, 0.5, 25];
		"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 0.0]];"colorCorrections" ppEffectCommit _commit;
		"dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit _commit;
	};
};

fnc_usec_damageType = {
	private["_damage","_ammo","_type"];
	_damage = _this select 0;
	_ammo = _this select 1;
	_type = 0;
	if ((_ammo isKindof "Grenade") or (_ammo isKindof "ShellBase") or  (_ammo isKindof "TimeBombCore") or (_ammo isKindof "BombCore") or (_ammo isKindof "MissileCore") or (_ammo isKindof "RocketCore") or (_ammo isKindof "FuelExplosion") or (_ammo isKindof "GrenadeBase")) then {
		_type = 1;
	};
	if ((_ammo isKindof "B_127x107_Ball") or (_ammo isKindof "B_127x99_Ball")) then {
		_type = 2;
	};
	_type;
};

fnc_usec_damageGetWound = {
	private["_hit","_sPoint","_options","_rnd","_wound"];
	_hit = format["%1",_this];
	_sPoint = USEC_woundHit find _hit;
	_options = USEC_woundPoint select _sPoint;
	_rnd = floor(random(count _options));
	_wound = _options select _rnd;
	_wound;
};

fnc_usec_medic_removeActions = {
	_obj = player;
	{
		_obj = _x;
		{
			_obj removeAction _x;
		} forEach r_player_actions;
	} forEach r_action_targets;
	r_player_actions = [];
	r_action_targets = [];
};

fnc_usec_self_removeActions = {
	{
		player removeAction _x;
	} forEach r_self_actions;
	r_self_actions = [];
};

fnc_med_publicBlood = {
	while {(r_player_injured or r_player_infected) and r_player_blood > 0} do {
		player setVariable["USEC_BloodQty",r_player_blood,true];
		player setVariable["medForceUpdate",true];
		sleep 5;
	};
};

fnc_usec_playerBleed = {
	private["_bleedTime","_bleedPerSec","_total","_bTime","_myBleedTime"];
	_bleedTime = 400;		//seconds
	_bleedPerSec = (r_player_bloodTotal / _bleedTime);
	_total = r_player_bloodTotal;
	r_player_injured = true;
	_myBleedTime = (random 300) + 30;
	_bTime = 0;
	while {r_player_injured} do {
		
		// If kneeling or crawling reduce bleeding
		if(dayz_isKneeling) then {
			_bleedPerSec = _bleedPerSec / 2;
		};
		if(dayz_isCrawling) then {
			_bleedPerSec = _bleedPerSec / 4;
		};
		
		//bleed out
		if (r_player_blood > 0) then {
			r_player_blood = r_player_blood - _bleedPerSec;
		};
		_bTime = _bTime + 1;
		if (_bTime > _myBleedTime) then {
			r_player_injured = false;
			_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf";
			dayz_sourceBleeding =	objNull;
			{player setVariable[_x,false,true];} forEach USEC_woundHit;
			player setVariable ["USEC_injured",false,true];
		};
		sleep 1;
	};
};

fnc_usec_damageBleed = {
	/***********************************************************
	PROCESS DAMAGE TO A UNIT
	- Function
	- [_unit, _wound, _injury] call fnc_usec_damageBleed;
	************************************************************/
		private["_unit","_wound","_injury","_modelPos","_point","_source"];
		_unit = _this select 0;
		_wound = _this select 1;
		_injury = _this select 2;
		
		_modelPos = [0,0,0];
		
		switch (_wound) do {
			case "Pelvis": {
				_modelPos = [0,0,0.2];
			};
			case "aimpoint": {
				_rndX = (0.1 - random 0.2);
				_modelPos = [_rndX,0,0.2];
			};
			case "RightShoulder": {
				_modelPos = [0,0,0.2];
			};
			case "LeftShoulder": {
				_modelPos = [0,0,0.2];
			};
		};

		while {true} do {
			scopeName "main";
			
			waitUntil {(vehicle _unit == _unit)};
			
			_point = "Logic" createVehicleLocal getPosATL _unit;
			_source = "#particlesource" createVehicleLocal getPosATL _unit;
			_source setParticleParams
			/*Sprite*/		[["\Ca\Data\ParticleEffects\Universal\Universal", 16, 13, 1],"",// File,Ntieth,Index,Count,Loop(Bool)
			/*Type*/			"Billboard",
			/*TimmerPer*/		1,
			/*Lifetime*/		0.2,
			/*Position*/		[0,0,0],
			/*MoveVelocity*/	[0,0,0.5],
			/*Simulation*/		1,0.32,0.1,0.05,//rotationVel,weight,volume,rubbing
			/*Scale*/			[0.05,0.25],
			/*Color*/			[[0.2,0.01,0.01,1],[0.2,0.01,0.01,0]],
			/*AnimSpeed*/		[0.1],
			/*randDirPeriod*/	0,
			/*randDirIntesity*/	0,
			/*onTimerScript*/	"",
			/*DestroyScript*/	"",
			/*Follow*/			_point];
			_source setParticleRandom [2, [0, 0, 0], [0.0, 0.0, 0.0], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
			_source setDropInterval 0.02;
			_point attachTo [_unit,_modelPos,_wound];
			
			sleep 5;
			
			while {((_unit getVariable["USEC_injured",true]) and (alive _unit))} do {
				scopeName "loop";
				if (vehicle _unit != _unit) then {
					BreakOut "loop";
				};
				sleep 1;
			};
			deleteVehicle _source;
			deleteVehicle _point;
			
			if (!(_unit getVariable["USEC_injured",false])) then {
				BreakOut "main";
			};
		};
		
		deleteVehicle _source;
		deleteVehicle _point;
};

fnc_usec_recoverUncons = {
	player setVariable ["NORRN_unconscious",false,true];
	player setVariable ["unconsciousTime",0,true];
	player setVariable ["USEC_isCardiac",false,true];
	// player setVariable["medForceUpdate",true,true];

	/*
	sleep 1;
	usecEpi = [player,player];
	publicVariable "usecEpi";
	*/

	r_player_unconscious = false;
	r_player_cardiac = false;
	r_player_handler1 = false;

	sleep 1;

	disableUserInput false;
	[objNull,player,rSwitchMove,"AinjPpneMstpSnonWnonDnon"] call RE;
	player switchMove "AinjPpneMstpSnonWnonDnon";
	player playMoveNow "AmovPpneMstpSnonWnonDnon_healed";
};