if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};

local _body = _this;

if (_body getVariable["meatHarvested",false]) exitWith {}; // Exit the script if the meat has already been harvested.
if ({isPlayer _x} count ((getPosATL _body) nearEntities ["CAManBase", 12]) > 1) exitWith {localize "str_pickup_limit_5" call dayz_rollingMessages;}; // Exit the script if another player is near to prevent duping.

dayz_actionInProgress = true;

local _type = typeOf _body;
local _isZombie = _type isKindOf "zZombie_base";
local _isMutant = _type == "z_bloodsucker";
local _knives = [];
local _string = "";

// Count how many knives the player has
{
	if (_x in items player) then {
		_knives set [count _knives, _x];
	};
} count Dayz_Gutting;

// Exit the script if the player doesn't have a knife
if ((count _knives) < 1) exitWith {
	if (_isZombie || _isMutant) then {
		format[localize "str_missing_to_do_this",localize "STR_EQUIP_NAME_4"] call dayz_rollingMessages;
	} else {
		localize "str_cannotgut" call dayz_rollingMessages;
	};
	dayz_actionInProgress = false;
};

[player,(getPosATL player),10,"gut"] spawn fnc_alertZombies;

local _finished = ["Medic",1] call fn_loopAction;
if (!_finished) exitWith {dayz_actionInProgress = false;};

// Added Nutrition-Factor for work
["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

//Get Animal Type
local _isListed = isClass (configFile >> "CfgSurvival" >> "Meat" >> _type);
local _text = getText (configFile >> "CfgVehicles" >> _type >> "displayName");

_body setVariable ["meatHarvested",true,true];
local _qty = if (_isListed) then {getNumber (configFile >> "CfgSurvival" >> "Meat" >> _type >> "yield")} else {2};
if ((_knives select 0) == "ItemKnifeBlunt") then {_qty = round(_qty / 2);};

if (local _body) then {
	[_body,_qty] spawn local_gutObject; //leave as spawn (sleeping in loops will work but can freeze the script)
} else {
	PVCDZ_obj_GutBody =[_body,_qty];
	publicVariable "PVCDZ_obj_GutBody";
};

["knives",0.2] call fn_dynamicTool;

call {
	if (_isZombie) exitWith {
		// Reduce humanity for gutting zeds
		local _humanity = player getVariable ["humanity",0];
		player setVariable ["humanity",(_humanity - 10),true];
		_string = format[localize "str_success_gutted_zombie",_text]; //%1 has been gutted, zombie parts are now on the carcass
	};
	
	if (_isMutant) exitWith {
		_string = format[localize "str_success_gutted_mutant",_text];
	};
	
	_string = format[localize "str_success_gutted_animal",_text,_qty]; // default is gut animal
};

closeDialog 0;
uiSleep 0.02;
_string call dayz_rollingMessages;

dayz_actionInProgress = false;
