private ["_vehicle","_status"];
_vehicle = _this select 0;
_status = _this select 1;

//if (local _vehicle) then {
_vehicle lock _status;	
//};