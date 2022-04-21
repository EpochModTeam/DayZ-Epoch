closeDialog 0;
local _charID = _this select 1;
local _model = _this select 2;

if (typeOf player == _model) exitWith {};

local _old = player;
_old removeAllEventHandlers "FiredNear";
_old removeAllEventHandlers "HandleDamage";
_old removeAllEventHandlers "Killed";
_old removeAllEventHandlers "Fired";
_old allowDamage false;
_old addEventHandler ["HandleDamage", {0}];

//Logout
local _humanity = player getVariable ["humanity",0];
local _medical = player call player_sumMedical;
local _worldspace = [round(direction player),getPosATL player];
local _zombieKills = player getVariable ["zombieKills",0];
local _headShots = player getVariable ["headShots",0];
local _humanKills = player getVariable ["humanKills",0];
local _banditKills = player getVariable ["banditKills",0];
local _combattimeout = player getVariable["combattimeout",0];
local _inCombat = player getVariable ["inCombat",false];
local _survivalTime = player getVariable ["SurvivalTime",0];
local _ConfirmedHumanKills = player getVariable ["ConfirmedHumanKills",0];
local _ConfirmedBanditKills = player getVariable ["ConfirmedBanditKills",0];
local _friendlies = player getVariable ["friendlies",[]];
local _tagSetting = player getVariable ["DZE_display_name",false];
local _radiostate = player getVariable ["radiostate",false];
local _apsiState = player getVariable["APSIState",false];
local _dayz_onBack = player getVariable ["dayz_onBack",""];
local _coins = 0;
local _bankCoins = 0;
local _globalCoins = 0;

if (Z_SingleCurrency) then {
	_coins = player getVariable ["cashMoney",0];
	_bankCoins = player getVariable ["bankMoney",0];
	_globalCoins = player getVariable ["globalMoney",0];
};

//Switch
[_model, _charID, _humanity, _zombieKills, _headShots, _humanKills, _banditKills] call player_switchModel; //Already spawned thread, no need to spawn and waitUntil script is done

//Login

//set medical values
if (count _medical > 0) then {
	player setVariable ["USEC_isDead",(_medical select 0),true];
	player setVariable ["NORRN_unconscious",(_medical select 1), true];
	player setVariable ["USEC_infected",(_medical select 2),true];
	player setVariable ["USEC_injured",(_medical select 3),true];
	player setVariable ["USEC_inPain",(_medical select 4),true];
	player setVariable ["USEC_isCardiac",(_medical select 5),true];
	player setVariable ["USEC_lowBlood",(_medical select 6),true];
	player setVariable ["USEC_BloodQty",(_medical select 7),true];
	player setVariable ["unconsciousTime",(_medical select 10),true];
	player setVariable ["blood_type",(_medical select 11),true];
	player setVariable ["rh_factor",(_medical select 12),true];
	player setVariable ["messing",(_medical select 13),true];
	player setVariable ["blood_testdone",(_medical select 14),true];

	//Add Wounds
	{
		//diag_log format ["loop _x:1  wound:%2",_x, (USEC_typeOfWounds select _forEachIndex)];
		player setVariable ["hit_"+_x,true,true];
		PVDZ_hlt_Bleed = [player, _x];
		publicVariable "PVDZ_hlt_Bleed";
	} forEach (_medical select 8);

	//Add fractures
	local _fractures = _medical select 9;
//	player setVariable ["hit_legs",(_fractures select 0),true];
//	player setVariable ["hit_hands",(_fractures select 1),true];
	[player,"legs",(_fractures select 0)] call object_setHit;
	[player,"hands",(_fractures select 1)] call object_setHit;
} else {
	//Reset Fractures
	player setVariable ["hit_legs",0,true];
	player setVariable ["hit_hands",0,true];
	player setVariable ["USEC_injured",false,true];
	player setVariable ["USEC_inPain",false,true];
};

//General Stats
//player setVariable ["humanity",_humanity,true]; //Moved to player_switchModel
//player setVariable ["zombieKills",_zombieKills,true]; //Moved to player_switchModel
//player setVariable ["headShots",_headShots,true]; //Moved to player_switchModel
//player setVariable ["humanKills",_humanKills,true]; //Moved to player_switchModel
//player setVariable ["banditKills",_banditKills,true]; //Moved to player_switchModel
//player setVariable ["characterID",_charID,true]; //Moved to player_switchModel
player setVariable ["worldspace",_worldspace];
player setVariable ["combattimeout",_combattimeout,false];
player setVariable ["inCombat",_inCombat,true];
player setVariable ["SurvivalTime",_survivalTime,false];
player setVariable ["ConfirmedHumanKills",_ConfirmedHumanKills,true];
player setVariable ["ConfirmedBanditKills",_ConfirmedBanditKills,true];
player setVariable ["friendlies",_friendlies,true];
player setVariable ["DZE_display_name",_tagSetting,true];
player setVariable ["radiostate",_radiostate];
player setVariable ["APSIState",_apsiState];
player setVariable ["dayz_onBack",_dayz_onBack,true];

if (Z_SingleCurrency) then {
	player setVariable ["cashMoney",_coins,true];
	player setVariable ["bankMoney",_bankCoins,true];
	player setVariable ["globalMoney",_globalCoins,true];
};

call dayz_resetSelfActions; //New unit has no self actions yet. Reset variables so actions can be added back.
dayz_actionInProgress = false; //Allow self actions to run now.

player removeAllEventHandlers "HandleDamage";
eh_player_killed = player addeventhandler ["FiredNear",{_this call player_weaponFiredNear;}];
[player] call fnc_usec_damageHandle;
player allowDamage true;

uiSleep 0.1;
if !(isNull _old) then {deleteVehicle _old;};
call player_forceSave;