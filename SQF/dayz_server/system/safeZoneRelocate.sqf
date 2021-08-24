/*
	Safe Zone Relocate by salival (https://github.com/oiad)
*/

private ["_customPosition","_minDist","_maxDist","_maxDamage","_message","_nearVehicles","_objDist","_position","_safeZonePos","_safeZoneRadius","_useCustomPosition","_unlock"];

_useCustomPosition = false; // Enable a custom position to move vehicles to (i.e a junk yard)
_customPosition = [6942.64,15121.6,0]; // Position for vehicles to be moved to if _useCustomPosition = true;
_minDist = 5; // Minimum distance from the custom position to move vehicles to 
_maxDist = 1000; // Maximum distance from the safe zone position to find a safe position or custom position for relocation, setting this too low can make vehicles spawn very close to other vehicles.
_objDist = 15; // Minimum distance from the safe position for relocation to the center of the nearest object. Specifying quite a large distance here will slow the function and might often fail to find a suitable position.
_unlock = false; // Unlock vehicle when moved from the safe zone?
_maxDamage = 0.75; // Vehicles above or equal to this amount of damage will be deleted

{
	_safeZonePos = _x select 0;
	_safeZoneRadius = _x select 1;
	_nearVehicles = _safeZonePos nearEntities [["Air","LandVehicle","Ship"],_safeZoneRadius];
	{
		if (damage _x >= _maxDamage) then {
			_message = format ["[SAFEZONE] %1 was deleted from the server for being too damaged before relocate: @%2 %3",typeOf _x,mapGridPosition _x,getPosATL _x];
			diag_log _message;			
			[_x getVariable["ObjectID","0"],_x getVariable["ObjectUID","0"],_x] call server_deleteObjDirect;
			deleteVehicle _x;
		} else {
			if (_useCustomPosition) then {
				_position = [_customPosition,_minDist,_maxDist,_objDist,1,0,0,[]] call BIS_fnc_findSafePos;
			} else {
				_position = [_safeZonePos,(_safeZoneRadius + 50),_maxDist,_objDist,if (_x isKindOf "Ship") then {2} else {0},0,0,[],[_safeZonePos,_safeZonePos]] call BIS_fnc_findSafePos;
			};
			_x setPos _position;
			[_x,"position"] call server_updateObject;
			if (_unlock && {locked _x}) then {_x setVehicleLock "UNLOCKED"};

			_message = format ["[SAFEZONE] %1 was moved out of a safe zone to: @%2 %3",typeOf _x,mapGridPosition _position,_position];
			diag_log _message;
		};
	} forEach _nearVehicles;
} forEach DZE_safeZonePosArray;
