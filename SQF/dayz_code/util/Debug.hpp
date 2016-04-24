/* Defines macros for debugging.
Care must be taken to only include this header once as it cannot use an include guard.
The _DEBUG_ constant can be used outside this header to define custom debug code.

Author: Foxy

P.s. Why does this piece of shit not have variadic macros?!
*/

//Comment out to disable debugging
//#define _DEBUG_

//DEBUG ENABLED
#ifdef _DEBUG_

//Logs the specified value
#define Debug_Log(val) (diag_log str (val))

/* Logs generic debug information
	File name
	Line number
	Tick time
	Frame number
*/
#define Debug_LogGeneric() (diag_log format ["DEBUG: File:%1 Line:%2 Time:%3 Frame:%4", __FILE__, __LINE__, diag_tickTime, diag_frameno])

//Assert
#define Debug_Assert(condition) (assert (condition))

/* Validates the array member types.
Example:
	//Scalar, string and array
	Debug_CheckTypes3("SCALAR","STRING","ARRAY");
	
	//Boolean and scalar or string
	Debug_CheckTypes2("BOOL",Array_New2("SCALAR","STRING"));
	
	//Object or nil and any
	Debug_CheckTypes2(Array_New2("OBJECT","NIL"),"ANY");

See https://community.bistudio.com/wiki/Data_Types
*/
#define Debug_CheckTypes1(arr, p0) ([arr,[p0],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes2(arr, p0,p1) ([arr,[p0,p1],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes3(arr, p0,p1,p2) ([arr,[p0,p1,p2],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes4(arr, p0,p1,p2,p3) ([arr,[p0,p1,p2,p3],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes5(arr, p0,p1,p2,p3,p4) ([arr,[p0,p1,p2,p3,p4],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes6(arr, p0,p1,p2,p3,p4,p5) ([arr,[p0,p1,p2,p3,p4,p5],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes7(arr, p0,p1,p2,p3,p4,p5,p6) ([arr,[p0,p1,p2,p3,p4,p5,p6],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes8(arr, p0,p1,p2,p3,p4,p5,p6,p7) ([arr,[p0,p1,p2,p3,p4,p5,p6,p7],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes9(arr, p0,p1,p2,p3,p4,p5,p6,p7,p8) ([arr,[p0,p1,p2,p3,p4,p5,p6,p7,p8],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes10(arr, p0,p1,p2,p3,p4,p5,p6,p7,p8,p9) ([arr,[p0,p1,p2,p3,p4,p5,p6,p7,p8,p9],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes11(arr, p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10) ([arr,[p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes12(arr, p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11) ([arr,[p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes13(arr, p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12) ([arr,[p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes14(arr, p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13) ([arr,[p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes15(arr, p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14) ([arr,[p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14],__FILE__,__LINE__] call dz_fn_debug_checkTypes)
#define Debug_CheckTypes16(arr, p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15) ([arr,[p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15],__FILE__,__LINE__] call dz_fn_debug_checkTypes)

//See Debug_CheckTypes. Used for checking script parameters.
#define Debug_CheckParams1(p0) Debug_CheckTypes1(_this,p0)
#define Debug_CheckParams2(p0,p1) Debug_CheckTypes2(_this,p0,p1)
#define Debug_CheckParams3(p0,p1,p2) Debug_CheckTypes3(_this,p0,p1,p2)
#define Debug_CheckParams4(p0,p1,p2,p3) Debug_CheckTypes4(_this,p0,p1,p2,p3)
#define Debug_CheckParams5(p0,p1,p2,p3,p4) Debug_CheckTypes5(_this,p0,p1,p2,p3,p4)
#define Debug_CheckParams6(p0,p1,p2,p3,p4,p5) Debug_CheckTypes6(_this,p0,p1,p2,p3,p4,p5)
#define Debug_CheckParams7(p0,p1,p2,p3,p4,p5,p6) Debug_CheckTypes7(_this,p0,p1,p2,p3,p4,p5,p6)
#define Debug_CheckParams8(p0,p1,p2,p3,p4,p5,p6,p7) Debug_CheckTypes8(_this,p0,p1,p2,p3,p4,p5,p6,p7)
#define Debug_CheckParams9(p0,p1,p2,p3,p4,p5,p6,p7,p8) Debug_CheckTypes9(_this,p0,p1,p2,p3,p4,p5,p6,p7,p8)
#define Debug_CheckParams10(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9) Debug_CheckTypes10(_this,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9)
#define Debug_CheckParams11(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10) Debug_CheckTypes11(_this,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10)
#define Debug_CheckParams12(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11) Debug_CheckTypes12(_this,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11)
#define Debug_CheckParams13(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12) Debug_CheckTypes13(_this,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12)
#define Debug_CheckParams14(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13) Debug_CheckTypes14(_this,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13)
#define Debug_CheckParams15(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14) Debug_CheckTypes15(_this,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14)
#define Debug_CheckParams16(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15) Debug_CheckTypes16(_this,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15)

// DEBUG DISABLED
#else

#define Debug_Log(val)
#define Debug_LogGeneric()
#define Debug_Assert(condition)

#define Debug_CheckTypes1(arr,p0)
#define Debug_CheckTypes2(arr,p0,p1)
#define Debug_CheckTypes3(arr,p0,p1,p2)
#define Debug_CheckTypes4(arr,p0,p1,p2,p3)
#define Debug_CheckTypes5(arr,p0,p1,p2,p3,p4)
#define Debug_CheckTypes6(arr,p0,p1,p2,p3,p4,p5)
#define Debug_CheckTypes7(arr,p0,p1,p2,p3,p4,p5,p6)
#define Debug_CheckTypes8(arr,p0,p1,p2,p3,p4,p5,p6,p7)
#define Debug_CheckTypes9(arr,p0,p1,p2,p3,p4,p5,p6,p7,p8)
#define Debug_CheckTypes10(arr,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9)
#define Debug_CheckTypes11(arr,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10)
#define Debug_CheckTypes12(arr,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11)
#define Debug_CheckTypes13(arr,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12)
#define Debug_CheckTypes14(arr,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13)
#define Debug_CheckTypes15(arr,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14)
#define Debug_CheckTypes16(arr,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15)

#define Debug_CheckParams1(p0)
#define Debug_CheckParams2(p0,p1)
#define Debug_CheckParams3(p0,p1,p2)
#define Debug_CheckParams4(p0,p1,p2,p3)
#define Debug_CheckParams5(p0,p1,p2,p3,p4)
#define Debug_CheckParams6(p0,p1,p2,p3,p4,p5)
#define Debug_CheckParams7(p0,p1,p2,p3,p4,p5,p6)
#define Debug_CheckParams8(p0,p1,p2,p3,p4,p5,p6,p7)
#define Debug_CheckParams9(p0,p1,p2,p3,p4,p5,p6,p7,p8)
#define Debug_CheckParams10(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9)
#define Debug_CheckParams11(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10)
#define Debug_CheckParams12(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11)
#define Debug_CheckParams13(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12)
#define Debug_CheckParams14(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13)
#define Debug_CheckParams15(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14)
#define Debug_CheckParams16(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15)

#endif

//Type check define generator http://pastebin.com/kBTVtBzz