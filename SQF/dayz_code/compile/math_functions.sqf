///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorAdd
//
//	Description:	Returns the sum of two or more vectors.
//	Syntax:		[vector1, vector2, vector3, ...] call DZE_fnc_vectorAdd
//
//	Return Value:	Array
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_vectorAdd = {

	local _r = +(_this select 0);
	for "_j" from 1 to ((count _this) - 1) do {
		{
			_r set [_forEachIndex, _x + ((_this select _j) select _forEachIndex)];
		} forEach _r;
	};
	_r
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorDiff
//
//	Description:	Subtracts one vector from another. (vector1 - vector2)
//	Syntax:		[vector1, vector2] call DZE_fnc_vectorDiff
//
//	Return Value:	Array
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_vectorDiff = {

	local _r = +(_this select 0);
	{
		_r set [_forEachIndex, _x - ((_this select 1) select _forEachIndex)];
	} forEach _r;
	_r
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorMultiply
//
//	Description:	Multiplies vector by a scalar.
//	Syntax:		[vector, scalar] call DZE_fnc_vectorMultiply
//
//	Return Value:	Array
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_vectorMultiply = {

	local _r = +(_this select 0);
	{
		_r set [_forEachIndex, _x * (_this select 1)];
	} forEach _r;
	_r
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorMultiplyArray
//
//	Description:	Multiplies an array of vectors by a scalar.
//	Syntax:		[[vector, scalar], [vector, scalar], ..., ] call DZE_fnc_vectorMultiplyArray
//
//	Return Value:	Array of arrays
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_vectorMultiplyArray = {

	local _r = +_this;
	{
		_r set [_forEachIndex, _x call DZE_fnc_vectorMultiply];
	} forEach _r;
	_r
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorMultiplyAndAdd
//
//	Description:	Multiplies an array of vectors by a scalar and then adds them together.
//	Syntax:		[[vector, scalar], [vector, scalar], ..., ] call DZE_fnc_vectorMultiplyAndAdd
//
//	Return Value:	Array
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_vectorMultiplyAndAdd = {

	(_this call DZE_fnc_vectorMultiplyArray) call DZE_fnc_vectorAdd
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorCrossProduct
//
//	Description:	Cross product of two 3D vectors. 
//	Syntax:		[vector1, vector2] call DZE_fnc_vectorCrossProduct
//
//	Return Value:	Number
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_vectorCrossProduct = {

	local _v1 = +(_this select 0);
	local _v2 = +(_this select 1);
	local _x1 = _v1 select 0;
	local _y1 = _v1 select 1;
	local _z1 = _v1 select 2;
	local _x2 = _v2 select 0;
	local _y2 = _v2 select 1;
	local _z2 = _v2 select 2;
	[(_y1 * _z2) - (_z1 * _y2), (_z1 * _x2) - (_x1 * _z2), (_x1 * _y2) - (_y1 * _x2)]
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorDotProduct
//
//	Description:	Dot product of two 3D vectors.
//	Syntax:		[vector1, vector2] call DZE_fnc_vectorDotProduct
//
//	Return Value:	Number
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_vectorDotProduct = {

	local _v1 = +(_this select 0);
	local _v2 = +(_this select 1);
	((_v1 select 0) * (_v2 select 0) + (_v1 select 1) * (_v2 select 1) + (_v1 select 2) * (_v2 select 2))
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorMagnitude
//
//	Description:	Magnitude of a 3D vector.
//	Syntax:		vector call DZE_fnc_vectorMagnitude
//	Example:	[0,3,4] call DZE_fnc_vectorMagnitude; // returns 5
//
//	Return Value:	Number
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_vectorMagnitude = {

	sqrt ((_this select 0)^2 + (_this select 1)^2 + (_this select 2)^2)
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorNormalized
//
//	Description:	Returns normalized vector (unit vector, vectorMagnitude == 1) of given vector.
//			If given vector is 0, result is a 0 vector as well.
//	Syntax:		vector call DZE_fnc_vectorNormalized
//	Example:	[0,1,1] call DZE_fnc_vectorNormalized; // returns [0,0.707107,0.707107]
//
//	Return Value:	Array
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_vectorNormalized = {

	local _m = _this call DZE_fnc_vectorMagnitude;
	local _r = [0,0,0];

	if (_m != 0) then {
		_r = [(_this select 0) / _m, (_this select 1) / _m, (_this select 2) / _m];
	};
	_r
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_unitVector
//
//	Description:	Returns the unit vector of two points. [start point, end point]
//	Syntax:		[vector1, vector2] call DZE_fnc_unitVector
//
//	Return Value:	Array
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_unitVector = {

	([_this select 1, _this select 0] call DZE_fnc_vectorDiff) call DZE_fnc_vectorNormalized
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorDistance
//
//	Description:	Returns Euclidean distance between two points.
//	Syntax:		[vector1, vector2] call DZE_fnc_vectorDistance
//
//	Return Value:	Number
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_vectorDistance = {

	([_this select 1, _this select 0] call DZE_fnc_vectorDiff) call DZE_fnc_vectorMagnitude
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_boundingBoxDiagonal
//
//	Description:	Returns Euclidean diagonal distance of an object's bounding box.
//	Syntax:		object call DZE_fnc_boundingBoxDiagonal
//
//	Return Value:	Number
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_boundingBoxDiagonal = {

	boundingBox _this call DZE_fnc_vectorDistance
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_modelToWorldASL
//
//	Description:	Translates relative position from object model space to world space in PositionASL format.
//	Syntax:		[model, position] call DZE_fnc_modelToWorldASL
//
//	Return Value:	Array format PositionASL
//
///////////////////////////////////////////////////////////////////////////////////////////////////

DZE_fnc_modelToWorldASL = {

	local _object	= _this select 0;
	local _offset	= _this select 1;

	local _z0	= vectorUp _object;
	local _y0	= vectorDir _object;
	local _x0	= [_y0, _z0] call DZE_fnc_vectorCrossProduct;
	local _ASL	= getPosASL _object;
	local _bc	= boundingCenter _object;

	if (str _bc != "[0,0,0]") then {
		local _c0 = [[_x0, _bc select 0], [_y0, _bc select 1], [_z0, _bc select 2]] call DZE_fnc_vectorMultiplyAndAdd;
		_ASL set [2, (_ASL select 2) + (_c0 select 2)];
	};

	local _r = [[_x0, _offset select 0], [_y0, _offset select 1], [_z0, _offset select 2]] call DZE_fnc_vectorMultiplyAndAdd;
	[_r, _ASL] call DZE_fnc_vectorAdd
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_AGLToASL
//
//	Description:	Converts position from PositionAGL to PositionASL.
//	Syntax:		position call DZE_fnc_AGLToASL
//	Example:	[1000,1000,10] call DZE_fnc_AGLToASL; // returns [1000,1000,9.48579] if position is over water
//
//	Return Value:	Array format PositionASL
//
///////////////////////////////////////////////////////////////////////////////////////////////////

AGL_HELPER = "Helper_1_DZE" createVehicleLocal [0,0,0];

DZE_fnc_AGLToASL = {

	local _posAGL	= +_this;
	local _r	= ATLToASL _posAGL;

	if (surfaceIsWater _posAGL) then {
		AGL_HELPER setPosASL _posAGL;	// false ASL
		local _AGL = AGL_HELPER modelToWorld [0,0,0];
		_r = +_posAGL;
		_r set [2, (_r select 2) * 2 - (_AGL select 2)];	// 2a - b
	};
	_r
};
