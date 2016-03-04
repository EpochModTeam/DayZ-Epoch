#include "Debug.hpp"

#ifdef _DEBUG_

dz_fn_debug_checkType =
{
	#define IS_ARRAY(x) (typeName x == typeName [])
	
	if (_exp == "ANY")
		exitWith { true };
	
	if (isNil "_x")
		exitWith { _exp == "NIL" || { IS_ARRAY(_exp) && { "NIL" in _exp } } };
	
	typeName _x == _exp || { IS_ARRAY(_exp) && { typeName _x in _exp } }
	
	#undef IS_ARRAY
};

dz_fn_debug_checkTypes =
{
	private "_exp";
	
	{
		_exp = (_this select 1) select (_foreachIndex min (count (_this select 1) - 1));
		
		if (!call dz_fn_debug_checkType) then
		{
			assert false;
			
			diag_log format ['ERROR: Type check failed in file "%1" on line %2. Index:%3 Type:%4 Expected:%5',
				_this select 2,
				_this select 3,
				_foreachIndex,
				if (isNil "_x") then { "nil" } else { typeName _x },
				_exp];
		};
	}
	foreach (_this select 0);
};

#endif
