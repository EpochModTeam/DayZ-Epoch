private ["_unit","_hp","_selection","_dam"];

_unit = _this select 0;
_hp = _this select 1;
_selection = getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "HitPoints" >> _hp >> "name");
_dam = _unit getHit _selection;

[_dam, _selection];
