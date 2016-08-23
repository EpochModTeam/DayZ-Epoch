/*
	Kilzone_Kid's megafast isEqual function
	params [array1,array2]
	
	Examples:
	hint str ([[1,2,3], [1,2,3]] call fnc_isEqual); //true
	hint str ([[1,[2,[3]]], [1,[2,[3]]]] call fnc_isEqual); //true
	hint str ([[1,[2,[3]]], [1,[2,[4]]]] call fnc_isEqual); //false
*/

switch (_this select 0) do {
	case (_this select 1) : {true};
	default {false};
};