/* Implemented as a circular buffer.
See https://en.wikipedia.org/wiki/Circular_buffer
*/

#define GET_COUNT(q) ((q) select 0)
#define GET_FRONT(q) ((q) select 1)
#define GET_ARRAY(q) ((q) select 2)
#define GET_SIZE(q) (count GET_ARRAY(q))
#define SET_COUNT(q, p) ((q) set [0, p])
#define SET_FRONT(q, p) ((q) set [1, p])
#define GET_INDEX(q) ((GET_FRONT(q) + GET_COUNT(q) - 1) % GET_SIZE(q))

dz_fn_queue_new =
{
	private "_q";
	_q = [0, 0, []];
	GET_ARRAY(_q) resize _this;
	_q
};

dz_fn_queue_enqueue =
{
	if (GET_COUNT(_this select 0) == GET_SIZE(_this select 0)) exitWith {false};
	SET_COUNT(_this select 0, GET_COUNT(_this select 0) + 1);
	GET_ARRAY(_this select 0) set [GET_INDEX(_this select 0), _this select 1];
	true
};

dz_fn_queue_dequeue =
{
	if (GET_COUNT(_this) == 0) exitWith {nil};
	private "_e";
	_e = GET_ARRAY(_this) select GET_FRONT(_this);
	GET_ARRAY(_this) set [GET_FRONT(_this), nil];
	SET_COUNT(_this, GET_COUNT(_this) - 1);
	SET_FRONT(_this, (GET_FRONT(_this) + 1) % GET_SIZE(_this));
	_e
};

dz_fn_queue_peek =
{
	if (GET_COUNT(_this) == 0) exitWith {nil};
	GET_ARRAY(_this) select GET_INDEX(_this);
};

dz_fn_queue_isFull =
{
	GET_COUNT(_this) == GET_SIZE(_this)
};

//TODO: Queue::Resize()
dz_fn_queue_resize =
{
	assert (false);
};