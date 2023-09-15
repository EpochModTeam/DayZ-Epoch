 /*
   * AII module light system
   * intensity variable DZE_ObjectA2lightIntensity (RECOMMENDED VALUE = 0.10, 0 = off (dark), 1 = fully on (not recommended))
   * 
   * AII module SFX system
   * parallel procedure to the light system
   * enabling / disabling environment sounds
   * ominous sound effect
  */

local _showText = _this select 0;
local _status = _this select 1;
DZE_AII_Lights = [];

// Do not show message when player changes clothes in object A2.
if ((dayz_lastClothesChange + 3 > diag_tickTime) || {(player distance respawn_west_original < 100)}) then {
	_showText = false;
};

if (_status == "enter") then {
	if (_showText) then {
		localize "STR_OBJECTA2_ENTER" call dayz_rollingMessages;
	};
	
	enableEnvironment false;
	
	// create light sources
	{
		local _light = "#LightPoint" createVehicleLocal _x;
		_light setLightBrightness DZE_ObjectA2lightIntensity;
		_light setLightAmbient [0.5, 0.5, 0.5];
		_light setLightColor [1.0, 1.0, 1.0];
		_light setPos _x;
		DZE_AII_Lights = DZE_AII_Lights + [_light];
	} count [[4978.8086,6630.834,0],[4983.9385,6614.6343,0],[4975.1152,6606.9126,0]];
	
	// Four second sound effect gets repeated until leaving.
	[] spawn {
		while {count DZE_AII_Lights > 0} do {
			playSound "ns_fx_aii_underground";
			uiSleep 4;
		};
		//diag_log "Object A2 Sound loop has ended";
	};
	
} else {
	if (_showText) then {
		localize "STR_OBJECTA2_LEAVE" call dayz_rollingMessages;
	};

	// remove light sources
	{
		_x setLightBrightness 0;
		deleteVehicle _x;
	} count DZE_AII_Lights;

	DZE_AII_Lights = [];
	enableEnvironment true;
};