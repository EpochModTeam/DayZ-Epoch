private ["_gen","_caller","_id","_NV","_NVOn","_new","_inc","_newap"];

_gen = _this select 0;
_caller = _this select 1;
_id = _this select 2;

// _gen removeAction _id;

// array from tweaking settings
_new = _this select 3;
_inc = _new select 0;

// get Aperture
_NV = player getvariable ["NV",["OFF", 0.1]];

_newap = (_NV select 1)+_inc;

_NVOn = (_NV select 0);

if(_NVOn == "ON") then {

	setAperture _newap;

	player setVariable ["NV", ["OFF", _newap]];
} else {
	player setVariable ["NV", ["ON", _newap]];
};
format["%1 %2","NV",_newap] call dayz_rollingMessages;