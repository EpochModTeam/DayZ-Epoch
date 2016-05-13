private ["_sinaroundX","_cosaroundX","_dirY","_dirZ","_upY","_upZ","_sinaroundY","_cosaroundY","_dirX","_upX","_sinaroundZ","_cosaroundZ","_dirXTemp","_upXTemp","_object","_rotations","_aroundX","_aroundY","_aroundZ","_dir","_up"];
_object = _this select 0;
_rotations = _this select 1;
_aroundX = _rotations select 0;
_aroundY = _rotations select 1;
_aroundZ = (360 - (_rotations select 2)) - 360;

_dirX = 0;
_dirY = 1;
_dirZ = 0;
_upX = 0;
_upY = 0;
_upZ = 1;

if (_aroundX != 0) then {
	_sinaroundX = sin _aroundX;
	_cosaroundX = cos _aroundX;
	_dirY = _cosaroundX;
	_dirZ = _sinaroundX;
	_upY = -(_sinaroundX);
	_upZ = _cosaroundX;
};

if (_aroundY != 0) then {
	_sinaroundY = sin _aroundY;
	_cosaroundY = cos _aroundY;
	_dirX = _dirZ * _sinaroundY;
	_dirZ = _dirZ * _cosaroundY;
	_upX = _upZ * _sinaroundY;
	_upZ = _upZ * _cosaroundY;
};

if (_aroundZ != 0) then {
	_sinaroundZ = sin _aroundZ;
	_cosaroundZ = cos _aroundZ;
	_dirXTemp = _dirX;
	_dirX = (_dirXTemp * _cosaroundZ) - (_dirY * _sinaroundZ);
	_dirY = (_dirY * _cosaroundZ) + (_dirXTemp * _sinaroundZ);
	_upXTemp = _upX;
	_upX = (_upXTemp * _cosaroundZ) - (_upY * _sinaroundZ);
	_upY = (_upY * _cosaroundZ) + (_upXTemp * _sinaroundZ);
};

_dir = [_dirX, _dirY, _dirZ];
_up = [_upX, _upY, _upZ];
_object setVectorDirAndUp [_dir, _up];