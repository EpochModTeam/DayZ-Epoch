private["_vehicle"];
_vehicle = _this select 3;

_vehicle setVehicleInit "this lock true";
_vehicle setVehicleInit "this lockCargo true"; 
processInitCommands;
