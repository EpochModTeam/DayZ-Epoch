private ["_gen","_caller","_id","_NV","_NVOn","_index","_NV1","_NV2","_NV3","_new","_NVx","_increase","_newap"];

_gen = _this select 0;
_caller = _this select 1;
_id = _this select 2;

// _gen removeAction _id;
// array from tweaking settings
_new = _this select 3;

_NVx = _new select 0;

// get first rbg + m
_NV = player getvariable [_NVx,[0.0, 0.0, 0.0, 0.0]];
_increase = (_new select 1);
_index = 0;
{
	_NV set [_index,(_NV select _index) + _x];

	_index =_index + 1;
} count _increase;

// set rgb + m 
player setVariable [_NVx, _NV];
format["%1 %2",_NVx,_NV] call dayz_rollingMessages;

_NV = player getvariable ["NV",["OFF", 0.1]];
_NVOn = (_NV select 0);
_newap = (_NV select 1);

if(_NVOn == "ON") then {

	_NV1 = player getvariable ["NV1",[0,0,0,0]];
	_NV2 = player getvariable ["NV2",[0,0,0,0]];
	_NV3 = player getvariable ["NV3",[0,0,0,0]];

	ppEffectDestroy ppColor;
	ppEffectDestroy ppBlur;

	ppColor = ppEffectCreate ["ColorCorrections", 1999];  
	ppColor ppEffectEnable true;  
	ppColor ppEffectAdjust [1, 1, 0, _NV1, _NV2, _NV3];
	ppColor ppEffectCommit 0;

	//diag_log format ["DEBUG: Aperture : %1 First %2 Second %3 Third %4", _newap, _NV1,_NV2,_NV3];

	player setVariable ["NV", ["OFF", _newap]];
} else {
	player setVariable ["NV", ["ON", _newap]];
}; 
