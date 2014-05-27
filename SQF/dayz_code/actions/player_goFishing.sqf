/*
	DayZ Fishing
	Usage: spawn player_goFishing;
	Made for DayZ Mod please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_itemOut","_position","_isOk","_counter","_rnd","_item","_itemtodrop","_vehicle","_inVehicle"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_65") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

call gear_ui_init;

// find position 5m in front of player
_position = player modeltoworld [0,5,0];
if(!(surfaceIsWater _position)) exitWith {DZE_ActionInProgress = false; cutText [(localize "str_epoch_player_66") , "PLAIN DOWN"]; };

if((currentWeapon player) != "MeleeFishingPole") exitWith {DZE_ActionInProgress = false; cutText [(localize "str_epoch_player_67"), "PLAIN DOWN"]; };

if(dayz_isSwimming) exitWith {DZE_ActionInProgress = false; cutText [localize "str_player_26", "PLAIN DOWN"]; };
if(player getVariable["combattimeout", 0] >= time) exitWith {DZE_ActionInProgress = false; cutText [(localize "str_epoch_player_68"), "PLAIN DOWN"];};

_isOk = true;
_counter = 0;

// swing fishingpole
player playActionNow "GestureSwing";
// Alert zeds
[player,10,true,(getPosATL player)] spawn player_alertZombies;

r_interrupt = false;

while {_isOk} do {

	if (r_interrupt || (player getVariable["combattimeout", 0] >= time)) then {
		_isOk = false;
		cutText [(localize "str_epoch_player_68"), "PLAIN DOWN"];
	} else {
		
		sleep 2;

		_rnd = 50;

		// check if player is in boat
		_vehicle = vehicle player;
		_inVehicle = (_vehicle != player);
		if(_inVehicle) then {
			if(_vehicle isKindOf "Ship") then {
				// higher chance to catch if water is deeper than 25m
				if(((getPosATL _vehicle) select 2) > 25) then {
					_rnd = 12;
				} else {
					_rnd = 25;
				};
			};
		};


		// chance to catch anything
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
			
			cutText [(localize "str_epoch_player_69"), "PLAIN DOWN"];
			_isOk = false;
		} else {
			cutText [(localize "str_epoch_player_70"), "PLAIN DOWN"];
			_counter = _counter + 1;
			if(_counter == 10) then {
				_isOk = false;
				sleep 2;
				cutText [(localize "str_epoch_player_71"), "PLAIN DOWN"];
			};
		};
	};
};
DZE_ActionInProgress = false;