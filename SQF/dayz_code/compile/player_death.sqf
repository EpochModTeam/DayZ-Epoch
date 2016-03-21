private ["_display","_body","_playerID","_array","_source","_method","_isBandit","_punishment","_humanityHit","_myKills","_humanity","_kills","_killsV","_myGroup"];
disableSerialization;
if (deathHandled) exitWith {};
deathHandled = true;
if (alive player) then {dayz_playerName = name player;};

//Prevent client freezes
_display = findDisplay 49;
if (!isNull _display) then {_display closeDisplay 0;};
if (dialog) then {closeDialog 0;};
if (visibleMap) then {openMap false;};

_body = player;
_playerID = [player] call FNC_GetPlayerUID;
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
//Send Death Notice
PVDZ_plr_Death = [dayz_characterID,0,_body,_playerID,_infected,toArray dayz_playerName]; // Send as array to avoid publicVariable value restrictions
publicVariableServer "PVDZ_plr_Death";

_id = [player,20,true,getPosATL player] call player_alertZombies;
uiSleep 0.5;
player setDamage 1;
0.1 fadeSound 0;

player setVariable ["NORRN_unconscious", false, true];
player setVariable ["unconsciousTime", 0, true];
player setVariable ["USEC_isCardiac",false,true];
player setVariable ["medForceUpdate",true,true];
player setVariable ["bloodTaken", false, true];
player setVariable ["startcombattimer", 0]; //remove combat timer on death
r_player_unconscious = false;
r_player_cardiac = false;
_model = typeOf player;
autoRunActive = 0;

_array = _this;
if (count _array > 0) then {
	_source = _array select 0;
	_method = _array select 1;
	if ((!isNull _source) && (_source != player)) then {
		_isBandit = (player getVariable["humanity",0]) <= -2000;
		//_isBandit = (_model in ["Bandit1_DZ","BanditW1_DZ"]);
		
		//if you are a bandit or start first - player will not recieve humanity drop
		_punishment = 
			_isBandit ||
			{player getVariable ["OpenTarget",false]};
		_humanityHit = 0;

		if (!_punishment) then {
			//I'm "not guilty" - kill me and be punished
			_myKills = ((player getVariable ["humanKills",0]) / 3) * 1500;
			// how many non bandit players have I (the dead player) killed?
			// punish my killer 2000 for shooting a surivor
			// but subtract 500 for each survivor I've murdered
			_humanityHit = -(2000 - _myKills);
			_kills = _source getVariable ["humanKills",0];
			_source setVariable ["humanKills",(_kills + 1),true];
			PVDZ_send = [_source,"Humanity",[_source,_humanityHit,300]];
			publicVariableServer "PVDZ_send";
		} else {
			//i'm "guilty" - kill me as bandit
			_killsV = _source getVariable ["banditKills",0];
			_source setVariable ["banditKills",(_killsV + 1),true];
		};
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
//[_body] call spawn_flies;
//dayzFlies = player;
//publicVariable "dayzFlies";
uiSleep 2;
1 cutRsc ["DeathScreen","BLACK OUT",3];
playMusic "dayz_track_death_1";
uiSleep 2;

for  "_x" from 5 to 1 step -1 do {
	titleText [format[localize "str_return_lobby", _x], "PLAIN DOWN", 1];
	uiSleep 1;
};

PVDZ_Server_Simulation = [_body, false];
publicVariableServer "PVDZ_Server_Simulation";

endMission "END1";