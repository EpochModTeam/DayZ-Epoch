private["_vehicle"];
_vehicle = _this select 3;

_vehicle setVehicleInit "this lock false";
_vehicle setVehicleInit "this lockCargo false"; 
processInitCommands;
