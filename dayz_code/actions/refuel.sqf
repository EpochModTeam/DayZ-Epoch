private["_vehicle","_curFuel","_newFuel","_timeLeft"];
_vehicle = 		cursorTarget;

// if ((count (crew _vehicle)) > 0) exitWith {cutText ["You may not refuel while someone is in the vehicle", "PLAIN DOWN"]};

_canSize = 		getNumber(configFile >> "cfgMagazines" >> "ItemJerrycan" >> "fuelQuantity");
_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
_capacity = 	getNumber(_configVeh >> "fuelCapacity");
_nameType = 	getText(_configVeh >> "displayName");
_curFuel = 		((fuel _vehicle) * _capacity);
_newFuel = 		(_curFuel + _canSize);

if (_newFuel > _capacity) then {_newFuel = _capacity};
_newFuel = (_newFuel / _capacity);

player removeMagazine "ItemJerrycan";
player addMagazine "ItemJerrycanEmpty";

disableSerialization;
call dayz_forceSave;

player playActionNow "Medic";
_dis=10;
_sfx = "refuel";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

sleep 6;

dayzSetFuel = [_vehicle,_newFuel];
publicVariable "dayzSetFuel";
if (local _vehicle) then {
	dayzSetFuel spawn local_setFuel;
};


cutText [format[localize "str_player_05",_nameType,_canSize], "PLAIN DOWN"];

sleep 1;

call fnc_usec_medic_removeActions;
r_action = false;