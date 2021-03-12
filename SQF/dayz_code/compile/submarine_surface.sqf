local _vehicle = _this select 0;
local _unit = _this select 2;
local _driver = driver _vehicle;

if (!(isNull _driver) && {_driver != _unit}) exitwith {};

while {_vehicle isKindOf "Submarine_DZE_base"} do {
	local _pos = getposATL _vehicle;
	if (((_vehicle animationphase "dive") > 0.5) && {(_pos select 2) < 10}) then {
		_vehicle animate ["dive", 0];
	};
	uisleep 1;
};