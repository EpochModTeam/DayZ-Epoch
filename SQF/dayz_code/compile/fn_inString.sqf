//Kilzone_Kid's megafast inString function
//caseinsensitive
//params [needle,haystack];
private ["_found","_hayArr"];

scopeName "main";
_needle = _this select 0;
_haystack = _this select 1;
_haystackArr = toArray _haystack;
_haystackLen = count _haystackArr;
_needleLen = count (toArray _needle);
_found = false;
if (_needleLen <= _haystackLen) then {
	_hayArr = [];
	for "_i" from 0 to (_needleLen - 1) do {
		_hayArr set [count _hayArr, _haystackArr select _i];
	};
	for "_i" from _needleLen to _haystackLen do {
		if (toString _hayArr != _needle) then {
			_hayArr set [_needleLen, _haystackArr select _i];
			_hayArr set [0, "x"];
			_hayArr = _hayArr - ["x"];
		} else {
			_found = true;
			breakTo "main";
		};
	};
};
_found
