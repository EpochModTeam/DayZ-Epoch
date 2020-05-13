private "_group";

_group = [];
{
	if (damage _x < 1 && {isPlayer _x}) then {
		_group set [count _group,_x];
	};
} count (units group _this);

_group
