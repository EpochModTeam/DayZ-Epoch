private "_group";

_group = [];
{
	if (alive _x && isPlayer _x) then {
		_group set [count _group,_x];
	};
} count (units group _this);

_group