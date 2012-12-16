private["_array","_source","_kills","_killsV","_humanity","_wait","_myKills","_dont_kill","_model"];
if (deathHandled) exitWith {};
deathHandled = true;
//Death
_dont_kill = false;

_body =		player;
_playerID =	getPlayerUID player;



// If player was infected resurect as a zombie before death
if (r_player_infected) then {
	if(player isKindOf "PZombie_VB") then {
		// do nothing kill anyways
	} else {
		_model = ["pz_policeman","pz_suit1","pz_suit2","pz_worker1","pz_worker2","pz_worker3","pz_doctor","pz_teacher","pz_hunter","pz_villager1","pz_villager2","pz_villager3","pz_priest"] select floor (random 11);
		[dayz_playerUID,dayz_characterID,_model] spawn player_humanityMorph;
		
		r_player_inpain = false;
		r_player_dead = false;
		r_player_injured = false;
		r_player_cardiac = false;
			
		//Give Blood
		r_player_blood = r_player_bloodTotal;
		player setVariable["USEC_lowBlood",false,true];
		usecMorphine = [player,player];
		publicVariable "usecMorphine";
		player setVariable ["USEC_inPain", false, true];
		usecBandage = [player,player];
		publicVariable "usecBandage";
		player setdamage 0;
		{player setVariable[_x,false,true];} forEach USEC_woundHit;
		player setVariable ["USEC_injured",false,true];
			
		sleep 1;
		r_player_handler = false;
		nul = [] spawn fnc_usec_recoverUncons;

		disableUserInput false;

		// player setVariable ["medForceUpdate",true,true];

		if (!(player getVariable ["NORRN_unconscious", true])) then {
			nul = [] spawn fnc_usec_recoverUncons;
		};
		if(animationState player == "AmovPpneMstpSnonWnonDnon_healed") then {
			nul = [] spawn fnc_usec_recoverUncons;
		};

		_dont_kill = true;
	};

};

if (_dont_kill) exitWith {};

//Send Death Notice
dayzDeath = [dayz_characterID,0,_body,_playerID,dayz_playerName];
publicVariableServer "dayzDeath";
if (isServer) then {
	_id = dayzDeath spawn server_playerDied; 
};

_id = [player,50,true,getPosATL player] spawn player_alertZombies;

sleep 0.5;


player setDamage 1;
0.1 fadeSound 0;

player setVariable ["NORRN_unconscious", false, true];
player setVariable ["unconsciousTime", 0, true];
player setVariable ["USEC_isCardiac",false,true];
player setVariable ["medForceUpdate",true,true];
//remove combat timer on death
player setVariable ["startcombattimer", 0, true];
r_player_unconscious = false;
r_player_cardiac = false;

_id = player spawn spawn_flies;

_humanity =		0;
_wait = 		0;

_array = _this;
if (count _array > 0) then {
	_source = _array select 0;
	_method = _array select 1;
	if (!isNull _source) then {
		if (_source != player) then {
			_canHitFree = 	player getVariable ["freeTarget",false];
			_isBandit = (["Bandit",typeOf player,false] call fnc_inString);
			_myKills = 		((player getVariable ["humanKills",0]) / 30) * 1000;
			if (!_canHitFree and !_isBandit) then {
				//Process Morality Hit
				_humanity = -(2000 - _myKills);
				_kills = 		_source getVariable ["humanKills",0];
				_source setVariable ["humanKills",(_kills + 1),true];
				_wait = 300;
			} else {
				//Process Morality Hit
				//_humanity = _myKills * 100;
				_killsV = 		_source getVariable ["banditKills",0];
				_source setVariable ["banditKills",(_killsV + 1),true];
				_wait = 0;
			};
			if (_humanity < 0) then {
				_wait = 0;
			};
			if (!_canHitFree and !_isBandit) then {
				dayzHumanity = [_source,_humanity,_wait];
				publicVariable "dayzHumanity";
			};
		};
	};
	_body setVariable ["deathType",_method,true];
};

terminate dayz_musicH;
terminate dayz_lootCheck;
terminate dayz_slowCheck;
terminate dayz_animalCheck;
terminate dayz_monitor1;
terminate dayz_medicalH;
terminate dayz_gui;

//Reset (just in case)
//deleteVehicle dayz_playerTrigger;
disableUserInput false;
r_player_dead = true;

"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [4]; "dynamicBlur" ppEffectCommit 0.2;

"colorCorrections" ppEffectEnable true;
"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.01],  [1, 1, 1, 0.0]];
"colorCorrections" ppEffectCommit 1;

//Player is Dead!
3 fadeSound 0;
0 cutText ["", "BLACK",10];
dayz_DeathActioned = true;
sleep 1;

TitleText[localize "str_player_12","PLAIN DOWN",5];

dayz_originalPlayer enableSimulation true;

addSwitchableUnit dayz_originalPlayer;
setPlayable dayz_originalPlayer;
selectPlayer dayz_originalPlayer;

_myGroup = group _body;
[_body] joinSilent dayz_firstGroup;
deleteGroup _myGroup;

3 cutRsc ["default", "PLAIN",3];
4 cutRsc ["default", "PLAIN",3];

if (count _array > 0) then {
	_body setVariable ["deathType",_method,true];
};

_body setVariable["combattimeout", 0, true];

/*
dayzFlies = player;
publicVariable "dayzFlies";
*/
sleep 2;

1 cutRsc ["DeathScreen","BLACK OUT",3];


playMusic "dayz_track_death_1";

"dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit 5;
"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 1]];"colorCorrections" ppEffectCommit 5;