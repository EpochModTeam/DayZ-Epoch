private ["_nearNets","_nearNet"];

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);

_nearNets = nearestObjects [player, ["DesertLargeCamoNet", "ForestCamoNet_DZ","DesertLargeCamoNet_DZ",  "ForestLargeCamoNet_DZ"], 10];
_nearNet = _nearNets select 0;

 if (!isNull _nearNet and _canDo) then {
	 [0,1,2,_nearNet] spawn player_removeObject;
 } else {
	cutText ["No camo nets found nearby.", "PLAIN DOWN"];
 };