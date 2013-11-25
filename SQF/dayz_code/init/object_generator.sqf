private["_holder","_type","_classname","_name","_null"];
_holder = _this select 0;
_type = _this select 1;
_classname = _this select 2;
_name = getText (configFile >> _type >> _classname >> "displayName");
_null = _holder addAction [format[(localize "STR_DAYZ_CODE_1"),_name], "\z\addons\dayz_code\actions\object_pickup.sqf",[_type,_classname,_holder], 20, true, true];
player reveal _holder;