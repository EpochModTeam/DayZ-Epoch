/* Provides means for passing objects by reference.
Reference cannot point to itself or create a loop of references.

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_REFERENCE
#define _INCLUDE_GUARD_REFERENCE

//Initializes a new reference pointing to the specified object.
#define Ref_New(val) [val]

//Retrieves the object pointed to by the reference.
#define Ref_Get(ref) ((ref) select 0)

//Sets the reference to point to the specified object.
#define Ref_Set(ref, val) ((ref) set [0, val])

#endif