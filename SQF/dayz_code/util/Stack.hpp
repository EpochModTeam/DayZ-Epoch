/* Provides a LIFO data structure implementation.
See https://en.wikipedia.org/wiki/Stack_(abstract_data_type)

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_STACK
#define _INCLUDE_GUARD_STACK

//Initializes a new stack object
#define Stack_New() [0,[nil,nil]]

//Pushes the specified object onto the top of the stack.
#define Stack_Push(s, element) ([s, element] call dz_fn_stack_push)

//Removes the object on top of the stack and returns it.
//Returns nil if the stack is empty.
#define Stack_Pop(s) ((s) call dz_fn_stack_pop)

//Retrieves the object on top of the stack without removing it.
//Returns nil if the stack is empty.
#define Stack_Peek(s) ((s) call dz_fn_stack_peek)

//Returns the current capacity of the stack.
//#define Stack_Size(s) (count ((s) select 1))

//Returns the number of items currently on the stack.
#define Stack_Count(stack) ((stack) select 0)

#endif