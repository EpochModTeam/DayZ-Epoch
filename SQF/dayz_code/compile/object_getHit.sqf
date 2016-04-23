_unit = _this select 0;
_hp = _this select 1;

_selection = getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "HitPoints" >> _hp >> "name");
_strH = "hit_" + (_selection);
_dam = _unit getVariable [_strH,0];

_dam