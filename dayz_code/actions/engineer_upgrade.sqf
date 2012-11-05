_array = _this select 3;
_object = _array select 0;
_magazine = _array select 1;
_classname = _array select 2;

_dir = direction _object;
_location = getPosATL _object;

player removeMagazine _magazine;
player playActionNow "Medic";

r_action = false;
call fnc_usec_medic_removeActions;

sleep 8;
//Delete old Object
deleteVehicle _object;

//New Object
_weapon = _classname createVehicle _location;
_weapon setDir _dir;
_weapon setpos _location;
player reveal _weapon;