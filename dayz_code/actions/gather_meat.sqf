private["_item","_hasKnife","_hasKnifeBlunt","_hasHarvested","_qty","_text","_string","_type"];
_item = _this select 3;
_hasKnife = 	"ItemKnife" in items player;
_hasKnifeBlunt = 	"ItemKnifeBlunt" in items player;
_type = typeOf _item;
_hasHarvested = _item getVariable["meatHarvested",false];
_config = 		configFile >> "CfgSurvival" >> "Meat" >> _type;

player removeAction s_player_butcher;
s_player_butcher = -1;


if ((_hasKnife or _hasKnifeBlunt) and !_hasHarvested) then {
	//Get Animal Type
	_isListed =		isClass (_config);
	_text = getText (configFile >> "CfgVehicles" >> _type >> "displayName");
	
	player playActionNow "Medic";
	
	_dis=10;
	_sfx = "gut";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
	[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

	_item setVariable["meatHarvested",true,true];
	
	_qty = 2;	
	if (_isListed) then {
		_qty =	getNumber (_config >> "yield");
	};
	
	if (_hasKnifeBlunt) then { _qty = round(_qty / 2); };
	
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