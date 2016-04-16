/*
Description:
Checks whether the player has the required tools equipped or not
and displays a message if a tool is missing from the tool belt.

Parameter(s):
_this: <array> list of tool names the player is required to have

Returns:
Boolean (true if the player has all required tools)
    
How to use:
_hasTools = ["ItemToolbox", "ItemCrowbar"] call player_hasTools;
*/
private ["_tools","_items","_hasTools","_missing"];
_tools = _this;
_items = items player; // weapons player
_hasTools = true;
{
	if (!(_x in _items)) exitWith {
		_hasTools = false;
		_missing = getText (configFile >> "cfgWeapons" >> _x >> "displayName");
		format[localize "STR_EPOCH_PLAYER_137",_missing] call dayz_rollingMessages;
	};
} count _tools;
_hasTools
