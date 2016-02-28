/* Defines generic math functions.

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_MATH
#define _INCLUDE_GUARD_MATH

//Calculates the greatest common divisor of two numbers
#define Math_GCD(a, b) ([a, b] call dz_fn_math_gcd)

//Calculates the greatest common divisor of all elements of the given array
#define Math_GCDArray(a) ((a) call dz_fn_math_gcdx)

//Selects a random value in the specified range [min, max)
#define Math_RandomRange(min, max) ([min, max] call dz_fn_math_randomRange)
#define Math_RandomRange_Fast(min, max) ((min) + random ((max) - (min)))

//Restricts a value to the specified range [pmin, pmax]
#define Math_Clamp(value, pmin, pmax) (pmin max (pmax min value))

#endif