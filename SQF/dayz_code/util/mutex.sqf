#include "Mutex.hpp"

dz_fn_mutex_tryLock =
{
	Mutex_TryLock_Fast(_this);
};

dz_fn_mutex_waitLock =
{
	Mutex_WaitLock_Fast(_this);
};