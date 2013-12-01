// allowDamage.sqf

private ["_unit"];
_unit = _this select 0;

_unit switchMove "AmovPpneMstpSnonWnonDnon_healed"; 
_unit allowDamage true; 
_unit setCaptive false;