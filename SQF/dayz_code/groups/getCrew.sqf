private "_crew";

_crew = [];
{
	_crew set [count _crew, if (alive _x) then {name _x} else {"unknown"}];
} count crew _this;

format ["%1%2",typeOf _this,_crew]