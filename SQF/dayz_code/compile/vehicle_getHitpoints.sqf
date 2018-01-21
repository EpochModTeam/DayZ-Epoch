private ["_cfgHitPoints", "_hps"];
_cfgHitPoints = configFile >> "CfgVehicles" >> (typeOf _this) >> "HitPoints";
_hps = [];

_funcGetHitPoints = 
{
	for "_i" from 0 to ((count (_this select 1)) - 1) do 
	{
		private ["_hp"];
		_hp = configName ((_this select 1) select _i);
		
		if (!(_hp in _hps)) then 
		{
			_HPCheck = (_this select 0) getHit (getText((_this select 1) >> _hp >> "name"));
			if (!isNil "_HPCheck") then {
				_hps set [count _hps, _hp];
			};
		};
	};
};

while {(configName _cfgHitPoints) != ""} do 
{
	[_this, _cfgHitPoints] call _funcGetHitPoints;
	_cfgHitPoints = inheritsFrom _cfgHitPoints;
};

_hps