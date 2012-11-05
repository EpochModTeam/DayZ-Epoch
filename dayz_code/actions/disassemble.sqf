_array = _this select 3;
_object = _array select 0;
_inventory = _array select 1;
player playActionNow "Medic";
sleep 8;
{player addMagazine _x} forEach _inventory;
deleteVehicle _object;
r_action = false;
call fnc_usec_medic_removeActions;