private ["_qty","_started","_finished","_animState","_isMedic","_abort","_fillCounter","_dis","_sfx"];

if(TradeInprogress) exitWith { cutText ["Fill Jerry already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

player removeAction s_player_fillfuel;
s_player_fillfuel = 1;

_fillCounter = 0;
_abort = false;

_qty = {_x == "ItemJerrycanEmpty"} count magazines player;

for "_x" from 1 to _qty do {
	
	_fillCounter = _fillCounter + 1;

	if(_qty == 1) then {
		cutText ["Preparing to siphon, stand still to fill empty jerry can.", "PLAIN DOWN"];
	} else {
		cutText [format[("Preparing to siphon, stand still to fill empty jerry can %1 of %2."),_fillCounter,_qty] , "PLAIN DOWN"];
	};

	// force animation 
	player playActionNow "Medic";
	// Play sound and alert zombies
	
	_dis=10;
	_sfx = "refuel";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
	[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

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
		sleep 0.1;
	};
	r_doLoop = false;

	if (!_finished) exitWith { 
		r_interrupt = false;
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
		cutText ["Canceled siphon." , "PLAIN DOWN"];
		_abort = true;
	};

	if (_finished) then {

		if ("ItemJerrycanEmpty" in magazines player) then {
	
			player removeMagazine "ItemJerrycanEmpty";
			player addMagazine "ItemJerrycan";

			cutText [format[(localize  "str_player_09"),1], "PLAIN DOWN"];
		} else {
			cutText [(localize "str_player_10") , "PLAIN DOWN"];
			_abort = true;
		};
	}; 

	sleep 1;
	if(_abort) exitWith {};
};

s_player_fillfuel = -1;
TradeInprogress = false;