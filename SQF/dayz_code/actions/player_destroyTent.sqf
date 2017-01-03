private ["_emptycan","_objectID","_objectUID","_obj","_fuelArray","_matchArray","_alreadyDestorying","_randomJerryCan","_fireIntensity","_dis","_sfx"];

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

//Play normal action animation
player playActionNow "Medic";

//Actionmenu tools
player removeAction s_player_destroytent;
s_player_destroytent = -1;

//Make sure you can only destroy once
_alreadyDestroying = _obj getVariable["alreadyDestroying",0];

if (_alreadyDestroying == 1) exitWith {localize "str_TentAlreadyLit" call dayz_rollingMessages;};

_obj setVariable["alreadyDestroying",1];

//Jerry can system ** Needs redoing
//Select random can from array
_randomJerryCan = _fuelArray call BIS_fnc_selectRandom; 

_name = getText (configFile >> "CfgMagazines" >> _randomJerryCan >> "displayName");
_emptycan = getText (configFile >> "CfgMagazines" >> _randomJerryCan >> "emptycan");
_fireIntensity = getNumber (configFile >> "CfgMagazines" >> _randomJerryCan >> "fireIntensity");

player removeMagazine _randomJerryCan;
player addMagazine _emptycan;

//Match system ** Needs redoing 
//Select random matchbox
_randomBoxMatches = _matchArray call BIS_fnc_selectRandom; 
_qtyRemaining = getText (configFile >> "cfgWeapons" >> _randomBoxMatches >> "Ignators" >> "qtyRemaining");

if (dayz_matchboxCount) then {
	switch _randomBoxMatches do {
		case "ItemMatchbox" : { 
			if ([0.3] call fn_chance) then {
				player removeWeapon _randomBoxMatches;
				player addWeapon _qtyRemaining;
				
				//info box.
				systemChat (localize "str_info_limitedbox");	
			};	
		};
		default { 
			player removeWeapon _randomBoxMatches;
			player addWeapon _qtyRemaining;
		};
	};
};

//Normal alerts 
_dis=20;
_sfx = "tentpack";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
[player,_dis,true,(getPosATL player)] call player_alertZombies;

// Added Nutrition-Factor for work
["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

uiSleep 3;

_activatingPlayer = player;
PVDZ_obj_Destroy = [_objectID,_objectUID, _activatingPlayer];
publicVariableServer "PVDZ_obj_Destroy";

//Send killed for object
if (isServer) then {
	PVDZ_obj_Destroy call server_deleteObj;
} else {
	PVDZ_veh_Save = [_obj, "killed"];
	publicVariableServer "PVDZ_veh_Save";
};

//Set fire to item
onFire = [_obj,_fireIntensity,time,false,true] spawn BIS_Effects_Burn;

PVDZ_obj_Fire = [_obj,_fireIntensity,time,false,true];
publicVariable "PVDZ_obj_Fire";

_obj inflame true;
//_obj spawn player_fireMonitor;

localize "str_success_tent_destroyed" call dayz_rollingMessages;