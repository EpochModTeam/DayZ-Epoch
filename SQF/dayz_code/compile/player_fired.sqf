private ["_unit","_ammo","_audible","_distance","_listTalk","_weapon","_group","_targets","_i","_projectile","_id","_caliber"];
//[unit, weapon, muzzle, mode, ammo, magazine, projectile]
_unit = 		_this select 0;
_weapon = 		_this select 1;
_ammo = 		_this select 4;
_projectile = 	_this select 6;

//Alert Nearby
_audible = getNumber (configFile >> "CfgAmmo" >> _ammo >> "audibleFire");
_caliber = getNumber (configFile >> "CfgAmmo" >> _ammo >> "caliber");
_distance = round(_audible * 20 * _caliber);

dayz_disAudial = _distance;
dayz_firedCooldown = time;
// Color in the combat icon
dayz_combat = 1;

if (_ammo isKindOf "Melee") exitWith {
	
	if(!(_ammo isKindOf "Chainsaw_Swing_Ammo")) then {
		_unit playActionNow "GestureSwing";
		[1,1] call dayz_HungerThirst;
	};

	// harvest wood check
	_this call player_harvest;
};

//Smoke Grenade
if (_ammo isKindOf "SmokeShell") then {
	//Alert Zed's to smoke
	_i = 0;
	_projectile = nearestObject [_unit, _ammo];
	_listTalk = (getPosATL _projectile) nearEntities ["zZombie_Base",50];
	{
		_group = group _x;
		if (isNull group _x) then {
			_group = _x;
		};
		_x reveal [_projectile,4];
		_targets = _group getVariable ["targets",[]];
		if (!(_projectile in _targets)) then {
			_targets set [count _targets,_projectile];
			_group setVariable ["targets",_targets,true];
		};
		_i = _i + 1;
	} forEach _listTalk;
} else {
	[_unit,_distance,true,(getPosATL player)] spawn player_alertZombies;
	//Check if need to place arrow
	if (_ammo isKindOf "Bolt") then {
		_id = _this spawn player_crossbowBolt;
	};
	if (_ammo isKindOf "GrenadeHand") then {
		
		if (_ammo isKindOf "ThrownObjects") then {
			_id = _this spawn player_throwObject;
		};
		if (_ammo isKindOf "RoadFlare") then {
			//hint str(_ammo);
			_projectile = nearestObject [_unit, "RoadFlare"];
			_id = [_projectile,0] spawn object_roadFlare;
		
			/* PVS/PVC - Skaronator */
			_pos = getPosATL player;
			_inRange = _pos nearEntities ["CAManBase",1250];
			{
				PVDZE_send = [_x,"RoadFlare",[_projectile,0]];
				publicVariableServer "PVDZE_send";
			} forEach _inRange;
			
			_id = _this spawn player_throwObject;
		};
		if (_ammo isKindOf "ChemLight") then {
			_projectile = nearestObject [_unit, "ChemLight"];
			_id = [_projectile,1] spawn object_roadFlare;
			
			/* PVS/PVC - Skaronator */
			_pos = getPosATL player;
			_inRange = _pos nearEntities ["CAManBase",1250];
			{
				PVDZE_send = [_x,"RoadFlare",[_projectile,1]];
				publicVariableServer "PVDZE_send";
			} forEach _inRange;
			
			_id = _this spawn player_throwObject;
		};
	};	
};