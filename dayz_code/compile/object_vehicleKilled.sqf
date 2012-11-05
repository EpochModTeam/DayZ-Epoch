private["_unit","_selection","_strH","_dam","_total"];
_unit =			_this select 0;
_killer =		_this select 1;
_type = typeOf _unit;
_pos = getposATL _unit;
_dir = direction _unit;
if (local _unit) then {
	deleteVehicle _unit;
//	[_type,_pos,_dir] spawn object_spawnDamVehicle;
};
