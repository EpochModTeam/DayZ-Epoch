/* Provides means for monitoring the execution and retrieving the result of asynchronous operations.

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_TASK
#define _INCLUDE_GUARD_TASK

//Creates a new task using the specified function
#define Task_New(fnc) [fnc, nil, 0, nil]

//Starts the task with the specified parameters.
//Returns the task if succesfully started, otherwise nil.
#define Task_Start(task, params) ([task, params] call dz_fn_task_start)

//Cancels a currently running task.
//Returns true if succesfully canceled, otherwise false.
#define Task_Cancel(task) ([task] call dz_fn_task_cancel)

//Gets the task result. Returns nil if not completed.
//Note that nil may also be returned if the task function did not return a value.
#define Task_Result(task) ((task) select 3)

//Waits for the task to complete and returns the result.
//Cannot be called in the unscheduled environment.
//Waits for completion even if the task has not yet been started.
#define Task_Wait(task) ((task) call dz_fn_task_wait)

//Determines whether the task has been started (may have since completed or been canceled).
#define Task_IsStarted(task) (((task) select 2) != 0)

//Determines whether the task is currently running.
#define Task_IsRunning(task) (((task) select 2) == 1)

//Determines whether the task has completed normally.
#define Task_IsCompleted(task) (((task) select 2) == 2)

//Determines whether the task has canceled prior to completion.
#define Task_IsCanceled(task) (((task) select 2) == 3)

#endif