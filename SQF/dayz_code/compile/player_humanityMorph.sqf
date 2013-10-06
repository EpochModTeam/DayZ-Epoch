private ["_updates","_playerUID","_charID","_humanity","_worldspace","_model","_friendlies","_fractures","_old","_medical","_zombieKills","_headShots","_humanKills","_banditKills","_tagList"];
_playerUID 	= _this select 0;
_charID 	= _this select 1;
_model 		= _this select 2;

_old = player;
player allowDamage false;

player removeEventHandler ["FiredNear",eh_player_killed];
player removeEventHandler ["HandleDamage",mydamage_eh1];
player removeEventHandler ["Killed",mydamage_eh3];
player removeEventHandler ["Fired",mydamage_eh2];

_updates = 		player getVariable["updatePlayer",[false,false,false,false,false]];
_updates set [0,true];
player setVariable["updatePlayer",_updates,true];
dayz_unsaved = true;
//Logout
_humanity		= player getVariable["humanity",0];
_medical 		= player call player_sumMedical;
_worldspace 	= [round(direction player),getPosATL player];
_zombieKills 	= player getVariable ["zombieKills",0];
_headShots 		= player getVariable ["headShots",0];
_humanKills 	= player getVariable ["humanKills",0];
_banditKills 	= player getVariable ["banditKills",0];
_friendlies		= player getVariable ["friendlies",[]];
_tagList		= player getVariable ["tagList",[]];

//Switch
	_model call player_switchModel;

//Login

//set medical values
if (count _medical > 0) then {
	player setVariable["USEC_isDead",(_medical select 0),true];
	player setVariable["NORRN_unconscious", (_medical select 1), true];
	player setVariable["USEC_infected",(_medical select 2),true];
	player setVariable["USEC_injured",(_medical select 3),true];
	player setVariable["USEC_inPain",(_medical select 4),true];
	player setVariable["USEC_isCardiac",(_medical select 5),true];
	player setVariable["USEC_lowBlood",(_medical select 6),true];
	player setVariable["USEC_BloodQty",(_medical select 7),true];
	player setVariable["unconsciousTime",(_medical select 10),true];
	
	//Add Wounds
	{
		player setVariable[_x,true,true];
		//["usecBleed",[player,_x,_hit]] call broadcastRpcCallAll;
		usecBleed = [player,_x,0];
		publicVariable "usecBleed";
	} forEach (_medical select 8);
	
	//Add fractures
	_fractures = (_medical select 9);
//	player setVariable ["hit_legs",(_fractures select 0),true];
//	player setVariable ["hit_hands",(_fractures select 1),true];
	[player,"legs", (_fractures select 0)] call object_setHit;
	[player,"hands", (_fractures select 1)] call object_setHit;
} else {
	//Reset Fractures
	player setVariable ["hit_legs",0,true];
	player setVariable ["hit_hands",0,true];
	player setVariable ["USEC_injured",false,true];
	player setVariable ["USEC_inPain",false,true];	
};


//General Stats
player setVariable["humanity",_humanity,true];
player setVariable["zombieKills",_zombieKills,true];
player setVariable["headShots",_headShots,true];
player setVariable["humanKills",_humanKills,true];
player setVariable["banditKills",_banditKills,true];
player setVariable["CharacterID",_charID,true];
player setVariable["worldspace",_worldspace,true];
player setVariable["friendlies",_friendlies,true];
player setVariable["tagList",_tagList,true];

//code for this on the server is missing
//["PVDZE_plr_Morph",[_charID,player,_playerUID,[_zombieKills,_headShots,_humanKills,_banditKills],_humanity]] call callRpcProcedure;

call dayz_resetSelfActions;

eh_player_killed = player addeventhandler ["FiredNear",{_this call player_weaponFiredNear;} ];

[player] call fnc_usec_damageHandle;
player allowDamage true;

player addWeapon "Loot";
player addWeapon "Flare";

sleep 0.1;
deleteVehicle _old;