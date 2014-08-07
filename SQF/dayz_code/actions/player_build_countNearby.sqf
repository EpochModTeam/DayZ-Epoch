// disallow building if too many objects are found within 30m
private ["_cnt"];

_cnt = count ((getPosATL player) nearObjects ["All",30]); 
if (_cnt >= DZE_BuildingLimit) exitWith { //end script if too many objects nearby
	DZE_ActionInProgress = false;
	cutText [(localize "str_epoch_player_41"), "PLAIN DOWN"];
};

_cnt //returns amount of total objects found nearby
