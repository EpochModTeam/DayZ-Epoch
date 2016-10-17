private ["_pos","_display","_body","_playerID","_array","_source","_method","_isBandit","_punishment","_humanityHit","_myKills","_humanity","_kills","_killsV","_myGroup","_model","_infected","_distance","_sourceVehicleType","_sourceWeapon","_sourceName","_ammo"];
disableSerialization;
if (count _this == 0) then {
	//Spawned from Killed EH (engine death), this should be rare
	//Wait to see if sched_medical 1s loop spawns with _source and _method (blood<=0 death)
	uiSleep 1;
};
if (deathHandled) exitWith {};
deathHandled = true;

//Prevent client freezes
_display = findDisplay 49;
if (!isNull _display) then {_display closeDisplay 0;};
if (dialog) then {closeDialog 0;};
if (visibleMap) then {openMap false;};

_body = player;
_playerID = getPlayerUID player;
disableUserInput true;

//add weapon on back to player
if (dayz_onBack != "") then {
	//Add weapon on back to body.
	_body addWeapon dayz_onBack;
    /*
	//Add weapon on back to the ground.
	_pos = _body modeltoWorld [1,1,0];
	//_pos set [2, 0];
    _item = createVehicle ["WeaponHolder", _pos, [], 0.0, "CAN_COLLIDE"];
    _item setPosATL [_pos select 0, _pos select 1, ((_pos select 2) + 0.1)];
    _item addWeaponCargoGlobal [dayz_onBack,1];
	*/
};
_infected = if (r_player_infected && DZE_PlayerZed) then {1} else {0};
_method = "unknown";
_sourceName = "unknown";
_sourceWeapon = "";
_distance = 0;
if (count _this > 0) then {
	_source = _this select 0;
	_method = _this select 1;
	_ammo = if (count _this > 2) then {_this select 2} else {""};
	
	if (!isNull _source) then {
		if (!isNull _body) then {_distance = round (_body distance _source);};
		_sourceVehicleType = typeOf (vehicle _source);
		_sourceWeapon = if (_sourceVehicleType isKindOf "LandVehicle" or _sourceVehicleType isKindOf "Air" or _sourceVehicleType isKindOf "Ship") then {_sourceVehicleType} else {currentWeapon _source};
		if (_sourceWeapon == "Throw") then {_sourceWeapon = (weaponState _source) select 3;};
		if (_ammo in ["PipeBomb","Mine","MineE"]) then {_sourceWeapon = _ammo;};
		if (alive _source) then {
			_sourceName = if (isPlayer _source) then {name _source} else {localize "STR_EPOCH_AI"};
		};
	};
};

//Send Death Notice
diag_log format["Player_Death: Body:%1 BodyName:%2 Infected:%3 SourceName:%4 SourceWeapon:%5 Distance:%6 Method:%7",_body,dayz_playerName,_infected,_sourceName,_sourceWeapon,_distance,_method];
PVDZ_plr_Death = [dayz_characterID,0,_body,_playerID,toArray dayz_playerName,_infected,toArray _sourceName,toArray _sourceWeapon,_distance,toArray _method]; //Send name as array to avoid publicVariable value restrictions
publicVariableServer "PVDZ_plr_Death";

_id = [player,20,true,getPosATL player] call player_alertZombies;
uiSleep 0.5;
player setDamage 1;
if (dayz_soundMuted) then {call player_toggleSoundMute;}; // hide icon before fadeSound
0.1 fadeSound 0;

player setVariable ["NORRN_unconscious", false, true];
player setVariable ["unconsciousTime", 0, true];
player setVariable ["USEC_isCardiac",false,true];
player setVariable ["medForceUpdate",true,true];
player setVariable ["bloodTaken", false, true];
player setVariable ["startcombattimer", 0]; //remove combat timer on death
player setVariable ["inCombat", false, true];
r_player_unconscious = false;
r_player_cardiac = false;
_model = typeOf player;
autoRunActive = false;

_array = _this;
if (count _array > 0) then {
	_source = _array select 0;
	_method = _array select 1;
	if (!local _source && isPlayer _source) then {
		_isBandit = (player getVariable["humanity",0]) <= -2000;
		//_isBandit = (_model in ["Bandit1_DZ","BanditW1_DZ"]);
		
		//if you are a bandit or start first - player will not recieve humanity drop
		_punishment = ((_isBandit or {player getVariable ["OpenTarget",false]}) && !(player isKindOf "PZombie_VB"));
		_humanityHit = 0;

		if (!_punishment) then {
			//I'm "not guilty" - kill me and be punished
			_myKills = (player getVariable ["humanKills",0]) * 33.3;
			// how many non bandit players have I (the dead player) killed?
			// punish my killer 2000 for shooting a surivor
			// but subtract 500 for each survivor I've murdered
			_humanityHit = -(2000 - _myKills);
			_kills = _source getVariable ["humanKills",0];
			_source setVariable ["humanKills",(_kills + 1),true];
			PVDZ_send = [_source,"Humanity",[_humanityHit,300]];
			publicVariableServer "PVDZ_send";
		} else {
			//i'm "guilty" - kill me as bandit
			_killsV = _source getVariable ["banditKills",0];
			_source setVariable ["banditKills",(_killsV + 1),true];
		};
		
		//Setup for study bodys.
		_body setVariable ["KillingBlow",[_source,_punishment],true];
	};
	_body setVariable ["deathType",_method,true];
};

terminate dayz_musicH;
terminate dayz_slowCheck;
terminate dayz_monitor1;

//Reset (just in case)
//deleteVehicle dayz_playerTrigger;
//disableUserInput false;
r_player_dead = true;

//Player is dead!
3 fadeSound 0;
uiSleep 1;

dayz_originalPlayer enableSimulation true;
addSwitchableUnit dayz_originalPlayer;
setPlayable dayz_originalPlayer;
selectPlayer dayz_originalPlayer;

_myGroup = group _body;
[_body] joinSilent dayz_firstGroup;
deleteGroup _myGroup;

3 cutRsc ["default", "PLAIN",3];
4 cutRsc ["default", "PLAIN",3];

_body setVariable["combattimeout", 0, true];
//due to a cleanup issue with effects this has been disabled remember to look at the cleanup before adding it back.
//dayzFlies = player;
//publicVariable "dayzFlies";
uiSleep 2;
1 cutRsc [if (DZE_DeathScreen) then {"DeathScreen_DZE"} else {"DeathScreen_DZ"},"BLACK OUT",3];
playMusic "dayz_track_death_1";
uiSleep 2;

for  "_x" from 5 to 1 step -1 do {
	titleText [format[localize "str_return_lobby", _x], "PLAIN DOWN", 1];
	uiSleep 1;
};

PVDZ_Server_Simulation = [_body, false];
publicVariableServer "PVDZ_Server_Simulation";

endMission "END1";