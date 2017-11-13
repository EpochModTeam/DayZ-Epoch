private ["_emptycan","_objectID","_objectUID","_obj","_fuelArray","_matchArray","_randomJerryCan","_fireIntensity","_dis","_sfx","_finished"];

//Tent Object
_obj = _this select 3;
_objectID = _obj getVariable["ObjectID","0"];
_objectUID = _obj getVariable["ObjectUID","0"];

//Active Arrays.
_fuelArray = [];
_matchArray = [];

//Count how many matchbox's the player has incase they have more then one.
{
	if (_x IN items player) then {
		_matchArray set [count _matchArray, _x];
	};
} count DayZ_Ignitors;

//Count how many fuelcans the player has incase they have more then one.
{
	if (_x IN magazines player) then {
		_fuelArray set [count _fuelArray, _x];
	};
} count DayZ_fuelCans;

//Make sure we have both components to create the fire.
if ((count _fuelArray == 0)) exitwith { systemChat (localize ("str_setFireFuel")); };
if ((count _matchArray == 0)) exitwith { systemChat (localize ("str_setFireMatches")); };

if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };
dayz_actionInProgress = true;

//Actionmenu tools
player removeAction s_player_destroytent;
s_player_destroytent = -1;

_dis=20;
_sfx = "tentpack";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
[player,_dis,true,(getPosATL player)] call player_alertZombies;

_finished = ["Medic",1] call fn_loopAction;
if (!_finished or (isNull _obj)) exitWith {
	dayz_actionInProgress = false;
};

//Jerry can system ** Needs redoing
//Select random can from array
_randomJerryCan = _fuelArray call BIS_fnc_selectRandom; 

_name = getText (configFile >> "CfgMagazines" >> _randomJerryCan >> "displayName");
_emptycan = getText (configFile >> "CfgMagazines" >> _randomJerryCan >> "emptycan");
_fireIntensity = getNumber (configFile >> "CfgMagazines" >> _randomJerryCan >> "fireIntensity");

if !(_randomJerryCan in magazines player) exitWith {
	localize "str_setFireFuel" call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

player removeMagazine _randomJerryCan;
player addMagazine _emptycan;

["matches",0.3] call fn_dynamicTool;

// Added Nutrition-Factor for work
["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

PVDZ_obj_Destroy = [_objectID,_objectUID,player,_obj,dayz_authKey,false];
publicVariableServer "PVDZ_obj_Destroy";

PVDZ_veh_Save = [_obj,"killed",false,false,dayz_playerUID,dayz_authKey];
publicVariableServer "PVDZ_veh_Save";

//Set fire to item
onFire = [_obj,_fireIntensity,time,false,true] spawn BIS_Effects_Burn;

PVDZ_obj_Fire = [_obj,_fireIntensity,time,false,true];
publicVariable "PVDZ_obj_Fire";

_obj inflame true;
//_obj spawn player_fireMonitor;

localize "str_success_tent_destroyed" call dayz_rollingMessages;
dayz_actionInProgress = false;