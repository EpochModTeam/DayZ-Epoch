private["_object"];

dayzUpdateVehicle = [_this select 3,"all"];
publicVariable "dayzUpdateVehicle";
if (isServer) then {
	dayzUpdateVehicle call server_updateObject;
};