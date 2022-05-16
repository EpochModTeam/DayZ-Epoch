///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Purpose: Checks if a position lies within an angle sector
//	Arguments: [<center position>, <center angle of sector>, <sector width>, <position>]
//	Return: boolean
//
//	Returns true if <position> lies within the sector defined by <center position>,
//	<center angle of sector> and <sector width>.
//
//	Example:
//	[position player, getDir player, 30, position enemy_tank] call BIS_fnc_inAngleSector
//	will return true if the vehicle named enemy_tank is within 30 degrees of where the player is pointing.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Optimized for 1.0.7.1
//
//	Transpose the rightmost radial arm to 0 degrees and calculate target direction
//	using CCW trig convention. Keep sector width to < 180 degrees when calling this function.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _source	= _this select 0;					// center position
local _width	= _this select 2;					// sector width
local _target	= _this select 3;					// target position
local _px	= (_target select 0) - (_source select 0);		// x relative
local _py	= (_target select 1) - (_source select 1);		// y relative
local _dir	= -(_px atan2 _py) + 360;				// get CCW relative angle from x,y coords
local _relDir	= (_dir + (_this select 1) + (_width * 0.5)) % 360;	// transpose target direction by source direction plus half angle sector

_relDir <= _width							// is target in angle sector?
