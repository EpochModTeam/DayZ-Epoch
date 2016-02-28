Author: Foxy https://github.com/AsFoxy

Here are defined in their own header and code files a variety of utility classes. See the header
files for more information about each class and their functions.

Object oriented classes like Dictionary and Mutex are used to create and utilize objects in a way
similar to object oriented C. The object in member functions is always the first parameter. For
example:
	_myDictionary = Dictionary_New();
	Dictionary_Add(_myDictionary, _myKey, _myValue);

Some headers define functions suffixed with "Fast" alongside normal counterparts. For example
Vector_DotProduct and Vector_DotProduct_Fast in Vector.hpp. The suffixed functions are inlined and
as such have very slightly less overhead. The unsuffixed functions should be used when one of the
arguments passed is a complex or intensive expression. Each expression passed may be evaluated
multiple times when using the suffixed functions. Because of this especially expressions with side
effects should not be used. For example:
	//Good
	Vector_Multiply_Fast(_myVector, _this select 3);
	
	//Totally fine but slightly less performant
	Vector_Multiply(_myVector, _this select 3);
	
	//BAD! 
	Vector_Multiply_Fast(_myVector, call _my_heavy_function_with_side_effects);
	
	//Good
	Vector_Multiply(_myVector, call _my_heavy_function_with_side_effects);

Function macros parsed by the Arma preprocessor in general must receive arguments that do not
contain commas, unless wrapped by another function macro. For example:
	//Does not work
	_result = Vector_Add([1,2,3], [4,5,6]);
	
	//Instead:
	_myVector1 = [1,2,3];
	_myVector2 = [4,5,6];
	_result = Vector_Add(_myVector1, _myVector2);
	
	//Or:
	_result = Vector_Add(Vector_New(1,2,3), Vector_New(4,5,6));