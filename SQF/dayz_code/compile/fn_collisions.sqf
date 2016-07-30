#include "\z\addons\dayz_code\util\Vector.hpp"

_project =
{
	private ["_verts","_axis","_min","_max"];
	local _verts = +(_this select 0);
	local _axis = _this select 1;
	
	{ _verts set [_foreachIndex, Vector_DotProduct_Fast(_axis, _x)] } foreach _verts;
	
	local _min = _verts select 0;
	local _max = _min;
	
	{
		if (_x < _min) then
			{ _min = _x };
		
		if (_x > _max) then
			{ _max = _x };
	}
	foreach _verts;
	
	[_min, _max]
};

_notOverlap =
{
	#define AMIN (_this select 0 select 0)
	#define AMAX (_this select 0 select 1)
	#define BMIN (_this select 1 select 0)
	#define BMAX (_this select 1 select 1)
	
	AMAX < BMIN || AMIN > BMAX
};

_boundingBoxVertices =
{
	private ["_min","_max","_verts","_v"];
	local _min = _this select 0;
	local _max = _this select 1;
	local _verts = [_min, _max];
	_verts resize 8;
	
	local _v = +_min;
	_v set [0, _max select 0];
	_verts set [2, +_v];
	_v set [1, _max select 1];
	_verts set [3, +_v];
	
	_v = +_min;
	_v set [1, _max select 1];
	_verts set [4, +_v];
	_v set [2, _max select 2];
	_verts set [5, +_v];
	
	_v = +_min;
	_v set [0, _max select 0];
	_verts set [6, +_v];
	_v set [2, _max select 2];
	_verts set [7, _v];
	
	_verts
};

_modelToWorld =
{
	private ["_object","_verts"];
	local _object = _this select 0;
	local _verts = _this select 1;
	
	{ _verts set [_foreachIndex, _object modelToWorld _x] } foreach _verts;
	
	_verts
};

_getAxes =
{
	private ["_dir","_up","_side"];
	local _dir = vectorDir _this;
	local _up = vectorUp _this;
	
	local _side = Vector_Rotate3D_Fast(_dir, _up, 90);
	
	[_dir, _side, _up]
};

_collision =
{
	private ["_abb","_bbb","_averts","_bverts","_axes","_result"];
	local _abb = boundingBox (_this select 0);
	local _bbb = boundingBox (_this select 1);
	local _averts = [_this select 0, _abb call _boundingBoxVertices] call _modelToWorld;
	local _bverts = [_this select 1, _bbb call _boundingBoxVertices] call _modelToWorld;
	
	local _axes = (_this select 0 call _getAxes) + (_this select 1 call _getAxes);
	
	local _result = true;
	
	{
		if ([[_averts, _x] call _project, [_bverts, _x] call _project] call _notOverlap) exitWith
			{ _result = false };
	}
	foreach _axes;
	
	_result
};

_this call _collision;
