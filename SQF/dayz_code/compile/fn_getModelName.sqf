local _model = "";

if (!isNull _this) then {

	local _array	= toArray (str _this);
	local _begin	= (_array find 58) + 2;		// ": "
	local _array2	= [];

	for "_i" from _begin to ((count _array) - 1) do {
		_array2 = _array2 + [_array select _i];
	};
	if (!local _this) then {
		_array2 resize ((count _array2) - 7);	// " REMOTE"
	};

	_model = toLower (toString _array2);
};
_model