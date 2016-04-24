private ["_type","_typeA","_test","_soundType","_soundVal","_soundval"];

_type = surfaceType getPosATL _this;
_typeA = toArray _type;
_typeA set [0,"DEL"];
_typeA = _typeA - ["DEL"];
_type = toString _typeA;
//_test = 0;

_soundType = getText (configFile >> "CfgSurfaces" >> _type >> "soundEnviron");
_soundVal = getArray (configFile >> "CfgVehicles" >> "CAManBase" >> "SoundEnvironExt" >> _soundType);
if ((isNil "_soundval") or {(count _soundval == 0)}) then {
	_soundval = 25; 
} 
else {
	_soundVal = _soundVal select 0;
	if ((isNil "_soundval") or {(count _soundval <= 3)}) then {
		_soundval = 25; 
	} 
	else { 
		_soundVal = parseNumber format["%1",_soundVal select 3];
		if (_soundVal == 0) then {
			_soundVal = 25;
		};
	};
};

//diag_log format["Type: %1, SoundType: %2, SoundVal: %3",_type,_soundType,_soundVal];

[_soundType,_soundVal]