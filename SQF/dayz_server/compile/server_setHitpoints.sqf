local _obj = _this select 0;
local _hitpoints = _this select 1;
local _isAir = _obj isKindOf "Air";
	
{
	local _selection = _x select 0;
	local _dam = [_x select 1,(_x select 1) min 0.8] select (!_isAir && {_selection in dayZ_explosiveParts});
	_obj setHit [_selection,_dam];
} count _hitpoints;