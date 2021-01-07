/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49)
*/
private ["_type","_position","_minDist","_maxDist","_isWreck","_nearByPlayer","_iPos","_positions","_zombieChance","_unitTypes","_min","_max","_num","_obj","_config","_i","_objPos"];
_obj = _this select 0;
_objPos = _this select 1;
_config = _this select 2;
_isWreck = _this select 3;
_type = typeOf _obj;

if (!([_objPos] call DZE_SafeZonePosCheck)) then {

	_unitTypes = getArray (_config >> "zombieClass");
	_min = getNumber (_config >> "minRoaming");
	_max = getNumber (_config >> "maxRoaming");
	_zombieChance =	getNumber (_config >> "zombieChance");
	_num = round(random(_max - _min) + _min);
	_minDist = (sizeOf _type);
	_maxDist = [(_minDist + 10),(_minDist + 20)] select (_isWreck); // zeds at crash sites can spawn further away.

	// Walking Zombies
	for "_i" from 0 to _num do {
		if ((dayz_spawnZombies < dayz_maxControlledZombies) && {dayz_CurrentNearByZombies < dayz_maxNearByZombies} && {dayz_currentGlobalZombies < dayz_maxGlobalZeds}) then {
			//_position = [_objPos,_minDist,_maxDist,1] call fn_selectRandomLocation;
			[_objPos,true,_unitTypes,_isWreck,false] call zombie_generate;
		};
	};

	// Internal Zombies
	_nearByPlayer = ({isPlayer _x} count (_objPos nearEntities ["CAManBase",30])) > 0;
	if (!_nearByPlayer) then {
		_positions = getArray (_config >> "zedPos");
		{
			if (random 1 < _zombieChance) then {
				_iPos = _obj modelToWorld _x;
				_iPos set [2, 0 max (_iPos select 2)];
				if ((dayz_spawnZombies < dayz_maxControlledZombies) && {dayz_CurrentNearByZombies < dayz_maxNearByZombies} && {dayz_currentGlobalZombies < dayz_maxGlobalZeds}) then {
					[_iPos,false,_unitTypes,false,true] call zombie_generate;
				};
			};
		} forEach _positions;
	};
};
