private ["_i","_k","_lenInfo","_objInfo","_objName"];

_objInfo = toArray(str(_this));
_lenInfo = count _objInfo - 1;
_objName = [];
_i = 0;
// determine where the object name starts
{
	if (58 == _objInfo select _i) exitWith {};
	_i = _i + 1;
} count _objInfo;

_i = _i + 2; // skip the ": " part

for "_k" from _i to _lenInfo do {
	_objName set [(count _objName), (_objInfo select _k)];
};

if (!local _this) then {
	//Strip " remote" from the end to return the same name for local and remote objects
	_objName resize ((count _objName) - 7);
};

_objName = toLower(toString(_objName));
_objName