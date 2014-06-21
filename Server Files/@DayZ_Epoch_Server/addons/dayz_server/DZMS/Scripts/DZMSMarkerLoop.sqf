/*
	Marker Resetter by Vampire
	Marker Resetter checks if a Mission is running and resets the marker for JIPs
*/
private["_run","_nul","_nil"];

diag_log text format ["[DZMS]: Mission Marker Loop for JIPs Starting!"];

//Lets define these
if (isNil "DZMSMajCoords")then{DZMSMajCoords = [0,0,0];};
if (isNil "DZMSMinCoords")then{DZMSMinCoords = [0,0,0];};

//Lets start the timer
_run = true;
while {_run} do
{
    [25,5] call DZMSSleep; // sleep 25 seconds
	//If the marker exists (meaning the mission is active) lets delete it and re-add it
	if (!(getMarkerColor "DZMSMajMarker" == "")) then {
		deleteMarker "DZMSMajMarker";
		deleteMarker "DZMSMajDot";
		//Re-Add the markers
		_nul = createMarker ["DZMSMajMarker", DZMSMajCoords];
		"DZMSMajMarker" setMarkerColor "ColorRed";
		"DZMSMajMarker" setMarkerShape "ELLIPSE";
		"DZMSMajMarker" setMarkerBrush "Grid";
		"DZMSMajMarker" setMarkerSize [175,175];
		_zap = createMarker ["DZMSMajDot", DZMSMajCoords];
		"DZMSMajDot" setMarkerColor "ColorBlack";
		"DZMSMajDot" setMarkerType "Vehicle";
		"DZMSMajDot" setMarkerText DZMSMajName;
	};
	//Lets do the same for the minor mission
	if (!(getMarkerColor "DZMSMinMarker" == "")) then {
		deleteMarker "DZMSMinMarker";
		deleteMarker "DZMSMinDot";
		//Re-Add the markers
		_nil = createMarker ["DZMSMinMarker", DZMSMinCoords];
		"DZMSMinMarker" setMarkerColor "ColorRed";
		"DZMSMinMarker" setMarkerShape "ELLIPSE";
		"DZMSMinMarker" setMarkerBrush "Grid";
		"DZMSMinMarker" setMarkerSize [150,150];
		_zip = createMarker ["DZMSMinDot", DZMSMinCoords];
		"DZMSMinDot" setMarkerColor "ColorBlack";
		"DZMSMinDot" setMarkerType "Vehicle";
		"DZMSMinDot" setMarkerText DZMSMinName;
	};
	//Now we wait another 25 seconds
};