/* Provides functions for working with arrays.

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_ARRAY
#define _INCLUDE_GUARD_ARRAY



//Get or set the element at specific index.
#define Array_Get(array, index) ((array) select (index))
#define Array_Set(array, index, value) ((array) set [index, value])

//Atomically retrieve and replace the value at specified index.
#define Array_GetSet(array, index, value) ([array, index, value] call dz_fn_array_getSet)
#define Array_GetSet_Fast(array, index, value) ([(array) select (index), (array) set [index, value]] select 0)

//Returns true if any of the array elements matches the specified predicate
#define Array_Any(arr, predicate) ([arr, predicate] call dz_fn_array_any)

//Returns true if all of the array elements match the specified predicate
#define Array_All(p_arr,p_pred) ([arr, predicate] call dz_fn_array_all)

//Returns the first element of the array that matches the specified predicate
#define Array_First(arr, predicate) ([arr, predicate] call dz_fn_array_first)

//Selects a random element from the specified array
#define Array_SelectRandom(arr) ((arr) call dz_fn_array_selectRandom)
#define Array_SelectRandom_Fast(arr) ((arr) select floor random count (arr))

//Shuffles the given array. Modifies the passed in array and returns it.
//To preserve the original pass in a copy: Array_Shuffle(+myArray)
//Algorithm: Fisher-Yates		Complexity: O(n)
#define Array_Shuffle(arr) ((arr) call dz_fn_array_shuffle)

//Sorts the given array using specified comparer function.
//To preserve the original pass in a copy: Array_MergeSort(+myArray, myComparer)
//Algorithm: Merge Sort			Complexity: O(n log n)
#define Array_MergeSort(arr, comparer) ([arr, comparer] call dz_fn_array_mergeSort)

//Array initialization macros for passing arrays as macro arguments.
#define Array_New() []
#define Array_New1(p0) [p0]
#define Array_New2(p0,p1) [p0,p1]
#define Array_New3(p0,p1,p2) [p0,p1,p2]
#define Array_New4(p0,p1,p2,p3) [p0,p1,p2,p3]
#define Array_New5(p0,p1,p2,p3,p4) [p0,p1,p2,p3,p4]
#define Array_New6(p0,p1,p2,p3,p4,p5) [p0,p1,p2,p3,p4,p5]
#define Array_New7(p0,p1,p2,p3,p4,p5,p6) [p0,p1,p2,p3,p4,p5,p6]
#define Array_New8(p0,p1,p2,p3,p4,p5,p6,p7) [p0,p1,p2,p3,p4,p5,p6,p7]
#define Array_New9(p0,p1,p2,p3,p4,p5,p6,p7,p8) [p0,p1,p2,p3,p4,p5,p6,p7,p8]
#define Array_New10(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9]
#define Array_New11(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10]
#define Array_New12(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11]
#define Array_New13(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12]
#define Array_New14(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13]
#define Array_New15(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14]
#define Array_New16(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15) [p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15]

#endif