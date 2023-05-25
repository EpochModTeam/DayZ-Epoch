///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	fn_isSheltered.sqf
//
//	Author:	Victor the Cleaner
//	Date:	May 2022
//
//	Calculate how much shelter the player has and represent it as variable DZE_sheltered.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//				Raycast and perform collision check
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _deepScan = {

	local _objects	= lineIntersectsWith [_pos1, _pos2, _unit, objNull, true];		// sorted (nearest last)
	local _nearest	= (count _objects) - 1;							// nearest object
	local _idx	= _this;								// weight index

	scopeName "exit";
	for "_n" from _nearest to 0 step -1 do {
		local _object = _objects select _n;

		call {
			if (_object isKindOf "AllVehicles") exitWith {};	// exclude vehicles, zombies and other players

			local _model = _object call fn_getModelName;

			if (_model in DZE_allTrees) exitWith {};		// exclude trees

			///////////////////////////////////////////////////////////////////////////
			//
			//			Get object edge data
			//
			///////////////////////////////////////////////////////////////////////////

			local _box	= boundingBox _object;
			local _edge	= [_box select 1, _box select 0] call DZE_fnc_vectorDiff;
			local _edgeX	= _edge select 0;
			local _edgeY	= _edge select 1;
			local _edgeZ	= _edge select 2;

			local _proceed	= false;

			call {
				if (_edgeX > _e2 && {(_edgeY > _e1 || {_edgeZ > _e1})}) exitWith {_proceed = true;};
				if (_edgeY > _e2 && {(_edgeX > _e1 || {_edgeZ > _e1})}) exitWith {_proceed = true;};
				if (_edgeZ > _e2 && {(_edgeX > _e1 || {_edgeY > _e1})}) exitWith {_proceed = true;};
			};

			if (_proceed) then {
				_hitWgt set [_idx, (_hitWgt select _idx) + (_scanWgt select _idx)];	// object meets criteria
				breakTo "exit";
			};
		};
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//				calculate ASL vector dome
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _unit		= _this select 0;		// vehicle player
local _dir		= _this select 1;		// align hemisphere to building if inside
local _rad		= 50;				// scan radius
local _seg		= 8;				// initial segments
local _spin		= 0;				// z spin offset per arc-cycle
local _e1		= 2.5;				// minimum edge length
local _e2		= 4.6;				// long edge length
local _scanWgt		= [1,1.5,2];			// scan weighting index
local _hitWgt		= [0,0,0];			// record hit weighting
local _total		= 0;				// total hits, adjusted for weighting
local _pos1		= aimPos _unit;			// ASL from
local _pos2		= +_pos1;			// ASL to

_pos2 set [2, (_pos2 select 2) + _rad];			// overhead pos
2 call _deepScan;					// perform initial raycast
DZE_roofOverhead = (_hitWgt select 2) > 0;		// valid sized object directly above

for "_r" from 0 to 2 do {

	local _rx	= 30 * _r;			// aggregate x rotation above the horizon
	local _arc	= 360 / (_seg / (_r max 1));	// arc segments per z rotation

	for "_a" from _arc to 360 step _arc do {
		local _rz	= _dir + _a + _spin;	// world direction with radial offset (or aligned to building)
		local _pz	= sin _rx;		// x rotation gives z height
		local _py	= cos _rx;		// x rotation gives y pos
		local _px	= _py * -(sin _rz);	// z rotation gives x pos
		_py		= _py * (cos _rz);	// z rotation gives y pos refactor
		_pos2		= [_px, _py, _pz];	// unit vector (relative)

		for "_i" from 0 to 2 do {		// multiply and add from/to vectors
			_pos2 set [_i, ((_pos2 select _i) * _rad) + (_pos1 select _i)];	
		};

		_r call _deepScan;			// perform raycast
	};
	_spin	= _spin + 22.5;				// incremental z spin
	_total	= _total + (_hitWgt select _r);		// hit weighting running total
};

DZE_sheltered = _total / 30;
