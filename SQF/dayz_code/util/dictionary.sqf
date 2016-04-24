#define GET_COUNT(d) ((d) select 0)
#define SET_COUNT(d, c) ((d) set [0, c])
#define GET_SIZE(d) (count GET_KEYS(d))
#define GET_KEYS(d) ((d) select 1)
#define GET_VALUES(d) ((d) select 2)
#define GET_INDEX(d, k) (GET_KEYS(d) find (k))

dz_fn_dictionary_containsKey =
{
	GET_INDEX(_this select 0, _this select 1) != -1
};

dz_fn_dictionary_add =
{
	if (GET_INDEX(_this select 0, _this select 1) == -1) exitWith {false};
	
	private "_index";
	_index = count GET_KEYS(_this select 0);
	GET_KEYS(_this select 0) set [_index, _this select 1];
	GET_VALUES(_this select 0) set [_index, _this select 2];
	SET_COUNT(_this select 0, GET_COUNT(_this select 0) + 1);
	
	true
};

dz_fn_dictionary_get =
{
	private "_index";
	_index = GET_INDEX(_this select 0, _this select 1);
	if (_index == -1) exitWith {nil};
	GET_VALUES(_this select 0) select _index
};

dz_fn_dictionary_remove =
{
	private "_index";
	_index = GET_INDEX(_this select 0, _this select 1);
	if (_index == -1) exitWith {false};
	GET_KEYS(_this select 0) set [_index, nil];
	GET_VALUES(_this select 0) set [_index, nil];
	SET_COUNT(_this select 0, GET_COUNT(_this select 0) - 1);
	
	true
};

dz_fn_dictionary_compact =
{
	private ["_keys", "_values", "_i"];
	_keys = [];
	_values = [];
	_keys resize (_this);
	_values resize (_this);
	_i = 0;
	
	{
		if (!isNil "_x") then
		{
			_keys set [_i, _x];
			_values set [_i, GET_VALUES(_this) select _forEachIndex];
			_i = _i + 1;
		};
	}
	foreach GET_KEYS(_this);
	
	_this set [1, _keys];
	_this set [2, _values];
};