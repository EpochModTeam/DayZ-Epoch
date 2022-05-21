local _model = "";

if (!isNull _this && {!(_this isKindOf "Man")}) then {
	local _array	= toArray (str _this);
	local _begin	= (_array find 58) + 2;		// ": "
	local _end	= (_array find 46) + 3;		// ".p3d"
	local _array2	= [];

	for "_i" from _begin to _end do {
		_array2 set [count _array2, _array select _i];
	};
	_model = toLower (toString _array2);
};
_model