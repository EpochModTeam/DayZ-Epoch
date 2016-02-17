private["_array","_handle","_whistle","_dog"];
_array = _this select 3;
_handle = _array select 0;
_whistle = _array select 1;
_dog = _handle getFSMVariable "_dog";

if(_whistle) then {
	[nil,player,rSAY,["dog_callBack", 120]] call RE;
};

uiSleep 1;

if (_dog distance player <= 900) then {
_handle setFSMVariable ["_command","return"];
};

