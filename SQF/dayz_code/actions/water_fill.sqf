private ["_filled","_canFill","_infected","_item"];
#include "\z\addons\dayz_code\util\player.hpp"

call gear_ui_init;
closeDialog 0;

if Player_IsOnLadder() exitWith {localize "str_player_21" call dayz_rollingMessages;};

_infected = false;
_canFill = false;

_canFill = count nearestObjects [player, ["Land_pumpa","Land_water_tank","Land_Barrel_water","waterholeproxy"], 4] > 0;

if (!_canFill) then { // Fall back to the wider search if we can't find it
	_canfill = count nearestObjects [player, ["waterholeproxy"], 50] > 0;
};

if (!_canFill) exitWith {localize "str_player_20" call dayz_rollingMessages};

_infected = count nearestObjects [player,["grave"],50] > 0;

if (!dayz_isSwimming) then {player playActionNow "PutDown";};

[player,5,true,getPosATL player] call player_alertZombies;
[player,"fillwater",0,false,5] call dayz_zombieSpeak;

_filled = 0;

{
	if (isText (configFile >> "CfgMagazines" >> _x >> "containerWater")) then {
		_filled = _filled + 1;
		_item = "containerWater";
		
		player removeMagazine _x;
		if (!_infected) then {
			if ([0.03] call fn_chance) then {_item = "containerWaterInfected";};
		} else {
			if ([0.06] call fn_chance) then {_item = "containerWaterInfected";};
		};
		player addMagazine getText (configFile >> "CfgMagazines" >> _x >> _item);
	}
} forEach magazines player;

if (_filled > 0) then {
	format [localize "str_player_01", _filled] call dayz_rollingMessages;
} else {
	localize "str_player_02" call dayz_rollingMessages;
};