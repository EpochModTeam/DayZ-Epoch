/*
	Adds a marker for Major Missions. Only runs once.
	DZMSMarkerLoop.sqf keeps this marker updated.
	Usage: [coordinates,missionname]
*/
private["_nul","_nil"];
DZMSMinCoords = _this select 0;
DZMSMinName = _this select 1;

_nul = createMarker ["DZMSMinMarker", DZMSMinCoords];
"DZMSMinMarker" setMarkerColor "ColorRed";
"DZMSMinMarker" setMarkerShape "ELLIPSE";
"DZMSMinMarker" setMarkerBrush "Grid";
"DZMSMinMarker" setMarkerSize [150,150];
_nil = createMarker ["DZMSMinDot", DZMSMinCoords];
"DZMSMinDot" setMarkerColor "ColorBlack";
"DZMSMinDot" setMarkerType "Vehicle";
"DZMSMinDot" setMarkerText DZMSMinName;