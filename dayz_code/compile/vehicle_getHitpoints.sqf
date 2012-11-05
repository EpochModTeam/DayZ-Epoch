private ["_cfgHitPoints", "_hps", "_funcGetHitPoints"];
_cfgHitPoints = configFile >> "CfgVehicles" >> (typeOf _this) >> "HitPoints";
_hps = [];

_funcGetHitPoints = 
{
	for "_i" from 0 to ((count _this) - 1) do 
	{
		private ["_hp"];
		_hp = configName (_this select _i);
		
		if (!(_hp in _hps)) then 
		{
			_hps set [count _hps, _hp];
		};
	};
};

//Explore inheritance structure fully
while {(configName _cfgHitPoints) != ""} do 
{
	_cfgHitPoints call _funcGetHitPoints;
	_cfgHitPoints = inheritsFrom _cfgHitPoints;
};

_hps