if(!DZE_ActionInProgress) exitWith {};
//Build an array of various variables gathered about build object from config files, only applies to legit buildable objects
private ["_passArray","_classname","_classnametmp","_require","_text","_ghost","_lockable","_requireplot","_isAllowedUnderGround","_offset","_isPole","_isLandFireDZ"];

_passArray = [];

_classname = getText (configFile >> "CfgMagazines" >> DZE_buildItem >> "ItemActions" >> "Build" >> "create");
_classnametmp = _classname;
_require = getArray (configFile >> "cfgMagazines" >> DZE_buildItem >> "ItemActions" >> "Build" >> "require");
_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_ghost = getText (configFile >> "CfgVehicles" >> _classname >> "ghostpreview");

_lockable = 0; //default define if lockable not found in config file below
if(isNumber (configFile >> "CfgVehicles" >> _classname >> "lockable")) then { //find out if item is lockable object
	_lockable = getNumber(configFile >> "CfgVehicles" >> _classname >> "lockable"); // 2=lockbox, 3=combolock, 4=safe
};

_requireplot = DZE_requireplot; //check for plotpole requirements defined in init.sqf
if(isNumber (configFile >> "CfgVehicles" >> _classname >> "requireplot")) then {
	_requireplot = getNumber(configFile >> "CfgVehicles" >> _classname >> "requireplot");
};

_isAllowedUnderGround = 1; //check if allowed to build under terrain
if(isNumber (configFile >> "CfgVehicles" >> _classname >> "nounderground")) then {
	_isAllowedUnderGround = getNumber(configFile >> "CfgVehicles" >> _classname >> "nounderground");
};

_offset = 	getArray (configFile >> "CfgVehicles" >> _classname >> "offset"); //check default distance offset, define if does not exist
if((count _offset) <= 0) then {
	_offset = [0,1.5,0];
};

_isPole = (_classname == "Plastic_Pole_EP1_DZ"); //check if item is plotpole
_isLandFireDZ = (_classname == "Land_Fire_DZ"); //check if item is campfire

_passArray = [_classname,_classnametmp,_require,_text,_ghost,_lockable,_requireplot,_isAllowedUnderGround,_offset,_isPole,_isLandFireDZ]; //create new array to pass to caller

_passArray //[string,string,array,string,string,int,int,int,array,bool,bool] 

