private ["_qty","_started","_finished","_animState","_isMedic","_abort","_fillCounter","_dis","_sfx","_displayName","_fuelCans"];

if(TradeInprogress) exitWith { cutText ["Fill Jerry already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

player removeAction s_player_fillfuel;
s_player_fillfuel = 1;

_fillCounter = 0;
_abort = false;

_fuelCans = [];

{
	if(_x == "ItemJerrycanEmpty" or _x == "ItemFuelBarrelEmpty") then {
		_fuelCans set [(count _fuelCans),_x];
	};
} forEach magazines player;

_qty = count _fuelCans;

{
	_displayName = getText (configFile >> "cfgMagazines" >> _x >> "displayName");
	
	_fillCounter = _fillCounter + 1;

	cutText [format["Preparing to siphon, stand still to fill %1.",_displayName], "PLAIN DOWN"];	
	
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
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		cutText ["Canceled siphon." , "PLAIN DOWN"];
		_abort = true;
	};

	if (_finished) then {
		if(([player,_x] call BIS_fnc_invRemove) == 1) then {
			if (_x == "ItemFuelBarrelEmpty") then {
				player addMagazine "ItemFuelBarrel";
			} else {
				player addMagazine "ItemJerrycan";
			};
			cutText [format["You have filled %1 with fuel.",_displayName], "PLAIN DOWN"];	
		} else {
			_abort = true;
		};
	}; 

	sleep 1;
	if(_abort) exitWith {};

} forEach _fuelCans;

s_player_fillfuel = -1;
TradeInprogress = false;