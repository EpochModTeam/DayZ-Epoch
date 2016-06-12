private ["_plots","_friendlies","_thePlot"];
lbClear 7102;	
_friends = TheDoor getVariable ["doorfriends",[]];
{
	lbAdd [7102, (_x select 1)];
} forEach _friends;
