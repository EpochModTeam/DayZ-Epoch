_dog = 		_this select 0;
_array = 	_this select 3;
_handle = 	_array select 0;
_type = 	_array select 1;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

player playActionNow "PutDown";

switch (_type) do {
	case 0: {
		player removeMagazine "FoodSteakRaw";
		_handle setFSMVariable ["_hunger",0];
	};
	case 1: {
		player removeMagazine "ItemWaterbottle";
		player addMagazine "ItemWaterbottleUnfilled";
		_handle setFSMVariable ["_hunger",0];	
	};
};