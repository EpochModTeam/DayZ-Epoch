scriptName "Functions\misc\fn_selfActions.sqf";
/***********************************************************
	ADD ACTIONS FOR SELF
	- Function
	- [] call fnc_usec_selfActions;
************************************************************/
private ["_canPickLight","_text","_unlock","_lock","_totalKeys","_temp_keys","_temp_keys_names","_restrict",
"_hasKey","_oldOwner","_hasAttached","_isZombie","_isHarvested","_isMan","_isFuel","_hasRawMeat","_hastinitem","_player_deleteBuild",
"_player_lockUnlock_crtl","_displayName","_hasIgnitors","_menu","_menu1","_allowTow","_liftHeli","_found","_posL","_posC","_height","_attached",
"_combi","_findNearestGen","_humanity_logic","_low_high","_cancel","_buy","_buyV","_humanity","_traderMenu","_warn","_typeOfCursorTarget",
"_isVehicle","_isBicycle","_isDestructable","_isGenerator","_ownerID","_isVehicletype","_hasBarrel","_hasFuel20","_hasFuel5","_hasEmptyFuelCan",
"_itemsPlayer","_hasToolbox","_hasbottleitem","_isAlive","_isPlant","_istypeTent","_upgradeItems","_isDisallowRefuel","_isDog",
"_isModular","_isModularDoor","_isHouse","_isGate","_isFence","_isLockableGate","_isUnlocked","_isOpen","_isClosed","_ownerArray","_ownerBuildLock",
"_ownerPID","_speed","_dog","_vehicle","_inVehicle","_cursorTarget","_primaryWeapon","_currentWeapon","_magazinesPlayer","_onLadder","_canDo",
"_nearLight","_vehicleOwnerID","_hasHotwireKit","_isPZombie","_dogHandle","_allowedDistance","_id","_upgrade","_weaponsPlayer","_hasCrowbar",
"_allowed","_hasAccess","_uid"];

_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_cursorTarget = cursorTarget;
_primaryWeapon = primaryWeapon player;
_currentWeapon = currentWeapon player;
_magazinesPlayer = magazines player;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf && !r_player_unconscious && !_onLadder);
//_canDrink = count nearestObjects [getPosATL player, ["Land_pumpa","Land_water_tank"], 2] > 0;
_uid = getPlayerUID player;
_nearLight = nearestObject [player,"LitObject"];
_canPickLight = false;
_vehicleOwnerID = _vehicle getVariable ["CharacterID","0"];
_hasHotwireKit = "ItemHotwireKit" in _magazinesPlayer;
_isPZombie = player isKindOf "PZombie_VB";
_dogHandle = player getVariable ["dogID",0];

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
	if (dayz_onBack != "" && { !_inVehicle && { !_onLadder && { !r_player_unconscious } } }) then {
		dz_plr_carryActionItem = dayz_onBack;
		_text = getText (configFile >> "CfgWeapons" >> dz_plr_carryActionItem >> "displayName");
		s_player_equip_carry = player addAction [
			format [localize "STR_ACTIONS_WEAPON", _text],
			"\z\addons\dayz_code\actions\player_switchWeapon_action.sqf",
			nil, 0.5, false, true];
	};
} else {
	if (dayz_onBack != dz_plr_carryActionItem || { _inVehicle || { _onLadder || { r_player_unconscious } } } ) then {
		player removeAction s_player_equip_carry;
		s_player_equip_carry = -1;
	};
};

/*if (dayz_onBack != "" /*&& !dayz_onBackActive && !_inVehicle && !_onLadder && !r_player_unconscious) then {
	if (s_player_equip_carry < 0) then {
		_text = getText (configFile >> "CfgWeapons" >> dayz_onBack >> "displayName");
		s_player_equip_carry = player addAction [format[localize "STR_ACTIONS_WEAPON", _text], "\z\addons\dayz_code\actions\player_switchWeapon_action.sqf", nil, 0.5, false, true];
	};
} else {
	player removeAction s_player_equip_carry;
	s_player_equip_carry = -1;
};*/

//fishing
if ((_currentWeapon in Dayz_fishingItems) && {!dayz_fishingInprogress} && {!_inVehicle} && {!dayz_isSwimming}) then {
	if (s_player_fishing < 0) then {
		s_player_fishing = player addAction [localize "STR_ACTION_CAST", "\z\addons\dayz_code\actions\player_goFishing.sqf",player, 0.5, false, true];
	};
} else {
	player removeAction s_player_fishing;
	s_player_fishing = -1;
};
if ((_primaryWeapon in Dayz_fishingItems) && {!dayz_fishingInprogress} && {_inVehicle && (driver _vehicle != player)}) then {
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
	if (_vehicleOwnerID != "0" && _canDo) then {
		if (s_player_lockUnlockInside_ctrl < 0) then {
			_totalKeys = call epoch_tempKeys;
			_temp_keys = _totalKeys select 0;
			_temp_keys_names = _totalKeys select 1;	
			_hasKey = _vehicleOwnerID in _temp_keys;
			_oldOwner = (_vehicleOwnerID == _uid);
		
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
} else {
	{DZE_myVehicle removeAction _x} count s_player_lockUnlockInside;s_player_lockUnlockInside = [];
	s_player_lockUnlockInside_ctrl = -1;
};

if (DZE_HeliLift) then {
	_hasAttached = _vehicle getVariable["hasAttached",false];
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
	if (!isNull _cursorTarget && (player distance _cursorTarget < 3)) then {
		_isZombie = _cursorTarget isKindOf "zZombie_base";
		_isHarvested = _cursorTarget getVariable["meatHarvested",false];
		_isMan = _cursorTarget isKindOf "Man"; //includes animals and zombies
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

// Increase distance only if AIR or SHIP
_allowedDistance = if ((_cursorTarget isKindOf "Air") or (_cursorTarget isKindOf "Ship")) then {8} else {4};

if (!isNull _cursorTarget && !_inVehicle && !_isPZombie && (player distance _cursorTarget < _allowedDistance) && _canDo) then {
//Has some kind of target
	_typeOfCursorTarget = typeOf _cursorTarget;
	_isVehicle = _cursorTarget isKindOf "AllVehicles";
	_isBicycle = _cursorTarget isKindOf "Bicycle";
	_isMan = _cursorTarget isKindOf "Man"; //includes animals and zombies
	_isDestructable = _cursorTarget isKindOf "BuiltItems";
	_isGenerator = _typeOfCursorTarget == "Generator_DZ";
	//_isVehicletype = _typeOfCursorTarget in ["ATV_US_EP1","ATV_CZ_EP1"]; //Checked in player_flipvehicle
	_isFuel = false;
	_hasBarrel = "ItemFuelBarrel" in _magazinesPlayer;
	_hasFuel20 = "ItemJerrycan" in _magazinesPlayer;
	_hasFuel5 = "ItemFuelcan" in _magazinesPlayer;
	_hasEmptyFuelCan = (("ItemJerrycanEmpty" in _magazinesPlayer) || ("ItemFuelcanEmpty" in _magazinesPlayer) || ("ItemFuelBarrelEmpty" in _magazinesPlayer));
	_itemsPlayer = items player;
	_weaponsPlayer = weapons player;
	_hasCrowbar = "ItemCrowbar" in _itemsPlayer or "MeleeCrowbar" in _weaponsPlayer or dayz_onBack == "MeleeCrowbar";
	_hasToolbox = "ItemToolbox" in _itemsPlayer;
	_hasbottleitem = (("ItemWaterBottle" in _magazinesPlayer) || {"ItemWaterBottleInfected" in _magazinesPlayer} || {"ItemWaterBottleSafe" in _magazinesPlayer} || {"ItemWaterBottleBoiled" in _magazinesPlayer});
	_isAlive = alive _cursorTarget;
	_text = getText (configFile >> "CfgVehicles" >> _typeOfCursorTarget >> "displayName");
	_isPlant = _typeOfCursorTarget in Dayz_plants;
	_istypeTent = (_cursorTarget isKindOf "TentStorage_base") or (_cursorTarget isKindOf "IC_Tent");
	_upgradeItems = ["TentStorage","TentStorage0","TentStorage1","TentStorage2","TentStorage3","StashSmall","StashSmall1","StashSmall2","StashSmall3","StashSmall4","StashMedium","StashMedium1","StashMedium2","StashMedium3","DomeTentStorage","DomeTentStorage0","DomeTentStorage1","DomeTentStorage2","DomeTentStorage3","DesertTentStorage","DesertTentStorage0","DesertTentStorage1","DesertTentStorage2","DesertTentStorage3"];
	_characterID = _cursorTarget getVariable ["CharacterID","0"];
	
	if (DZE_permanentPlot) then {
		_id = _uid;
		_ownerID = _cursorTarget getVariable ["ownerPUID","0"];
	} else {
		_id = dayz_characterID;
		_ownerID = _characterID;
	};

	_isDisallowRefuel = _typeOfCursorTarget in ["M240Nest_DZ","MMT_Civ","MMT_USMC","Old_bike_TK_CIV_EP1","Old_bike_TK_INS_EP1"];	
	_isDog = (_cursorTarget isKindOf "Pastor" || _cursorTarget isKindOf "Fin");
	_isModular = _cursorTarget isKindOf "ModularItems";
	_isModularDoor = _typeOfCursorTarget in ["Land_DZE_WoodDoor","Land_DZE_LargeWoodDoor","Land_DZE_GarageWoodDoor","CinderWallDoor_DZ","CinderWallDoorSmall_DZ"];
	_player_deleteBuild = false;
	_player_lockUnlock_crtl = false;
	
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
	if (_isVehicle && {!_isMan} && {!(canMove _cursorTarget)} && {_isAlive} && {player distance _cursorTarget >= 2} && {(count (crew _cursorTarget))== 0} && {((vectorUp _cursorTarget) select 2) < 0.5}) then {
		if (s_player_flipveh < 0) then {
			s_player_flipveh = player addAction [format[localize "str_actions_flipveh",_text], "\z\addons\dayz_code\actions\player_flipvehicle.sqf",_cursorTarget, 1, true, true];
		};
	} else {
		player removeAction s_player_flipveh;
		s_player_flipveh = -1;
	};
	
	//Allow player to fill Fuel can
	if (_hasEmptyFuelCan && {_isFuel} && {!a_player_jerryfilling} && {_isAlive}) then {
		if (s_player_fillfuel < 0) then {
			s_player_fillfuel = player addAction [localize "str_actions_self_10", "\z\addons\dayz_code\actions\jerry_fill.sqf",_cursorTarget, 1, false, true];
		};
	} else {
		player removeAction s_player_fillfuel;
		s_player_fillfuel = -1;
	};
	
	if (damage _cursorTarget < 1) then {
		//Allow player to fill vehicle 210L
		if (_hasBarrel && {!_isMan} && {_isVehicle} && {fuel _cursorTarget < 1} && {!a_player_jerryfilling} && {!_isDisallowRefuel}) then {
			if (s_player_fillfuel210 < 0) then {
				s_player_fillfuel210 = player addAction [format[localize "str_actions_medical_10",_text,"210"], "\z\addons\dayz_code\actions\refuel.sqf",["ItemFuelBarrel",_cursorTarget], 0, true, true, "", "'ItemFuelBarrel' in magazines player"];
			};
		} else {
			player removeAction s_player_fillfuel210;
			s_player_fillfuel210 = -1;
		};
		
		//Allow player to fill vehicle 20L
		if (_hasFuel20 && {!_isMan} && {_isVehicle} && {fuel _cursorTarget < 1} && {!a_player_jerryfilling} && {!_isDisallowRefuel}) then {
			if (s_player_fillfuel20 < 0) then {
				s_player_fillfuel20 = player addAction [format[localize "str_actions_medical_10",_text,"20"], "\z\addons\dayz_code\actions\refuel.sqf",["ItemJerrycan",_cursorTarget], 0, true, true, "", "'ItemJerrycan' in magazines player"];
			};
		} else {
			player removeAction s_player_fillfuel20;
			s_player_fillfuel20 = -1;
		};

		//Allow player to fill vehicle 5L
		if (_hasFuel5 && {!_isMan} && {_isVehicle} && {fuel _cursorTarget < 1} && {!a_player_jerryfilling} && {!_isDisallowRefuel}) then {
			if (s_player_fillfuel5 < 0) then {
				s_player_fillfuel5 = player addAction [format[localize "str_actions_medical_10",_text,"5"], "\z\addons\dayz_code\actions\refuel.sqf",["ItemFuelcan",_cursorTarget], 0, true, true, "", "'ItemFuelcan' in magazines player"];
			};
		} else {
			player removeAction s_player_fillfuel5;
			s_player_fillfuel5 = -1;
		};
		/*
			Vanilla generator is currently not functional.
			Vanilla generator refuel actions removed for now.
			Epoch generator fill action is below.
		*/
		//Allow player to siphon vehicles
		if (_hasEmptyFuelCan && {!_isMan} && {_isVehicle} && {!_isBicycle} && {!a_player_jerryfilling} && {fuel _cursorTarget > 0}) then {
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
	
	//Fireplace Actions check
	if ((_cursorTarget call isInflamed) or (inflamed _cursorTarget)) then {
		_hasRawMeat = {_x in Dayz_meatraw} count _magazinesPlayer > 0;
		//_hastinitem = {_x in boil_tin_cans} count _magazinesPlayer > 0;
		_hasunboiledwater = {_x in ["ItemWaterBottleInfected","ItemWaterBottle","ItemWaterBottleSafe","ItemWaterbottle1oz","ItemWaterbottle2oz","ItemWaterbottle3oz","ItemWaterbottle4oz","ItemWaterbottle5oz","ItemWaterbottle6oz","ItemWaterbottle7oz","ItemWaterbottle8oz","ItemWaterbottle9oz"]} count _magazinesPlayer > 0;

		
	//Cook Meat	
		if (_hasRawMeat && !a_player_cooking) then {
			if (s_player_cook < 0) then {
				s_player_cook = player addAction [localize "str_actions_self_05", "\z\addons\dayz_code\actions\cook.sqf",_cursorTarget, 3, true, true];
			};
		}; 
	//Boil Water
		if (_hasunboiledwater && !a_player_boil) then {
			if (s_player_boil < 0) then {
				s_player_boil = player addAction [localize "str_actions_boilwater", "\z\addons\dayz_code\actions\boil.sqf",_cursorTarget, 3, true, true];
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
	};
	
//	Not needed.
/*
	if(_cursorTarget == dayz_hasFire) then {
		if ((s_player_fireout < 0) && !(_cursorTarget call isInflamed) && (player distance _cursorTarget < 3)) then {
			s_player_fireout = player addAction [localize "str_actions_self_06", "\z\addons\dayz_code\actions\fire_pack.sqf",_cursorTarget, 0, false, true];
		};
	} else {
		player removeAction s_player_fireout;
		s_player_fireout = -1;
	};
*/
	if (_isAlive) then {
		_restrict = _typeOfCursorTarget in DZE_restrictRemoval;
	
		//Allow player to remove objects with no ownership or access required
		if (!_restrict && (_isDestructable || _typeOfCursorTarget in DZE_isWreck || _typeOfCursorTarget in DZE_isWreckBuilding || _typeOfCursorTarget in DZE_isRemovable)) then {
			if (_hasToolbox && _hasCrowbar) then {
				_player_deleteBuild = true;
			};
		};
		//Allow player to remove objects only if they have proper ownership or access
		if (_restrict || _isModular || _isModularDoor || _isGenerator || _typeOfCursorTarget in DZE_isDestroyableStorage) then {
			if (_hasToolbox && _hasCrowbar) then {
				_hasAccess = [player, _cursorTarget] call FNC_check_access;
				if ((_hasAccess select 0) or (_hasAccess select 2) or (_hasAccess select 3)) then {
					_player_deleteBuild = true;
				};
			};
		};		
		if (_isVehicle) then {
			if ((_characterID != "0") && {!_isMan}) then {
				_player_lockUnlock_crtl = true;
			};
		};
	};
	
	if (_player_deleteBuild) then {
		if (s_player_deleteBuild < 0) then {
			s_player_deleteBuild = player addAction [format[localize "STR_EPOCH_REMOVE",_text], "\z\addons\dayz_code\actions\remove.sqf",_cursorTarget, 1, false, true];
		};
	} else {
		player removeAction s_player_deleteBuild;
		s_player_deleteBuild = -1;
	};

	//remove Own objects
	if (_ownerID == _id) then {
		//upgrade items
		if (_typeOfCursorTarget in _upgradeItems) then {
			if (s_player_upgradestorage < 0) then {
				_displayName = getText (configFile >> "CfgVehicles" >> _typeOfCursorTarget >> "displayName");
				s_player_upgradestorage = player addAction [format[localize "STR_EPOCH_UPGRADE",_displayName], "\z\addons\dayz_code\actions\object_upgradeStorage.sqf",_cursorTarget, 0, false, true];
			};
		} else {
			player removeAction s_player_upgradestorage;
			s_player_upgradestorage = -1
		};
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
		player removeAction s_player_upgradestorage;
		s_player_upgradestorage = -1;
		player removeAction s_player_packtent;
		s_player_packtent = -1;
	};
	//other tents
	if (_istypeTent) then {
		_hasIgnitors = {_x in DayZ_Ignitors} count _itemsPlayer > 0;
		if ((_hasFuel20 or _hasFuel5 or _hasBarrel) && _hasIgnitors) then {
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
	_hasCarBomb = "ItemCarBomb" in _magazinesPlayer;
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
	if (_isVehicle && {!_isMan} && {dayz_myCursorTarget != _cursorTarget} && {_hasToolbox} && {damage _cursorTarget < 1} && {_typeOfCursorTarget != "M240Nest_DZ"}) then {
		if (s_player_repair_crtl < 0) then {
			dayz_myCursorTarget = _cursorTarget;
			_menu = dayz_myCursorTarget addAction [localize "str_actions_repairveh", "\z\addons\dayz_code\actions\repair_vehicle.sqf",_cursorTarget, 0, true, false];
			if (!_isBicycle) then { //Bike wheels should not give full size tires. Also model does not update to show removed wheels.
				if (!DZE_salvageLocked) then {
					if (!locked _cursorTarget) then {
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
	/* //Vanilla base building currently not used in Epoch
	// House locking and unlocking
	_isHouse = _typeOfCursorTarget in ["SurvivorWorkshopAStage5", "SurvivorWorkshopBStage5", "SurvivorWorkshopCStage5"];
	_isGate = _typeOfCursorTarget in ["WoodenGate_1","WoodenGate_2","WoodenGate_3","WoodenGate_4","MetalGate_1","MetalGate_2","MetalGate_3","MetalGate_4"];
	_isFence = _typeOfCursorTarget in ["WoodenFence_1","WoodenFence_2","WoodenFence_3","WoodenFence_4","WoodenFence_5","WoodenFence_6","MetalFence_1","MetalFence_2","MetalFence_3","MetalFence_4","MetalFence_5","MetalFence_6","MetalFence_7"];

	//Only the owners can lock the gates
	_isLockableGate = _typeOfCursorTarget in ["WoodenGate_2","WoodenGate_3","WoodenGate_4","MetalGate_2","MetalGate_3","MetalGate_4"];
	_isUnlocked = _cursorTarget getVariable ["isOpen","0"] == "1";

	//Allow the gates to be opened when not locked by anyone
	_isOpen = ((_cursorTarget animationPhase "DoorL") == 1) || ((_cursorTarget animationPhase "DoorR") == 1);
	_isClosed = ((_cursorTarget animationPhase "DoorL") == 0) || ((_cursorTarget animationPhase "DoorR") == 0);
	
	//[["ownerArray",["PID"]]]
	_ownerArray = _cursorTarget getVariable ["ownerArray",["0"]];
	_ownerBuildLock = _cursorTarget getVariable ["BuildLock",false];	
	_ownerPID = (_ownerArray select 0);
	
	// open Gate
	if (_isGate && _isClosed && _isUnlocked) then {
		if (s_player_openGate < 0) then {
			s_player_openGate = player addAction [localize "STR_DN_OUT_O_GATE", "\z\addons\dayz_code\actions\player_operate.sqf",[_cursorTarget,"Open"], 1, true, true];
		};
	} else {
		player removeAction s_player_openGate;
		s_player_openGate = -1;
	};
	// Close Gate
	if (_isGate && _isOpen && _isUnlocked) then {
		if (s_player_CloseGate < 0) then {
			s_player_CloseGate = player addAction [localize "STR_DN_OUT_C_GATE", "\z\addons\dayz_code\actions\player_operate.sqf",[_cursorTarget,"Close"], 1, true, true];
		};
	} else {
		player removeAction s_player_CloseGate;
		s_player_CloseGate = -1;
	};
	// Set
	if ((_isHouse or _isLockableGate) && (_ownerPID == _uid) && !_isUnlocked && _isClosed) then {
		if (s_player_setCode < 0) then {
			s_player_setCode = player addAction [localize "STR_BLD_ACTIONS_SETLOCKCODE", "\z\addons\dayz_code\actions\player_operate.sqf",[_cursorTarget,"Set"], 1, true, true];
		};
	} else {
		player removeAction s_player_setCode;
		s_player_setCode = -1;
	};
	//Lock Build point
	if ((_isFence or _isGate) && (_ownerPID == _uid) && !_ownerBuildLock) then {
		if (s_player_BuildLock < 0) then {
			s_player_BuildLock = player addAction [localize "STR_BLD_ACTIONS_LOCKBUILD", "\z\addons\dayz_code\actions\player_operate.sqf",[_cursorTarget,"BuildLock"], 1, true, true];
		};
	} else {
		player removeAction s_player_BuildLock;
		s_player_BuildLock = -1;
	};
	//UnLock Build point
	if ((_isFence or _isGate) && (_ownerPID == _uid) && _ownerBuildLock) then {
		if (s_player_BuildUnLock < 0) then {
			s_player_BuildUnLock = player addAction [localize "STR_BLD_ACTIONS_UNLOCKBUILD", "\z\addons\dayz_code\actions\player_operate.sqf",[_cursorTarget,"BuildUnLock"], 1, true, true];
		};
	} else {
		player removeAction s_player_BuildUnLock;
		s_player_BuildUnLock = -1;
	};
	// Unlock Gate/House
	if ((_isHouse or _isLockableGate) && !_isUnlocked && _isClosed) then {
		if (s_player_unlockhouse < 0) then {
			s_player_unlockhouse = player addAction [localize "STR_BLD_ACTIONS_UNLOCKGATE", "\z\addons\dayz_code\actions\player_operate.sqf",[_cursorTarget,"Unlock"], 1, true, true];
		};
	} else {
		player removeAction s_player_unlockhouse;
		s_player_unlockhouse = -1;
	};
	// Lock Gate/House
	if ((_isHouse or _isLockableGate) && _isUnlocked && _isClosed) then {
		if (s_player_lockhouse < 0) then {
			s_player_lockhouse = player addAction [localize "STR_BLD_ACTIONS_LOCKGATE", "\z\addons\dayz_code\actions\player_operate.sqf",[_cursorTarget,"Lock"], 1, true, true];
		};
	} else {
		player removeAction s_player_lockhouse;
		s_player_lockhouse = -1;
	};
	//Break In
	if ((_isHouse or _isLockableGate) && (_ownerPID != _uid) && !_isUnlocked) then {
		if (s_player_breakinhouse < 0) then {
			s_player_breakinhouse = player addAction [localize "STR_BLD_ACTIONS_BREAKIN", "\z\addons\dayz_code\actions\player_breakin.sqf",_cursorTarget, 1, true, true];
		};
	} else {
		player removeAction s_player_breakinhouse;
		s_player_breakinhouse = -1;
	};*/
	if ((_cursorTarget isKindOf "Plastic_Pole_EP1_DZ") && {speed player <= 1}) then {
		_hasAccess = [player, _cursorTarget] call FNC_check_access;
		_allowed = ((_hasAccess select 0) or (_hasAccess select 2) or (_hasAccess select 3) or (_hasAccess select 4));
		if (DZE_permanentPlot) then {
			if (s_player_plotManagement < 0 && _allowed) then {
				s_player_plotManagement = player addAction [format["<t color='#0059FF'>%1</t>",localize "STR_EPOCH_ACTIONS_MANAGEPLOT"], "\z\addons\dayz_code\actions\plotManagement\initPlotManagement.sqf", [], 5, false];
			};
		} else {
			if (s_player_maintain_area < 0) then {
				s_player_maintain_area = player addAction [format["<t color='#ff0000'>%1</t>",localize "STR_EPOCH_ACTIONS_MAINTAREA"], "\z\addons\dayz_code\actions\maintain_area.sqf", "maintain", 5, false];
				s_player_maintain_area_force = player addAction [format["<t color='#ff0000'>%1</t>",localize "STR_EPOCH_ACTIONS_FORCE_MAINTAREA"], "\z\addons\dayz_code\actions\maintain_area.sqf", "force", 5, false];
				s_player_maintain_area_preview = player addAction [format["<t color='#ff0000'>%1</t>",localize "STR_EPOCH_ACTIONS_MAINTPREV"], "\z\addons\dayz_code\actions\maintain_area.sqf", "preview", 5, false];
			};
		};
		if (s_player_plot_boundary < 0 && (_allowed or (_hasAccess select 1))) then {
			s_player_plot_boundary = player addAction [localize "STR_EPOCH_PLOTMANAGEMENT_SHOW_BOUNDARY", "\z\addons\dayz_code\actions\plotManagement\plotToggleMarkers.sqf", "", 1, false];
		};
	} else {
		player removeAction s_player_plotManagement;
		s_player_plotManagement = -1;
		player removeAction s_player_maintain_area;
		s_player_maintain_area = -1;
		player removeAction s_player_maintain_area_force;
		s_player_maintain_area_force = -1;
		player removeAction s_player_maintain_area_preview;
		s_player_maintain_area_preview = -1;
		player removeAction s_player_plot_boundary;
		s_player_plot_boundary = -1;
	};
	
	if (DZE_HeliLift) then {
		_liftHeli = objNull;
		_found = false;	
		_allowTow = false;
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
					_posL = [_x] call FNC_getPos;
					_posC = [_cursorTarget] call FNC_getPos;
					_height = (_posL select 2) - (_posC select 2);
					_hasAttached = _x getVariable["hasAttached",false];
					if ((_height < 15) && {_height > 5} && {typeName _hasAttached != "OBJECT"}) then {
						if (((abs((_posL select 0) - (_posC select 0))) < 10) && {(abs((_posL select 1) - (_posC select 1))) < 10}) then {
							_liftHeli = _x;
							_found = true;
						};
					};
				};
			} count (player nearEntities [DZE_HeliAllowTowFrom,15]);
		};

		_attached = _cursorTarget getVariable["attached",false];
		if (_found && {_allowTow} && {!locked _cursorTarget} && {!_isPZombie} && {typeName _attached != "OBJECT"}) then {
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
		if (s_player_lockUnlock_crtl < 0) then {
			_totalKeys = call epoch_tempKeys;
			_temp_keys = _totalKeys select 0;
			_temp_keys_names = _totalKeys select 1;
			_hasKey = _characterID in _temp_keys;
			_oldOwner = (_characterID == _uid);
			if (locked _cursorTarget) then {
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
	} else {
		{player removeAction _x} count s_player_lockunlock;s_player_lockunlock = [];
		s_player_lockUnlock_crtl = -1;
	};
	
	// gear access on surrendered player
	if (isPlayer _cursorTarget && {_isAlive} && {_cursorTarget getVariable ["DZE_Surrendered",false]}) then {
		if (s_player_SurrenderedGear < 0) then {
			s_player_SurrenderedGear = player addAction [localize "STR_UI_GEAR", "\z\addons\dayz_code\actions\surrender_gear.sqf",_cursorTarget, 1, true, true];
		};
	} else {
		player removeAction s_player_SurrenderedGear;
		s_player_SurrenderedGear = -1;
	};

	// Allow manage door
	if (DZE_doorManagement && (_typeOfCursorTarget in DZE_DoorsLocked)) then {
		// Check player access
		_hasAccess = [player, _cursorTarget] call FNC_check_access;
		if (s_player_manageDoor < 0 && ((_hasAccess select 0) or (_hasAccess select 2) or (_hasAccess select 3) or (_hasAccess select 4) or (_hasAccess select 5) or (_hasAccess select 6))) then {
			s_player_manageDoor = player addAction [format["<t color='#0059FF'>%1</t>", localize "STR_EPOCH_ACTIONS_MANAGEDOOR"], "\z\addons\dayz_code\actions\doorManagement\initDoorManagement.sqf", _cursorTarget, 5, false];
		};
	} else {
		player removeAction s_player_manageDoor;
		s_player_manageDoor = -1;
	};

	//Allow owner to unlock vault
	if ((_typeOfCursorTarget in DZE_LockableStorage) && {_characterID != "0"} && {player distance _cursorTarget < 3} && {!keypadCancel}) then {
		if (s_player_unlockvault < 0) then {
			if (_typeOfCursorTarget in DZE_LockedStorage) then {
				if (_characterID == dayz_combination || _ownerID == _uid) then {
					_combi = player addAction [format[localize "STR_EPOCH_ACTIONS_OPEN",_text], "\z\addons\dayz_code\actions\vault_unlock.sqf",_cursorTarget, 0, false, true];
					s_player_combi set [count s_player_combi,_combi];
				} else {
					_combi = player addAction [format[localize "STR_EPOCH_ACTIONS_UNLOCK",_text], "\z\addons\dayz_code\actions\vault_combination_1.sqf",_cursorTarget, 0, false, true];
					s_player_combi set [count s_player_combi,_combi];
				};
				s_player_unlockvault = 1;
			} else {
				if (_characterID != dayz_combination && _ownerID != _uid) then {
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
	if ((_typeOfCursorTarget in DZE_UnLockedStorage) && {_characterID != "0"} && {player distance _cursorTarget < 3}  && {!keypadCancel}) then {
		if (s_player_lockvault < 0) then {
			if (_characterID == dayz_combination || _ownerID == _uid) then {
				s_player_lockvault = player addAction [format[localize "STR_EPOCH_ACTIONS_LOCK",_text], "\z\addons\dayz_code\actions\vault_lock.sqf",_cursorTarget, 0, false, true];
			};
		};
		if (s_player_packvault < 0 && (_characterID == dayz_combination || _ownerID == _uid)) then {
			s_player_packvault = player addAction [format["<t color='#ff0000'>%1</t>",(format[localize "STR_EPOCH_ACTIONS_PACK",_text])], "\z\addons\dayz_code\actions\vault_pack.sqf",_cursorTarget, 0, false, true];
		};
	} else {
		player removeAction s_player_packvault;
		s_player_packvault = -1;
		player removeAction s_player_lockvault;
		s_player_lockvault = -1;
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
			// check if Generator_DZ is running within 30 meters
			_findNearestGen = {((alive _x) && (_x getVariable ["GeneratorRunning",false]))} count (([player] call FNC_getPos) nearObjects ["Generator_DZ",30]);
			
			// show that pump needs power if no generator nearby.
			if (_findNearestGen > 0) then {
				s_player_fuelauto = player addAction [localize "STR_EPOCH_ACTIONS_FILLVEH", "\z\addons\dayz_code\actions\fill_nearestVehicle.sqf",objNull, 0, false, true];
			} else {
				s_player_fuelauto = player addAction [format["<t color='#ff0000'>%1</t>",localize "STR_EPOCH_ACTIONS_NEEDPOWER"], "",[], 0, false, true];
			};
		};
	} else {
		player removeAction s_player_fuelauto;
		s_player_fuelauto = -1;
	};

	//Fuel Pump on truck
	if (_typeOfCursorTarget in DZE_fueltruckarray && _isAlive) then {
		if (s_player_fuelauto2 < 0) then {
			// show that fuel truck pump needs power.
			if (isEngineOn _cursorTarget) then {
				s_player_fuelauto2 = player addAction [localize "STR_EPOCH_ACTIONS_FILLVEH", "\z\addons\dayz_code\actions\fill_nearestVehicle.sqf",_cursorTarget, 0, false, true];
			} else {
				s_player_fuelauto2 = player addAction [format["<t color='#ff0000'>%1</t>",localize "STR_EPOCH_ACTIONS_NEEDPOWER"], "",[], 0, false, true];
			};
		};
	} else {
		player removeAction s_player_fuelauto2;
		s_player_fuelauto2 = -1;
	};

	// inplace upgrade tool
	if ((_cursorTarget isKindOf "ModularItems") || (_cursorTarget isKindOf "Land_DZE_WoodDoor_Base") || (_cursorTarget isKindOf "CinderWallDoor_DZ_Base")) then {
		if ((s_player_lastTarget select 0) != _cursorTarget) then {
			if (s_player_upgrade_build > 0) then {
				player removeAction s_player_upgrade_build;
				s_player_upgrade_build = -1;
			};
		};
		if (s_player_upgrade_build < 0) then {
			_hasAccess = [player, _cursorTarget] call FNC_check_access;
			_upgrade = getArray (configFile >> "CfgVehicles" >> (typeOf _cursorTarget) >> "upgradeBuilding");
			if (((_hasAccess select 0) or (_hasAccess select 2) or (_hasAccess select 3)) && (count _upgrade) > 0) then {
				s_player_lastTarget set [0,_cursorTarget];
				s_player_upgrade_build = player addAction [format[localize "STR_EPOCH_UPGRADE",_text], "\z\addons\dayz_code\actions\player_upgrade.sqf",_cursorTarget, -1, false, true];
			};
		};
	} else {
		player removeAction s_player_upgrade_build;
		s_player_upgrade_build = -1;
	};
	
	// downgrade system
	if ((DZE_Lock_Door == _characterID)  && {!keypadCancel} && {_isDestructable || _cursorTarget isKindOf "Land_DZE_WoodDoorLocked_Base" || _cursorTarget isKindOf "CinderWallDoorLocked_DZ_Base"}) then {
		if ((s_player_lastTarget select 1) != _cursorTarget) then {
			if (s_player_downgrade_build > 0) then {	
				player removeAction s_player_downgrade_build;
				s_player_downgrade_build = -1;
			};
		};
		if (s_player_downgrade_build < 0) then {
			_hasAccess = [player, _cursorTarget] call FNC_check_access;
			if ((_hasAccess select 0) or (_hasAccess select 2) or (_hasAccess select 3)) then {
				s_player_lastTarget set [1,_cursorTarget];
				s_player_downgrade_build = player addAction [format[localize "STR_EPOCH_ACTIONS_REMLOCK",_text], "\z\addons\dayz_code\actions\player_buildingDowngrade.sqf",_cursorTarget, -2, false, true];
			};
		};
	} else {
		player removeAction s_player_downgrade_build;
		s_player_downgrade_build = -1;
	};

	// inplace maintenance tool
	if ((damage _cursorTarget >= DZE_DamageBeforeMaint) && {_cursorTarget isKindOf "ModularItems" || _cursorTarget isKindOf "DZE_Housebase" || _typeOfCursorTarget == "LightPole_DZ"}) then {
		if ((s_player_lastTarget select 2) != _cursorTarget) then {
			if (s_player_maint_build > 0) then {
				player removeAction s_player_maint_build;
				s_player_maint_build = -1;
			};
		};
		if (s_player_maint_build < 0) then {
			_hasAccess = [player, _cursorTarget] call FNC_check_access;
			if ((_hasAccess select 0) or (_hasAccess select 2) or (_hasAccess select 3)) then {
				_text2 = _text + " (" + str(round ((damage _cursorTarget) * 100)) + "% damaged)";
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
					if (_hasFuel20 or _hasFuel5 or _hasBarrel) then {
						s_player_fillgen = player addAction [localize "STR_EPOCH_ACTIONS_GENERATOR3", "\z\addons\dayz_code\actions\fill_startGenerator.sqf",_cursorTarget, 0, false, true];
					};
				};
			};
		};
	} else {
		player removeAction s_player_fillgen;
		s_player_fillgen = -1;
	};

	//Towing with tow truck
	/*
	if(_typeOfCursorTarget == "TOW_DZE") then {
		if (s_player_towing < 0) then {
			if(!(_cursorTarget getVariable ["DZEinTow", false])) then {
				s_player_towing = player addAction [localize "STR_EPOCH_ACTIONS_ATTACH" "\z\addons\dayz_code\actions\tow_AttachStraps.sqf",_cursorTarget, 0, false, true];				
			} else {
				s_player_towing = player addAction [localize "STR_EPOCH_ACTIONS_DETACH", "\z\addons\dayz_code\actions\tow_DetachStraps.sqf",_cursorTarget, 0, false, true];				
			};
		};
	} else {
		player removeAction s_player_towing;
		s_player_towing = -1;
	};
	*/

	// All Traders
	if (_isMan && {!(isPlayer _cursorTarget)} && {_typeOfCursorTarget in serverTraders} && {!_isPZombie}) then {
		if (s_player_parts_crtl < 0) then {
			_humanity = player getVariable ["humanity",0];
			_traderMenu = call compile format["menu_%1;",_typeOfCursorTarget];		
			_low_high = localize "STR_EPOCH_ACTIONS_HUMANITY_LOW";
			_humanity_logic = false;
			if ((_traderMenu select 2) == "friendly") then {
				_humanity_logic = (_humanity < -5000);
			};
			if ((_traderMenu select 2) == "hostile") then {
				_low_high = localize "STR_EPOCH_ACTIONS_HUMANITY_HIGH";
				_humanity_logic = (_humanity > -5000);
			};
			if ((_traderMenu select 2) == "hero") then {
				_humanity_logic = (_humanity < 5000);
			};
			if (_humanity_logic) then {
				_cancel = player addAction [format[localize "STR_EPOCH_ACTIONS_HUMANITY",_low_high], "\z\addons\dayz_code\actions\trade_cancel.sqf",["na"], 0, true, false];
				s_player_parts set [count s_player_parts,_cancel];
			} else {
				// Static Menu
				{
					_buy = player addAction [format["Trade %1 %2 for %3 %4",(_x select 3),(_x select 5),(_x select 2),(_x select 6)], "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",[(_x select 0),(_x select 1),(_x select 2),(_x select 3),(_x select 4),(_x select 5),(_x select 6)], (_x select 7), true, true];
					s_player_parts set [count s_player_parts,_buy];		
				} count (_traderMenu select 1);
				if (DZE_ConfigTrader) then {
					_buyV = player addAction [localize "STR_EPOCH_PLAYER_289", "\z\addons\dayz_code\actions\AdvancedTrading\init.sqf",(_traderMenu select 0), 999, true, false];
					s_player_parts set [count s_player_parts,_buyV];
				} else {
					// Database menu
					_buy = player addAction [localize "STR_EPOCH_PLAYER_289", "\z\addons\dayz_code\actions\show_dialog.sqf",(_traderMenu select 0), 999, true, false];
					s_player_parts set [count s_player_parts,_buy];
				};
			};
			s_player_parts_crtl = 1;	
		};
	} else {
		{player removeAction _x} count s_player_parts;s_player_parts = [];
		s_player_parts_crtl = -1;
	};
	
	if (dayz_tameDogs) then {
		//Dog
		_hasRawMeat = {_x in Dayz_meatraw} count _magazinesPlayer > 0;
		if (_isDog && {_hasRawMeat} && {_isAlive} && {_ownerID == "0"} && {player getVariable ["dogID",0] == 0}) then {
			if (s_player_tamedog < 0) then {
				s_player_tamedog = player addAction [localize "str_actions_tamedog", "\z\addons\dayz_code\actions\dog\tame_dog.sqf", _cursorTarget, 1, false, true];
			};
		} else {
			player removeAction s_player_tamedog;
			s_player_tamedog = -1;
		};
		if (_isDog && {_ownerID == _id} && {_isAlive}) then {
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
				_warn = _dogHandle getFSMVariable "_watchDog";
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
	player removeAction s_player_cook;
	s_player_cook = -1;
	player removeAction s_player_boil;
	s_player_boil = -1;
	player removeAction s_player_fireout;
	s_player_fireout = -1;
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
	//debug
	//player removeAction s_player_debugCheck;
	//s_player_debugCheck = -1;
	player removeAction s_player_upgradestorage;
	s_player_upgradestorage = -1;
	/* //Unlock,Lock // Vanilla base building currently not used in Epoch
	player removeAction s_player_setCode;
	s_player_setCode = -1;
	player removeAction s_player_lockhouse;
	s_player_lockhouse = -1;
	player removeAction s_player_unlockhouse;
	s_player_unlockhouse = -1;
	player removeAction s_player_openGate;
	s_player_openGate = -1;
	player removeAction s_player_CloseGate;
	s_player_CloseGate = -1;
	player removeAction s_player_breakinhouse;
	s_player_breakinhouse = -1;
	player removeAction s_player_BuildUnLock;
	s_player_BuildUnLock = -1;
	player removeAction s_player_BuildLock;
	s_player_BuildLock = -1;*/
	{player removeAction _x} count s_player_combi;s_player_combi = [];	
	s_player_lastTarget = [objNull,objNull,objNull,objNull,objNull];
	{player removeAction _x} count s_player_parts;s_player_parts = [];
	s_player_parts_crtl = -1;
	{player removeAction _x} count s_player_lockunlock;s_player_lockunlock = [];
	s_player_lockUnlock_crtl = -1;
	player removeAction s_player_SurrenderedGear;
	s_player_SurrenderedGear = -1;
	player removeAction s_player_maintain_area;
	s_player_maintain_area = -1;
	player removeAction s_player_maintain_area_force;
	s_player_maintain_area_force = -1;
	player removeAction s_player_maintain_area_preview;
	s_player_maintain_area_preview = -1;	
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
	player removeAction s_player_towing;
	s_player_towing = -1;
	player removeAction s_player_fuelauto;
	s_player_fuelauto = -1;
	player removeAction s_player_fuelauto2;
	s_player_fuelauto2 = -1;
	player removeAction s_player_manageDoor;
	s_player_manageDoor = -1;
};

//Dog actions on player self
if (_dogHandle > 0) then {
	_dog = _dogHandle getFSMVariable "_dog";
	if (isNil "_dog") exitWith {};
	if (isNil "_ownerID") then {_ownerID = "0"};
	if (_canDo && !_inVehicle && alive _dog && !(_ownerID in [dayz_characterID,_uid])) then {
		if (s_player_movedog < 0) then {
			s_player_movedog = player addAction [localize "str_actions_movedog", "\z\addons\dayz_code\actions\dog\move.sqf", player getVariable ["dogID",0], 1, false, true];
		};
		if (s_player_speeddog < 0) then {
			_text = localize "str_epoch_player_249";
			_speed = 0;
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

//Monitor
player setVariable ["selfActions", diag_ticktime, false];
