private ["_item","_type","_hasHarvested","_knifeArray","_PlayerNear","_isListed","_activeKnife","_text","_dis","_sfx","_qty","_string","_isZombie","_humanity"];

_isZombie = _this isKindOf "zZombie_base";
if (dayz_actionInProgress) exitWith {
	if (_isZombie) then {
		localize "str_epoch_player_31" call dayz_rollingMessages;
	} else {
		localize "str_epoch_player_29" call dayz_rollingMessages;
	};
};
dayz_actionInProgress = true;

_item = _this;
_type = typeOf _item;
_hasHarvested = _item getVariable["meatHarvested",false];

_knifeArray = [];

_PlayerNear = {isPlayer _x} count ((getPosATL _item) nearEntities ["CAManBase", 10]) > 1;
if (_PlayerNear) exitWith {localize "str_pickup_limit_5" call dayz_rollingMessages; dayz_actionInProgress = false;};

//Count how many active tools the player has
{
	if (_x IN items player) then {
		_knifeArray set [count _knifeArray, _x];
	};
} count Dayz_Gutting;

if ((count _knifeArray) < 1) exitWith {
	if (_isZombie) then {
		format[localize "str_missing_to_do_this",localize "STR_EQUIP_NAME_4"] call dayz_rollingMessages;
	} else {
		localize "str_cannotgut" call dayz_rollingMessages;
	};
	dayz_actionInProgress = false;
};

if ((count _knifeArray > 0) and !_hasHarvested) then {
	//Use sharpest knife player has
	_activeKnife = _knifeArray select 0; 
	
	//Get Animal Type
	_isListed = isClass (configFile >> "CfgSurvival" >> "Meat" >> _type);
	_text = getText (configFile >> "CfgVehicles" >> _type >> "displayName");

	player playActionNow "Medic";
	_dis=10;
	_sfx = "gut";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	// Added Nutrition-Factor for work
	["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

	_item setVariable ["meatHarvested",true,true];

	_qty = if (_isListed) then {getNumber (configFile >> "CfgSurvival" >> "Meat" >> _type >> "yield")} else {2};
	if (_activeKnife == "ItemKnifeBlunt") then { _qty = round(_qty / 2); };

	if (local _item) then {
		[_item,_qty] spawn local_gutObject; //leave as spawn (sleeping in loops will work but can freeze the script)
	} else {		
		PVCDZ_obj_GutBody =[_item,_qty];
		publicVariable "PVCDZ_obj_GutBody";
		
		//if (!achievement_Gut) then {achievement_Gut = true;};
	};
	
	["knives",0.2] call fn_dynamicTool;
	
	uiSleep 6;
	if (_isZombie) then {
		// Reduce humanity for gutting zeds
		_humanity = player getVariable ["humanity",0];
		_humanity = _humanity - 10;
		player setVariable ["humanity",_humanity,true];
		_string = format[localize "str_success_gutted_zombie",_text]; //%1 has been gutted, zombie parts are now on the carcass
	} else {
		_string = format[localize "str_success_gutted_animal",_text,_qty];
	};
	closeDialog 0;
	uiSleep 0.02;
	_string call dayz_rollingMessages;
};
dayz_actionInProgress = false;