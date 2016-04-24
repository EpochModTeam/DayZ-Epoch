private["_flare","_text"];

_flare = _this select 3;
player playActionNow "PutDown";
uiSleep 2;
_flare attachTo [player,[0,0,0],"granat2"];
[_flare, -90, -10] call object_setpitchbank;
[_flare] call FNC_GetSetPos;
_flare setVariable ["owner",player,true];
player removeAction s_player_grabflare;
player removeAction s_player_removeflare;
dayz_hasLight = true;

//Add Drop Action
_text = getText (configFile >> "CfgAmmo" >> (typeOf _flare) >> "displayName");
s_player_dropflare = player addAction [format[localize "str_actions_medical_16",_text], "\z\addons\dayz_code\actions\flare_drop.sqf",_flare, 1, false, true, "", ""];

while {(alive _flare) and dayz_hasLight} do {
	uiSleep 0.1;
};
if (dayz_hasLight) then {
	dayz_hasLight = false;
	player removeAction s_player_dropflare;
	s_player_grabflare = -1;
	s_player_removeflare = -1;
};
