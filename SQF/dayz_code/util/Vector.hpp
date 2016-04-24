/* Provides functions and constants for working with 3D vectors.

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_VECTOR
#define _INCLUDE_GUARD_VECTOR

//Vector constants
#define Vector_NULL		[ 0, 0, 0]
#define Vector_UP		[ 0, 0, 1]
#define Vector_DOWN		[ 0, 0,-1]
#define Vector_NORTH	[ 0, 1, 0]
#define Vector_SOUTH	[ 0,-1, 0]
#define Vector_EAST		[ 1, 0, 0]
#define Vector_WEST		[-1, 0, 0]
#define Vector_FRONT	Vector_NORTH
#define Vector_BACK		Vector_SOUTH
#define Vector_RIGHT	Vector_EAST
#define Vector_LEFT		Vector_WEST

#define Vector_New(x,y,z) [z,y,z]

//Accessors
#define Vector_X(v) ((v) select 0)
#define Vector_Y(v) ((v) select 1)
#define Vector_Z(v) ((v) select 2)

//Setters
#define Vector_SetX(v, x) ((v) set [0, x])
#define Vector_SetY(v, x) ((v) set [1, x])
#define Vector_SetZ(v, x) ((v) set [2, x])

//Calculates the dot product of the given vectors
#define Vector_DotProduct(a,b) ([a,b] call dz_fn_vector_dotProduct)
#define Vector_DotProduct_Fast(a,b) (Vector_X(a) * Vector_X(b) + Vector_Y(a) * Vector_Y(b) + Vector_Z(a) * Vector_Z(b))

//Calculates the cross product of the given vectors
#define Vector_CrossProduct(a,b) ([a,b] call dz_fn_vector_crossProduct)
#define Vector_CrossProduct_Fast(a,b) [Vector_Y(a) * Vector_Z(b) - Vector_Z(a) * Vector_Y(b), Vector_Z(a) * Vector_X(b) - Vector_X(a) * Vector_Z(b), Vector_X(a) * Vector_Y(b) - Vector_Y(a) * Vector_X(b)]

//Magnitude (length) of the vector
#define Vector_Magnitude(v) ((v) call dz_fn_vector_magnitude)
#define Vector_Magnitude_Fast(v) (sqrt( Vector_X(v)^2 + Vector_Y(v)^2 + Vector_Z(v)^2))

//Adds two vectors together
#define Vector_Add(a,b) ([a,b] call dz_fn_vector_add)
#define Vector_Add_Fast(a,b) [Vector_X(a) + Vector_X(b), Vector_Y(a) + Vector_Y(b), Vector_Z(a) + Vector_Z(b)]

//Subtract second vector from the first
#define Vector_Subtract(a,b) ([a,b] call dz_fn_vector_subtract)
#define Vector_Subtract_Fast(a,b) [Vector_X(a) - Vector_X(b), Vector_Y(a) - Vector_Y(b), Vector_Z(a) - Vector_Z(b)]

//Returns the opposite vector of the given vector
#define Vector_Negate(v) ((v) call dz_fn_vector_negate)
#define Vector_Negate_Fast(v) [-Vector_X(v), -Vector_Y(v), -Vector_Z(v)]

//Multiplies the vector by a real number
#define Vector_Multiply(v,d) ([v,d] call dz_fn_vector_multiply)
#define Vector_Multiply_Fast(v,d) [Vector_X(v) * (d), Vector_Y(v) * (d), Vector_Z(v) * (d)]

//Divides the vector by a real number
#define Vector_Divide(v,d) ([v,d] call dz_fn_vector_divide)
#define Vector_Divide_Fast(v,d) [Vector_X(v) / (d), Vector_Y(v) / (d), Vector_Z(v) / (d)]

//Calculates the angle between two given vectors
#define Vector_Angle(a,b) ([a,b] call dz_fn_vector_angle)
#define Vector_Angle_Fast(a,b) (acos(Vector_DotProduct_Fast(a,b) / Vector_Magnitude_Fast(a) * Vector_Magnitude_Fast(b)))

//Returns a vector with the same direction as the argument and a magnitude of 1.
#define Vector_Normalize(v) ((v) call dz_fn_vector_normalize)
#define Vector_Normalize_Fast(v) Vector_Divide(v, Vector_Magnitude_Fast(v))
//TODO: performance profiling Divide vs Divide_Fast

//Returns a horizontal unit vector pointing in the specified direction (degrees).
#define Vector_FromDir(deg) ((deg) call dz_fn_vector_fromDir)
#define Vector_FromDir_Fast(deg) [sin (deg), cos (deg), 0]

//Rotates the vector around the global Z (up) axis by the specified angle in degrees
#define Vector_Rotate2D(v, deg) ([v, deg] call dz_fn_vector_rotate2d)
#define Vector_Rotate2D_Fast(v, deg) [Vector_X(v) * cos -(deg) - Vector_Y(v) * sin -(deg), Vector_X(v) * sin -(deg) + Vector_Y(v) * cos -(deg), Vector_Z(v)]

//Rotates the vector around the specified axis by the specified angle in degrees, in three dimensions.
#define Vector_Rotate3D(v, u, deg) ([v, u, deg] call dz_fn_vector_rotate3d)
#define Vector_Rotate3D_Fast(v, u, deg) [((v)select0)*(((u)select0)^2*(1-cos(deg))+cos(deg))+((v)select1)*(((u)select0)*((u)select1)*(1-cos(deg))-((u)select2)*sin(deg))+((v)select2)*(((u)select0)*((u)select2)*(1-cos(deg))+((u)select1)*sin(deg)),((v)select0)*(((u)select1)*((u)select0)*(1-cos(deg))+((u)select2)*sin(deg))+((v)select1)*(((u)select1)^2*(1-cos(deg))+cos(deg))+((v)select2)*(((u)select1)*((u)select2)*(1-cos(deg))-((u)select0)*sin(deg)),((v)select0)*(((u)select2)*((u)select0)*(1-cos(deg))-((u)select1)*sin(deg))+((v)select1)*(((u)select2)*((u)select1)*(1-cos(deg))+((u)select0)*sin(deg))+((v)select2)*(((u)select2)^2*(1-cos(deg))+cos(deg))]

#endif