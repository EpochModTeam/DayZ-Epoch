#define WHITE [1,1,1,1]
#define GREY [0.75,0.75,0.75,1]
#define GREEN [0.6,0.8,0.4,1]
#define RED [1,0.1,0,1]

private["_task", "_taskDescription", "_taskStatus", "_taskParams"];

_task = _this select 0;
_taskDescription = (taskDescription _task) select 1;
_taskStatus = toUpper(taskState _task);


_taskParams = switch (_taskStatus) do
{
        case "CREATED":
        {
                [format["NEW TASK ASSIGNED: \n%1", _taskDescription], WHITE, "taskNew"]
        };

        case "ASSIGNED":
        {
                [format["ASSIGNED TASK: \n%1", _taskDescription], WHITE, "taskCurrent"]
        };

        case "SUCCEEDED":
        {
                [format["TASK ACCOMPLISHED: \n%1", _taskDescription], GREEN, "taskDone"]
        };

        case "FAILED":
        {
                [format["TASK FAILED: \n%1", _taskDescription], RED, "taskFAILED"]
        };

        case "CANCELED":
        {
                [format["TASK CANCELED: \n%1", _taskDescription], GREY, "taskDone"]
        };

};

taskHint _taskParams;