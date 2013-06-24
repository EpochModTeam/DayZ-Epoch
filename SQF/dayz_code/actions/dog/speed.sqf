private ["_array", "_handle", "_speed", "_dog"];
_array = 	_this select 3;
_handle = 	_array select 0;
_speed = _array select 1;

player removeAction s_player_speeddog;
s_player_speeddog =	-1;

_dog = 	_handle getFSMVariable "_dog";

if(player distance _dog > 5) then {
		[nil,player,rSAY,["dog_slowDown", 120]] call RE;
	};

_handle setFSMVariable ["_maxSpeed", _speed];
_dog setVariable ["currentSpeed", _speed];