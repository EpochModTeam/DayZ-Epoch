#define STRINGIFY(x) #x
#define PATH(sub_path) STRINGIFY(\z\addons\dayz_code\util\sub_path)
#define CCPP call compile preprocessFileLineNumbers

//Debug
CCPP PATH(debug.sqf);

//Very generic utilities
CCPP PATH(util.sqf);
CCPP PATH(mutex.sqf);
CCPP PATH(math.sqf);
CCPP PATH(array.sqf);

//Collections
CCPP PATH(stack.sqf);
CCPP PATH(queue.sqf);
CCPP PATH(dictionary.sqf);

//Specialized
CCPP PATH(vector.sqf);
CCPP PATH(task.sqf);
CCPP PATH(request.sqf);