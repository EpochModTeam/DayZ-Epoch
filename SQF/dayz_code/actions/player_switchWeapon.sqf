#include "\z\addons\dayz_code\util\mutex.hpp"
#include "\z\addons\dayz_code\util\player.hpp"

#define BANDAID

#define TIMEOUT 2

#define IS_PRIMARY(wpn) (getNumber (configFile >> "CfgWeapons" >> wpn >> "type") == 1)
#define MELEE(wpn) getNumber (configFile >> "CfgWeapons" >> wpn >> "melee")
#define IS_MELEE(wpn) (MELEE(wpn) == 1)

//0 if not found, 1 if in primary slot, 2 if on back
#define FIND_RIFLE() (0 call dz_fn_switchWeapon_find)
#define FIND_MELEE() (1 call dz_fn_switchWeapon_find)

dz_switchWeapon_mutex = Mutex_New();
dz_switchWeapon_time = 0;
dz_switchWeapon_pistolTime = 0;

//0: switch rifle/melee instantly and update gear
//1: switch rifle/melee with animation
//2: switch to rifle
//3: switch to pistol
//4: switch to melee
dz_fn_switchWeapon =
{
	if (vehicle player != player) exitWith {};
	if Player_IsOnLadder() exitWith {};
	if (dayz_autoRun) then {call dayz_autoRunOff;};
	
	private ["_current","_primary","_secondary","_swapWeapons"];
	
	_current = currentWeapon player;
	
	switch _this do
	{
		//Instantly switch primary and carry, also update gear
		case 0:
		{
			if (IS_PRIMARY(_current)) then
				{ true call dz_fn_switchWeapon_swap; }
			else
				{ false call dz_fn_switchWeapon_swap; };
			
			/*call _swapWeapons;
			if (IS_PRIMARY(_current)) then
				{ player selectWeapon primaryWeapon player; };*/
			
			[[(findDisplay 106)],"onLBSelChanged"] execVM "\z\addons\dayz_code\system\handleGear.sqf";
		};
		
		//Switch primary and carry
		case 1:
		{
			if (dayz_quickSwitch) then
			{
				true call dz_fn_switchWeapon_swap;
				#ifdef BANDAID
				call dayz_meleeMagazineCheck;
				#endif
			}
			else
				{ call dz_fn_switchWeapon_swapSecure; };
		};
		
		//Switch to rifle
		case 2:
		{
			//No current weapon
			if (_current == "") exitWith
			{
				switch FIND_RIFLE() do
				{
					//In primary
					case 1:
					{
						player selectWeapon primaryWeapon player;
					};
					
					//On back
					case 2:
					{
						true call dz_fn_switchWeapon_swap;
					};
				};
			};
			
			//Current weapon is primary
			if (IS_PRIMARY(_current)) exitWith
			{
				//if current is melee and on back is rifle
				if (IS_MELEE(_current) && { !IS_MELEE(dayz_onBack) }) then
				{
					if (dayz_quickSwitch) then
						{ true call dz_fn_switchWeapon_swap; }
					else
						{ call dz_fn_switchWeapon_swapSecure; };
				};
			};
			
			//Current is pistol
			switch FIND_RIFLE() do
			{
				//In primary
				case 1:
				{
					if (Player_GetStance() == Player_GetStance_PRONE) then
						{ player playMoveNow "AmovPpneMstpSrasWrflDnon"; };
					player selectWeapon primaryWeapon player;
				};
				
				//On back
				case 2:
				{
					if (diag_tickTime - dz_switchWeapon_pistolTime < 1) exitWith {};
					if (Player_GetStance() == Player_GetStance_PRONE) then
						{ player playMoveNow "AmovPpneMstpSrasWrflDnon"; };
					true call dz_fn_switchWeapon_swap;
				};
			};
		};
		
		//Switch to pistol
		case 3:
		{
			//If current weapon is primary
			if (IS_PRIMARY(_current)) then
			{
				_secondary = Player_GetSidearm();
				if (!isNil "_secondary") then
				{
					player selectWeapon _secondary;
					dz_switchWeapon_pistolTime = diag_tickTime;
				};
			};
		};
		
		//Switch to melee
		case 4:
		{
			//No current weapon
			if (_current == "") exitWith
			{
				switch FIND_MELEE() do
				{
					//In primary
					case 1:
					{
						player selectWeapon primaryWeapon player;
					};
					
					//On back
					case 2:
					{
						true call dz_fn_switchWeapon_swap;
						#ifdef BANDAID
						call dayz_meleeMagazineCheck;
						#endif
					};
				};
			};
			
			//Current weapon is primary
			if (IS_PRIMARY(_current)) exitWith
			{
				//if current is rifle and on back is melee OR two rifles are allowed
				if ((!IS_MELEE(_current) && { IS_MELEE(dayz_onBack) }) or (DZE_TwoPrimaries > 1)) then
				{
					if (dayz_quickSwitch) then
					{
						true call dz_fn_switchWeapon_swap;
						#ifdef BANDAID
						call dayz_meleeMagazineCheck;
						#endif
					}
					else
						{ call dz_fn_switchWeapon_swapSecure; };
				};
			};
			
			//Current is pistol
			//Find melee weapon
			switch FIND_MELEE() do
			{
				//In primary
				case 1:
				{
					player selectWeapon primaryWeapon player;
					if (Player_GetStance() == Player_GetStance_PRONE) then
						{ player playMoveNow "AmovPpneMstpSrasWrflDnon"; };
				};
				
				//On back
				case 2:
				{
					if (diag_tickTime - dz_switchWeapon_pistolTime < 1) exitWith {};
					if (Player_GetStance() == Player_GetStance_PRONE) then
						{ player playMoveNow "AmovPpneMstpSrasWrflDnon"; };
					true call dz_fn_switchWeapon_swap;
				};
			};
		};
	};
};

//See FIND_RIFLE() and FIND_MELEE()
dz_fn_switchWeapon_find =
{
	_primary = primaryWeapon player;
	
	if (_primary != "" && { _this == MELEE(_primary) })
		exitWith { 1 };
	
	if (dayz_onBack != "" && { _this == MELEE(dayz_onBack) })
		exitWith { 2 };
	
	0
};

//Swaps rifle / melee instantly without animation
dz_fn_switchWeapon_swap =
{
	if (dayz_onBack == "") then
	{
		//Must be in a single statement to ensure atomicity in the scheduled environment.
		dayz_onBack =
		[
			primaryWeapon player,
			player removeWeapon primaryWeapon player
		] select 0;
	}
	else
	{
		dayz_onBack =
		[
			primaryWeapon player,
			player removeWeapon primaryWeapon player,
			player addWeapon dayz_onBack
		] select 0;
	};
	
	if (_this) then
		{ player selectWeapon primaryWeapon player; };
};

//Swaps rifle / melee forcing an animation
dz_fn_switchWeapon_swapSecure =
{
	if (!Mutex_TryLock_Fast(dz_switchWeapon_mutex)) exitWith {};
	
	//animation states are in the form "AmovPerc...", "AmovPknl...", "AmovPpne..."
	dz_switchWeapon_anim = format
	[
		"AmovP%1MstpSrasWrflDnon_AmovP%1MstpSrasWpstDnon",
		//Switch on player stance
		switch Player_GetStance() do
		{
			case Player_GetStance_STAND: { "erc" };
			case Player_GetStance_KNEEL: { "knl" };
			case Player_GetStance_PRONE: { "pne" };
		}
	];
	
	//Add AnimDone event handler to wait until current weapon is put away
	dz_switchWeapon_handler = player addEventHandler ["AnimDone", dz_fn_switchWeapon_animDone];
	player playMoveNow dz_switchWeapon_anim;
	dz_switchWeapon_time = diag_tickTime;
};

dz_fn_switchWeapon_animDone =
{
	//Wait at most TIMEOUT seconds
	if (diag_tickTime - dz_switchWeapon_time > TIMEOUT) exitWith
	{
		player removeEventHandler ["AnimDone", dz_switchWeapon_handler];
		Mutex_Unlock(dz_switchWeapon_mutex);
	};
	
	//Check if finished animation is the correct one
	if ((_this select 1) != dz_switchWeapon_anim) exitWith {};
	
	true call dz_fn_switchWeapon_swap;
	
	//Remove eventhandler
	player removeEventHandler ["AnimDone", dz_switchWeapon_handler];
	Mutex_Unlock(dz_switchWeapon_mutex);
	
	#ifdef BANDAID
	if (IS_MELEE(primaryWeapon player)) then
		{ call dayz_meleeMagazineCheck; };
	#endif
};