private["_hasKnife","_qty","_item","_text","_string","_type","_loop","_meat","_timer"];
_item = _this select 3;
_hasKnife = 	"ItemKnife" in items player;
_type = typeOf _item;
_hasHarvested = _item getVariable["meatHarvested",false];
_config = 		configFile >> "CfgSurvival" >> "Meat" >> _type;

player removeAction s_player_butcher;
s_player_butcher = -1;

if (_hasKnife and !_hasHarvested) then {
	//Get Animal Type
	_loop = true;	
	_isListed =		isClass (_config);
	_text = getText (configFile >> "CfgVehicles" >> _type >> "displayName");
	
	player playActionNow "Medic";
	[player,"gut",0,false] call dayz_zombieSpeak;
	_item setVariable["meatHarvested",true,true];
	
	_qty = 1;	
	if (_isListed) then {
		_qty =	getNumber (_config >> "yield");
	};
	
	_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;
	
	_array = [_item,_qty];
	
	if (local _item) then {
		_array spawn local_gutObject;
	} else {
		dayzGutBody = _array;
		publicVariable "dayzGutBody";
	};
	
	sleep 6;
	_string = format[localize "str_success_gutted_animal",_text,_qty];
	cutText [_string, "PLAIN DOWN"];
};