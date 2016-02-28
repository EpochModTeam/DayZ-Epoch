#define GET_COUNT(s) ((s) select 0)
#define GET_ARRAY(s) ((s) select 1)
#define GET_SIZE(s) (count GET_ARRAY(s))
#define SET_COUNT(s, p) ((s) set [0, p])

dz_fn_stack_push =
{
	if (GET_COUNT(_this select 0) == GET_SIZE(_this select 0)) then
	{
		GET_ARRAY(_this select 0) resize (GET_SIZE(_this select 0) * 2);
	};
	
	GET_ARRAY(_this select 0) set [GET_COUNT(_this select 0), _this select 1];
	SET_COUNT(_this select 0, GET_COUNT(_this select 0) + 1);
};

dz_fn_stack_pop =
{
	if (GET_COUNT(_this) == 0) exitWith {nil};
	
	private "_e";
	SET_COUNT(_this, GET_COUNT(_this) - 1);
	_e = GET_ARRAY(_this) select GET_COUNT(_this);
	GET_ARRAY(_this) set [GET_COUNT(_this), nil];
	_e
};

dz_fn_stack_peek =
{
	GET_ARRAY(_this) select (GET_COUNT(_this) - 1)
};

dz_fn_stack_size =
{
	count GET_ARRAY(_this)
};