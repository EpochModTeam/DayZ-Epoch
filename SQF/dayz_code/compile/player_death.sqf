private ["_ammo","_body","_distance","_infected","_playerID","_sourceName","_sourceWeapon","_sourceVehicleType","_isBandit","_punishment","_humanityHit","_myKills","_kills","_killsV","_display","_myGroup","_camera","_deathPos","_animState","_animStateArray","_animCheck","_source","_method","_realSource"];

if (deathHandled) exitWith {};
deathHandled = true;

// Get reference to player object before respawn into new unit (respawnDelay=0 in description.ext)
if (typeName (_this select 0) == "ARRAY") then {
	_body = (_this select 0) select 0;
	_source = (_this select 0) select 1;
} else {
	_body = player;
	_source = _this select 0;
};

_deathPos = getPos _body;
_playerID = getPlayerUID player;

//Switch view to camera so player does not see debug plains at respawn_west
_camera = "camera" camCreate _deathPos;
_camera camSetDir 0;
_camera camSetFOV 1;
_camera cameraEffect ["Internal","TOP"];
_camera camSetTarget _deathPos;
_camera camSetPos [_deathPos select 0, (_deathPos select 1) + 2, 5];
_camera camCommit 0;

//SetDamage immediately so Arma registers the player as dead and respawns them into new unit
player setDamage 1;

if (dayz_onBack != "") then {
	_body addWeapon dayz_onBack;
};

//Get killer information immediately. Weapon, distance or vehicle can change in seconds.
_infected = if (r_player_infected && DZE_PlayerZed) then {1} else {0};
_sourceName = "unknown";
_sourceWeapon = "";
_distance = 0;

_method = switch true do {
	case (_this select 1 != "find"): {_this select 1}; //Manually passed method
	case (dayz_lastDamageSource != "none" && diag_tickTime - dayz_lastDamageTime < 30): {dayz_lastDamageSource}; //Major event takes priority for cause of death (zombie, melee, shot, fell, etc.)
	case (dayz_lastMedicalSource != "none" && diag_tickTime - dayz_lastMedicalTime < 10): {dayz_lastMedicalSource}; //Starve, Dehyd, Sick
	default {"bled"}; //No other damage sources in last 30 seconds
};
_ammo = if (count _this > 2) then {_this select 2} else {""};

if (!isNull _source) then {
	if (!isNull _body) then {
		_distance = round (_body distance _source);
	};
	
	_sourceVehicleType = typeOf (vehicle _source);
	_sourceWeapon = currentWeapon _source;
	_sourceWeapon = switch true do {
		case (_ammo in ["PipeBomb","Mine","MineE"]): {_ammo};
		case ({_sourceVehicleType isKindOf _x} count ["LandVehicle","Air","Ship"] > 0): {_sourceVehicleType};
		case (_sourceWeapon == "Throw"): {(weaponState _source) select 3};
		default {_sourceWeapon};
	};
	
	if (alive _source) then {
		_sourceName = if (isPlayer _source) then {name _source} else {"AI"};
	} else {
		if (_source == _body) then {_sourceName = dayz_playerName;};
	};
};

//Send Death Notice
diag_log format["Player_Death: Body:%1 BodyName:%2 Infected:%3 SourceName:%4 SourceWeapon:%5 Distance:%6 Method:%7",_body,dayz_playerName,_infected,_sourceName,_sourceWeapon,_distance,_method];
PVDZ_plr_Death = [dayz_characterID,0,_body,_playerID,toArray dayz_playerName,_infected,toArray _sourceName,toArray _sourceWeapon,_distance,_method]; //Send name as array to avoid publicVariable value restrictions
publicVariableServer "PVDZ_plr_Death";

_body setVariable ["deathType", if (_method == "suicide") then {"shot"} else {_method}, true];

if (!local _source && isPlayer _source && !(_body isKindOf "PZombie_VB")) then { //If corpse is a player zombie do not give killer a human or bandit kill
	//Values like humanity which were setVariabled onto player before death remain on corpse.
	_isBandit = (_body getVariable["humanity",0]) <= -2000;
	//_isBandit = (typeOf _body in ["Bandit1_DZ","BanditW1_DZ"]);
	
	//if you are a bandit or start first - player will not recieve humanity drop
	_punishment = (_isBandit or {_body getVariable ["OpenTarget",false]});
	_humanityHit = 0;
	_realSource = effectiveCommander vehicle _source;

	if (!_punishment) then {
		//I'm "not guilty" - kill me and be punished
		_myKills = (_body getVariable ["humanKills",0]) * 33.3;
		// how many non bandit players have I (the dead player) killed?
		// punish my killer 2000 for shooting a surivor
		// but subtract 500 for each survivor I've murdered
		_humanityHit = -(2000 - _myKills);
		_kills = _realSource getVariable ["humanKills",0];
		_realSource setVariable ["humanKills",(_kills + 1),true];
		PVDZ_send = [_realSource,"Humanity",[_humanityHit,300]];
		publicVariableServer "PVDZ_send";
	} else {
		//i'm "guilty" - kill me as bandit
		_killsV = _realSource getVariable ["banditKills",0];
		_realSource setVariable ["banditKills",(_killsV + 1),true];
	};
	
	//Setup for study bodys.
	_body setVariable ["KillingBlow",[_realSource,_punishment],true];
};

disableSerialization;

//Prevent client freezes
_display = findDisplay 49;
if (!isNull _display) then {_display closeDisplay 0;};
if (dialog) then {closeDialog 0;};
if (visibleMap) then {openMap false;};

disableUserInput true;

[_body,20,true,_deathPos] call player_alertZombies;
if (dayz_soundMuted) then {call player_toggleSoundMute;}; // hide icon before fadeSound
0.1 fadeSound 0;

_body setVariable ["NORRN_unconscious", false, true];
_body setVariable ["unconsciousTime", 0, true];
_body setVariable ["USEC_isCardiac",false,true];
_body setVariable ["medForceUpdate",true,true];
_body setVariable ["bloodTaken", false, true];
_body setVariable ["startcombattimer", 0]; //remove combat timer on death
_body setVariable ["inCombat", false, true];
r_player_unconscious = false;
r_player_cardiac = false;
dayz_autoRun = false;

terminate dayz_musicH;
terminate dayz_slowCheck;
terminate dayz_monitor1;

//Reset (just in case)
//deleteVehicle dayz_playerTrigger;
//disableUserInput false;
r_player_dead = true;

//Player is dead!
3 fadeSound 0;

dayz_originalPlayer enableSimulation true;
addSwitchableUnit dayz_originalPlayer;
setPlayable dayz_originalPlayer;
selectPlayer dayz_originalPlayer;

_myGroup = group _body;
[_body] joinSilent dayz_firstGroup;
deleteGroup _myGroup;

80000 cutText ["","PLAIN"]; //Clear group tags
3 cutRsc ["default", "PLAIN",3];
4 cutRsc ["default", "PLAIN",3];

_body setVariable["combattimeout", 0, true];

_animState = toLower (animationState _body);
_animStateArray = toArray _animState;
_animCheck = toString ([(_animStateArray select 0),(_animStateArray select 1),(_animStateArray select 2),(_animStateArray select 3)]);
if ((_body == (vehicle _body)) && {_animState != "deadstate" && {_animCheck != "adth"}}) then { //fix running corpses - death anims begin with Adth
	[nil, _body, rSWITCHMOVE, ""] call RE;
	_body SWITCHMOVE "";
	PVDZ_plr_SwitchMove = [_body,""];
	publicVariableServer "PVDZ_plr_SwitchMove";
};

[_body,_camera,_deathPos] spawn {	
	_body = _this select 0;
	_camera = _this select 1;
	_deathPos = _this select 2;
	
	waitUntil {camCommitted _camera};
	_camera camSetPos [_deathPos select 0, (_deathPos select 1) + 2, 15];
	_camera camCommit 4;
	uiSleep 5;
	
	1 cutRsc [if (DZE_DeathScreen) then {"DeathScreen_DZE"} else {"DeathScreen_DZ"},"BLACK OUT",3];
	playMusic "dayz_track_death_1";
	uiSleep 2;

	for "_x" from 5 to 1 step -1 do {
		titleText [format[localize "str_return_lobby", _x], "PLAIN DOWN", 1];
		uiSleep 1;
	};

	PVDZ_Server_Simulation = [_body, false];
	publicVariableServer "PVDZ_Server_Simulation";
	
	_camera cameraEffect ["Terminate","BACK"];
	camDestroy _camera;

	endMission "END1";
};