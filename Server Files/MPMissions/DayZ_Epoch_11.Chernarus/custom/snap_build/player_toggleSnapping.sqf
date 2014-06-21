/*
Build Snapping - Extended v1.6

Idea and first code:
Maca

Reworked by: OtterNas3
01/11/2014
Last update 02/20/2014
*/

if (SnappingEnabled) then {
	SnappingEnabled = false;
	SnappingAttachedToPlayer = false;
	systemChat ("Snapping - DISABLED");
} else {
	SnappingEnabled = true;
	systemChat ("Snapping - ENABLED");
};