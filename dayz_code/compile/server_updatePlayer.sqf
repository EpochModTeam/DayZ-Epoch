private["_characterID","_currentModelCheck","_temp","_isSync","_currentWpn","_currentMag","_magazines","_qty","_qtyT","_val","_isNewPos","_isNewBackp","_humanity","_isNewGear","_doUpdate","_currentModel","_modelChk","_playerPos","_playerGear","_playerBackp","_backpack","_updates","_killsB","_killsH","_medical","_isNewMed","_character","_timeSince","_charPos","_isInVehicle","_justAte","_justDrank","_distanceFoot","_lastPos","_legs","_arms","_kills","_headShots","_killsCHK","_headShotsCHK","_timeGross","_timeLeft","_onLadder","_isTerminal"];
_character = _this;
_doUpdate = 	false;
_characterID =	_character getVariable ["characterID","0"];
_updates =		_character getVariable ["updatePlayer",[false,false,false,false,false]];
_charPos = 		getPosATL _character;
_isInVehicle = 	vehicle _character != _character;
_timeSince = 	0;
_humanity =		0;

if (_characterID == "0") exitWith {
	diag_log ("ERROR: Cannot Sync Character " + (name _character) + " as no characterID");
};

//CheckVehicle
_character allowDamage true;
if (_isInVehicle) then {
	_vehicle = (vehicle _character);
	_isSync = _vehicle getVariable ["ObjectID",0] > 0;
	if (!_isSync) then {
		_vehicle allowDamage true;
		_vehicle setDamage 1;
		_character setVelocity [0,0,100];
	};
};

//Check for server initiated updates
_isNewMed =		_character getVariable["medForceUpdate",false];		//Med Update is forced when a player receives some kind of med incident

//Check for player initiated updates
if ((count _updates > 0 or _isNewMed) and _characterID != "0") then {
	_isNewPos = 	_updates select 0;
	_isNewGear =	_updates select 1;
	_isNewBackp =	_updates select 2;
	_justAte =		_updates select 3;
	_justDrank =	_updates select 4;
	_playerPos =	[];
	_playerGear =	[];
	_playerBackp =	[];
	_medical =		[];
	_distanceFoot =	0;
	
	//Check if update is requested
	if (_isNewPos) then {
		if (((_charPos select 0) == 0) and ((_charPos select 1) == 0)) then {
			//Zero Position
		} else {
			_playerPos = 	[round(direction _character),_charPos];
			_lastPos = 		_character getVariable["lastPos",_charPos];
			if (count _lastPos > 2 and count _charPos > 2) then {
				if (!_isInVehicle) then {
					_distanceFoot = round(_charPos distance _lastPos);
					if (_distanceFoot > 500) then {
						_distanceFoot = 0;
					} else {
						_doUpdate = true;
					};
				};
				_character setVariable["lastPos",_charPos];
			};
		};
	};
	if (_isNewGear) then {
		//player sideChat format["SERVER: %1 update backpack",_characterID];
		_currentWpn = 	currentMuzzle _character;
		_currentMag =	currentMagazine _character;
		_magazines =	magazines _character;
		
		_qty = 			_character ammo _currentWpn;
		_qtyT = 		getNumber(configFile >> "cfgMagazines" >> _currentMag >> "count");
		if (_qty < (_qtyT * 0.5)) then {
			_val = _magazines find _currentMag;
			_magazines set [_val,"DEL"];
			_magazines = _magazines - ["DEL"];
		};	
		_playerGear = [weapons _character,_magazines];
		_doUpdate = true;
	};
	if (_isNewBackp) then {
		//player sideChat format["SERVER: %1 update inventory",_characterID];
		_backpack = unitBackpack _character;
		_playerBackp = [typeOf _backpack,getWeaponCargo _backpack,getMagazineCargo _backpack];
		_doUpdate = true;
	};
	if (_isNewMed) then {
		//player sideChat format["SERVER: %1 update medical",_characterID];
		_wounds = [];
		if (!(_character getVariable["USEC_isDead",false])) then {
			_medical = _character call player_sumMedical;
			_doUpdate = true;
		};
	};
	
	//Process update
	if (_doUpdate and _characterID != "0") then {		
		//Record stats while we're here		
		/*
			Check previous stats against what client had when they logged in
			this helps prevent JIP issues, where a new player wouldn't have received
			the old players updates. Only valid for stats where clients could have
			be recording  results from their local objects (such as agent zombies)
		*/
		_kills = 		["zombieKills",_character] call server_getDiff;
		_killsB = 		["banditKills",_character] call server_getDiff;
		_killsH = 		["humanKills",_character] call server_getDiff;
		_headShots = 	["headShots",_character] call server_getDiff;
		_humanity = 	["humanity",_character] call server_getDiff2;
		//_humanity = 	_character getVariable ["humanity",0];
		_character addScore _kills;		
		/*
			Assess how much time has passed, for recording total time on server
		*/
		_lastTime = 	_character getVariable["lastTime",time];
		_timeGross = 	(time - _lastTime);
		_timeSince = 	floor(_timeGross / 60);
		_timeLeft =		(_timeGross - (_timeSince * 60));
		/*
			Get character state details
		*/
		_currentWpn = 	currentMuzzle _character;
		_currentAnim =	animationState _character;
		_config = 		configFile >> "CfgMovesMaleSdr" >> "States" >> _currentAnim;
		_onLadder =		(getNumber (_config >> "onLadder")) == 1;
		_isTerminal = 	(getNumber (_config >> "terminal")) == 1;
		//_wpnDisabled =	(getNumber (_config >> "disableWeapons")) == 1;
		_currentModel = typeOf _character;
		_modelChk = 	_character getVariable ["model_CHK",""];
		if (_currentModel == _modelChk) then {
			_currentModel = "";
		} else {
			_currentModel = str(_currentModel);
			_character setVariable ["model_CHK",typeOf _character];
		};
		
		if (_onLadder or _isInVehicle or _isTerminal) then {
			_currentAnim = "";
			//If position to be updated, make sure it is at ground level!
			if ((count _playerPos > 0) and !_isTerminal) then {
				_charPos set [2,0];
				_playerPos set[1,_charPos];					
			};
		};
		if (_isInVehicle) then {
			_currentWpn = "";
		} else {
			_muzzles = getArray(configFile >> "cfgWeapons" >> _currentWpn >> "muzzles");
			if (count _muzzles > 1) then {
				_currentWpn = currentMuzzle _character;
			};	
		};
		_temp = round(_character getVariable ["temperature",100]);
		_currentState = [_currentWpn,_currentAnim,_temp];
		/*
			Everything is ready, now publish to HIVE
		*/
		if (count _playerPos > 0) then {
			_array = [];
			{
				if (_x > -20000 and _x < 20000) then {
					_array set [count _array,_x];
				};
			} forEach (_playerPos select 1);
			_playerPos set [1,_array];
		};
		if (!isNull _character) then {
			if (alive _character) then {
				//Wait for HIVE to be free
				//Send request
				_key = format["CHILD:201:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12:%13:%14:%15:%16:",_characterID,_playerPos,_playerGear,_playerBackp,_medical,_justAte,_justDrank,_kills,_headShots,_distanceFoot,_timeSince,_currentState,_killsH,_killsB,_currentModel,_humanity];
				diag_log ("HIVE: WRITE: "+ str(_key) + " / " + _characterID);
				_key spawn server_hiveWrite;
				_character setVariable ["updatePlayer",[false,false,false,false,false],true];
				_character setVariable ["medForceUpdate",false];
			};
		};

		//Reset timer
		if (_timeSince > 0) then {
			_character setVariable ["lastTime",(time - _timeLeft)];
		};
	};
};