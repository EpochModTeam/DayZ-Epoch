private ["_started","_finished","_animState","_isMedic","_id","_unit","_item"];

_unit = (_this select 3) select 0;
_item = (_this select 3) select 1;

player removeMagazine _item;

_unit setVariable ["hit_legs",0];
_unit setVariable ["hit_hands",0];

if (vehicle player == player) then {
	//not in a vehicle
	player playActionNow "Medic";
};

r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;
while {r_doLoop} do {
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;
	if (_isMedic) then {
		_started = true;
	};
	if (_started and !_isMedic) then {
		r_doLoop = false;
		_finished = true;
	};
	if (r_interrupt) then {
		r_doLoop = false;
	};
	if (vehicle player != player) then {
		sleep 3;
		r_doLoop = false;
		_finished = true;
	};
	sleep 0.1;
};
r_doLoop = false;

if (_finished) then {
	if (_unit == player) then {
		//give to player, Ie the player fixed himself
		
		//Self Healing
		_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medMorphine.sqf";
	} else {
		//give to remote player, ie the player fixed another player
		
		//Give humanity reward to player giving the morphine to another player.
		if (_item in ["ItemMorphine"]) then {
			[player,50] call player_humanityChange;
		};
	};

	PVDZ_send = [_unit,"Morphine",[_unit,player]];
	publicVariableServer "PVDZ_send";
} else {
	player addMagazine _item;
	r_interrupt = false;
	[objNull, player, rSwitchMove,""] call RE;
	player playActionNow "stop";
};