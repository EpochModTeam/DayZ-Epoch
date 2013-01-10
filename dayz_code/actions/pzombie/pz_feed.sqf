private["_item","_id","_regen","_isAnimal","_animalType","_isMan","_config","_isListed","_qty"];
_item = _this select 3;

player removeAction s_player_butcher;

_item setDammage 1;

// wait until dead
waitUntil {not alive _item};

s_player_butcher = -1;

// player playActionNow "PutDown";
_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;

[player,"gut",0,false] call dayz_zombieSpeak;

_item setVariable["meatHarvested",true,true];

sleep 1;

_regen = 200;

_isAnimal = _item isKindOf "Animal";
_animalType = typeOf _item;
_isMan = _item isKindOf "Man";

if(_isAnimal) then {
	_config = 		configFile >> "CfgSurvival" >> "Meat" >> _animalType;
	_isListed =		isClass (_config);

	_qty = 1;	
	if (_isListed) then {
		_qty =	getNumber (_config >> "yield");
		_regen = _qty * 200;
	};

} else {

	if(_isMan) then { 
		_regen == 12000; 
	};
};


r_player_blood = r_player_blood + _regen;
if (r_player_blood > r_player_bloodTotal) then {
	r_player_blood = r_player_bloodTotal;
};

player setVariable ["messing",[dayz_hunger,dayz_thirst],true];
player setVariable["USEC_BloodQty",r_player_blood,true];
player setVariable["medForceUpdate",true];

dayz_lastDrink = time;
dayz_thirst = 0;

dayz_lastMeal =	time;
dayz_hunger = 0;

dayzPlayerSave = player;
publicVariableServer "dayzPlayerSave";
if (isServer) then {
	dayzPlayerSave call server_updatePlayer;
};

[player,"eat",0,false] call dayz_zombieSpeak;

// todo: dump loot on ground and then remove

//Ensure Control is visible
_display = uiNamespace getVariable 'DAYZ_GUI_display';
_control = 	_display displayCtrl 1301;
_control ctrlShow true;

_bloodVal =		r_player_blood / r_player_bloodTotal;
if (_bloodVal >= 0.2) then {
	_ctrlBlood ctrlShow true;
};

//Ensure Control is visible
_display = uiNamespace getVariable 'DAYZ_GUI_display';
_control = 	_display displayCtrl 1302;
_control ctrlShow true;

// Remove body 
dayzHideBody = _item;
publicVariable "dayzHideBody";
hideBody _item;

cutText [format[(localize  "str_player_consumed"),_item, "PLAIN DOWN"];

sleep 10;
deleteVehicle _item;