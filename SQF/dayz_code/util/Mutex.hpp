/* Provides a simple mutex implementation.
See https://en.wikipedia.org/wiki/Mutual_exclusion

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_MUTEX
#define _INCLUDE_GUARD_MUTEX

//Initializes a new unlocked mutex.
#define Mutex_New() [true]

//Attempts to lock the specified mutex. Returns true if the mutex was locked.
#define Mutex_TryLock(mtx) ((mtx) call dz_fn_mutex_tryLock)
#define Mutex_TryLock_Fast(mtx) ([(mtx) select 0, (mtx) set [0, false]] select 0)

//Determines if the mutex is locked.
//Note: if access to critical section is required use TryLock() instead.
#define Mutex_IsLocked(mtx) (!(mtx) select 0)

//Waits until the mutex becomes available and locks it.
#define Mutex_WaitLock(mtx) ((mtx) call dz_fn_mutex_waitLock)
#define Mutex_WaitLock_Fast(mtx) waitUntil {Mutex_TryLock_Fast(mtx)}

//Unlocks the mutex. Use only when you have previously obtained lock yourself.
#define Mutex_Unlock(mtx) ((mtx) set [0, true])

#endif