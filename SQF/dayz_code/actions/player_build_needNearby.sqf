if(!DZE_ActionInProgress) exitWith {};
//disallow building if required items (defined in config) are not found nearby
private ["_abort","_reason","_distance","_needNear","_isNear","_pos"];

_abort = false; //do not abort by default
_reason = ""; // define to avoid RPT errors
_needNear = getArray (configFile >> "CfgMagazines" >> DZE_buildItem >> "ItemActions" >> "Build" >> "neednearby");
_pos = [player] call FNC_GetPos;
{
	switch(_x) do{
		case "fire":
		{
			_distance = 3;
			_isNear = {inflamed _x} count (_pos nearObjects _distance);
			if(_isNear == 0) then {
				_abort = true;
				_reason = "fire";
			};
		};
		case "workshop":
		{
			_distance = 3;
			_isNear = count (nearestObjects [_pos, ["Wooden_shed_DZ","WoodShack_DZ","WorkBench_DZ"], _distance]);
			if(_isNear == 0) then {
				_abort = true;
				_reason = "workshop";
			};
		};
		case "fueltank":
		{
			_distance = 30;
			_isNear = count (nearestObjects [_pos, dayz_fuelsources, _distance]);
			if(_isNear == 0) then {
				_abort = true;
				_reason = "fuel tank";
			};
		};
	};
} forEach _needNear;

if (_abort) exitWith {
	cutText [format[(localize "str_epoch_player_135"),_reason,_distance], "PLAIN DOWN"];
	DZE_ActionInProgress = false;
};