private ["_color","_code"];

if (_this == "") exitWith {0};

_code = [_this,parseNumber _this] select (typeName _this == "STRING");

if (_code < 10000 || {_code > 10299}) exitWith {0};

_color = "";
_code = _code - 10000;

if (_code <= 99) then {_color = "Red";};
if (_code >= 100 && {_code <= 199}) then {_color = "Green"; _code = _code - 100;};
if (_code >= 200) then {_color = "Blue"; _code = _code - 200;};
if (_code <= 9) then {_code = format["0%1", _code];};
_code = format ["%1%2",_color,_code];

_code