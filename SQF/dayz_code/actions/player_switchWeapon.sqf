#include "\z\addons\dayz_code\util\player.hpp"

#define IS_PRIMARY(wpn) (getNumber (configFile >> "CfgWeapons" >> wpn >> "type") == 1)
#define MELEE(wpn) getNumber (configFile >> "CfgWeapons" >> wpn >> "melee")
#define IS_MELEE(wpn) (MELEE(wpn) == 1)

//0 if not found, 1 if in primary slot, 2 if on back
#define FIND_RIFLE (0 call dz_fn_switchWeapon_find)
#define FIND_MELEE (1 call dz_fn_switchWeapon_find)

dz_switchWeapon_pistolTime = 0;

//0: switch rifle/melee instantly and update gear
//1: switch rifle/melee with animation
//2: switch to rifle
//3: switch to pistol
//4: switch to melee
dz_fn_switchWeapon = {
	if Player_IsInVehicle exitWith {};
	if Player_IsOnLadder() exitWith {};
	if (dayz_autoRun) then {call dayz_autoRunOff;};
	
	private ["_current","_secondary","_option"];
	
	_option = _this;
	_current = currentWeapon player;
	
	call {
		if (_option == 0) exitWith { // Instantly switch primary and carry, also update gear
			if (IS_PRIMARY(_current)) then {true call dz_fn_switchWeapon_swap;} else {false call dz_fn_switchWeapon_swap;};
			[[(findDisplay 106)],"onLBSelChanged"] execVM "\z\addons\dayz_code\system\handleGear.sqf";
		};
		
		if (_option == 1) exitWith { //Switch primary and carry
			if (dayz_quickSwitch) then {
				true call dz_fn_switchWeapon_swap;
			} else {
				call dz_fn_switchWeapon_swapSecure;
			};
		};
		
		if (_option == 2) exitWith { // Switch to rifle
			if (_current == "") exitWith { // No current weapon
				switch FIND_RIFLE do {
					case 1: { //In primary
						player selectWeapon primaryWeapon player;
					};
					case 2: { //On back
						true call dz_fn_switchWeapon_swap;
					};
				};
			};
			if (IS_PRIMARY(_current)) exitWith { // Current weapon is primary
				if (IS_MELEE(_current) && {!IS_MELEE(dayz_onBack)}) then { // if current is melee and on back is rifle
					if (dayz_quickSwitch) then {
						true call dz_fn_switchWeapon_swap;
					} else {
						call dz_fn_switchWeapon_swapSecure;
					};
				};
			};
			// Default: Current is pistol
			switch FIND_RIFLE do {
				case 1: { //In primary
					if (Player_GetStance() == Player_GetStance_PRONE) then {
						player playMoveNow "AmovPpneMstpSrasWrflDnon";
					};
					player selectWeapon primaryWeapon player;
				};
				case 2: { //On back
					if (diag_tickTime - dz_switchWeapon_pistolTime < 1) exitWith {};
					if (Player_GetStance() == Player_GetStance_PRONE) then {
						player playMoveNow "AmovPpneMstpSrasWrflDnon";
					};
					true call dz_fn_switchWeapon_swap;
				};
			};
		};
		
		if (_option == 3) exitWith { //Switch to pistol
			if (IS_PRIMARY(_current)) then { //If current weapon is primary
				_secondary = Player_GetSidearm();
				if (!isNil "_secondary") then {
					player selectWeapon _secondary;
					dz_switchWeapon_pistolTime = diag_tickTime;
				};
			};
		};
		if (_option == 4) exitWith { //Switch to melee or onBack
			if (_current == "") exitWith { //No current weapon
				switch FIND_MELEE do {
					case 1: { //In primary
						player selectWeapon primaryWeapon player;
					};
					case 2: { //On back
						true call dz_fn_switchWeapon_swap;
					};
				};
			};
			if (IS_PRIMARY(_current)) exitWith { //Current weapon is primary
				if ((!IS_MELEE(_current) && { IS_MELEE(dayz_onBack) }) or (DZE_TwoPrimaries > 1)) then { //if current is rifle and on back is melee OR two rifles are allowed
					if (dayz_quickSwitch) then {
						true call dz_fn_switchWeapon_swap;
					} else {
						call dz_fn_switchWeapon_swapSecure;
					};
				};
			};
			// Default: Current is pistol
				if (DZE_TwoPrimaries > 1 && {!IS_MELEE(dayz_onBack)}) exitWith { // Allow switching to on back rifle if DZE_TwoPrimaries = 2.
					if (dayz_quickSwitch) then {
						true call dz_fn_switchWeapon_swap;
					} else {
						call dz_fn_switchWeapon_swapSecure;
					};
				};
				switch FIND_MELEE do { // Find melee weapon
				case 1: { // In primary
					player selectWeapon primaryWeapon player;
					if (Player_GetStance() == Player_GetStance_PRONE) then {
						player playMoveNow "AmovPpneMstpSrasWrflDnon";
					};
				};
				case 2: { // On back
					if (diag_tickTime - dz_switchWeapon_pistolTime < 1) exitWith {};
					if (Player_GetStance() == Player_GetStance_PRONE) then {
						player playMoveNow "AmovPpneMstpSrasWrflDnon";
					};
					true call dz_fn_switchWeapon_swap;
				};
			};
		};
	};
};

//See FIND_RIFLE and FIND_MELEE
dz_fn_switchWeapon_find = {
	private "_primary";
	_primary = primaryWeapon player;
	if (_primary != "" && { _this == MELEE(_primary) }) exitWith { 1 };
	if (dayz_onBack != "" && { _this == MELEE(dayz_onBack) }) exitWith { 2 };
	0 // Default
};

//Swaps rifle / melee instantly without animation
dz_fn_switchWeapon_swap = {
	if (dayz_onBack == "") then {
		//Must be in a single statement to ensure atomicity in the scheduled environment.
		dayz_onBack = [primaryWeapon player,player removeWeapon primaryWeapon player] select 0;
	} else {
		dayz_onBack = [primaryWeapon player,player removeWeapon primaryWeapon player,player addWeapon dayz_onBack] select 0;
	};
	
	if (_this) then {
		player selectWeapon primaryWeapon player;
		if (IS_MELEE(primaryWeapon player)) then {
			call dayz_meleeMagazineCheck;
		};
	};
};

//Swaps rifle / melee forcing an animation
dz_fn_switchWeapon_swapSecure = {
	private ["_anim","_array","_str"];
	//animation states are in the form "AmovPerc...", "AmovPknl...", "AmovPpne..."
	_array = toArray (animationState player);
	_str = toString [_array select 5,_array select 6,_array select 7];
	_anim = format["AmovP%1MstpSrasWrflDnon_AmovP%1MstpSrasWpstDnon",_str];
	player playMoveNow _anim;
	
	//Add AnimDone event handler to wait until current weapon is put away
	dz_switchWeapon_handler = player addEventHandler ["AnimDone", {
		
		true call dz_fn_switchWeapon_swap;
		player removeEventHandler ["AnimDone", dz_switchWeapon_handler];
		dz_switchWeapon_handler = nil;
	}];
};
