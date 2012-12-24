scriptName "Functions\misc\fn_selfActions.sqf";
/***********************************************************
	ADD ACTIONS FOR SELF
	- Function
	- [] call fnc_usec_selfActions;
************************************************************/
private["_isPZombie","_vehicle","_inVehicle","_bag","_classbag","_isWater","_hasAntiB","_hasFuelE","_hasRawMeat","_hasKnife","_hasToolbox","_hasTent","_onLadder","_nearLight","_canPickLight","_canDo","_text","_isHarvested","_isVehicle","_isVehicletype","_isMan","_traderType","_ownerID","_isAnimal","_isDog","_isZombie","_isDestructable","_isTent","_isFuel","_isAlive","_canmove","_Unlock","_lock","_allFixed","_hitpoints","_damage","_part","_cmpt","_color","_string","_handle","_trader_id","_category","_buy","_buy2","_buy3","_buy1","_buy4","_buy5","_cantrader","_cantrader1","_buy6","_zparts1","_zparts2","_zparts3","_zparts4","_metals1","_metals2","_metals4","_metals3","_metals5","_dogHandle","_lieDown","_warn"];

_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_bag = unitBackpack player;
_classbag = typeOf _bag;
_isWater = 		(surfaceIsWater (position player)) or dayz_isSwimming;
_hasAntiB = 	"ItemAntibiotic" in magazines player;
_hasFuelE = 	"ItemJerrycanEmpty" in magazines player;
_hasRawMeat = 	"FoodSteakRaw" in magazines player;
_hasKnife = 	"ItemKnife" in items player;
_hasToolbox = 	"ItemToolbox" in items player;
//_hasTent = 		"ItemTent" in items player;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_nearLight = 	nearestObject [player,"LitObject"];
_canPickLight = false;

if (!isNull _nearLight) then {
	if (_nearLight distance player < 4) then {
		_canPickLight = isNull (_nearLight getVariable ["owner",objNull]);
	};
};
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);

//Grab Flare
if (_canPickLight and !dayz_hasLight) then {
	if (s_player_grabflare < 0) then {
		_text = getText (configFile >> "CfgAmmo" >> (typeOf _nearLight) >> "displayName");
		s_player_grabflare = player addAction [format[localize "str_actions_medical_15",_text], "\z\addons\dayz_code\actions\flare_pickup.sqf",_nearLight, 1, false, true, "", ""];
		s_player_removeflare = player addAction [format[localize "str_actions_medical_17",_text], "\z\addons\dayz_code\actions\flare_remove.sqf",_nearLight, 1, false, true, "", ""];
	};
} else {
	player removeAction s_player_grabflare;
	player removeAction s_player_removeflare;
	s_player_grabflare = -1;
	s_player_removeflare = -1;
};

_isPZombie = player isKindOf "PZombie_VB";
if(_isPZombie) then {
	//_state = animationState player;
	//hint str(_state);
	if (s_player_callzombies < 0) then {
		s_player_callzombies = player addAction ["Call Zombies", "\z\addons\dayz_code\actions\call_zombies.sqf",player, 5, true, false, "",""];
		//s_player_callzombies1 = player addAction ["Zombie Vison", "\z\addons\dayz_code\actions\vison_zombie.sqf",player, 4, true, false, "",""];

	};
};


if (!isNull cursorTarget and !_inVehicle and (player distance cursorTarget < 4)) then {	//Has some kind of target
	_isHarvested = cursorTarget getVariable["meatHarvested",false];
	_isVehicle = cursorTarget isKindOf "AllVehicles";
	_isVehicletype = typeOf cursorTarget in ["ATV_US_EP1","ATV_CZ_EP1"];
	_isMan = cursorTarget isKindOf "Man";
	_traderType = typeOf cursorTarget;
	_ownerID = cursorTarget getVariable ["characterID","0"];
	_isAnimal = cursorTarget isKindOf "Animal";
	_isDog =  (cursorTarget isKindOf "DZ_Pastor" || cursorTarget isKindOf "DZ_Fin");
	_isZombie = cursorTarget isKindOf "zZombie_base";
	_isDestructable = cursorTarget isKindOf "BuiltItems";
	_isTent = cursorTarget isKindOf "TentStorage";
	_isFuel = false;
	_isAlive = alive cursorTarget;
	_canmove = canmove cursorTarget;
	_text = getText (configFile >> "CfgVehicles" >> typeOf cursorTarget >> "displayName");
	if (_hasFuelE) then {
		_isFuel = (cursorTarget isKindOf "Land_Ind_TankSmall") or (cursorTarget isKindOf "Land_fuel_tank_big") or (cursorTarget isKindOf "Land_fuel_tank_stairs") or (cursorTarget isKindOf "Land_fuel_tank_stairs_ep1") or (cursorTarget isKindOf "Land_wagon_tanker") or (cursorTarget isKindOf "Land_fuelstation") or (cursorTarget isKindOf "Land_fuelstation_army");
	};
	//diag_log ("OWNERID = " + _ownerID + " CHARID = " + dayz_characterID + " " + str(_ownerID == dayz_characterID));
	
	//Allow player to delete objects
	if(_isDestructable and _hasToolbox and _canDo) then {
		if (s_player_deleteBuild < 0) then {
			s_player_deleteBuild = player addAction [format[localize "str_actions_delete",_text], "\z\addons\dayz_code\actions\remove.sqf",cursorTarget, 1, true, true, "", ""];
		};
	} else {
		player removeAction s_player_deleteBuild;
		s_player_deleteBuild = -1;
	};
	

	// Allow Owner to lock and unlock vehicle  
	if(_isVehicle and !_isMan and _canDo and _ownerID == dayz_playerUID) then {

			
		if (s_player_lockUnlock_crtl < 0) then {
			_Unlock = player addAction [format["Unlock %1",_text], "\z\addons\dayz_code\actions\unlock_veh.sqf",cursorTarget, 2, true, true, "", "(locked cursorTarget)"];
			_lock = player addAction [format["Lock %1",_text], "\z\addons\dayz_code\actions\lock_veh.sqf",cursorTarget, 1, true, true, "", "(!locked cursorTarget)"];
		
			s_player_lockunlock set [count s_player_lockunlock,_Unlock];
			s_player_lockunlock set [count s_player_lockunlock,_lock];

			s_player_lockUnlock_crtl = 1;
		};
		 
	} else {
		{player removeAction _x} forEach s_player_lockunlock;s_player_lockunlock = [];
		s_player_lockUnlock_crtl = -1;
	};

	/*
	//Allow player to force save
	if((_isVehicle or _isTent) and _canDo and !_isMan) then {
		if (s_player_forceSave < 0) then {
			s_player_forceSave = player addAction [format[localize "str_actions_save",_text], "\z\addons\dayz_code\actions\forcesave.sqf",cursorTarget, 1, true, true, "", ""];
		};
	} else {
		player removeAction s_player_forceSave;
		s_player_forceSave = -1;
	};
	*/
	//flip vehicle
	if ((_isVehicletype) and !_canmove and _isAlive and (player distance cursorTarget >= 2)) then {
		if (s_player_flipveh  < 0) then {
			s_player_flipveh = player addAction [format[localize "str_actions_flipveh",_text], "\z\addons\dayz_code\actions\player_flipvehicle.sqf",cursorTarget, 1, true, true, "", ""];		
		};	
	} else {
		player removeAction s_player_flipveh;
		s_player_flipveh = -1;
	};
	
	//Allow player to fill jerrycan
	if(_hasFuelE and _isFuel and _canDo) then {
		if (s_player_fillfuel < 0) then {
			s_player_fillfuel = player addAction [localize "str_actions_self_10", "\z\addons\dayz_code\actions\jerry_fill.sqf",[], 1, false, true, "", ""];
		};
	} else {
		player removeAction s_player_fillfuel;
		s_player_fillfuel = -1;
	};
	

	
	if(_isPZombie) then {
		// Pzombie Gut human corpse or animal
		if ((_isAnimal or _isMan) and !_isHarvested and _canDo) then {
			if (s_player_butcher < 0) then {
				s_player_butcher = player addAction ["Feed", "\z\addons\dayz_code\actions\pzombie\pz_feed.sqf",cursorTarget, 3, true, false, "",""];
			};
		} else {
			player removeAction s_player_butcher;
			s_player_butcher = -1;
		};
	} else {
		// Human Gut animal or zombie
		if (!alive cursorTarget and (_isAnimal or _isZombie) and _hasKnife and !_isHarvested and _canDo) then {
			if (s_player_butcher < 0) then {
				if(_isZombie) then {
					s_player_butcher = player addAction ["Gut Zombie", "\z\addons\dayz_code\actions\gather_zparts.sqf",cursorTarget, 3, true, true, "", ""];
				} else {
					s_player_butcher = player addAction [localize "str_actions_self_04", "\z\addons\dayz_code\actions\gather_meat.sqf",cursorTarget, 3, true, true, "", ""];
				};
			};
		} else {
			player removeAction s_player_butcher;
			s_player_butcher = -1;
		};
	};
	//Fireplace Actions check
	if(inflamed cursorTarget and _hasRawMeat and _canDo) then {
		if (s_player_cook < 0) then {
			s_player_cook = player addAction [localize "str_actions_self_05", "\z\addons\dayz_code\actions\cook.sqf",cursorTarget, 3, true, true, "", ""];
		};
	} else {
		player removeAction s_player_cook;
		s_player_cook = -1;
	};
	if(cursorTarget == dayz_hasFire and _canDo) then {
		if ((s_player_fireout < 0) and !(inflamed cursorTarget) and (player distance cursorTarget < 3)) then {
			s_player_fireout = player addAction [localize "str_actions_self_06", "\z\addons\dayz_code\actions\fire_pack.sqf",cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_fireout;
		s_player_fireout = -1;
	};
	
	//Packing my tent
	if(cursorTarget isKindOf "TentStorage" and _canDo and _ownerID == dayz_characterID) then {
		if ((s_player_packtent < 0) and (player distance cursorTarget < 3)) then {
			s_player_packtent = player addAction [localize "str_actions_self_07", "\z\addons\dayz_code\actions\tent_pack.sqf",cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_packtent;
		s_player_packtent = -1;
	};

	//Allow owner to unlock vault
	if(cursorTarget isKindOf "VaultStorageLocked" and _canDo and _ownerID == dayz_playerUID) then {
		if ((s_player_unlockvault < 0) and (player distance cursorTarget < 3)) then {
			s_player_unlockvault = player addAction ["Unlock Vault", "\z\addons\dayz_code\actions\vault_unlock.sqf",cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_unlockvault;
		s_player_unlockvault = -1;
	};

	//Allow owner to pack vault
	if(cursorTarget isKindOf "VaultStorage" and _canDo and _ownerID == dayz_playerUID) then {
		if ((s_player_packvault < 0) and (player distance cursorTarget < 3)) then {
			s_player_packvault = player addAction ["Pack Vault", "\z\addons\dayz_code\actions\vault_pack.sqf",cursorTarget, 0, false, true, "",""];
		};
		if ((s_player_lockvault < 0) and (player distance cursorTarget < 3)) then {
			s_player_lockvault = player addAction ["Lock Vault", "\z\addons\dayz_code\actions\vault_lock.sqf",cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_packvault;
		s_player_packvault = -1;
		player removeAction s_player_lockvault;
		s_player_lockvault = -1;
	};
	
	//Repairing Vehicles
	if ((dayz_myCursorTarget != cursorTarget) and !_isMan and _hasToolbox and (damage cursorTarget < 1)) then {
		_vehicle = cursorTarget;
		{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
		dayz_myCursorTarget = _vehicle;

		_allFixed = true;
		_hitpoints = _vehicle call vehicle_getHitpoints;
		
		{			
			_damage = [_vehicle,_x] call object_getHit;
			_part = "PartGeneric";

			//change "HitPart" to " - Part" rather than complicated string replace
			_cmpt = toArray (_x);
			_cmpt set [0,20];
			_cmpt set [1,toArray ("-") select 0];
			_cmpt set [2,20];
			_cmpt = toString _cmpt;
				
			if(["Engine",_x,false] call fnc_inString) then {
				_part = "PartEngine";
			};
					
			if(["HRotor",_x,false] call fnc_inString) then {
				_part = "PartVRotor"; //yes you need PartVRotor to fix HRotor LOL
			};

			if(["Fuel",_x,false] call fnc_inString) then {
				_part = "PartFueltank";
			};
			
			if(["Wheel",_x,false] call fnc_inString) then {
				_part = "PartWheel";
			};	
					
			if(["Glass",_x,false] call fnc_inString) then {
				_part = "PartGlass";
			};

			// get every damaged part no matter how tiny damage is!
			if (_damage > 0) then {
				
				_allFixed = false;
				_color = "color='#ffff00'"; //yellow
				if (_damage >= 0.5) then {_color = "color='#ff8800'";}; //orange
				if (_damage >= 0.9) then {_color = "color='#ff0000'";}; //red

				_string = format["<t %2>Repair%1</t>",_cmpt,_color]; //Repair - Part
				_handle = dayz_myCursorTarget addAction [_string, "\z\addons\dayz_code\actions\repair.sqf",[_vehicle,_part,_x], 0, false, true, "",""];
				s_player_repairActions set [count s_player_repairActions,_handle];
			};
			
		} forEach _hitpoints;
		if (_allFixed) then {
			_vehicle setDamage 0;
		};
	};
	
	// Parts Trader Worker3
	if (_isMan and !_isPZombie and _traderType == parts_trader) then {
		
		if (s_player_parts_crtl < 0) then {

			// [_trader_id, _category, ];
			_buy = player addAction ["Car Parts", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[21,"Car Parts"], 99, true, false, "",""];
			_buy2 = player addAction ["Building Supplies", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[22,"Building Supplies"], 98, true, false, "",""];
			_buy3 = player addAction ["Explosives", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[23,"Explosives"], 97, true, false, "",""];
			
			// 
			s_player_parts set [count s_player_parts,_buy];
			s_player_parts set [count s_player_parts,_buy2];
			s_player_parts set [count s_player_parts,_buy3];
			
			s_player_parts_crtl = 1;
		};

	};

	//weapon_trader_1
	if (_isMan and !_isPZombie and _traderType == weapon_trader) then {
		
		if (s_player_parts_crtl < 0) then {

			// [_trader_id, _category, ];
			_buy = player addAction ["Sidearm", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[11,"Sidearm"], 99, true, false, "",""];
			_buy1 = player addAction ["Rifle", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[12,"Rifle"], 97, true, false, "",""];
			_buy2 = player addAction ["Shotgun", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[13,"Shotgun"], 95, true, false, "",""];
			_buy3 = player addAction ["Assault Rifle", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[14,"Assault Rifle"], 93, true, false, "",""];
			_buy4 = player addAction ["Machine Gun", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[15,"Machine Gun"], 91, true, false, "",""];
			_buy5 = player addAction ["Sniper Rifle", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[16,"Sniper Rifle"], 89, true, false, "",""];
		
			s_player_parts set [count s_player_parts,_buy];
			s_player_parts set [count s_player_parts,_buy1];
			s_player_parts set [count s_player_parts,_buy2];
			s_player_parts set [count s_player_parts,_buy3];
			s_player_parts set [count s_player_parts,_buy4];
			s_player_parts set [count s_player_parts,_buy5];
			
			s_player_parts_crtl = 1;
		};

	};

	// can_trader_1
	if (_isMan and !_isPZombie and _traderType == can_trader) then {
		
		if (s_player_parts_crtl < 0) then {

			// [_trader_id, _category, ];
			_cantrader = player addAction ["Trade 3 Empty Soda Cans for 1 Copper", "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",["ItemCopperBar","ItemSodaEmpty",1,3,"buy","Empty Soda Cans","Copper Bar"], 99, true, true, "",""];
			_cantrader1 = player addAction ["Trade 3 Empty Tin Cans for 1 Copper", "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",["ItemCopperBar","TrashTinCan",1,3,"buy","Empty Tin Cans","Copper Bar"], 99, true, true, "",""];
			
			_buy = player addAction ["Food and Drinks", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[51,"Food and Drinks"], 99, true, false, "",""];
			_buy2 = player addAction ["Backpacks", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[52,"Backpacks"], 97, true, false, "",""];
			_buy3 = player addAction ["Toolbelt", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[53,"Toolbelt"], 95, true, false, "",""];
			_buy4 = player addAction ["Clothes", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[54,"Clothes"], 93, true, false, "",""];
			
			s_player_parts set [count s_player_parts,_cantrader];
			s_player_parts set [count s_player_parts,_cantrader1];
			
			s_player_parts set [count s_player_parts,_buy];
			s_player_parts set [count s_player_parts,_buy2];
			s_player_parts set [count s_player_parts,_buy3];
			s_player_parts set [count s_player_parts,_buy4];
			
			s_player_parts_crtl = 1;
		};

	};

	//ammo_trader_1
	if (_isMan and !_isPZombie and _traderType == ammo_trader) then {
		
		if (s_player_parts_crtl < 0) then {

			// [_trader_id, _category, ];
			_buy1 = player addAction ["Sidearm Ammo", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[1,"Sidearm Ammo"], 99, true, false, "",""];
			_buy = player addAction ["Rifle Ammo", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[2,"Rifle Ammo"], 98, true, false, "",""];
			_buy2 = player addAction ["Shotgun Ammo", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[3,"Shotgun Ammo"], 97, true, false, "",""];
			_buy3 = player addAction ["Assault Rifle Ammo", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[4,"Assault Rifle Ammo"], 96, true, false, "",""];
			_buy4 = player addAction ["Machine Gun Ammo", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[5,"Machine Gun Ammo"], 95, true, false, "",""];
			_buy5 = player addAction ["Sniper Rifle Ammo", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[6,"Sniper Rifle Ammo"], 94, true, false, "",""];
			
			s_player_parts set [count s_player_parts,_buy1];
			s_player_parts set [count s_player_parts,_buy];
			s_player_parts set [count s_player_parts,_buy2];
			s_player_parts set [count s_player_parts,_buy3];
			s_player_parts set [count s_player_parts,_buy4];
			s_player_parts set [count s_player_parts,_buy5];
			
			s_player_parts_crtl = 1;
		};

	};

	
	//boat_trader_1
	if (_isMan and !_isPZombie and _traderType == boat_trader) then {
		
		if (s_player_parts_crtl < 0) then {

			// [_trader_id, _category, ];
			_buy = player addAction ["Boats Unarmed", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[49,"Boats Unarmed"], 97, true, false, "",""];
			_buy1 = player addAction ["Boats Armed", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[499,"Boats Armed"], 96, true, false, "",""];
			
			s_player_parts set [count s_player_parts,_buy];
			s_player_parts set [count s_player_parts,_buy1];
			
			s_player_parts_crtl = 1;
		};

	};

	
	//auto_trader_1
	if (_isMan and !_isPZombie and _traderType == auto_trader) then {
		
		if (s_player_parts_crtl < 0) then {

			// [_trader_id, _category, ];
			_buy = player addAction ["Cars", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[41,"Cars"], 99, true, false, "",""];
			_buy1 = player addAction ["Trucks Unarmed", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[42,"Truck Unarmed"], 97, true, false, "",""];
			_buy2 = player addAction ["SUV", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[466,"SUV"], 95, true, false, "",""];
			_buy3 = player addAction ["Buses and Vans", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[467,"Buses and Vans"], 95, true, false, "",""];
			_buy4 = player addAction ["Offroad", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[43,"Offroad"], 93, true, false, "",""];
			_buy5 = player addAction ["Helicopter Unarmed", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[44,"Helicopter"], 91, true, false, "",""];
			_buy6 = player addAction ["Military Unarmed", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[45,"Military Unarmed"], 89, true, false, "",""];
			
			s_player_parts set [count s_player_parts,_buy];
			s_player_parts set [count s_player_parts,_buy1];
			s_player_parts set [count s_player_parts,_buy2];
			s_player_parts set [count s_player_parts,_buy3];
			s_player_parts set [count s_player_parts,_buy4];
			s_player_parts set [count s_player_parts,_buy5];
			s_player_parts set [count s_player_parts,_buy6];
			
			s_player_parts_crtl = 1;
		};

	};


	//auto_trader_2
	if (_isMan and !_isPZombie and _traderType == auto_trader_2) then {
		
		if (s_player_parts_crtl < 0) then {

			// [_trader_id, _category, ];
			
			_buy1 = player addAction ["Trucks Armed", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[422,"Truck Armed"], 97, true, false, "",""];
			_buy2 = player addAction ["Utility", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[46,"Utility"], 95, true, false, "",""];
			_buy3 = player addAction ["Helicopter Armed", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[444,"Helicopter"], 91, true, false, "",""];
			_buy4 = player addAction ["Military Armed", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[455,"Military Armed"], 89, true, false, "",""];
			_buy5 = player addAction ["Fuel Trucks", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[47,"Fuel Trucks"], 88, true, false, "",""];
			_buy6 = player addAction ["Heavy Armor Unarmed", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[48,"Heavy Armor Unarmed"], 88, true, false, "",""];
			
			
			
			s_player_parts set [count s_player_parts,_buy1];
			s_player_parts set [count s_player_parts,_buy2];
			s_player_parts set [count s_player_parts,_buy3];
			s_player_parts set [count s_player_parts,_buy4];
			s_player_parts set [count s_player_parts,_buy5];
			s_player_parts set [count s_player_parts,_buy6];

			s_player_parts_crtl = 1;
		};

	};

	// mad_sci
	if (_isMan and !_isPZombie and _traderType == mad_sci) then {
		
		if (s_player_parts_crtl < 0) then {
			
			// [part_out, part_in, qty_out, qty_in,];
			_zparts1 = player addAction ["Trade Zombie Parts for Bio Meat", "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",["FoodBioMeat","ItemZombieParts",1,1,"buy","Zombie Parts","Bio Meat"], 99, true, true, "",""];
			_zparts2 = player addAction ["Medical Supplies", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[31,"Medical Supplies"], 97, true, false, "",""];
			_zparts3 = player addAction ["Chem-lites/Flares", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[32,"Chem-lites/Flares"], 95, true, false, "",""];
			_zparts4 = player addAction ["Smoke Grenades", "\z\addons\dayz_code\actions\buy_or_sell.sqf",[33,"Smoke Grenades"], 93, true, false, "",""];
			
			s_player_parts set [count s_player_parts,_zparts1];
			s_player_parts set [count s_player_parts,_zparts2];
			s_player_parts set [count s_player_parts,_zparts3];
			s_player_parts set [count s_player_parts,_zparts4];
			
			s_player_parts_crtl = 1;
		};
	};
	
	// metals_trader
	if (_isMan and !_isPZombie and _traderType == metals_trader) then {
		
		if (s_player_parts_crtl < 0) then {
			
			// [part_out, part_in, qty_out, qty_in,];
			_metals1 = player addAction ["Trade 6 Copper for 1 Silver", "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",["ItemSilverBar","ItemCopperBar",1,6,"buy","Copper","Silver"], 99, true, true, "",""];
			_metals2 = player addAction ["Trade 1 Silver for 6 Copper", "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",["ItemCopperBar","ItemSilverBar",6,1,"buy","Silver","Copper"], 98, true, true, "",""];
			_metals4 = player addAction ["Trade 6 Silver for 1 Gold", "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",["ItemGoldBar","ItemSilverBar",1,6,"buy","Silver","Gold"], 97, true, true, "",""];
			_metals3 = player addAction ["Trade 1 Gold for 6 Silver", "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",["ItemSilverBar","ItemGoldBar",6,1,"buy","Gold","Silver"], 97, true, true, "",""];
			_metals5 = player addAction ["Buy Vault for 12 Gold", "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",["ItemVault","ItemGoldBar",1,12,"buy","Gold","Vault"], 96, true, true, "",""];
			
			s_player_parts set [count s_player_parts,_metals1];
			s_player_parts set [count s_player_parts,_metals2];
			s_player_parts set [count s_player_parts,_metals3];
			s_player_parts set [count s_player_parts,_metals4];
			s_player_parts set [count s_player_parts,_metals5];

			s_player_parts_crtl = 1;
		};
	};
	
	if (_isMan and !_isAlive and !_isZombie) then {
		if (s_player_studybody < 0) then {
			s_player_studybody = player addAction [localize "str_action_studybody", "\z\addons\dayz_code\actions\study_body.sqf",cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_studybody;
		s_player_studybody = -1;
	};
		
	//Dog
	if (_isDog and _isAlive and _hasRawMeat and _canDo and _ownerID == "0" and player getVariable ["dogID", 0] == 0) then {
		if (s_player_tamedog < 0) then {
			s_player_tamedog = player addAction [localize "str_actions_tamedog", "\z\addons\dayz_code\actions\tame_dog.sqf", cursorTarget, 1, false, true, "", ""];
		};
	} else {
		player removeAction s_player_tamedog;
		s_player_tamedog = -1;
	};
	
	if (_isDog and _ownerID == dayz_characterID and _isAlive and _canDo) then {
		_dogHandle = player getVariable ["dogID", 0];
		if (s_player_feeddog < 0 and _hasRawMeat) then {
			s_player_feeddog = player addAction [localize "str_actions_feeddog","\z\addons\dayz_code\actions\dog\feed.sqf",[_dogHandle,0], 0, false, true,"",""];
		};
		if (s_player_waterdog < 0 and "ItemWaterbottle" in magazines player) then {
			s_player_waterdog = player addAction [localize "str_actions_waterdog","\z\addons\dayz_code\actions\dog\feed.sqf",[_dogHandle,1], 0, false, true,"",""];
		};
		if (s_player_staydog < 0) then {
			_lieDown = _dogHandle getFSMVariable "_actionLieDown";
			if (_lieDown) then { _text = "str_actions_liedog"; } else { _text = "str_actions_sitdog"; };
			s_player_staydog = player addAction [localize _text,"\z\addons\dayz_code\actions\dog\stay.sqf", _dogHandle, 5, false, true,"",""];
		};
		if (s_player_trackdog < 0) then {
			s_player_trackdog = player addAction [localize "str_actions_trackdog","\z\addons\dayz_code\actions\dog\track.sqf", _dogHandle, 4, false, true,"",""];
		};
		if (s_player_barkdog < 0) then {
			s_player_barkdog = player addAction [localize "str_actions_barkdog","\z\addons\dayz_code\actions\dog\speak.sqf", cursorTarget, 3, false, true,"",""];
		};
		if (s_player_warndog < 0) then {
			_warn = _dogHandle getFSMVariable "_watchDog";
			if (_warn) then { _text = "Quiet"; _warn = false; } else { _text = "Alert"; _warn = true; };
			s_player_warndog = player addAction [format[localize "str_actions_warndog",_text],"\z\addons\dayz_code\actions\dog\warn.sqf",[_dogHandle, _warn], 2, false, true,"",""];		
		};
		if (s_player_followdog < 0) then {
			s_player_followdog = player addAction [localize "str_actions_followdog","\z\addons\dayz_code\actions\dog\follow.sqf",[_dogHandle,true], 6, false, true,"",""];
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
} else {
	//Engineering
	{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
	dayz_myCursorTarget = objNull;

	{player removeAction _x} forEach s_player_madsci;s_player_madsci = [];
	{player removeAction _x} forEach s_player_parts;s_player_parts = [];

	{player removeAction _x} forEach s_player_bank;s_player_bank = [];
	{player removeAction _x} forEach s_player_lockunlock;s_player_lockunlock = [];

	s_player_madsci_crtl = -1;
	s_player_parts_crtl = -1;

	// lock unlock vehicles
	s_player_lockUnlock_crtl = -1;

	// Bank Vault
	s_player_bankvault_crtl = -1;

	//Others
	player removeAction s_player_forceSave;
	s_player_forceSave = -1;
	player removeAction s_player_flipveh;
	s_player_flipveh = -1;
	player removeAction s_player_deleteBuild;
	s_player_deleteBuild = -1;
	player removeAction s_player_butcher;
	s_player_butcher = -1;
	player removeAction s_player_cook;
	s_player_cook = -1;
	player removeAction s_player_fireout;
	s_player_fireout = -1;
	player removeAction s_player_packtent;
	s_player_packtent = -1;
	player removeAction s_player_fillfuel;
	s_player_fillfuel = -1;
	player removeAction s_player_studybody;
	s_player_studybody = -1;
	//Dog
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
    
    	// vault
	player removeAction s_player_unlockvault;
	s_player_unlockvault = -1;
	player removeAction s_player_packvault;
	s_player_packvault = -1;
	player removeAction s_player_lockvault;
	s_player_lockvault = -1;
};



//Dog actions on player self
_dogHandle = player getVariable ["dogID", 0];
if (_dogHandle > 0) then {
	_dog = _dogHandle getFSMVariable "_dog";
	_ownerID = "0";
	if (!isNull cursorTarget) then { _ownerID = cursorTarget getVariable ["characterID","0"]; };
	if (_canDo and !_inVehicle and alive _dog and _ownerID != dayz_characterID) then {
		if (s_player_movedog < 0) then {
			s_player_movedog = player addAction [localize "str_actions_movedog", "\z\addons\dayz_code\actions\dog\move.sqf", player getVariable ["dogID", 0], 1, false, true, "", ""];
		};
		if (s_player_speeddog < 0) then {
			_text = "Walk";
			_speed = 0;
			if (_dog getVariable ["currentSpeed",1] == 0) then { _speed = 1; _text = "Run"; };
			s_player_speeddog = player addAction [format[localize "str_actions_speeddog", _text], "\z\addons\dayz_code\actions\dog\speed.sqf",[player getVariable ["dogID", 0],_speed], 0, false, true, "", ""];
		};
		if (s_player_calldog < 0) then {
			s_player_calldog = player addAction [localize "str_actions_calldog", "\z\addons\dayz_code\actions\dog\follow.sqf", [player getVariable ["dogID", 0], true], 2, false, true, "", ""];
		};
	};
} else {
	player removeAction s_player_movedog;		
	s_player_movedog =		-1;
	player removeAction s_player_speeddog;
	s_player_speeddog =		-1;
	player removeAction s_player_calldog;
	s_player_calldog = 		-1;
};