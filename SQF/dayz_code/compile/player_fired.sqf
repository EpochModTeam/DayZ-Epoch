private ["_projectile","_unit","_ammo"];

//[unit, weapon, muzzle, mode, ammo, magazine, projectile]
_unit = _this select 0;
//_weapon = _this select 1;
_ammo = _this select 4;
_projectile = _this select 6;

//Alert Nearby
_audible = getNumber (configFile >> "CfgAmmo" >> _ammo >> "audibleFire");
_caliber = getNumber (configFile >> "CfgAmmo" >> _ammo >> "caliber");
_distance = round(_audible * 10 * _caliber);

dayz_disAudial = _distance;
dayz_firedCooldown = time;

if (_ammo isKindOf "Melee") exitWith {
	if (_ammo != "Chainsaw_Swing_Ammo") then {
		// Added Nutrition-Factor for work
		//[Type,Blood[Calories,Hunger,Thrist,Temp]
		["Working",0,[0,3,5,0]] call dayz_NutritionSystem;
		_unit playActionNow "GestureSwing";
	};
	_this call player_harvest; // harvest wood check
};

if ((_ammo isKindOf "SmokeShell") or (_ammo isKindOf "GrenadeHandTimedWest") or (_ammo isKindOf "G_40mm_HE")) then {
	if (_ammo isKindOf "G_40mm_HE") then { dayz_disAudial = 30 };

	[_unit,_ammo] spawn {
		private ["_pos","_group","_localtargets","_remotetargets"];
		_unit = _this select 0;
		_ammo = _this select 1;

		_projectile = nearestObject [_unit, _ammo];
		_pos = getPosATL _projectile;

		if (_ammo isKindOf "SmokeShell") then {
			while { ((getPosATL _projectile) select 2) >= 1 } do {
				_pos = getPosATL _projectile;
				uiSleep 0.01;
			};

			{
				_group = group _x;
				if (isNull group _x) then {
					_group = _x;
				};
				_isLocal = local _x;
				_x reveal [_projectile,4];
				_localtargets = _group getVariable ["localtargets",[]];
				_remotetargets = _group getVariable ["remotetargets",[]];
				_targets = _localtargets + _remotetargets;
				if !(_projectile in _targets) then {
					switch (_isLocal) do {
						case false: {
							_remotetargets set [count _remotetargets,_projectile];
							_x setVariable ["remotetargets",_remotetargets,true];
						};
						case true: {
							_localtargets set [count _localtargets,_projectile];
							_x setVariable ["localtargets",_localtargets,false];
						};
					};
				};
			} forEach (_pos nearEntities ["zZombie_Base",50]);
		} else {
			while {alive _projectile} do {
				_pos = getPosATL _projectile;
				uiSleep 0.01;
			};

			{
				_x setVariable ["myDest",_pos]; // removed networked var.  targets should be enough
			} count (_pos nearEntities ["zZombie_Base",50]);
		};
	};
} else {
	[_unit,_distance,true,getPosATL player] call player_alertZombies;

	//Check if need to place arrow
	if (_ammo isKindOf "Bolt") then {
		[_this] spawn player_crossbowBolt;
	};
	if (_ammo isKindOf "GrenadeHand") then {
		if (_ammo isKindOf "ThrownObjects") then {
			[_this] spawn player_throwObject;
		};
		if (_ammo isKindOf "RoadFlare") then {
			_projectile = nearestObject [_unit, "RoadFlare"];
			[_projectile,0] spawn object_roadFlare;
			PVDZ_obj_RoadFlare = [_projectile,0];
			publicVariable "PVDZ_obj_RoadFlare";
			[_this] spawn player_throwObject;
		};
		if (_ammo isKindOf "ChemLight") then {
			_projectile = nearestObject [_unit, "ChemLight"];
			[_projectile,1] spawn object_roadFlare;
			PVDZ_obj_RoadFlare = [_projectile,1];
			publicVariable "PVDZ_obj_RoadFlare";
			[_this] spawn player_throwObject;
		};
		
		//Auto select main weapon after throwing
		call player_selectWeapon;
	};
};
