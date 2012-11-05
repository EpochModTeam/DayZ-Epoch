_dog = _this select 0;
_array = _this select 3;
_handle = _array select 0;
_whistle = _array select 1;

if(_whistle) then {
	[nil,player,rSAY,["dog_callBack", 120]] call RE;
};

sleep 1;

_handle setFSMVariable ["_command","return"];

