private ["_skin","_rnd","_rounded","_itemtocreate","_i","_config","_result"];

_skin = _this;
_config = configFile >> "CfgMagazines" >> _skin;
_itemtocreate = getText (_config >> "Craftoutput");

_rnd = random 3;
_rounded = round _rnd;
call gear_ui_init;
closeDialog 0;

//Tear the clothes
player playActionNow "Medic";
[player,"bandage",0,false] call dayz_zombieSpeak;
uiSleep 6;
if !(_skin in magazines player) exitWith {localize "str_tear_clothes_0" call dayz_rollingMessages;};
player removeMagazine _skin;

switch (_rounded) do {
	case 0: {
		localize "str_tear_clothes_0" call dayz_rollingMessages;
	};
	case 1: {
		localize "str_tear_clothes_1" call dayz_rollingMessages;
	};
	case 2: {
		localize "str_tear_clothes_2" call dayz_rollingMessages;
	};
	case 3: {
		localize "str_tear_clothes_3" call dayz_rollingMessages;
	};
};

//Remove melee magazines (BIS_fnc_invAdd fix)
false call dz_fn_meleeMagazines;
_i = 0;
while {_i < _rounded} do {
	_i = _i + 1; 
	_result = [player,_itemtocreate] call BIS_fnc_invAdd;
	
	if (_rnd < 0.5) then {
		 [player,"equip_string"] call BIS_fnc_invAdd;
	};
	uiSleep 0.03;
	
	if (!_result) then {
		systemchat (localize ("str_tear_clothes_noroom"));
		[_itemtocreate,1,1] call fn_dropItem;
	};
};
true call dz_fn_meleeMagazines;