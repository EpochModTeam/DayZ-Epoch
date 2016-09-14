//[vehicle, position, unit]
//Quick fix for now.
private ["_vehicle","_position","_unit","_buildables"];

_vehicle = _this select 0;
_position = _this select 1;
_unit = _this select 2;

if (_unit == player) then {
	//if (dayz_soundMuted) then {call player_toggleSoundMute;}; // Auto disable mute on vehicle exit (not a good idea without a sleep since rotor can be very loud when spinning down)
	_buildables = count ((getposATL _vehicle) nearObjects ["DZ_buildables", 3]);
	if (_buildables > 0) then {

		switch _position do {
			case ("driver"): { _unit action ["getInDriver", _vehicle]; };
			case ("cargo"): { _unit action ["getInCargo", _vehicle]; };
			case ("commander"): { _unit action ["getInCommmander", _vehicle]; };
			case ("gunner"): { _unit action ["getInGunner", _vehicle]; };
			case ("pilot"): { _unit action ["getInPilot", _vehicle]; };
			case ("turret"): { _unit action ["getInTurret", _vehicle]; };
		};

		//Log to server RPT (could give false pos) - should help admins see who is trying to abuse this.
		PVDZ_Server_LogIt = format["Player %1 exited a vehicle(%2) close to buildable object as %3",_unit, (typeof _vehicle), _position];
		publicVariableServer "PVDZ_Server_LogIt";

		localize "str_actions_exitBlocked" call dayz_rollingMessages;

	};
	
	
	//Lets make sure we can process some dmg from ejecting from the vehicle even traveling at lower speeds.
	if (((speed _vehicle) > 15) or ((speed _vehicle) < -10)) then {
		dayz_getout = _vehicle;
		dayz_getoutTime = diag_tickTime;
	};
};

diag_log format["%1(%4) - %2 - %3",_vehicle,_position,_unit,(speed _vehicle)];