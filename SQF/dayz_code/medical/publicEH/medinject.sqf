// animHealed.sqf

private ["_array","_unit","_medic","_item"];
_array = _this; //_this select 0;
_unit = _array select 0;
_medic = _array select 1;
_item = _array select 2;

_medic playMove "AinvPknlMstpSnonWrflDnon_medic1";