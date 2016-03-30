/*
	Author: CarlGustaffa (modified by gammadust)

	Description:
	Returns the sun's rise in hours for the current day of the year on any island (whos latitude may differ).

	Parameters:
	None needed.

	Returns:
	Sun's rise in hours, in the same format as engine's [daytime] command (16.5 == 16:30)
	To obtain sun's set, just subtract the result from 24.

	Reference:
	http://forums.bistudio.com/showthread.php?107476-How-do-I-detect-sundown-sunrise
*/
private["_daytime"];

_lat = -1 * getNumber(configFile >> "CfgWorlds" >> worldName >> "latitude");
_day = 360 * (dateToNumber date);
_hour = acos ((24 * sin(_lat) * cos(_day)) / ((12 * cos(_day) - 78) * cos(_lat)));
_daytime = _hour / 360 * 24;
_daytime