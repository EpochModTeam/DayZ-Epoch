//_dog = _this select 0;
_array = 	_this select 3;
_handle = 	_array select 0;
_whistle = 	_array select 1;
_forceWalk = _array select 2;

_dog = 		_handle getFSMVariable "_dog";
_maxSpeed = _handle getFSMVariable "_maxSpeed";

if(player distance _dog < 5) then {
	_whistle = false;
};

if(_forceWalk) then {
	_maxSpeed = _maxSpeed - 1;
	if (_maxSpeed < 0) then {
		_maxSpeed = 0;
	};
	if(_whistle) then {
		[nil,player,rSAY,["dog_slowDown", 120]] call RE;
	};
} else {
	_maxSpeed = _maxSpeed + 1;
	if (_maxSpeed > 2) then {
		_maxSpeed = 2;
	};
	if(_whistle) then {
		[nil,player,rSAY,["dog_speedUp", 120]] call RE;
	};
};

_handle setFSMVariable ["_maxSpeed",_maxSpeed];
_handle setFSMVariable ["_forceChange",true];