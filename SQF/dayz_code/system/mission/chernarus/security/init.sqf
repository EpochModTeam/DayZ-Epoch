//diag_log [ diag_tickTime, __FILE__, "Sp4wing security concrete blocks"];
poi_processObject = {
	_type = _this select 0;
	_pos = _this select 1;
	_dir = _this select 2;
	_elevation = _this select 3;
	_tilt = _this select 4;
	_o = _type createVehicleLocal _pos;
	_o setDir _dir;
	_o setPosATL _pos;
	//_o setPosATL [ _pos select 0, _pos select 1, _elevation ];
	//if (!isNil "_tilt") then { _o setvectordirandup _tilt; /*diag_log [ _tilt, vectorDir _o, vectorUp _o];*/ };
	_o setVariable ["", true]; // prevent network SV by loot/zeds spawner
};
_base = "\z\addons\dayz_code\system\mission\chernarus\security\";
call compile preprocessFileLineNumbers (_base+"antiwallhack.sqf");
//diag_log [ diag_tickTime, __FILE__, "Done security"];

