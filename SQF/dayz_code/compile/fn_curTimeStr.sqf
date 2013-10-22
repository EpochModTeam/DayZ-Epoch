private ["_hrStr","_minStr","_curDate","_hr","_min","_strTime"];
_curDate = date;
_hr = _curDate select 3;
_min = _curDate select 4;
_hrStr = "";
_minStr = "";

if (_hr < 10) then {_hrStr = format["0%1",_hr]} else {_hrStr = format["%1",_hr]};
if (_hr == 0) then {_hrStr = "00"};
if (_min < 10) then {_minStr = format["0%1",_min]} else {_minStr = format["%1",_min]};
if (_min == 0) then {_minStr = "00"};
_strTime = format["%1%2 hrs",_hrStr,_minStr];
_strTime;