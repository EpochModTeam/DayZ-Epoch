if(!DZE_ActionInProgress) exitWith {};
//Check for build requirements like tools and if item is in magazines (check args to disable checks)
private ["_passArray","_missing","_hasrequireditem","_require","_hastoolweapon","_hasbuilditem","_checkMag","_checkTools","_reason"];

_require = _this select 0; //grab passed array of required items from item config function
_text = _this select 1; //grab text string passed from config
_checkMag = _this select 2; //check if item was built from magazine used in config file. Default is true. Set to false if building item from custom script
_checkTools = _this select 3; //same as above, default is true, set to false if you do not need item requirements.

_missing = "";
_hasrequireditem = true;
_reason = "ok";
_passArray = [];

{
	_hastoolweapon = _x in weapons player; //check each required item against weapons array on player
	if(!_hastoolweapon) exitWith { //if tool was not found, get missing tool's name from config
		_hasrequireditem = false; _missing = getText (configFile >> "cfgWeapons" >> _x >> "displayName");
	};
} count _require; //count each item in requirements array

_hasbuilditem = DZE_buildItem in magazines player;

_passArray = [_hasrequireditem,_reason];

if (_checkMag) then { //passed argument
	if (!_hasbuilditem) exitWith { //End script if magazine was not found
		DZE_ActionInProgress = false;
		cutText [format[(localize "str_player_31"),_text,"build"] , "PLAIN DOWN"];
		_reason = "missing item";
		_passArray
	};
};

if (_checkTools) then { //passed argument
	if (!_hasrequireditem) exitWith { //End script if required item/tool was not found
		DZE_ActionInProgress = false;
		cutText [format[(localize "str_epoch_player_137"),_missing] , "PLAIN DOWN"];
		_reason = "missing tools";
		_passArray
	};
};
_passArray //[bool,string]

