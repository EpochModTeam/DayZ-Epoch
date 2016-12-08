private ["_holdBreath","_turboKey"];

//Sleep required for actionKeys to update after controls dialog closes
uiSleep 1;

//Refresh keyboard_keys after controls change
if (_this) then {
	keyboard_keys = nil;
	[controlNull,1,false,false,false] call DZ_KeyDown_EH;
};
/*
//ActionKeys includes mouse button and joystick binds
_holdBreath = if (count (actionKeys "HoldBreath") > 1) then { [true,localize "STR_UI_HOLD_BREATH"] } else { [false,""] };

//Prevent easily outrunning zeds and bypassing Arma sprint fatigue (slow to normal running speed after a time) by holding turbo and spamming W
_turboKey = if (count (actionKeys "Turbo") > 0) then { [true,localize "STR_UI_HOLD_TURBO"] } else { [false,""] };

if ((_holdBreath select 0) or (_turboKey select 0)) then {
	4100002 cutRsc ["DZ_BlackScreen","PLAIN"];
	(uiNamespace getVariable "DZ_BlackScreen") displayCtrl 1 ctrlSetText format ["%1\n%2", (_holdBreath select 1), (_turboKey select 1)];
} else {
	4100002 cutText ["","PLAIN"];
};
*/