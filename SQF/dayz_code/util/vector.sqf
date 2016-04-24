#include "Vector.hpp"

#define P0 _this select 0
#define P1 _this select 1

dz_fn_vector_dotProduct =   { Vector_DotProduct_Fast(P0, P1); };
dz_fn_vector_crossProduct = { Vector_CrossProduct_Fast(P0, P1); };
dz_fn_vector_magnitude =    { Vector_Magnitude_Fast(_this); };
dz_fn_vector_add =          { Vector_Add_Fast(P0, P1); };
dz_fn_vector_subtract =     { Vector_Subtract_Fast(P0, P1); };
dz_fn_vector_negate =       { Vector_Negate_Fast(_this); };
dz_fn_vector_multiply =     { Vector_Multiply_Fast(P0, P1); };
dz_fn_vector_divide =       { Vector_Divide_Fast(P0, P1); };
dz_fn_vector_angle =        { Vector_Angle_Fast(P0, P1); };
dz_fn_vector_normalize =    { Vector_Normalize_Fast(_this); };
dz_fn_vector_fromDir =      { Vector_FromDir_Fast(_this); };
dz_fn_vector_rotate2d =     { Vector_Rotate2D_Fast(P0, P1); };

dz_fn_vector_rotate3d =
{
	#define VX (_this select 0 select 0)
	#define VY (_this select 0 select 1)
	#define VZ (_this select 0 select 2)
	#define UX (_this select 1 select 0)
	#define UY (_this select 1 select 1)
	#define UZ (_this select 1 select 2)
	
	private ["_sin", "_cos", "_icos"];
	_sin = sin (_this select 2);
	_cos = cos (_this select 2);
	_icos = 1 - _cos;

	[
		VX * ( UX ^ 2  * _icos +      _cos ) +
		VY * ( UX * UY * _icos - UZ * _sin ) +
		VZ * ( UX * UZ * _icos + UY * _sin )
		,
		VX * ( UY * UX * _icos + UZ * _sin ) +
		VY * ( UY ^ 2  * _icos +      _cos ) +
		VZ * ( UY * UZ * _icos - UX * _sin )
		,
		VX * ( UZ * UX * _icos - UY * _sin ) +
		VY * ( UZ * UY * _icos + UX * _sin ) +
		VZ * ( UZ ^ 2  * _icos +      _cos )
	]
	
	#undef VX
	#undef VY
	#undef VZ
	#undef UX
	#undef UY
	#undef UZ
};