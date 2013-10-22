// noDamage.sqf

private ["_unit"];
_unit = _this select 0;

_unit setCaptive 3;
_unit switchMove "AmovPpneMstpSnonWnonDnon_healed"; 
_unit allowDamage false; 
 sleep 0.01;