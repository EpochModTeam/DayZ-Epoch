private["_bombData","_vehicle","_owner","_bombar"];
_bombData = _this select 0;

_vehicle = _bombData select 0;
_owner = _bombData select 1;

_vehicle setVariable ["hasBomb",true,true];

_vehicle addEventHandler ["GetIn",{
	//diag_log str(_this);
	sleep 2;
	_bombCar = _this select 0;
	_bomb = createVehicle ["Bo_GBU12_lgb",getPosATL _bombCar, [], 0, "NONE"];
}];