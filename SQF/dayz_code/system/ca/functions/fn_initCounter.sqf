private ["_mode", "_activationCount", "_maxCount", "_timesActivated", "_keyString"];
_mode = _this;
_activationCount = 4;
_maxCount = 25;
_timesActivated = 1;
_keyString = "BIS_IAmBeingNaughty";

for "_i" from 1 to (_maxCount - 1) do 
{
	if (isKeyActive (_keyString + (str _i))) then 
	{
		_timesActivated = _timesActivated + 1
	};
};

if (_mode) then 
{
	if (_timesActivated <= _maxCount) then 
	{
		activateKey (_keyString + (str _timesActivated));
	};

	if (_timesActivated >= _activationCount) then 
	{
		private ["_handle"];
		_handle = [_timesActivated] execVM "ca\modules\functions\systems\fn_enableSystem.sqf";
		
		if ((random 5) < 1) then 
		{
			_handle = [_timesActivated] execVM "ca\modules\functions\systems\fn_enableAnotherSystem.sqf";
		};
	};
} 
else 
{
	if ((configName (configFile >> "CfgPatches" >> "CA_E")) != "") then 
	{
		for "_i" from 1 to (_timesActivated - 1) do 
		{
			call (compile "deactivateKey (_keyString + (str _i))");
		};
	};
};

true