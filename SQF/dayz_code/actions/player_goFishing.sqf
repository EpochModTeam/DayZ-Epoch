/*
	DayZ Fishing
	Usage: spawn player_goFishing;
	Made for DayZ Mod please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_itemOut","_position","_isOk","_counter","_rnd","_item","_itemtodrop","_vehicle","_inVehicle"];

if(TradeInprogress) exitWith { cutText ["\n\nFishing already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

call gear_ui_init;

// find position 5m in front of player
_position = player modeltoworld [0,5,0];
if(!(surfaceIsWater _position)) exitWith {TradeInprogress = false; cutText ["\n\nMust be near a shore or on a boat to fish." , "PLAIN DOWN"]; };

if((currentWeapon player) != "MeleeFishingPole") exitWith {TradeInprogress = false; cutText ["\n\nFishing pole needs to be in your hand to fish.", "PLAIN DOWN"]; };

if(dayz_isSwimming) exitWith {TradeInprogress = false; cutText [localize "str_player_26", "PLAIN DOWN"]; };
if(player getVariable["combattimeout", 0] >= time) exitWith {TradeInprogress = false; cutText ["\n\nCanceled Fishing.", "PLAIN DOWN"];};

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
		cutText ["\n\nCanceled Fishing.", "PLAIN DOWN"];
	} else {
		
		sleep 2;

		_rnd = 100;

		// check if player is in boat
		_vehicle = vehicle player;
		_inVehicle = (_vehicle != player);
		if(_inVehicle) then {
			if(_vehicle isKindOf "Ship") then {
				_rnd = 50;
			};
		};

		// 1% chance to catch anything
		if((random _rnd) <= 1) then {
			// Just the one fish for now
			_itemOut = ["ItemTrout","ItemTrout","ItemTrout","ItemTrout","ItemTrout","ItemTrout","ItemTrout","ItemSeaBass","ItemSeaBass","ItemTuna"] call BIS_fnc_selectRandom;
			
			if(_inVehicle) then { 
				_item = _vehicle;
				_itemtodrop = _itemOut;
				_item addMagazineCargoGlobal [_itemtodrop,1];
			} else {
				player addMagazine _itemOut;
			};
			
			cutText ["\n\nYou caught a fish.", "PLAIN DOWN"];
			_isOk = false;
		} else {
			cutText ["\n\nNibble... Nibble...", "PLAIN DOWN"];
			_counter = _counter + 1;
			if(_counter == 5) then {
				_isOk = false;
				sleep 2;
				cutText ["\n\nYou didn't catch anything.", "PLAIN DOWN"];
			};
		};
	};
};
TradeInprogress = false;