private ["_characterID","_playerObj","_spawnSelection","_inventory","_playerID","_dummy","_worldspace","_state","_doLoop","_key","_primary","_medical","_stats","_humanity","_randomSpot","_position","_distance","_fractures","_score","_findSpot","_mkr","_j","_isIsland","_w","_clientID","_lastInstance"];

_characterID = _this select 0;
_playerObj = _this select 1;
_spawnSelection = _this select 3;
_inventory = _this select 4;
_playerID = getPlayerUID _playerObj;

#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

if (isNull _playerObj) exitWith {
	diag_log ("SETUP INIT FAILED: Exiting, player object null: " + str(_playerObj));
};

if (_playerID == "") then {
	_playerID = getPlayerUID _playerObj;
};

if (_playerID == "") exitWith {
	diag_log ("SETUP INIT FAILED: Exiting, no player ID: " + str(_playerObj));
};

private "_dummy";
_dummy = getPlayerUID _playerObj;
if (_playerID != _dummy) then { 
	diag_log format["DEBUG: _playerID miscompare with UID! _playerID:%1",_playerID]; 
	_playerID = _dummy;
};

_worldspace = [];
_state = [];

//Do Connection Attempt
_doLoop = 0;
while {_doLoop < 5} do {
	_key = format["CHILD:102:%1:",_characterID];
	_primary = _key call server_hiveReadWrite;
	if (count _primary > 0) then {
		if ((_primary select 0) != "ERROR") then {
			_doLoop = 9;
		};
	};
	_doLoop = _doLoop + 1;
};

if (isNull _playerObj or !isPlayer _playerObj) exitWith {
	diag_log ("SETUP RESULT: Exiting, player object null: " + str(_playerObj));
};

//Wait for HIVE to be free
//diag_log ("SETUP: RESULT: Successful with " + str(_primary));

_medical = _primary select 1;
_stats = _primary select 2;
_worldspace = _primary select 4;
_humanity = _primary select 5;
_lastInstance =	_primary select 6;
_randomSpot = false; //Set position

_statearray = if (count _primary >= 4) then {_primary select 3} else {[""]};
if (count _statearray == 0) then {_statearray = [""];}; //diag_log ("StateNew: "+str(_statearray));
if (typeName ((_statearray) select 0) == "STRING") then {_statearray = [_statearray,[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]];};
_state = (_statearray) select 0; //diag_log ("State: "+str(_state));

_Achievements = (_statearray) select 1;
if (count _Achievements == 0) then {_Achievements = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];};
//diag_log ("Achievements: "+str(_Achievements));
//diag_log ("WORLDSPACE: " + str(_worldspace));

if (count _worldspace > 0) then {
	_position = _worldspace select 1;
	if (count _position < 3) exitWith {_randomSpot = true;}; //prevent debug world!
	
	_distance = respawn_west_original distance _position;
	if (_distance < 2000) then {_randomSpot = true;};
	
	_distance = [0,0,0] distance _position;
	if (_distance < 500) then {_randomSpot = true;};
	//_playerObj setPosATL _position;
	
	// Came from another server force random spawn
	if (_lastInstance != dayZ_instance) then {_randomSpot = true;};
} else {
	_randomSpot = true;
};

//diag_log ("LOGIN: Location: " + str(_worldspace) + " doRnd?: " + str(_randomSpot));

//set medical values
if (count _medical > 0) then {
	_playerObj setVariable ["USEC_isDead",(_medical select 0),true];
	_playerObj setVariable ["NORRN_unconscious",(_medical select 1),true];
	_playerObj setVariable ["USEC_infected",(_medical select 2),true];
	_playerObj setVariable ["USEC_injured",(_medical select 3),true];
	_playerObj setVariable ["USEC_inPain",(_medical select 4),true];
	_playerObj setVariable ["USEC_isCardiac",(_medical select 5),true];
	_playerObj setVariable ["USEC_lowBlood",(_medical select 6),true];
	_playerObj setVariable ["USEC_BloodQty",(_medical select 7),true];

	//Add bleeding wounds
	{
		_playerObj setVariable ["hit_"+_x,true,true];
	} forEach (_medical select 8);

	//Add fractures
	_fractures = _medical select 9;
	_playerObj setVariable ["hit_legs",(_fractures select 0),true];
	_playerObj setVariable ["hit_hands",(_fractures select 1),true];
	_playerObj setVariable ["unconsciousTime",(_medical select 10),true];
	_playerObj setVariable ["messing",if (count _medical >= 14) then {(_medical select 13)} else {[0,0,0]},true];
	_playerObj setVariable ["blood_testdone",if (count _medical >= 15) then {(_medical select 14)} else {false},true];
	if (count _medical > 12 && {typeName (_medical select 11) == "STRING"}) then { //Old character had no "messing" OR "messing" in place of blood_type
		_playerObj setVariable ["blood_type",(_medical select 11),true];
		_playerObj setVariable ["rh_factor",(_medical select 12),true];
//		diag_log [ "Character data: blood_type,rh_factor,testdone=",
//			_playerObj getVariable ["blood_type", "?"],_playerObj getVariable ["rh_factor", "?"], _playerObj getVariable ["blood_testdone", false]
//		];
	} else {
		_playerObj call player_bloodCalc;
		diag_log [ "Character upgrade to 1.8.3: blood_type,rh_factor=",_playerObj getVariable ["blood_type", "?"],_playerObj getVariable ["rh_factor", "?"]];
	};
} else {
	//Reset bleeding wounds
	call fnc_usec_resetWoundPoints;
	//Reset fractures
	_playerObj setVariable ["hit_legs",0,true];
	_playerObj setVariable ["hit_hands",0,true];
	_playerObj setVariable ["USEC_injured",false,true];
	_playerObj setVariable ["USEC_inPain",false,true];
	_playerObj call player_bloodCalc; // will set blood_type and rh_factor according to real population statitics
	//diag_log [ "New character setup: blood_type,rh_factor=",_playerObj getVariable ["blood_type", "?"],_playerObj getVariable ["rh_factor", "?"]];
	_playerObj setVariable ["messing",[0,0,0],true];
	_playerObj setVariable ["blood_testdone",false,true];
};

if (count _stats > 0) then {
	//register stats
	_playerObj setVariable ["zombieKills",(_stats select 0),true];
	_playerObj setVariable ["headShots",(_stats select 1),true];
	_playerObj setVariable ["humanKills",(_stats select 2),true];
	_playerObj setVariable ["banditKills",(_stats select 3),true];
	
	//ConfirmedKills
	_playerObj setVariable ["ConfirmedHumanKills",(_stats select 2),true];
	_playerObj setVariable ["ConfirmedBanditKills",(_stats select 3),true];
	
	_playerObj addScore (_stats select 1);
	
	//Save Score
	_score = score _playerObj;
	_playerObj addScore ((_stats select 0) - _score);

	//record for Server JIP checks
	_playerObj setVariable ["zombieKills_CHK",(_stats select 0)];
	_playerObj setVariable ["headShots_CHK",(_stats select 1)];

	if (count _stats > 4) then {
		if !(_stats select 3) then {_playerObj setVariable ["selectSex",true,true];};
	} else {
		_playerObj setVariable ["selectSex",true,true];
	};
} else {
	//register stats
	_playerObj setVariable ["zombieKills",0,true];
	_playerObj setVariable ["humanKills",0,true];
	_playerObj setVariable ["banditKills",0,true];
	_playerObj setVariable ["headShots",0,true];
	
	//ConfirmedKills
	_playerObj setVariable ["ConfirmedHumanKills",0,true];
	_playerObj setVariable ["ConfirmedBanditKills",0,true];

	//record for Server JIP checks
	_playerObj setVariable ["zombieKills_CHK",0];
	_playerObj setVariable ["headShots_CHK",0];
};

if (_randomSpot) then {
	private ["_counter","_position","_isNear","_isZero","_mkr"];
	if (!isDedicated) then {endLoadingScreen;};
	_IslandMap = (toLower worldName in ["caribou","cmr_ovaron","dayznogova","dingor","dzhg","fallujah","fapovo","fdf_isle1_a","isladuala","lingor","mbg_celle2","namalsk","napf","oring","panthera2","sara","sauerland","smd_sahrani_a2","tasmania2010","tavi","trinity","utes"]);

	//spawn into random
	_findSpot = true;
	_mkr = [];
	_position = [0,0,0];
	for [{_j=0},{_j<=100 && _findSpot},{_j=_j+1}] do {
		if (_spawnSelection == 9) then {
			// random spawn location selected, lets get the marker and spawn in somewhere
			if (dayz_spawnselection == 1) then {_mkr = getMarkerPos ("spawn" + str(floor(random 6)));} else {_mkr = getMarkerPos ("spawn" + str(floor(random actualSpawnMarkerCount)));};
		} else {
			// spawn is not random, lets spawn in our location that was selected
			_mkr = getMarkerPos ("spawn" + str(_spawnSelection));
		};
		_position = ([_mkr,0,spawnArea,10,0,2,spawnShoremode] call BIS_fnc_findSafePos);
		if ((count _position >= 2) // !bad returned position
			&& {(_position distance _mkr < spawnArea)}) then { // !ouside the disk
			_position set [2, 0];
			if (((ATLtoASL _position) select 2 > 2.5) //! player's feet too wet
			&& {({alive _x} count (_position nearEntities ["CAManBase",150]) == 0)}) then { // !too close from other players/zombies
				_pos = +(_position);
				_isIsland = false; //Can be set to true during the Check
				// we check over a 809-meter cross line, with an effective interlaced step of 5 meters
				for [{_w = 0}, {_w != 809}, {_w = ((_w + 17) % 811)}] do {
					//if (_w < 17) then { diag_log format[ "%1 loop starts with _w=%2", __FILE__, _w]; };
					_pos = [((_pos select 0) - _w),((_pos select 1) + _w),(_pos select 2)];
					if ((surfaceisWater _pos) && !_IslandMap) exitWith {_isIsland = true;};
				};
				if (!_isIsland) then {_findSpot = false};
			};
		};
		//diag_log format["%1: pos:%2 _findSpot:%3", __FILE__, _position, _findSpot];
	};
	if (_findSpot && !_IslandMap) exitWith {
		diag_log format["%1: Error, failed to find a suitable spawn spot for player. area:%2",__FILE__, _mkr];
	};
	_worldspace = [0,_position];
};

//record player pos locally for server checking
_playerObj setVariable ["characterID",_characterID,true];
_playerObj setVariable ["humanity",_humanity,true];
_playerObj setVariable ["humanity_CHK",_humanity];
_playerObj setVariable ["lastPos",getPosATL _playerObj];

PVCDZ_plr_Login2 = [_worldspace,_state];
_clientID = owner _playerObj;
_clientID publicVariableClient "PVCDZ_plr_Login2";
if (dayz_townGenerator) then {
	_clientID publicVariableClient "PVCDZ_plr_plantSpawner";
};

//record time started
_playerObj setVariable ["lastTime",time];

//set server-side inventory variable to monitor player gear
if (count _inventory > 2) then {
	_playerObj setVariable["ServerMagArray",[_inventory select 1,_inventory select 2], false];
};


//Record Player Login/LogOut
[_playerID,_characterID,1,(_playerObj call fa_plr2str),((_worldspace select 1) call fa_coor2str)] call dayz_recordLogin;

PVDZ_plr_Login1 = null;
PVDZ_plr_Login2 = null;