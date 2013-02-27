private["_listTalk","_isZombie","_group","_eyeDir","_attacked","_continue","_type","_chance","_last","_audial","_distance","_refObj","_list","_scaleMvmt","_scalePose","_scaleLight","_anim","_activators","_nearFire","_nearFlare","_scaleAlert","_inAngle","_scaler","_initial","_tPos","_zPos","_cantSee"];
_refObj = vehicle player;
_listTalk = (getPos _refObj) nearEntities ["zZombie_Base",80];
_pHeight = (getPosATL _refObj) select 2;
_attacked = false;
//_multiplier = 1;

//Old System

{
	_continue = true;
	_type = "zombie";
	_targets = _group getVariable ["targets",[]];

	if (alive _x && _continue) then {
		private["_dist"];
		_dist = (_x distance _refObj);
		_group = _x;

		_chance = 1;
		if ((_x distance player < dayz_areaAffect) and !(animationState _x == "ZombieFeed")) then {
			if (_type == "zombie") then { [_x,"attack",(_chance),true] call dayz_zombieSpeak; };
			//perform an attack
			_last = _x getVariable["lastAttack",0];
			_entHeight = (getPosATL _x) select 2;
			_delta = _pHeight - _entHeight;
			if ( ((time - _last) > 1) and ((_delta < 1.5) and (_delta > -1.5)) ) then {
				zedattack = [_x, _type] spawn player_zombieAttack;
				_x setVariable["lastAttack",time];
			};
			_attacked = true;
		} else {
			if (_type == "zombie") then {
				if (speed _x < 4) then {
					[_x,"idle",(_chance + 4),true] call dayz_zombieSpeak;
				} else {
					[_x,"chase",(_chance + 3),true] call dayz_zombieSpeak;
				};
			};
		};

		//Noise Activation
		if (!(_refObj in _targets)) then {
			if (_dist < DAYZ_disAudial) then {
				if (DAYZ_disAudial > 80) then {
					if (!(_refObj in _targets)) then {
						_targets set [count _targets, driver _refObj];
						_group setVariable ["targets",_targets,true];
					};					
				} else {
					if (_dist < (DAYZ_disAudial / 2)) then {
						if (!(_refObj in _targets)) then {
							_targets set [count _targets, driver _refObj];
							_group setVariable ["targets",_targets,true];
						};
					};
				};
			};
		};
		//Sight Activation
		if (!(_refObj in _targets)) then {
			if (_dist < DAYZ_disVisual) then {
				//_chance = [_x,_dist,DAYZ_disVisual] call dayz_losChance;
				//diag_log ("Visual Detection: m" + str([_x,_dist]) + " " + str(_chance));
				//if ((random 1) < _chance) then {
					//diag_log ("Chance Detection");
					_tPos = (getPosASL _refObj);
					_zPos = (getPosASL _x);
					//_eyeDir = _x call dayz_eyeDir;
					_eyeDir = direction _x;
					_inAngle = [_zPos,_eyeDir,30,_tPos] call fnc_inAngleSector;
					if (_inAngle) then {
						//LOS check
						_cantSee = [_x,_refObj] call dayz_losCheck;
						//diag_log ("LOS Check: " + str(_cantSee));
						if (!_cantSee) then {
							//diag_log ("Within LOS! Target");
							if (!(_refObj in _targets)) then {
								_targets set [count _targets, driver _refObj];
								_group setVariable ["targets",_targets,true];
							};
						};
					};
				//};
			};
		};
	};
	//diag_log ("Targets Array: " +str(_targets));
} forEach _listTalk;


// New Systems
/*
{
	_continue = true;
	_type = "zombie";
	_targets = _group getVariable ["targets",[]];

if (alive _x and _continue) then
	{
		if (local _x) then
		{
			private["_dist"];
			_dist = (_x distance _refObj);

			_chance = 1;
			if ((_dist < dayz_areaAffect) and !(animationState _x == "ZombieFeed")) then
			{
				if (_type == "zombie") then { [_x,"attack",(_chance),true] call dayz_zombieSpeak; };
				//perform an attack
				_last = _x getVariable["lastAttack",0];
				_entHeight = (getPosATL _x) select 2;
				_delta = _pHeight - _entHeight;
				if ( ((time - _last) > 1) and ((_delta < 1.5) and (_delta > -1.5)) ) then
				{
					[_x, _type] spawn player_zombieAttack;
					_x setVariable["lastAttack",time];
				};
				_attacked = true;
			}
			else
			{
				if (_type == "zombie") then
				{
					if (speed _x < 4) then
					{
						[_x,"idle",(_chance + 4),true] call dayz_zombieSpeak;
					}
					else
					{
						[_x,"chase",(_chance + 3),true] call dayz_zombieSpeak;
					};
				};
			};
			//Noise Activation
			_target = _x getVariable ["target",[]];
			if (!(_refObj in _target)) then
			{
				if (_dist < DAYZ_disAudial) then
				{
					if (DAYZ_disAudial > 80) then
					{
						_target set [count _target,(driver _refObj)];
						_x setVariable ["target",_target];
					}
					else
					{
					//	_chance = [_x,_dist,DAYZ_disAudial] call dayz_losChance;
						//diag_log ("Visual Detection: " + str([_x,_dist]) + " " + str(_chance));
					//	if ((random 1) < _chance) then	{
							_cantSee = [_x,_refObj] call dayz_losCheck;
							if (!_cantSee) then
							{
								_target set [count _target,(driver _refObj)];
								_x setVariable ["target",_target];
							}
							else
							{
								if (_dist < (DAYZ_disAudial / 2)) then
								{
									_target set [count _target,(driver _refObj)];
									_x setVariable ["target",_target];
								};
							};
						//};
					};
				};
			};
			//Sight Activation
			_target = _x getVariable ["target",[]];
			if (!(_refObj in _target)) then
			{
				if (_dist < DAYZ_disVisual) then
				{
					_chance = [_x,_dist,DAYZ_disVisual] call dayz_losChance;
					//diag_log ("Visual Detection: " + str([_x,_dist]) + " " + str(_chance));
					//if ((random 1) < _chance) then {
						//diag_log ("Chance Detection");
						_tPos = (getPosASL _refObj);
						_zPos = (getPosASL _x);
						//_eyeDir = _x call dayz_eyeDir;
						_eyeDir = direction _x;
						_inAngle = [_zPos,_eyeDir,30,_tPos] call fnc_inAngleSector;
						if (_inAngle) then
						{
							//diag_log ("In Angle");
							//LOS check
							_cantSee = [_x,_refObj] call dayz_losCheck;
							//diag_log ("LOS Check: " + str(_cantSee));
							if (!_cantSee) then
							{
								_target set [count _target,(driver _refObj)];
								_x setVariable ["target",_target];
							};
						};
					//};
				};
			};
		}
		else
		{
			private["_dist"];
			_dist = (_x distance _refObj);

			_chance = 1;
			if ((_x distance player < dayz_areaAffect) and !(animationState _x == "ZombieFeed")) then
			{
				if (_type == "zombie") then { [_x,"attack",(_chance),true] call dayz_zombieSpeak; };
				//perform an attack
				_last = _x getVariable["lastAttack",0];
				_entHeight = (getPosATL _x) select 2;
				_delta = _pHeight - _entHeight;
				if ( ((time - _last) > 1) and ((_delta < 1.5) and (_delta > -1.5)) ) then
				{
					[_x, _type] spawn player_zombieAttack;
					_x setVariable["lastAttack",time];
				};
				_attacked = true;
			}
			else
			{
				if (_type == "zombie") then
				{
					if (speed _x < 4) then
					{
						[_x,"idle",(_chance + 4),true] call dayz_zombieSpeak;
					}
					else
					{
						[_x,"chase",(_chance + 3),true] call dayz_zombieSpeak;
					};
				};
			};
			//Noise Activation
			_targets = _x getVariable ["targets",[]];
			if (!(_refObj in _targets)) then
			{
				if (_dist < DAYZ_disAudial) then
				{
					if (DAYZ_disAudial > 80) then
					{
						_targets set [count _targets,(driver _refObj)];
						_x setVariable ["targets",_targets,true];
					}
					else
					{
						//_chance = [_x,_dist,DAYZ_disAudial] call dayz_losChance;
						//diag_log ("Visual Detection: " + str([_x,_dist]) + " " + str(_chance));
						//if ((random 1) < _chance) then {
							_cantSee = [_x,_refObj] call dayz_losCheck;
							if (!_cantSee) then
							{
								_targets set [count _targets,(driver _refObj)];
								_x setVariable ["targets",_targets,true];
							}
							else
							{
								if (_dist < (DAYZ_disAudial / 2)) then
								{
									_targets set [count _targets,(driver _refObj)];
									_x setVariable ["targets",_targets,true];
								};
							};
						//};
					};
				};
			};
			//Sight Activation
			_targets = _x getVariable ["targets",[]];
			if (!(_refObj in _targets)) then
			{
				if (_dist < DAYZ_disVisual) then
				{
					//_chance = [_x,_dist,DAYZ_disVisual] call dayz_losChance;
					//diag_log ("Visual Detection: " + str([_x,_dist]) + " " + str(_chance));
					//if ((random 1) < _chance) then {
						//diag_log ("Chance Detection");
						_tPos = (getPosASL _refObj);
						_zPos = (getPosASL _x);
						//_eyeDir = _x call dayz_eyeDir;
						_eyeDir = direction _x;
						_inAngle = [_zPos,_eyeDir,30,_tPos] call fnc_inAngleSector;
						if (_inAngle) then
						{
							//diag_log ("In Angle");
							//LOS check
							_cantSee = [_x,_refObj] call dayz_losCheck;
							//diag_log ("LOS Check: " + str(_cantSee));
							if (!_cantSee) then
							{
								//diag_log ("Within LOS! Target");
								_targets set [count _targets,(driver _refObj)];
								_x setVariable ["targets",_targets,true];
							};
						};
					//};
				};
			};
		};
	};
} forEach _listTalk;
*/

if (_attacked) then {
	if (r_player_unconscious) then {
		[_refObj,"scream",3,false] call dayz_zombieSpeak;
	} else {
		_lowBlood = (r_player_blood / r_player_bloodTotal) < 0.5;
		if (_lowBlood) then {
			dayz_panicCooldown = time;
			[_refObj,"panic",3,false] call dayz_zombieSpeak;
		};
	};
};