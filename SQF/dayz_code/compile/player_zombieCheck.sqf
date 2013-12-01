private ["_listTalk","_eyeDir","_attacked","_continue","_type","_chance","_last","_refObj","_inAngle","_tPos","_zPos","_cantSee","_entHeight","_delta","_targets","_pHeight","_lowBlood","_dist"];
_refObj = vehicle player;
_listTalk = (getPos _refObj) nearEntities ["zZombie_Base",80];
_pHeight = (getPosATL _refObj) select 2;
_attacked = false;
{
	_continue = true;
	_type = "zombie";

	if (alive _x && _continue) then {


			
		_dist = (_x distance _refObj);
			
		_chance = 1;
		if ((_dist < dayz_areaAffect) and !(animationState _x == "ZombieFeed")) then {

			//diag_log ("within attack range: " + str(_x));

			[_x,"attack",(_chance),true] call dayz_zombieSpeak;
			//perform an attack
			_last = _x getVariable["lastAttack",0];
			_entHeight = (getPosATL _x) select 2;
			_delta = _pHeight - _entHeight;
			if ( ((time - _last) > 1) and ((_delta < 1.5) and (_delta > -1.5)) ) then
			{
				//diag_log ("perform attack: " + str(_x));
				[_x, _type] spawn player_zombieAttack;
				_x setVariable["lastAttack",time];
			};
			_attacked = true;
		} else {
			if (speed _x < 4) then {
				[_x,"idle",(_chance + 4),true] call dayz_zombieSpeak;
				//diag_log ("idle: " + str((_chance + 4)));
			} else {
				[_x,"chase",(_chance + 3),true] call dayz_zombieSpeak;
				//diag_log ("chase: " + str((_chance + 3)));
			};
		};
		//Noise Activation
		_targets = _x getVariable ["targets",[]];
		if (!(_refObj in _targets) and !isNull _refObj) then {
			if (_dist < DAYZ_disAudial) then {
				if (DAYZ_disAudial > 80) then {
					
					_targets set [count _targets, (driver _refObj)];
					_x setVariable ["targets",_targets,true];
					//diag_log ("45: " + str(_targets));
										
				} else {

					_cantSee = [_x,_refObj] call dayz_losCheck;
					if (!_cantSee) then
					{
						_targets set [count _targets,(driver _refObj)];
						_x setVariable ["targets",_targets,true];
						//diag_log ("54: " + str(_targets));
					}
					else
					{
						if (_dist < (DAYZ_disAudial / 2)) then
						{
							_targets set [count _targets,(driver _refObj)];
							//diag_log ("61: " + str(_targets));
							_x setVariable ["targets",_targets,true];
						};
					};
				};
			};
		};
		//Sight Activation
		_targets = _x getVariable ["targets",[]];
		if (!(_refObj in _targets) and !isNull _refObj) then {
			if (_dist < DAYZ_disVisual) then {
						
				_tPos = (getPosASL _refObj);
				_zPos = (getPosASL _x);
				//_eyeDir = _x call dayz_eyeDir;
				_eyeDir = direction _x;
				_inAngle = [_zPos,_eyeDir,30,_tPos] call fnc_inAngleSector;
				//diag_log ("Angle Check: " + str(_inAngle));
				if (_inAngle) then {

					//LOS check
					_cantSee = [_x,_refObj] call dayz_losCheck;
					//diag_log ("LOS Check: " + str(_cantSee));
					if (!_cantSee) then {
						//diag_log ("Within LOS! Target");
						_targets set [count _targets,(driver _refObj)];
						_x setVariable ["targets",_targets,true];
					};
				};
			};
		};
	};
} forEach _listTalk;

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