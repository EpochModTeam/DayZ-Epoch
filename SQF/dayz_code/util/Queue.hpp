/* Provides a FIFO data structure implementation.
See https://en.wikipedia.org/wiki/FIFO_(computing_and_electronics)

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_QUEUE
#define _INCLUDE_GUARD_QUEUE

//Initializes a new queue with the specified size
#define Queue_New(size) ((size) call dz_fn_queue_new)

//Attempts to add the specified object to the end of the queue.
//Returns false if queue is full, otherwise true.
#define Queue_Enqueue(q, element) ([q, element] call dz_fn_queue_enqueue)

//Attempts to remove the first object from the head of the queue.
//Returns nil if queue is empty.
#define Queue_Dequeue(q) ((q) call dz_fn_queue_dequeue)

//Attempts to retrieve the first object from the head of the queue without removing it.
//Returns nil if queue is empty.
#define Queue_Peek(q) ((q) call dz_fn_queue_peek)

//Returns the maximum capacity of the queue.
#define Queue_Size(q) (count ((q) select 2))

//Returns the number of items in the queue.
#define Queue_Count(q) ((q) select 0)

//Determines whether the queue is full.
#define Queue_IsFull(q) ((q) call dz_fn_queue_isFull)

//#define Queue_Resize(q, s) ([q, s] call dz_fn_queue_resize)

#endif