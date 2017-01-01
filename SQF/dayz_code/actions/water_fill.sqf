#include "\z\addons\dayz_code\util\player.hpp"

private ["_canFill","_water","_filled","_posASL","_posATL"];

call gear_ui_init;
closeDialog 0;

if Player_IsOnLadder() exitWith { (localize "str_player_21") call dayz_rollingMessages; };

_posASL = getPosASL player;
_posATL = ASLtoATL _posASL;

_canFill = switch true do {
	//Return: [nearWaterHole, isPond]
	case (count nearestObjects [_posATL,["Land_pumpa","Land_Barrel_water"],4] > 0): {[true,false]}; //"Land_water_tank" has no spout or opening, doesn't make sense to include
	case (toLower worldName == "chernarus"): {(call fn_nearWaterHole)};
	//Slow searches for maps without waterHoleProxy objects added yet
	case ({["_well",str _x] call fnc_inString} count nearestObjects [_posATL,[],4] > 0): {[true,false]};
	case ({["pond",str _x] call fnc_inString && {_posASL select 2 < ((getPosASL _x) select 2)}} count nearestObjects [player,[],50] > 0): {[true,true]};
	default {[false,false]};
};

if !(_canFill select 0) exitWith {
	localize "str_player_20" call dayz_rollingMessages;
};

//Check if water source is infected only for ponds
_water = if (dayz_infectiousWaterholes && {_canFill select 1} && {count nearestObjects [_posATL,["Body","Body1","Body2","Mass_grave"],50] > 0}) then {"infected"} else {"safe"};
_water = "containerwater" + _water;
_filled = 0;

{
	if (isText (configFile >> "CfgMagazines" >> _x >> _water)) then
	{
		if (_filled < 1) then
		{
			if (!dayz_isSwimming) then
			{
				player playActionNow "PutDown";
			};
		};
		
		_filled = _filled + 1;
		
		player removeMagazine _x;
		player addMagazine getText (configFile >> "CfgMagazines" >> _x >> _water);
	};
}
foreach magazines player;

if (_filled > 0) then {
	[player, "fillwater", 0, false, 5] call dayz_zombieSpeak;
	[player, 5, true, _posATL] call player_alertZombies;
	format [localize "str_player_01", _filled] call dayz_rollingMessages;
} else {
	localize "str_player_02" call dayz_rollingMessages;
};