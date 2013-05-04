private ["_item","_isOk","_i","_objName","_objInfo","_lenInfo","_started","_finished","_sfx","_dis","_animState","_isMedic","_proceed","_counter","_objType","_limit","_itemOut","_countOut","_tree","_distance2d","_distance3d","_trees","_findNearestTree"];

if(TradeInprogress) exitWith { cutText ["Fishing already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

_item = _this;
call gear_ui_init;

// find position in front of player
_position = player modeltoworld [0,5,0];

if(!(surfaceIsWater _position)) exitWith { TradeInprogress = false; cutText ["Must be near a shore or on a boat to fish." , "PLAIN DOWN"]; };

player playActionNow "Medic";
[player,20,true,(getPosATL player)] spawn player_alertZombies;
	
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
		[player,"fillwater",0,false] call dayz_zombieSpeak;
	};
	if (r_interrupt) then {
		r_doLoop = false;
	};
	sleep 0.1;
};

if (_finished) then {

	_itemOut = "FoodCanSardines"; // TODO replace with random raw fishes
	_countOut = round(random 4);
			
	for "_x" from 1 to _countOut do {
		player addMagazine _itemOut;
	};
	cutText [format["You caught %1 fish.", _countOut], "PLAIN DOWN"];

} else {
	r_interrupt = false;
	[objNull, player, rSwitchMove,""] call RE;
	player playActionNow "stop";
	cutText ["Canceled Fishing.", "PLAIN DOWN"];
};
TradeInprogress = false;