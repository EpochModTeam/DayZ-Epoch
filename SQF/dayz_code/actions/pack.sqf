private ["_array","_object","_type"];

_array = _this select 3;
_object = _array select 0;
_type = TypeOf(_object);
player playActionNow "Medic";
uiSleep 8;
player addBackpack format["%1_US_Bag_EP1",_type];
deleteVehicle _object;
r_action = false;
call fnc_usec_medic_removeActions;