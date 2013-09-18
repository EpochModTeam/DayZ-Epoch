/*
	DayZ Epoch Lighting System - Light Scheduler
	Made for DayZ Epoch please ask permission to use/edit/distrubute email gregory.andrew@gmail.com.
*/
private ["_sleep","_lightInit","_fnHr","_stHr"];
_stHr = _this select 0;//Hour (in 24 hours) to start lights
_fnHr = _this select 1;//Hour (in 24 hours) to stop lights
_sleep = _this select 14;
_lightInit = false;
initLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_init.sqf";
while {alive player&&!_lightInit}do{
	if(daytime<_fnHr||daytime>_stHr)then{
	[_stHr,_fnHr,_this select 2,_this select 3,_this select 4,_this select 5,_this select 6,_this select 7,_this select 8,_this select 9,_this select 10,_this select 11,_this select 12] call initLights;
	_lightInit = true;
	};
sleep _sleep;
};
