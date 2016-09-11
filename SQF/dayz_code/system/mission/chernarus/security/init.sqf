//diag_log [ diag_tickTime, __FILE__, "Sp4wing security concrete blocks"];
poi_processObject = {
	private ["_type","_pos","_dir","_elevation","_tilt","_o"];
	_type = _this select 0;
	_pos = _this select 1;
	_dir = _this select 2;
	_elevation = _this select 3;
	_tilt = _this select 4;
	
	_o = _type createVehicleLocal _pos;
	_o setDir _dir;
	_o setPosATL _pos;

	_o setVariable ["", true]; // prevent network SV by loot/zeds spawner
};

if (toLower worldName == "chernarus") then { //need to add building coordinates for other maps
	call compile preprocessFileLineNumbers ("\z\addons\dayz_code\system\mission\chernarus\security\antiwallhack.sqf");
};