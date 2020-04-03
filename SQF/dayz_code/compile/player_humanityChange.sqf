private ["_change","_humanity"];
/*
	Set humanity chanages
*/

_change = _this;

_humanity = (player getVariable["humanity",0]) + _change;
player setVariable["humanity",_humanity,true];
