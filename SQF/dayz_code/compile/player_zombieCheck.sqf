// Check for near zombies and mutants and attack player

local _vehicle = vehicle player;
local _inVehicle = _vehicle != player;
local _refObj = driver _vehicle;
local _attacked = false; // at least one Z attacked the player
local _isAir = _vehicle isKindOf "Air";
local _speedMin = DZE_ZombieSpeed select 0;
local _speedMax = DZE_ZombieSpeed select 1;
local _cantSee = false;

{
	local _isZombie = _x isKindOf "zZombie_base";
	local _isMutant = (DZE_Bloodsuckers && {typeOf _x == "z_bloodsucker"});
	local _forcedSpeed = if ((_speedMin != _speedMax) && {(_speedMin > 0) && (_speedMax > 0)}) then {((random (DZE_ZombieSpeed select 1)) max (DZE_ZombieSpeed select 0));} else {getNumber (configFile >> "CfgVehicles" >> (typeOf _x) >> "forcedSpeed");};
	local _dist = _x distance _refObj;
	local _chance = 1; //0 / dayz_monitorPeriod; // Z verbosity
	local _targetedBySight = false;
	local _targetedBySound = false;
	local _localtargets = _x getVariable ["localtargets",[]];
	local _remotetargets = _x getVariable ["remotetargets",[]];
	local _targets = _localtargets + _remotetargets;
	
	if (_isZombie) then {
		if (_x distance _refObj >= (dayz_areaAffect*2)) then {
			if (speed _x < 4) then {
				[_x,"idle",(_chance + 4),true] call dayz_zombieSpeak;
			} else {
				[_x,"chase",(_chance + 3),true] call dayz_zombieSpeak;
			};
		};
		if (_dist >= 3.3) then {_x setVariable ["speedLimit",_forcedSpeed,false];};
	};
	
	if (_refObj in _targets) then {
		if (_isZombie) then {_x setVariable ["speedLimit", 0, false];};		

		if (_dist <= 3.6) then {
			//Force AI to Stand
			_x setUnitPos "UP";
			if !(animationState _x == "ZombieFeed") then {
				local _last = _x getVariable ["lastAttack", 0];
				local _entHeight = (getPosATL _x) select 2;
				local _pHeight = (getPosATL _refObj) select 2;
				local _delta = _pHeight - _entHeight;
				if (((diag_tickTime - _last) > 1.5) && ((_delta < 1.5) && (_delta > -1.5))) then {
					_cantSee = [_refObj,_x] call dayz_losCheck;
					if (!_cantSee) then {
						if (_isZombie) then {
							[_x, "zombie"] spawn player_zombieAttack;
						} else {
							local _noAttack = (DZE_MutantHeartProtect && {_refObj hasWeapon "ItemMutantHeart"});
							if (!_noAttack && !_inVehicle) then {
								_x spawn player_mutantAttack;
								local _skin = _x getVariable ["mutantSkin", "act_krovosos_new1"]; // Set textures locally on each client to prevent issues with RESec
								local _texture = format["\dayz_epoch_c\skins\bloodsucker\%1.paa",_skin];
								[nil,nil,rSETOBJECTTEXTURE,_x,0,_texture] call RE;
							};
						};
						_x setVariable ["lastAttack", diag_tickTime];
					};
				};
			};
		} else {
			if (_isZombie) then {_x setVariable ["speedLimit", _forcedSpeed, false];};
		};
		_attacked = true;
	} else {
		if (_isZombie) then {_x setVariable ["speedLimit", _forcedSpeed, false];};
	};
	
	//Block all target attempts while in an aircraft
	if (!_isAir) then {
		if !(_refObj in _targets) then {
			//Noise Activation (zed is within players audial projection)
			if (_dist < DAYZ_disAudial) then {
				if (DAYZ_disAudial > 80) then {		
					_targetedBySound = true;
				} else {
					//if (DAYZ_disAudial > 6) then {
					_chance = [_x,_dist,DAYZ_disAudial] call dayz_losChance;
					//diag_log ("Visual Detection: " + str([_x,_dist]) + " " + str(_chance));
					if ((random 1) < _chance) then {
						//make sure the player isnt behind a building or wall if target is in the open always target if player is making too much noise
						_cantSee = [_refObj,_x] call dayz_losCheck;
						if (!_cantSee) then {
							_targetedBySound = true;
						} else {
							if (_dist < (DAYZ_disAudial / 2)) then {_targetedBySound = true;};
						};
					};
					//};	
				};
			};
			
			//Sight Activation
			if (_dist < DAYZ_disVisual) then {
				_chance = [_x,_dist,DAYZ_disVisual] call dayz_losChance;
				if ((random 1) < _chance) then {
					local _tPos = getPosASL _vehicle;
					local _zPos = getPosASL _x;
					local _targetAngle = 30;
					local _inAngle = [_zPos,(direction _x),_targetAngle,_tPos] call fnc_inAngleSector;				
					if (_inAngle) then {
						_cantSee = [_refObj,_x] call dayz_losCheck;
						if (!_cantSee) then {_targetedBySight = true;};					
					};
				};	
			};
		};
	};
	
	if (_targetedBySight || _targetedBySound) then {
		local _sound = ["spotted","bloodgrowl1"] select _isMutant;
		[_x, _sound, 0, false] call dayz_zombieSpeak;
		//diag_log format["Zombie: %1, Distance: %2, Target Reason: Sight-%3,%5/Sound-%4,%6",(typeof _x),_dist,_targetedBySight,_targetedBySound,DAYZ_disVisual,DAYZ_disAudial];
		
		if (local _x) then {
			_localtargets set [count _localtargets,_refObj];
			_x setVariable ["localtargets",_localtargets,false];
		} else {
			_remotetargets set [count _remotetargets,_refObj];
			_x setVariable ["remotetargets",_remotetargets,true];
		};
	};
	
	if (_isMutant && {DZE_BloodsuckerDeleteNearTrader && isInTraderCity}) then {deleteVehicle _x}; // Delete bloodsucker if the player is in a trader city
} forEach ((getPosATL _refObj) nearEntities ["Zed_Base",100]);

if (_attacked) then {
	if (r_player_unconscious) then {
		[_refObj, "scream", 6, false] call dayz_zombieSpeak;
	} else {
		local _lowBlood = (r_player_blood / r_player_bloodTotal) < 0.5;
		if (diag_ticktime - dayz_panicCooldown > 9 && _lowBlood) then {
			//Prevents overlapping sounds (panic tracks are 4-9s, this script is called every 1s)
			//50% chance every 9s
			dayz_panicCooldown = diag_ticktime;
			[_refObj, "panic", 1, false] call dayz_zombieSpeak;
		};
	};
};
	
// return true if attacked. if so,  player_monitor will perform its ridiculous 'while true' loop faster.
_attacked
