//------------------
// Authors: Peter Morrison (snYpir) & Philipp Pilhofer (raedor)
// Purpose: Checks if a position lies within an angle sector
// Arguments: [<center position>,<center angle of sector>,<sector width>,<position>]
// Return: boolean
//
/*
	Returns true if <position> lies within the sector defined by <center position>,
	<center angle of sector> && <sector width>. Use this function to determine if
	a position lies within a certain angle from another position (ie the <center position>). 
	Example:
	[position player,getdir player,30,position enemy_tank] call BIS_fnc_inAngleSector
	will return true if the vehicle named enemy_tank is within 30 degrees of where the player is pointing.
*/
// Revision History:
// 09/01/08 0.1 - First cut VBS2
//------------------


private["_dir1","_dir2","_dir3","_small","_large","_x","_y","_r"];

_r = false;

_small = (_this select 1) - ((_this select 2) / 2);
_large = (_this select 1) + ((_this select 2) / 2);

_x = ((_this select 3) select 0) - ((_this select 0) select 0);
_y = ((_this select 3) select 1) - ((_this select 0) select 1);

_dir1 = _x atan2 _y;

if (_dir1 < 0) then {_dir1 = _dir1 + 360};

_dir2 = _dir1 - 360;
_dir3 = _dir1 + 360;

if ((_dir1 >= _small && _dir1 <= _large) || (_dir2 >= _small && _dir2 <= _large) || (_dir3 >= _small && _dir3 <= _large)) then {_r = true};

_r