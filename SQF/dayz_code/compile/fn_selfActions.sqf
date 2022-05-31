scriptName "Functions\misc\fn_selfActions.sqf";
/***********************************************************
	ADD ACTIONS FOR SELF
	- Function
	- [] call fnc_usec_selfActions;
************************************************************/

local _vehicle = vehicle player;
local _inVehicle = (_vehicle != player);
local _cursorTarget = cursorTarget;
local _primaryWeapon = primaryWeapon player;
local _currentWeapon = currentWeapon player;
local _magazinesPlayer = magazines player;
local _onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
local _canDo = (!r_drag_sqf && !r_player_unconscious && !_onLadder);
local _playerUID = getPlayerUID player;
local _nearLight = nearestObject [player,"LitObject"];
local _canPickLight = false;
local _myCharID = player getVariable ["CharacterID","0"];
local _vehicleOwnerID = _vehicle getVariable ["CharacterID","0"];
local _hasHotwireKit = "ItemHotwireKit" in _magazinesPlayer;
local _isMan = _cursorTarget isKindOf "Man"; //includes animals and zombies
local _isPZombie = player isKindOf "PZombie_VB";
local _isClose = (player distance _cursorTarget < 3);
local _ownerID = _cursorTarget getVariable ["ownerPUID","0"];
local _dogHandle = player getVariable ["dogID",0];
local _text = "";

if (!isNull _nearLight) then {
	if (_nearLight distance player < 4) then {
		_canPickLight = isNull (_nearLight getVariable ["owner",objNull]);
	};
};

//Grab Flare
if (_canPickLight && !dayz_hasLight && !_isPZombie) then {
	if (s_player_grabflare < 0) then {
		_text = getText (configFile >> "CfgAmmo" >> (typeOf _nearLight) >> "displayName");
		s_player_grabflare = player addAction [format[localize "str_actions_medical_15",_text], "\z\addons\dayz_code\actions\flare_pickup.sqf",_nearLight, 1, false, true];
		s_player_removeflare = player addAction [format[localize "str_actions_medical_17",_text], "\z\addons\dayz_code\actions\flare_remove.sqf",_nearLight, 1, false, true];
	};
} else {
	player removeAction s_player_grabflare;
	player removeAction s_player_removeflare;
	s_player_grabflare = -1;
	s_player_removeflare = -1;
};

if (s_player_equip_carry < 0) then {
	if (dayz_onBack != "" && !_inVehicle && _canDo) then {
		dz_plr_carryActionItem = dayz_onBack;
		_text = getText (configFile >> "CfgWeapons" >> dz_plr_carryActionItem >> "displayName");
		s_player_equip_carry = player addAction [format [localize "STR_ACTIONS_WEAPON", _text],"\z\addons\dayz_code\actions\player_switchWeapon_action.sqf",nil, 0.5, false, true];
	};
} else {
	if (dayz_onBack != dz_plr_carryActionItem || _inVehicle || !_canDo) then {
		player removeAction s_player_equip_carry;
		s_player_equip_carry = -1;
	};
};

//fishing
if ((_currentWeapon in Dayz_fishingItems) && !dayz_fishingInprogress && !_inVehicle && !dayz_isSwimming) then {
	if (s_player_fishing < 0) then {
		s_player_fishing = player addAction [localize "STR_ACTION_CAST", "\z\addons\dayz_code\actions\player_goFishing.sqf",player, 0.5, false, true];
	};
} else {
	player removeAction s_player_fishing;
	s_player_fishing = -1;
};
if ((_primaryWeapon in Dayz_fishingItems) && !dayz_fishingInprogress && _inVehicle && {driver _vehicle != player}) then {
	if (s_player_fishing_veh < 0) then {
		s_player_fishing_veh = _vehicle addAction [localize "STR_ACTION_CAST", "\z\addons\dayz_code\actions\player_goFishing.sqf",_vehicle, 0.5, false, true];
	};
} else {
	_vehicle removeAction s_player_fishing_veh;
	s_player_fishing_veh = -1;
};

/* //Allows drinking from hands at ponds and ambient wells, but may negatively impact performance
if (_canDo && !_inVehicle && !dayz_isSwimming && ((call fn_nearWaterHole) select 0)) then {
	if (s_player_Drinkfromhands < 0) then {
		s_player_Drinkfromhands = player addAction [localize "STR_ACTIONS_DRINK2", "\z\addons\dayz_code\actions\water_fill.sqf","hands", 0.5, false, true];
	};
} else {
	if (s_player_Drinkfromhands >= 0) then {
		player removeAction s_player_Drinkfromhands;
		s_player_Drinkfromhands = -1;
	};
};
*/

if (_inVehicle) then {
	DZE_myVehicle = _vehicle;
	if ((_vehicleOwnerID != "0") && _canDo) then {
		if (s_player_lockUnlockInside_ctrl < 0) then {
			local _totalKeys = call epoch_tempKeys;
			local _temp_keys = _totalKeys select 0;
			local _temp_keys_names = _totalKeys select 1;
			local _hasKey = _vehicleOwnerID in _temp_keys;
			local _oldOwner = (_vehicleOwnerID == _playerUID);
			local _unlock = [];

			_text = getText (configFile >> "CfgVehicles" >> (typeOf DZE_myVehicle) >> "displayName");
			if (locked DZE_myVehicle) then {
				if (_hasKey || _oldOwner) then {
					_unlock = DZE_myVehicle addAction [format[localize "STR_EPOCH_ACTIONS_UNLOCK",_text], "\z\addons\dayz_code\actions\unlock_veh.sqf",[DZE_myVehicle,(_temp_keys_names select (_temp_keys find _vehicleOwnerID))], 2, false, true];
					s_player_lockUnlockInside set [count s_player_lockUnlockInside,_unlock];
					s_player_lockUnlockInside_ctrl = 1;
				} else {
					if (_hasHotwireKit) then {
						_unlock = DZE_myVehicle addAction [format[localize "STR_EPOCH_ACTIONS_HOTWIRE",_text], "\z\addons\dayz_code\actions\hotwire_veh.sqf",DZE_myVehicle, 2, true, true];
					} else {
						_unlock = DZE_myVehicle addAction [format["<t color='#ff0000'>%1</t>",localize "STR_EPOCH_ACTIONS_VEHLOCKED"], "",DZE_myVehicle, 2, true, true];
					};
					s_player_lockUnlockInside set [count s_player_lockUnlockInside,_unlock];
					s_player_lockUnlockInside_ctrl = 1;
				};
			} else {
				if (_hasKey || _oldOwner) then {
					_lock = DZE_myVehicle addAction [format[localize "STR_EPOCH_ACTIONS_LOCK",_text], "\z\addons\dayz_code\actions\lock_veh.sqf",DZE_myVehicle, 1, false, true];
					s_player_lockUnlockInside set [count s_player_lockUnlockInside,_lock];
					s_player_lockUnlockInside_ctrl = 1;
				};
			};
		};
	} else {
		{DZE_myVehicle removeAction _x} count s_player_lockUnlockInside;s_player_lockUnlockInside = [];
		s_player_lockUnlockInside_ctrl = -1;
	};

	//Allows to open garage doors from the vehicle, but may negatively impact performance	
	if (DZE_GarageDoor_Opener) then {	
		local _doors = nearestObjects [DZE_myVehicle, DZE_GarageDoors, DZE_GarageDoor_Radius];

		if (count _doors > 0 && {driver DZE_myVehicle == player}) then {
			local _hasAccess = [player,_doors select 0] call FNC_check_access;
			if (s_player_gdoor_opener_ctrl < 0 && ((_hasAccess select 2) || (_hasAccess select 3))) then {
				local _door = DZE_myVehicle addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_GDO_GARAGE"],"\z\addons\dayz_code\actions\garageDoorOpener.sqf",_doors select 0, 1, false, true];
				s_player_gdoor_opener set [count s_player_gdoor_opener,_door];
				s_player_gdoor_opener_ctrl = 1;
			};
		} else {
			{DZE_myVehicle removeAction _x} count s_player_gdoor_opener;s_player_gdoor_opener = [];
			s_player_gdoor_opener_ctrl = -1;
		};
	};
} else {
	{DZE_myVehicle removeAction _x} count s_player_lockUnlockInside;s_player_lockUnlockInside = [];
	s_player_lockUnlockInside_ctrl = -1;
	{DZE_myVehicle removeAction _x} count s_player_gdoor_opener;s_player_gdoor_opener = [];
	s_player_gdoor_opener_ctrl = -1;
};

if (DZE_HeliLift) then {
	local _hasAttached = _vehicle getVariable["hasAttached",false];
	if (_inVehicle && {_vehicle isKindOf "Air"} && {(([_vehicle] call FNC_getPos) select 2) < 30} && {speed _vehicle < 5} && {typeName _hasAttached == "OBJECT"}) then {
		if (s_player_heli_detach < 0) then {
			dayz_myLiftVehicle = _vehicle;
			s_player_heli_detach = dayz_myLiftVehicle addAction [localize "STR_EPOCH_ACTIONS_DETACHVEHICLE","\z\addons\dayz_code\actions\player_heliDetach.sqf",[dayz_myLiftVehicle,_hasAttached],2,false,true];
		};
	} else {
		dayz_myLiftVehicle removeAction s_player_heli_detach;
		s_player_heli_detach = -1;
	};
};

if (DZE_HaloJump) then {
	if (_inVehicle && {_vehicle isKindOf "Air"} && {(([_vehicle] call FNC_getPos) select 2) > 400}) then {
		if (s_halo_action < 0) then {
			DZE_myHaloVehicle = _vehicle;
			s_halo_action = DZE_myHaloVehicle addAction [localize "STR_EPOCH_ACTIONS_HALO","\z\addons\dayz_code\actions\halo_jump.sqf",[],2,false,true];
		};
	} else {
		DZE_myHaloVehicle removeAction s_halo_action;
		s_halo_action = -1;
	};
};

if (DZE_NameTags > 0) then {
	if (s_player_showname < 0 && !_isPZombie) then {
		if (DZE_NameTags < 2) then {
			s_player_showname = 1;
			player setVariable["DZE_display_name",true,true];
		} else {
			s_player_showname = player addAction [localize "STR_EPOCH_ACTIONS_NAMEYES", "\z\addons\dayz_code\actions\display_name.sqf",true, 0, true, false];
			s_player_showname1 = player addAction [localize "STR_EPOCH_ACTIONS_NAMENO", "\z\addons\dayz_code\actions\display_name.sqf",false, 0, true, false];
		};
	};
};

if (_isPZombie) then {
	if (s_player_attack < 0) then {
		s_player_attack = player addAction [localize "STR_EPOCH_ACTIONS_ATTACK", "\z\addons\dayz_code\actions\pzombie\pz_attack.sqf", _cursorTarget, 6, false, true];
	};
	if (s_player_callzombies < 0) then {
		s_player_callzombies = player addAction [localize "STR_EPOCH_ACTIONS_RAISEHORDE", "\z\addons\dayz_code\actions\pzombie\call_zombies.sqf",player, 5, true, false];
	};
	if (s_player_pzombiesvision < 0) then {
		s_player_pzombiesvision = player addAction [localize "STR_EPOCH_ACTIONS_NIGHTVIS", "\z\addons\dayz_code\actions\pzombie\pz_vision.sqf", [], 4, false, true, "nightVision", "_this == _target"];
	};
	if (!isNull _cursorTarget && _isClose) then {
		local _isHarvested = _cursorTarget getVariable["meatHarvested",false];		
		if (!alive _cursorTarget && _isMan && !_isZombie && !_isHarvested) then {
			if (s_player_pzombiesfeed < 0) then {
				s_player_pzombiesfeed = player addAction [localize "STR_EPOCH_ACTIONS_FEED", "\z\addons\dayz_code\actions\pzombie\pz_feed.sqf",_cursorTarget, 3, true, false];
			};
		} else {
			player removeAction s_player_pzombiesfeed;
			s_player_pzombiesfeed = -1;
		};
	} else {
		player removeAction s_player_pzombiesfeed;
		s_player_pzombiesfeed = -1;
	};
};

// Increase distance only if AIR, SHIP or TANK
local _typeOfCursorTarget = typeOf _cursorTarget;
local _allowedDistance = [5, 9] select ((_typeOfCursorTarget in DZE_largeObjects) || {_cursorTarget isKindOf "Air" || {_cursorTarget isKindOf "Ship" || {_cursorTarget isKindOf "Tank"}}});
local _distance = floor((player distance _cursorTarget) * 100) / 100;		// truncate to 2 decimal places for stationary objects
local _isVehicle = _cursorTarget isKindOf "AllVehicles";
if (_isVehicle) then {_distance = floor(player distance _cursorTarget)};	// truncate to 0 decimal places for jittery vehicles
local _noChange = ((_cursorTarget == DZE_prevTarget) && (_distance == DZE_prevDistance));

if (!isNull _cursorTarget && _noChange && !_inVehicle && !_isPZombie && _canDo && (_distance <= _allowedDistance)) then {
	local _isPlayer = isPlayer _cursorTarget;
	local _isBicycle = _cursorTarget isKindOf "Bicycle";
	local _isGenerator = _typeOfCursorTarget == "Generator_DZ";
	local _isLocked = locked _cursorTarget;
	local _isFuel = false;
	local _hasBarrel = "ItemFuelBarrel" in _magazinesPlayer;
	local _hasFuel20 = "ItemJerrycan" in _magazinesPlayer;
	local _hasFuel5 = "ItemFuelcan" in _magazinesPlayer;
	local _hasEmptyFuelCan = (("ItemJerrycanEmpty" in _magazinesPlayer) || ("ItemFuelcanEmpty" in _magazinesPlayer) || ("ItemFuelBarrelEmpty" in _magazinesPlayer));
	local _itemsPlayer = items player;
	local _weaponsPlayer = weapons player;
	local _hasCrowbar = "ItemCrowbar" in _itemsPlayer || "MeleeCrowbar" in _weaponsPlayer || dayz_onBack == "MeleeCrowbar";
	local _hasToolbox = "ItemToolbox" in _itemsPlayer;
	local _hasKeymakerskit = "ItemKeyKit" in _itemsPlayer;
	local _isAlive = alive _cursorTarget;
	local _text = getText (configFile >> "CfgVehicles" >> _typeOfCursorTarget >> "displayName");
	local _isPlant = _typeOfCursorTarget in Dayz_plants;
	local _isTent = _typeOfCursorTarget in DZE_Tents;
	local _istypeTent = _isTent || (_cursorTarget isKindOf "IC_Tent");
	local _characterID = _cursorTarget getVariable ["CharacterID","0"];	
	local _isOwner = _ownerID == _playerUID;
	local _hasAccess = [];
	local _isAnimal = _cursorTarget isKindOf "Animal";
	local _isZombie = _cursorTarget isKindOf "zZombie_base";
	local _isBloodsucker = _cursorTarget isKindOf "z_bloodsucker";	
	local _isDog = (_cursorTarget isKindOf "Pastor" || _cursorTarget isKindOf "Fin");
	local _isModular = (_cursorTarget isKindOf "ModularItems" || {_typeOfCursorTarget in DZE_modularDoors});
	local _hasDeconstructAccess = false;
	local _player_deleteBuild = false;
	local _player_lockUnlock_crtl = false;
	local _isStash = _typeOfCursorTarget in DZE_Stashes;
	local _isLockedDoor = _typeOfCursorTarget in DZE_DoorsLocked;
	local _isStatic = _typeOfCursorTarget in DZE_StaticWeapons;	
	local _isLockedStorage = _typeOfCursorTarget in DZE_LockedStorage;	

	//fuel tanks
	if (_hasEmptyFuelCan) then {
		{
			if (_cursorTarget isKindOf _x) exitWith {_isFuel = true;};
		} count dayz_fuelsources;
	};

	//remove gathered plant if empty
	if (_isPlant) then {
		_cursorTarget call player_gather;
	};

	//flip vehicle
	if (_isVehicle && !_isMan && _isAlive && {!(canMove _cursorTarget)} && {player distance _cursorTarget >= 2} && {(count (crew _cursorTarget))== 0} && {((vectorUp _cursorTarget) select 2) < 0.5}) then {
		if (s_player_flipveh < 0) then {
			s_player_flipveh = player addAction [format[localize "str_actions_flipveh",_text], "\z\addons\dayz_code\actions\player_flipvehicle.sqf",_cursorTarget, 1, true, true];
		};
	} else {
		player removeAction s_player_flipveh;
		s_player_flipveh = -1;
	};

	//Allow player to fill Fuel can
	if (_hasEmptyFuelCan && _isFuel && _isAlive) then {
		if (s_player_fillfuel < 0) then {
			s_player_fillfuel = player addAction [localize "str_actions_self_10", "\z\addons\dayz_code\actions\jerry_fill.sqf",_cursorTarget, 1, false, true];
		};
	} else {
		player removeAction s_player_fillfuel;
		s_player_fillfuel = -1;
	};

	if (_isVehicle && {!_isMan && damage _cursorTarget < 1}) then {
		local _isDisallowRefuel = _isBicycle || _isStatic;
		//Allow player to fill vehicle 210L
		if (_hasBarrel &&  {fuel _cursorTarget < 1 && !_isDisallowRefuel}) then {
			if (s_player_fillfuel210 < 0) then {
				s_player_fillfuel210 = player addAction [format[localize "str_actions_medical_10",_text,"210"], "\z\addons\dayz_code\actions\refuel.sqf",["ItemFuelBarrel",_cursorTarget], 0, true, true];
			};
		} else {
			player removeAction s_player_fillfuel210;
			s_player_fillfuel210 = -1;
		};

		//Allow player to fill vehicle 20L
		if (_hasFuel20 && {fuel _cursorTarget < 1 && !_isDisallowRefuel}) then {
			if (s_player_fillfuel20 < 0) then {
				s_player_fillfuel20 = player addAction [format[localize "str_actions_medical_10",_text,"20"], "\z\addons\dayz_code\actions\refuel.sqf",["ItemJerrycan",_cursorTarget], 0, true, true];
			};
		} else {
			player removeAction s_player_fillfuel20;
			s_player_fillfuel20 = -1;
		};

		//Allow player to fill vehicle 5L
		if (_hasFuel5 && {fuel _cursorTarget < 1 && !_isDisallowRefuel}) then {
			if (s_player_fillfuel5 < 0) then {
				s_player_fillfuel5 = player addAction [format[localize "str_actions_medical_10",_text,"5"], "\z\addons\dayz_code\actions\refuel.sqf",["ItemFuelcan",_cursorTarget], 0, true, true];
			};
		} else {
			player removeAction s_player_fillfuel5;
			s_player_fillfuel5 = -1;
		};

		//Allow player to siphon vehicles
		if (_hasEmptyFuelCan && !_isBicycle && {fuel _cursorTarget > 0}) then {
			if (s_player_siphonfuel < 0) then {
				s_player_siphonfuel = player addAction [format[localize "str_siphon_start"], "\z\addons\dayz_code\actions\siphonFuel.sqf",_cursorTarget, 0, true, true];
			};
		} else {
			player removeAction s_player_siphonfuel;
			s_player_siphonfuel = -1;
		};
	} else {
		player removeAction s_player_fillfuel210;
		s_player_fillfuel210 = -1;
		player removeAction s_player_fillfuel20;
		s_player_fillfuel20 = -1;
		player removeAction s_player_fillfuel5;
		s_player_fillfuel5 = -1;
		player removeAction s_player_siphonfuel;
		s_player_siphonfuel = -1;
	};

// Fireplace Actions Check
	if ((inflamed _cursorTarget) || {_cursorTarget call isInflamed}) then {
		local _hasRawMeat = {_x in Dayz_meatraw} count _magazinesPlayer > 0;
		local _hasUnboiledWater = {_x in DZE_unboiledWater} count _magazinesPlayer > 0;
		local _hasFrozenFoods = {_x in DZE_frozenFoods} count _magazinesPlayer > 0;

		// Cook Meat
		if (_hasRawMeat && !a_player_cooking) then {
			if (s_player_cook < 0) then {
				s_player_cook = player addAction [localize "str_actions_self_05", "\z\addons\dayz_code\actions\cook.sqf", _cursorTarget, 3, true, true];
			};
		};
		// Boil Water
		if (_hasUnboiledWater && !a_player_boil) then {
			if (s_player_boil < 0) then {
				s_player_boil = player addAction [localize "str_actions_boilwater", "\z\addons\dayz_code\actions\boil.sqf", _cursorTarget, 3, true, true];
			};
		};
		// Thaw Frozen Food
		if (_hasFrozenFoods && !a_player_thaw) then {
			if (s_player_thaw < 0) then {
				s_player_thaw = player addAction [localize "STR_ACTIONS_THAW_FROZEN", "\z\addons\dayz_code\actions\thaw.sqf", _cursorTarget, 3, true, true];
			};
		};
	} else {
		if (a_player_cooking) then {
			player removeAction s_player_cook;
			s_player_cook = -1;
		};
		if (a_player_boil) then {
			player removeAction s_player_boil;
			s_player_boil = -1;
		};
		if (a_player_thaw) then {
			player removeAction s_player_thaw;
			s_player_thaw = -1;
		};
	};

	// Remove Object
	if (_isAlive) then {
		local _restrict = _typeOfCursorTarget in DZE_restrictRemoval;			

		// Allow player to remove objects with no ownership or access required
		if (!_restrict && (_typeOfCursorTarget in DZE_isWreck || {_typeOfCursorTarget in DZE_isWreckBuilding || {_typeOfCursorTarget in DZE_isRemovable}})) then {
			if (_hasToolbox && _hasCrowbar) then {
				_player_deleteBuild = true;
			};
		};
		// Allow player to remove objects only if they have proper ownership or access
		if (_restrict || _isModular || _isStatic || {_typeOfCursorTarget in DZE_isDestroyableStorage}) then {
			if (_hasToolbox && _hasCrowbar) then {				
				_hasAccess = [player, _cursorTarget] call FNC_check_access;
				local _noPlotBuildings = ["WorkBench_DZ","FuelPump_DZ","Generator_DZ"];
				if ((_hasAccess select 2) || (_hasAccess select 3) || ((_isStash || _typeOfCursorTarget in _noPlotBuildings) && (_hasAccess select 0))) then {
					_hasDeconstructAccess = true;
					_player_deleteBuild = true;
				};
			};
		};
		if (_isVehicle) then {
			if ((_characterID != "0") && !_isMan) then {
				_player_lockUnlock_crtl = true;
			};
		};
	};
	if (_player_deleteBuild) then {
		if (s_player_deleteBuild < 0) then {
			s_player_deleteBuild = player addAction [format[localize "STR_EPOCH_REMOVE", _text], "\z\addons\dayz_code\actions\remove.sqf",[_cursorTarget, 2, _isModular], -3, false, true];
		};
	} else {
		player removeAction s_player_deleteBuild;
		s_player_deleteBuild = -1;
		
	};

	// Deconstruct Modular Object
	if (DZE_refundModular && DZE_allowDeconstruct && _hasDeconstructAccess && _isModular && !((DZE_RefundDamageLimit > 0) && (damage _cursorTarget > DZE_RefundDamageLimit))) then {
		if !(_typeOfCursorTarget in DZE_modularExclude) then {	// check if class allows refunds
			if (s_player_deconstruct < 0) then {
				s_player_deconstruct = player addAction [format[localize "STR_EPOCH_DECONSTRUCT", _text], "\z\addons\dayz_code\actions\remove.sqf",[_cursorTarget, 3, _isModular], -4, false, true];
			};
		};
	} else {
		player removeAction s_player_deconstruct;
		s_player_deconstruct = -1;
	};

	//remove Own objects
	if (_isOwner) then {
		if (_istypeTent) then {
			//Packing my tent
			if (s_player_packtent < 0) then {
				s_player_packtent = player addAction [localize "str_actions_self_07", "\z\addons\dayz_code\actions\tent_pack.sqf",_cursorTarget, 0, false, true];
			};
		} else {
			player removeAction s_player_packtent;
			s_player_packtent = -1;
		};
	} else {
		player removeAction s_player_packtent;
		s_player_packtent = -1;
	};

	//other tents
	if (_istypeTent) then {
		local _hasIgnitors = {_x in DayZ_Ignitors} count _itemsPlayer > 0;
		if ((_hasFuel20 || _hasFuel5 || _hasBarrel) && _hasIgnitors) then {
			if (s_player_destroytent < 0) then {
				s_player_destroytent = player addAction [localize "str_actions_self_destroytent", "\z\addons\dayz_code\actions\player_destroyTent.sqf",_cursorTarget, 0, false, true];
			};
		} else {
			player removeAction s_player_destroytent;
			s_player_destroytent = -1;
		};
		if (_typeOfCursorTarget in ["IC_DomeTent","IC_Tent"]) then {
			if (s_player_packtentinfected < 0) then {
				s_player_packtentinfected = player addAction [localize "str_actions_self_07", "\z\addons\dayz_code\actions\tent_pack.sqf",_cursorTarget, 0, false, true];
			};
		} else {
			player removeAction s_player_packtentinfected;
			s_player_packtentinfected = -1;
		};
		//sleep
		if (s_player_sleep < 0) then {
			s_player_sleep = player addAction [localize "str_actions_self_sleep", "\z\addons\dayz_code\actions\player_sleep.sqf",_cursorTarget, 0, false, true];
		};
	} else {
		player removeAction s_player_sleep;
		s_player_sleep = -1;
	};

	//Study Body
	if (_cursorTarget getVariable["bodyName",""] != "") then {
		if (s_player_studybody < 0) then {
			s_player_studybody = player addAction [localize "str_action_studybody", "\z\addons\dayz_code\actions\study_body.sqf",_cursorTarget, 0, false, true];
		};
	} else {
		player removeAction s_player_studybody;
		s_player_studybody = -1;
	};
/*
	//Carbomb
	local _hasCarBomb = "ItemCarBomb" in _magazinesPlayer;
	if (((_cursorTarget isKindOf "Car") || (_cursorTarget isKindOf "Air") || (_cursorTarget isKindOf "Motorcycle")) && _hasCarBomb) then {
		if (s_player_attach_bomb < 0) then {
			s_player_attach_bomb = player addAction [localize "str_bombAttach", "\z\addons\dayz_code\actions\player_attach_bomb.sqf",_cursorTarget, 3, true, true];
		};
	} else {
			player removeAction s_player_attach_bomb;
			s_player_attach_bomb = -1;
	};
*/
	//Repairing Vehicles
	if (_isVehicle && {!_isMan && _hasToolbox && !_isStatic && {dayz_myCursorTarget != _cursorTarget} && {damage _cursorTarget < 1}}) then {
		if (s_player_repair_crtl < 0) then {
			dayz_myCursorTarget = _cursorTarget;
			local _menu = dayz_myCursorTarget addAction [localize "str_actions_repairveh", "\z\addons\dayz_code\actions\repair_vehicle.sqf",_cursorTarget, 0, true, false];
			if (!_isBicycle) then { //Bike wheels should not give full size tires. Also model does not update to show removed wheels.
				local _menu1 = [];
				if (!DZE_salvageLocked) then {
					if (!_isLocked) then {
						_menu1 = dayz_myCursorTarget addAction [localize "str_actions_salvageveh", "\z\addons\dayz_code\actions\salvage_vehicle.sqf",_cursorTarget, 0, true, false];
						s_player_repairActions set [count s_player_repairActions,_menu1];
					};
				} else {
					_menu1 = dayz_myCursorTarget addAction [localize "str_actions_salvageveh", "\z\addons\dayz_code\actions\salvage_vehicle.sqf",_cursorTarget, 0, true, false];
					s_player_repairActions set [count s_player_repairActions,_menu1];
				};
			};
			s_player_repairActions set [count s_player_repairActions,_menu];
			s_player_repair_crtl = 1;
		} else {
			{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;
			s_player_repairActions = [];
			s_player_repair_crtl = -1;
		};
	};

	if ((_typeOfCursorTarget == "Plastic_Pole_EP1_DZ") && {speed player <= 1}) then {
		_hasAccess = [player, _cursorTarget] call FNC_check_access;
		local _allowed = ((_hasAccess select 0) || _hasAccess select 2 || _hasAccess select 3 || _hasAccess select 4);
		if (s_player_plotManagement < 0 && _allowed) then {
			s_player_plotManagement = player addAction [format["<t color='#b3e6ff'>%1</t>",localize "STR_EPOCH_ACTIONS_MANAGEPLOT"], "\z\addons\dayz_code\actions\plotManagement\initPlotManagement.sqf", [], 5, false];
		};
		if (s_player_plot_boundary < 0 && {_allowed || (_hasAccess select 1)}) then {
			s_player_plot_boundary = player addAction [localize "STR_EPOCH_PLOTMANAGEMENT_SHOW_BOUNDARY", "\z\addons\dayz_code\actions\plotManagement\plotToggleMarkers.sqf", _cursorTarget, 1, false];
		};
	} else {
		player removeAction s_player_plotManagement;
		s_player_plotManagement = -1;
		player removeAction s_player_plot_boundary;
		s_player_plot_boundary = -1;
	};

	if (DZE_HeliLift) then {
		local _liftHeli = objNull;
		local _found = false;
		local _allowTow = false;
		if ((count (crew _cursorTarget)) == 0) then {
			{
				if (!_allowTow) then {
					_allowTow = _cursorTarget isKindOf _x;
				};
			} count DZE_HeliAllowToTow;
		};

		if (_allowTow) then {
			{
				if (!_found) then {
					local _posL = [_x] call FNC_getPos;
					local _posC = [_cursorTarget] call FNC_getPos;
					local _height = (_posL select 2) - (_posC select 2);
					local _hasAttached = _x getVariable["hasAttached",false];
					if ((_height < 15) && {_height > 5} && {typeName _hasAttached != "OBJECT"}) then {
						if (((abs((_posL select 0) - (_posC select 0))) < 10) && {(abs((_posL select 1) - (_posC select 1))) < 10}) then {
							_liftHeli = _x;
							_found = true;
						};
					};
				};
			} count (player nearEntities [DZE_HeliAllowTowFrom,15]);
		};

		local _attached = _cursorTarget getVariable["attached",false];
		if (_found && _allowTow && !_isLocked && {typeName _attached != "OBJECT"}) then {
			if (s_player_heli_lift < 0) then {
				s_player_heli_lift = player addAction [localize "STR_EPOCH_ACTIONS_ATTACHTOHELI", "\z\addons\dayz_code\actions\player_heliLift.sqf",[_liftHeli,_cursorTarget], -10, false, true];
			};
		} else {
			player removeAction s_player_heli_lift;
			s_player_heli_lift = -1;
		};
	};

	// Allow Owner to lock and unlock vehicle
	if (_player_lockUnlock_crtl) then {
		local _totalKeys = call epoch_tempKeys;
		local _temp_keys = _totalKeys select 0;
		local _temp_keys_names = _totalKeys select 1;
		local _hasKey = _characterID in _temp_keys;
		
		if (s_player_lockUnlock_crtl < 0) then {
			local _oldOwner = (_characterID == _playerUID);
			local _unlock = [];
			
			if (_isLocked) then {
				if (_hasKey || _oldOwner) then {
					_unlock = player addAction [format[localize "STR_EPOCH_ACTIONS_UNLOCK",_text], "\z\addons\dayz_code\actions\unlock_veh.sqf",[_cursorTarget,(_temp_keys_names select (_temp_keys find _characterID))], 2, true, true];
					s_player_lockunlock set [count s_player_lockunlock,_unlock];
					s_player_lockUnlock_crtl = 1;
				} else {
					if (_hasHotwireKit) then {
						_unlock = player addAction [format[localize "STR_EPOCH_ACTIONS_HOTWIRE",_text], "\z\addons\dayz_code\actions\hotwire_veh.sqf",_cursorTarget, 2, true, true];
					} else {
						_unlock = player addAction [format["<t color='#ff0000'>%1</t>",localize "STR_EPOCH_ACTIONS_VEHLOCKED"], "",_cursorTarget, 2, false, true];
					};
					s_player_lockunlock set [count s_player_lockunlock,_unlock];
					s_player_lockUnlock_crtl = 1;
				};
			} else {
				if (_hasKey || _oldOwner) then {
					_lock = player addAction [format[localize "STR_EPOCH_ACTIONS_LOCK",_text], "\z\addons\dayz_code\actions\lock_veh.sqf",_cursorTarget, 1, true, true];
					s_player_lockunlock set [count s_player_lockunlock,_lock];
					s_player_lockUnlock_crtl = 1;
				};
			};
		};
		if (DZE_VehicleKey_Changer) then {
			if (s_player_copyToKey < 0) then {
				if ((_hasKeymakerskit && _hasKey && !_isLocked && {(count _temp_keys) > 1}) || {_cursorTarget getVariable ["hotwired",false]}) then {
					s_player_copyToKey = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_VKC_CHANGE_ACTION"],"\z\addons\dayz_code\actions\vkc\vehicleKeyChanger.sqf",[_cursorTarget,_characterID,if (_cursorTarget getVariable ["hotwired",false]) then {"claim"} else {"change"}],5,false,true];
				};
			};
		};		
	} else {
		{player removeAction _x} count s_player_lockunlock;s_player_lockunlock = [];
		s_player_lockUnlock_crtl = -1;
		player removeAction s_player_copyToKey;
		s_player_copyToKey = -1;
	};

	if (DZE_Hide_Body && {_isMan && !_isAlive}) then {
		if (s_player_hide_body < 0) then {
			s_player_hide_body = player addAction [localize "str_action_hide_body", "\z\addons\dayz_code\actions\hide_body.sqf",_cursorTarget, 1, true, true];
		};
	} else {
		player removeAction s_player_hide_body;
		s_player_hide_body = -1;
	};

	// gear access on surrendered player
	if (_isPlayer && _isAlive && {_cursorTarget getVariable ["DZE_Surrendered",false]}) then {
		if (s_player_SurrenderedGear < 0) then {
			s_player_SurrenderedGear = player addAction [localize "STR_UI_GEAR", "\z\addons\dayz_code\actions\surrender_gear.sqf",_cursorTarget, 1, true, true];
		};
	} else {
		player removeAction s_player_SurrenderedGear;
		s_player_SurrenderedGear = -1;
	};

	// Allow manage door
	if (DZE_doorManagement && _isLockedDoor) then {
		// Check player access
		_hasAccess = [player, _cursorTarget] call FNC_check_access;
		if (s_player_manageDoor < 0 && {(_hasAccess select 2) || {_hasAccess select 3} || {_hasAccess select 5} || {_hasAccess select 6}}) then {
			s_player_manageDoor = player addAction [format["<t color='#b3e6ff'>%1</t>", localize "STR_EPOCH_ACTIONS_MANAGEDOOR"], "\z\addons\dayz_code\actions\doorManagement\initDoorManagement.sqf", _cursorTarget, 5, false];
		};
	} else {
		player removeAction s_player_manageDoor;
		s_player_manageDoor = -1;
	};

	//Allow owner to unlock vault
	if (_isClose && !keypadCancel && {(_typeOfCursorTarget in (DZE_LockedStorage + DZE_UnLockedStorage)) && {_characterID != "0"}}) then {
		if (s_player_unlockvault < 0) then {
			local _combi = [];
			if (_isLockedStorage) then {
				if ((_characterID == dayz_combination) || _isOwner) then {
					_combi = player addAction [format[localize "STR_EPOCH_ACTIONS_OPEN",_text], "\z\addons\dayz_code\actions\vault_unlock.sqf",_cursorTarget, 0, false, true];
					s_player_combi set [count s_player_combi,_combi];
				} else {
					_combi = player addAction [format[localize "STR_EPOCH_ACTIONS_UNLOCK",_text], "\z\addons\dayz_code\actions\vault_combination_1.sqf",_cursorTarget, 0, false, true];
					s_player_combi set [count s_player_combi,_combi];
				};
				s_player_unlockvault = 1;
			} else {
				if ((_characterID != dayz_combination) && !_isOwner) then {
					_combi = player addAction [localize "STR_EPOCH_ACTIONS_RECOMBO", "\z\addons\dayz_code\actions\vault_combination_1.sqf",_cursorTarget, 0, false, true];
					s_player_combi set [count s_player_combi,_combi];
					s_player_unlockvault = 1;
				};
			};
		};
	} else {
		{player removeAction _x} count s_player_combi;s_player_combi = [];
		s_player_unlockvault = -1;
	};

	//Allow owner to pack vault
	if (_isClose && !keypadCancel && {(_typeOfCursorTarget in DZE_UnLockedStorage) && {_characterID != "0"}  && {(_characterID == dayz_combination || _isOwner)}}) then {
		if (s_player_lockvault < 0) then {
			s_player_lockvault = player addAction [format[localize "STR_EPOCH_ACTIONS_LOCK",_text], "\z\addons\dayz_code\actions\vault_lock.sqf",_cursorTarget, 0, false, true];
		};
		if (s_player_packvault < 0) then {
			s_player_packvault = player addAction [format["<t color='#ff0000'>%1</t>",format[localize "STR_EPOCH_ACTIONS_PACK",_text]], "\z\addons\dayz_code\actions\vault_pack.sqf",_cursorTarget, 0, false, true];
		};
		if (s_player_changeVaultCode < 0 && (_characterID == dayz_combination || _isOwner)) then {
			s_player_changeVaultCode = player addAction [format[localize "STR_CL_CC_CODE_CHANGE",_text], "\z\addons\dayz_code\actions\changeCode.sqf",_cursorTarget, 0, false, true];
		};
	} else {
		player removeAction s_player_packvault;
		s_player_packvault = -1;
		player removeAction s_player_lockvault;
		s_player_lockvault = -1;
		player removeAction s_player_changeVaultCode;
		s_player_changeVaultCode = -1;
	};

	//Player Deaths
	if (_typeOfCursorTarget == "Info_Board_EP1") then {
		if (s_player_information < 0) then {
			s_player_information = player addAction [localize "STR_EPOCH_ACTIONS_MURDERS", "\z\addons\dayz_code\actions\list_playerDeaths.sqf",[], 7, false, true];
		};
	} else {
		player removeAction s_player_information;
		s_player_information = -1;
	};

	//Fuel Pump
	if (_typeOfCursorTarget in dayz_fuelpumparray) then {
		if (s_player_fuelauto < 0) then {
			local _findNearestGen = {((alive _x) && (_x getVariable ["GeneratorRunning",false]))} count (([player] call FNC_getPos) nearObjects ["Generator_DZ",30]);
			if (_findNearestGen > 0) then {
				s_player_fuelauto = player addAction [localize "STR_EPOCH_ACTIONS_FILLVEH", "\z\addons\dayz_code\actions\fill_nearestVehicle.sqf",[1,_cursorTarget], 0, false, true];
			} else {
				s_player_fuelauto = player addAction [format["<t color='#ff0000'>%1</t>",localize "STR_EPOCH_ACTIONS_NEEDPOWER"], "",[], 0, false, true];
			};
		};
	} else {
		player removeAction s_player_fuelauto;
		s_player_fuelauto = -1;
	};

	//Fuel Pump on truck
	if (_isAlive && {_typeOfCursorTarget in DZE_fueltruckarray}) then {
		if (s_player_fuelauto2 < 0) then {
			if (isEngineOn _cursorTarget) then {
				s_player_fuelauto2 = player addAction [localize "STR_EPOCH_ACTIONS_FILLVEH", "\z\addons\dayz_code\actions\fill_nearestVehicle.sqf",[2,_cursorTarget ], 0, false, true];
			} else {
				s_player_fuelauto2 = player addAction [format["<t color='#ff0000'>%1</t>",localize "STR_EPOCH_ACTIONS_NEEDPOWER"], "",[], 0, false, true];
			};
		};
	} else {
		player removeAction s_player_fuelauto2;
		s_player_fuelauto2 = -1;
	};

	// inplace upgrade tool
	if (((_cursorTarget isKindOf "ModularItems") || (_cursorTarget isKindOf "Land_DZE_WoodDoor_Base") || (_cursorTarget isKindOf "CinderWallDoor_DZ_Base") || (_cursorTarget isKindOf "DZE_Housebase") || (_cursorTarget isKindOf "DZ_storage_base") || (_typeOfCursorTarget in DZE_UpgradableStorage)) && !(_typeOfCursorTarget in DZE_DisableUpgrade)) then {
		if ((s_player_lastTarget select 0) != _cursorTarget) then {
			if (s_player_upgrade_build > 0) then {
				player removeAction s_player_upgrade_build;
				s_player_upgrade_build = -1;
			};
		};
		local _upgrade = getArray (configFile >> "CfgVehicles" >> (typeOf _cursorTarget) >> "upgradeBuilding");
		if ((s_player_upgrade_build < 0) && {(count _upgrade) > 0}) then {
			_hasAccess = [player, _cursorTarget] call FNC_check_access;
			if ((_hasAccess select 2) || (_hasAccess select 3) || ((_hasAccess select 0) && (_typeOfCursorTarget isKindOf "DZ_storage_base" || _isLockedStorage))) then {
				s_player_lastTarget set [0,_cursorTarget];
				s_player_upgrade_build = player addAction [format[localize "STR_EPOCH_UPGRADE",_text], "\z\addons\dayz_code\actions\player_upgrade.sqf",_cursorTarget, -1, false, true];
			};
		};
	} else {
		player removeAction s_player_upgrade_build;
		s_player_upgrade_build = -1;
	};

	// downgrade system
	if (DZE_Lock_Door == _characterID && !keypadCancel) then {
		if (_isLockedDoor && {!(_typeOfCursorTarget in DZE_LockedGates)}) then {
			if ((s_player_lastTarget select 1) != _cursorTarget) then {
				if (s_player_downgrade_build > 0) then {
					player removeAction s_player_downgrade_build;
					s_player_downgrade_build = -1;
				};
			};
			if (s_player_downgrade_build < 0) then {
				_hasAccess = [player, _cursorTarget] call FNC_check_access;
				if ((_hasAccess select 2) || {_hasAccess select 3}) then {
					s_player_lastTarget set [1,_cursorTarget];
					s_player_downgrade_build = player addAction [format[localize "STR_EPOCH_ACTIONS_REMLOCK",_text], "\z\addons\dayz_code\actions\player_buildingDowngrade.sqf",_cursorTarget, -2, false, true];
				};
			};
		};
		if (s_player_changeDoorCode < 0 && _isLockedDoor) then {
			s_player_changeDoorCode = player addAction [format[localize "STR_CL_CC_CODE_CHANGE",_text], "\z\addons\dayz_code\actions\changeCode.sqf",_cursorTarget, 0, false, true];
		};
	} else {
		player removeAction s_player_downgrade_build;
		s_player_downgrade_build = -1;
		player removeAction s_player_changeDoorCode;
		s_player_changeDoorCode = -1;
	};

	// inplace maintenance tool
	if ((damage _cursorTarget >= DZE_DamageBeforeMaint) && {_cursorTarget isKindOf "ModularItems" || {_cursorTarget isKindOf "DZE_Housebase"} || {_typeOfCursorTarget == "LightPole_DZ"}}) then {
		if ((s_player_lastTarget select 2) != _cursorTarget) then {
			if (s_player_maint_build > 0) then {
				player removeAction s_player_maint_build;
				s_player_maint_build = -1;
			};
		};
		if (s_player_maint_build < 0) then {
			_hasAccess = [player, _cursorTarget] call FNC_check_access;
			if ((_hasAccess select 2) || {_hasAccess select 3}) then {
				local _text2 = _text + " (" + str(round ((damage _cursorTarget) * 100)) + "% damaged)";
				s_player_lastTarget set [2,_cursorTarget];
				s_player_maint_build = player addAction [format["%1 %2",localize "STR_EPOCH_ACTIONS_MAINTAIN",_text2], "\z\addons\dayz_code\actions\player_buildingMaint.sqf",_cursorTarget, -2, false, true];
			};
		};
	} else {
		player removeAction s_player_maint_build;
		s_player_maint_build = -1;
	};

	//Start Generator
	if (_isGenerator) then {
		if (s_player_fillgen < 0) then {
			// check if not running
			if (_cursorTarget getVariable ["GeneratorRunning", false]) then {
				s_player_fillgen = player addAction [localize "STR_EPOCH_ACTIONS_GENERATOR1", "\z\addons\dayz_code\actions\stopGenerator.sqf",_cursorTarget, 0, false, true];
			} else {
				// check if not filled and player has jerry.
				if (_cursorTarget getVariable ["GeneratorFilled", false]) then {
					s_player_fillgen = player addAction [localize "STR_EPOCH_ACTIONS_GENERATOR2", "\z\addons\dayz_code\actions\fill_startGenerator.sqf",_cursorTarget, 0, false, true];
				} else {
					if (_hasFuel20 || _hasFuel5 || _hasBarrel) then {
						s_player_fillgen = player addAction [localize "STR_EPOCH_ACTIONS_GENERATOR3", "\z\addons\dayz_code\actions\fill_startGenerator.sqf",_cursorTarget, 0, false, true];
					};
				};
			};
		};
	} else {
		player removeAction s_player_fillgen;
		s_player_fillgen = -1;
	};
	
	if (DZE_VehicleKey_Changer) then {
		if (_hasKeymakerskit && _isVehicle && !_isMan && _isAlive && {_characterID == "0"}) then {
			if (s_player_claimVehicle < 0) then {
				_totalKeys = call epoch_tempKeys;
				if (count (_totalKeys select 0) > 0) then {
					s_player_claimVehicle = player addAction [format["<t color='#0059FF'>%1</t>",format[localize "STR_CL_VKC_CLAIM_ACTION",_text]],"\z\addons\dayz_code\actions\vkc\vehicleKeyChanger.sqf",[_cursorTarget,_characterID,"claim"],5,false,true];
				};
			};
		} else {
			player removeAction s_player_claimVehicle;
			s_player_claimVehicle = -1;
		};
	};

	if (!_isAlive && _isMan && !_isZombie && !_isBloodsucker && !_isAnimal) then {	
		if (DZE_Take_Clothes) then {
			if (!(_cursorTarget getVariable["clothesTaken",false]) && {_typeOfCursorTarget in AllPlayers} && {!(_typeOfCursorTarget in DZE_Disable_Take_Clothes)}) then {
				if (s_player_clothes < 0) then {
					s_player_clothes = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_TC_TAKE_CLOTHES"],"\z\addons\dayz_code\actions\takeClothes.sqf",_cursorTarget,0, false,true];
				};
			} else {
				player removeAction s_player_clothes;
				s_player_clothes = -1;
			};
		};

		if (DZE_Bury_Body) then {
			local _hasShovel = ("ItemEtool" in _itemsPlayer || "ItemShovel" in _itemsPlayer);
			if (_hasShovel && !(_cursorTarget getVariable ["bodyButchered",false])) then {
				if (s_player_bury_human < 0) then {
					s_player_bury_human = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_BA_BURY"],"\z\addons\dayz_code\actions\buryActions.sqf",[_cursorTarget,"bury"],0,false,true];
				};
			} else {
				player removeAction s_player_bury_human;
				s_player_bury_human = -1;
			};
		};
		
		if (DZE_Butcher_Body) then {
			if (({_x in ["ItemKnife","ItemKnife5","ItemKnife4","ItemKnife3","ItemKnife2","ItemKnife1"]} count _itemsPlayer > 0) && !(_cursorTarget getVariable ["bodyButchered",false])) then {
				if (s_player_butcher_human < 0) then {
					s_player_butcher_human = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_BA_BUTCHER"],"\z\addons\dayz_code\actions\buryActions.sqf",[_cursorTarget,"butcher"],0,false,true];
				};
			} else {
				player removeAction s_player_butcher_human;
				s_player_butcher_human = -1;
			};
		};
	};
	
	if (DZE_Virtual_Garage) then {
		if (_typeOfCursorTarget in vg_List) then {
			if (s_garage_dialog < 0) then {
				local _hasAccess = [player,_cursorTarget] call FNC_check_access;
				local _plotCheck = [player, false] call FNC_find_plots;
				local _isNearPlot = ((_plotCheck select 1) > 0);

				if ((_isNearPlot && ((_hasAccess select 2) || (_hasAccess select 3))) || !_isNearPlot) then {
					s_garage_dialog = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_VG_VIRTUAL_GARAGE"],"\z\addons\dayz_code\actions\virtualGarage\virtualGarage.sqf",_cursorTarget,3,false,true];
				};
			};
		} else {
			player removeAction s_garage_dialog;
			s_garage_dialog = -1;
		};
	};

	// ZSC
	if (Z_singleCurrency) then {
		if (_isMan && !_isAlive && {(!_isAnimal && !_isZombie && !_isBloodsucker) || (_isZombie && ZSC_ZombieCoins select 0)}) then {
			if (s_player_checkWallet < 0) then {
				s_player_checkWallet = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_ZSC_CHECK_WALLET"],"\z\addons\dayz_code\actions\zsc\checkWallet.sqf",_cursorTarget,0,false,true];
			};
		} else {
			player removeAction s_player_checkWallet;
			s_player_checkWallet = -1;
		};

		if (!_isLocked && !_isLockedStorage && {_typeOfCursorTarget in DZE_MoneyStorageClasses}) then {
			if (s_bank_dialog < 0) then {
				s_bank_dialog = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_ZSC_ACCESS_BANK"],"\z\addons\dayz_code\actions\zsc\bankDialog.sqf",_cursorTarget,1,true,true];
			};
		} else {
			player removeAction s_bank_dialog;
			s_bank_dialog = -1;
		};
		if (ZSC_VehicleMoneyStorage) then {
			if (_isVehicle && !_isMan && !_isLocked && _isAlive && !_isBicycle && !_isStatic) then {
				if (s_bank_dialog3 < 0) then {
					s_bank_dialog3 = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_ZSC_ACCESS_BANK"],"\z\addons\dayz_code\actions\zsc\vehDialog.sqf",_cursorTarget,1,true,true];
				};
			} else {
				player removeAction s_bank_dialog3;
				s_bank_dialog3 = -1;
			};
		};
		if (_isAlive && _isPlayer && {_typeOfCursorTarget in AllPlayers}) then {
			if (s_givemoney_dialog < 0) then {
				s_givemoney_dialog = player addAction [format["<t color='#0059FF'>%1</t>",format [localize "STR_CL_ZSC_TRADE_COINS",CurrencyName,name _cursorTarget]],"\z\addons\dayz_code\actions\zsc\givePlayer.sqf",_cursorTarget,3,true,true];
			};
		} else {
			player removeAction s_givemoney_dialog;
			s_givemoney_dialog = -1;
		};
		if (Z_globalBanking) then {
			if (_isMan && !_isPlayer && {_typeOfCursorTarget in ZSC_bankTraders}) then {
				if (s_bank_dialog1 < 0) then {
					s_bank_dialog1 = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_ZSC_BANK_TELLER"],"\z\addons\dayz_code\actions\zsc\atmDialog.sqf",_cursorTarget,3,true,true];
				};
			} else {
				player removeAction s_bank_dialog1;
				s_bank_dialog1 = -1;
			};
			if (_typeOfCursorTarget in ZSC_bankObjects) then {
				if (s_bank_dialog2 < 0) then {
					s_bank_dialog2 = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_CL_ZSC_BANK_ATM"],"\z\addons\dayz_code\actions\zsc\atmDialog.sqf",_cursorTarget,3,true,true];
				};
			} else {
				player removeAction s_bank_dialog2;
				s_bank_dialog2 = -1;
			};
		};
	};

	// All Traders
	if (_isMan && !_isPlayer && {_typeOfCursorTarget in serverTraders}) then {
		if (s_player_parts_crtl < 0) then {
			local _humanity = player getVariable ["humanity",0];
			local _traderMenu = call compile format["menu_%1;",_typeOfCursorTarget];
			local _low_high = localize "STR_EPOCH_ACTIONS_HUMANITY_LOW";
			local _humanity_logic = false;
			if ((_traderMenu select 2) == "friendly") then {
				_humanity_logic = (_humanity < DZE_Bandit);
			};
			if ((_traderMenu select 2) == "hostile") then {
				_low_high = localize "STR_EPOCH_ACTIONS_HUMANITY_HIGH";
				_humanity_logic = (_humanity > DZE_Bandit);
			};
			if ((_traderMenu select 2) == "hero") then {
				_humanity_logic = (_humanity < DZE_Hero);
			};
			if (_humanity_logic) then {
				local _cancel = player addAction [format[localize "STR_EPOCH_ACTIONS_HUMANITY",_low_high], "","", 0, true, false];
				s_player_parts set [count s_player_parts,_cancel];
			} else {
				local _buy = [];
				{
					local _itemName2 = getText (configFile >> "CfgMagazines" >> (_x select 1) >> "displayName");
					if (_x select 1 in ["ItemDogTagBandit","ItemDogTagHero"]) then {
						_buy = player addAction [format[localize "STR_EPOCH_TRADER_CATEGORY_TRADE_ITEMS",(_x select 3),_itemName2,(_x select 4),localize "str_actions_stats_hm"], "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",[(_x select 0),(_x select 1),(_x select 2),(_x select 3),(_x select 4)],1, true, true];
					} else {
						local _itemName1 = getText (configFile >> "CfgMagazines" >> (_x select 0) >> "displayName");
						_buy = player addAction [format[localize "STR_EPOCH_TRADER_CATEGORY_TRADE_ITEMS",(_x select 3),_itemName2,(_x select 2),_itemName1], "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",[(_x select 0),(_x select 1),(_x select 2),(_x select 3),(_x select 4)],1, true, true];
					};
					s_player_parts set [count s_player_parts,_buy];
				} count (_traderMenu select 1);
				local _buyV = player addAction [localize "STR_EPOCH_PLAYER_289", "\z\addons\dayz_code\actions\AdvancedTrading\init.sqf",(_traderMenu select 0), 999, true, false];
				s_player_parts set [count s_player_parts,_buyV];
			};
			s_player_parts_crtl = 1;
		};
	} else {
		{player removeAction _x} count s_player_parts;s_player_parts = [];
		s_player_parts_crtl = -1;
	};

	//Dog
	if (dayz_tameDogs) then {
		local _hasRawMeat = {_x in Dayz_meatraw} count _magazinesPlayer > 0;

		if (_isDog && {_hasRawMeat && _isAlive && {_ownerID == "0"} && {player getVariable ["dogID",0] == 0}}) then {
			if (s_player_tamedog < 0) then {
				s_player_tamedog = player addAction [localize "str_actions_tamedog", "\z\addons\dayz_code\actions\dog\tame_dog.sqf", _cursorTarget, 1, false, true];
			};
		} else {
			player removeAction s_player_tamedog;
			s_player_tamedog = -1;
		};
		if (_isDog && _isAlive && _isOwner) then {
			local _hasbottleitem = ({_x in ["ItemWaterBottle","ItemWaterBottleInfected","ItemWaterBottleSafe","ItemWaterBottleBoiled","ItemPlasticWaterBottle","ItemPlasticWaterBottleInfected","ItemPlasticWaterBottleSafe","ItemPlasticWaterBottleBoiled"]} count _magazinesPlayer) > 0;

			if (s_player_feeddog < 0 && _hasRawMeat) then {
				s_player_feeddog = player addAction [localize "str_actions_feeddog","\z\addons\dayz_code\actions\dog\feed.sqf",[_dogHandle,0], 0, false, true];
			};
			if (s_player_waterdog < 0 && _hasbottleitem) then {
				s_player_waterdog = player addAction [localize "str_actions_waterdog","\z\addons\dayz_code\actions\dog\feed.sqf",[_dogHandle,1], 0, false, true];
			};
			if (s_player_staydog < 0) then {
				if (_dogHandle getFSMVariable "_actionLieDown") then { _text = "str_actions_liedog"; } else { _text = "str_actions_sitdog"; };
				s_player_staydog = player addAction [localize _text,"\z\addons\dayz_code\actions\dog\stay.sqf", _dogHandle, 5, false, true];
			};
			if (s_player_trackdog < 0) then {
				s_player_trackdog = player addAction [localize "str_actions_trackdog","\z\addons\dayz_code\actions\dog\track.sqf", _dogHandle, 4, false, true];
			};
			if (s_player_barkdog < 0) then {
				s_player_barkdog = player addAction [localize "str_actions_barkdog","\z\addons\dayz_code\actions\dog\speak.sqf", _cursorTarget, 3, false, true];
			};
			if (s_player_warndog < 0) then {
				local _warn = _dogHandle getFSMVariable "_watchDog";
				if (_warn) then { _text = localize "str_epoch_player_247"; _warn = false; } else { _text = localize "str_epoch_player_248"; _warn = true; };
				s_player_warndog = player addAction [format[localize "str_actions_warndog",_text],"\z\addons\dayz_code\actions\dog\warn.sqf",[_dogHandle, _warn], 2, false, true];
			};
			if (s_player_followdog < 0) then {
				s_player_followdog = player addAction [localize "str_actions_followdog","\z\addons\dayz_code\actions\dog\follow.sqf",[_dogHandle,true], 6, false, true];
			};
		} else {
			player removeAction s_player_feeddog;
			s_player_feeddog = -1;
			player removeAction s_player_waterdog;
			s_player_waterdog = -1;
			player removeAction s_player_staydog;
			s_player_staydog = -1;
			player removeAction s_player_trackdog;
			s_player_trackdog = -1;
			player removeAction s_player_barkdog;
			s_player_barkdog = -1;
			player removeAction s_player_warndog;
			s_player_warndog = -1;
			player removeAction s_player_followdog;
			s_player_followdog = -1;
		};
	};
} else {
	DZE_prevDistance = _distance;
	//Engineering
	player removeAction s_player_plot_boundary;
	s_player_plot_boundary = -1;
	player removeAction s_player_plotManagement;
	s_player_plotManagement = -1;
	{dayz_myCursorTarget removeAction _x} count s_player_repairActions;s_player_repairActions = [];
	player removeAction s_player_repair_crtl;
	s_player_repair_crtl = -1;
	dayz_myCursorTarget = objNull;
	player removeAction s_player_flipveh;
	s_player_flipveh = -1;
	player removeAction s_player_sleep;
	s_player_sleep = -1;
	player removeAction s_player_deleteBuild;
	s_player_deleteBuild = -1;
	player removeAction s_player_deconstruct;
	s_player_deconstruct = -1;
	player removeAction s_player_cook;
	s_player_cook = -1;
	player removeAction s_player_boil;
	s_player_boil = -1;
	player removeAction s_player_thaw;
	s_player_thaw = -1;
	player removeAction s_player_packtent;
	s_player_packtent = -1;
	player removeAction s_player_packtentinfected;
	s_player_packtentinfected = -1;
	player removeAction s_player_fillfuel;
	s_player_fillfuel = -1;
	player removeAction s_player_studybody;
	s_player_studybody = -1;
	//fuel
	player removeAction s_player_fillfuel210;
	s_player_fillfuel210 = -1;
	player removeAction s_player_fillfuel20;
	s_player_fillfuel20 = -1;
	player removeAction s_player_fillfuel5;
	s_player_fillfuel5 = -1;
	//Allow player to siphon vehicle fuel
	player removeAction s_player_siphonfuel;
	s_player_siphonfuel = -1;
	//Allow player to gather
	player removeAction s_player_gather;
	s_player_gather = -1;
	player removeAction s_player_destroytent;
	s_player_destroytent = -1;
	// player removeAction s_player_attach_bomb;
	//  s_player_attach_bomb = -1;
	{player removeAction _x} count s_player_combi;s_player_combi = [];
	s_player_lastTarget = [objNull,objNull,objNull,objNull,objNull];
	{player removeAction _x} count s_player_parts;s_player_parts = [];
	s_player_parts_crtl = -1;
	{player removeAction _x} count s_player_lockunlock;s_player_lockunlock = [];
	s_player_lockUnlock_crtl = -1;
	player removeAction s_player_SurrenderedGear;
	s_player_SurrenderedGear = -1;
	player removeAction s_player_tamedog;
	s_player_tamedog = -1;
	player removeAction s_player_feeddog;
	s_player_feeddog = -1;
	player removeAction s_player_waterdog;
	s_player_waterdog = -1;
	player removeAction s_player_staydog;
	s_player_staydog = -1;
	player removeAction s_player_trackdog;
	s_player_trackdog = -1;
	player removeAction s_player_barkdog;
	s_player_barkdog = -1;
	player removeAction s_player_warndog;
	s_player_warndog = -1;
	player removeAction s_player_followdog;
	s_player_followdog = -1;
	player removeAction s_player_unlockvault;
	s_player_unlockvault = -1;
	player removeAction s_player_packvault;
	s_player_packvault = -1;
	player removeAction s_player_lockvault;
	s_player_lockvault = -1;
	player removeAction s_player_information;
	s_player_information = -1;
	player removeAction s_player_fillgen;
	s_player_fillgen = -1;
	player removeAction s_player_upgrade_build;
	s_player_upgrade_build = -1;
	player removeAction s_player_maint_build;
	s_player_maint_build = -1;
	player removeAction s_player_downgrade_build;
	s_player_downgrade_build = -1;
	player removeAction s_player_fuelauto;
	s_player_fuelauto = -1;
	player removeAction s_player_fuelauto2;
	s_player_fuelauto2 = -1;
	player removeAction s_player_manageDoor;
	s_player_manageDoor = -1;
	player removeAction s_player_hide_body;
	s_player_hide_body = -1;
	player removeAction s_player_changeDoorCode;
	s_player_changeDoorCode = -1;
	player removeAction s_player_changeVaultCode;
	s_player_changeVaultCode = -1;
	player removeAction s_givemoney_dialog;
	s_givemoney_dialog = -1;
	player removeAction s_bank_dialog;
	s_bank_dialog = -1;
	player removeAction s_bank_dialog1;
	s_bank_dialog1 = -1;
	player removeAction s_bank_dialog2;
	s_bank_dialog2 = -1;
	player removeAction s_bank_dialog3;
	s_bank_dialog3 = -1;
	player removeAction s_player_checkWallet;
	s_player_checkWallet = -1;
	player removeAction s_player_clothes;
	s_player_clothes = -1;
	player removeAction s_player_bury_human;
	s_player_bury_human = -1;
	player removeAction s_player_butcher_human;
	s_player_butcher_human = -1;
	player removeAction s_player_copyToKey;
	s_player_copyToKey = -1;
	player removeAction s_player_claimVehicle;
	s_player_claimVehicle = -1;	
	player removeAction s_garage_dialog;
	s_garage_dialog = -1;	
};

//Dog actions on player self
if (_dogHandle > 0) then {
	local _dog = _dogHandle getFSMVariable "_dog";
	if (isNil "_dog") exitWith {};
	if (isNil "_ownerID") then {_ownerID = "0"};
	if (_canDo && !_inVehicle && {alive _dog} && {!(_ownerID in [_myCharID,_playerUID])}) then {
		if (s_player_movedog < 0) then {
			s_player_movedog = player addAction [localize "str_actions_movedog", "\z\addons\dayz_code\actions\dog\move.sqf", player getVariable ["dogID",0], 1, false, true];
		};
		if (s_player_speeddog < 0) then {
			_text = localize "str_epoch_player_249";
			local _speed = 0;
			if (_dog getVariable ["currentSpeed",1] == 0) then { _speed = 1; _text = localize "str_epoch_player_250"; };
			s_player_speeddog = player addAction [format[localize "str_actions_speeddog", _text], "\z\addons\dayz_code\actions\dog\speed.sqf",[player getVariable ["dogID",0],_speed], 0, false, true];
		};
		if (s_player_calldog < 0) then {
			s_player_calldog = player addAction [localize "str_actions_calldog", "\z\addons\dayz_code\actions\dog\follow.sqf", [player getVariable ["dogID",0], true], 2, false, true];
		};
	};
} else {
	player removeAction s_player_movedog;
	s_player_movedog = -1;
	player removeAction s_player_speeddog;
	s_player_speeddog = -1;
	player removeAction s_player_calldog;
	s_player_calldog = -1;
};

DZE_prevTarget = _cursorTarget;
//Monitor
player setVariable ["selfActions", diag_ticktime, false];