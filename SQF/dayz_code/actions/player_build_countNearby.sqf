// disallow building if too many objects are found within 30m (by default)
private ["_cnt"];

_cnt = count ((getPosATL player) nearObjects ["All",DZE_checkNearbyRadius]); 
if (_cnt >= DZE_BuildingLimit) exitWith { //end script if too many objects nearby
	DZE_ActionInProgress = false;
	cutText [(localize "str_epoch_player_41"), "PLAIN DOWN"];
};

_cnt //returns amount of total objects found nearby
