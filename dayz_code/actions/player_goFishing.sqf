/*
Fishing 1.0
spawn player_goFishing;
DayZ Epoch - By: [VB]AWOL
*/

private ["_itemOut","_position","_isOk","_counter"];

if(TradeInprogress) exitWith { cutText ["Fishing already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

call gear_ui_init;

// find position 5m in front of player
_position = player modeltoworld [0,5,0];

if(!(surfaceIsWater _position)) exitWith {TradeInprogress = false; cutText ["Must be near a shore or on a boat to fish." , "PLAIN DOWN"]; };
if(dayz_isSwimming) exitWith {TradeInprogress = false; cutText [localize "str_player_26", "PLAIN DOWN"]; };
if(player getVariable["combattimeout", 0] >= time) exitWith {TradeInprogress = false; cutText ["Canceled Fishing.", "PLAIN DOWN"];};

_isOk = true;
_counter = 0;

// swing fishingpole
player playActionNow "GestureSwing";
// Alert zeds
[player,10,true,(getPosATL player)] spawn player_alertZombies;

r_interrupt = false;

while {_isOk} do {

	if (r_interrupt or (player getVariable["combattimeout", 0] >= time)) then {
		_isOk = false;
		cutText ["Canceled Fishing.", "PLAIN DOWN"];
	} else {
		
		sleep 2;

		// TODO: increase chance the deaper the water.

		// 1% chance to catch anything
		if((random 100) <= 1) then {
			// Just the one fish for now
			_itemOut = ["ItemTrout","ItemTrout","ItemTrout","ItemTrout","ItemTrout","ItemTrout","ItemTrout","ItemSeaBass","ItemSeaBass","ItemTuna"] call BIS_fnc_selectRandom;
			player addMagazine _itemOut;
			cutText ["You caught a fish.", "PLAIN DOWN"];
			_isOk = false;
		} else {
			cutText ["Nibble... Nibble...", "PLAIN DOWN"];
			_counter = _counter + 1;
			if(_counter == 5) then {
				_isOk = false;
				sleep 2;
				cutText ["You didn't catch anything.", "PLAIN DOWN"];
			};
		};
	};
};
TradeInprogress = false;