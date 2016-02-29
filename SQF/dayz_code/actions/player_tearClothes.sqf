private ["_skin","_rnd","_rounded","_itemtocreate","_i"];

_skin = _this;
_config = configFile >> "CfgMagazines" >> _skin;
_itemtocreate = getText (_config >> "Craftoutput");

_rnd = random 3;
_rounded = round _rnd;
call gear_ui_init;
closeDialog 0;
_infoText = "";

//Tear the clothes
player playActionNow "Medic";
[player,"bandage",0,false] call dayz_zombieSpeak;
sleep 6;
player removeMagazine _skin;

switch (_rounded) do {
	case 0: {
		cutText [localize "str_tear_clothes_0", "PLAIN DOWN"];
	};
	case 1: {
		cutText [localize "str_tear_clothes_1", "PLAIN DOWN"];
	};
	case 2: {
		cutText [localize "str_tear_clothes_2", "PLAIN DOWN"];
	};
	case 3: {
		cutText [localize "str_tear_clothes_3", "PLAIN DOWN"];
	};
};

_i = 0;
while {_i < _rounded} do {
	_i = _i + 1; 
	_result = [player,_itemtocreate] call BIS_fnc_invAdd;
	
	if (_rnd < 0.5) then {
		 [player,"equip_string"] call BIS_fnc_invAdd;
	};
	sleep 0.03;
	
	if (!_result) then {
		systemchat (localize ("str_tear_clothes_noroom"));
		
		_nearByPile = nearestObjects [getPosATL player, ["WeaponHolder","WeaponHolderBase"], 2];
		_pile = if (count _nearByPile > 0) then {_nearByPile select 0};
		if (count _nearByPile == 0) then {
			_pos = player modeltoWorld [0,1,0];
			_pos set [2, 0];
			//diag_log format [ "%1 itempos:%2 _nearByPile:%3", __FILE__, _pos, _nearByPile];
			_pile = createVehicle ["WeaponHolder", _pos, [], 0.0, "CAN_COLLIDE"];
			_pile setPosATL _pos;
		};
		_pile addMagazineCargoGlobal [_itemtocreate,1];
	};
};