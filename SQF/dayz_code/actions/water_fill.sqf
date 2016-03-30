#include "\z\addons\dayz_code\util\player.hpp"

private ["_water","_filled","_canFill","_infected","_well"];

call gear_ui_init;
closeDialog 0;

if Player_IsOnLadder() exitWith { (localize "str_player_21") call dayz_rollingMessages; };

_water = call
{
	private ["_canFill", "_infected"];
	
	_canFill = count nearestObjects [player, ["Land_pumpa","Land_water_tank","Land_Barrel_water"], 4] > 0;
	
	if (_canFill) exitWith { "safe" };
	
	//Check for wells
	{
		if (["_well", str _x, false] call fnc_inString) exitWith
		{
			_canFill = true;
		};
	}
	foreach nearestObjects [player, [], 4];
	
	if (_canFill) exitWith { "safe" };
	
	_infected = false;
	
	//Check for ponds and corpses
	{
		if (!_canFill) then
		{
			if (["pond", str _x, false] call fnc_inString && {((getPosASL player) select 2) < ((GetPosASL _x) select 2)}) then
			{
				_canFill = true;
			};
		};
		
		if (!_infected) then
		{
			if (["dead", str _x, false] call fnc_inString || {["massgrave", str _x, false] call fnc_inString}) then
			{
				_infected = true;
			};
		};
		
		if (_canFill && {_infected}) exitWith {};
	}
	foreach nearestObjects [player, [], 50];
	
	if (!_canFill) exitWith { nil };
	
	if (_infected) exitWith { "infected" };
	
	""
};

if (isNil "_water") exitWith
{
	(localize "str_player_20") call dayz_rollingMessages;
};

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
			
			[player, "fillwater", 0, false, 5] call dayz_zombieSpeak;
			[player, 5, true, getPosATL player] call player_alertZombies;
		};
		
		_filled = _filled + 1;
		
		player removeMagazine _x;
		player addMagazine getText (configFile >> "CfgMagazines" >> _x >> _water);
	};
}
foreach magazines player;

if (_filled > 0)
then { (format [localize "str_player_01", _filled]) call dayz_rollingMessages; }
else { (localize "str_player_02") call dayz_rollingMessages; };