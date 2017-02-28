// (c) facoptere@gmail.com, licensed to DayZMod for the community

#include "\ca\editor\Data\Scripts\dikCodes.h"

_dikCode = _this select 1;
_shiftState = _this select 2;
_ctrlState = _this select 3;
_altState = _this select 4;
_handled = false;

if (isNil "keyboard_keys") then {
    _cancelBuild = {
		DZE_cancelBuilding = true;
		call dayz_EjectPlayer;
		_handled = false;
		if (r_player_dead) then {_handled = true;}; // Disable ESC after death
    };
	_dze_f = {
		 if (!_ctrlState && !_altState) then {DZE_F = true;};
	};
	_dze_q = {
		 if (!_ctrlState && !_altState) then {DZE_Q = true;};
		 if (!_ctrlState && _altState) then {DZE_Q_alt = true;};
		 if (_ctrlState && !_altState) then {DZE_Q_ctrl = true;};
	};
	_dze_z = {
		 if (!_ctrlState && !_altState) then {DZE_Z = true;};
		 if (!_ctrlState && _altState) then {DZE_Z_alt = true;};
		 if (_ctrlState && !_altState) then {DZE_Z_ctrl = true;};
	};
	_autoRun = {
		if (!dayz_autoRun) then {
			dayz_autoRun = true;
			dayz_autoRunThread = [] spawn {
				_weapon = currentWeapon player;
				while {dayz_autoRun} do {
					// SurfaceIsWater does not work for ponds
					// Check weapon to detect Arma action (dayz action is handled in dz_fn_switchWeapon)
					if (player != vehicle player or (surfaceIsWater getPosASL player) or ((call fn_nearWaterHole) select 0) or (currentWeapon player != _weapon) or r_fracture_legs) exitWith {
						call dayz_autoRunOff;
					};
					player playAction "FastF";
					uiSleep 0.5;
				};
			};
		} else {
			call dayz_autoRunOff;
		};
		_handled = true;
	};
	_filterCheat = {
		//Overriding default engine handling does not stop cheat input, need manual disableUserInput too
		_handled = [displayNull,_dikCode,_shiftState] call dze_filterCheats;
	};
	_openGroups = {
		if (dayz_requireRadio && !("ItemRadio" in items player)) then {
			localize "STR_EPOCH_NEED_RADIO" call dayz_rollingMessages;
		} else {
			if (isNull findDisplay 80000) then {
				if (!isNil "dayz_groupInit") then {[] spawn dayz_openGroupDialog;};
			} else {
				findDisplay 80000 closeDisplay 2;
			};
		};
		_handled = true;
	};
	_muteSound = {
		call player_toggleSoundMute;
		_handled = true;
	};
    _rifle = {
		2 call dz_fn_switchWeapon;
        _handled = true;
    };
    _pistol = {
		3 call dz_fn_switchWeapon;
        _handled = true;
    };
    _melee = { // Also works for rifle on back if DZE_TwoPrimaries = 2;
		4 call dz_fn_switchWeapon;
        _handled = true;
    };
    _throwable = { // select next non empty throwable weapon
        if (vehicle player == player) then {
            _ammo_throwable = [];
            _muzzles_throwable = [];
            _weapon_throwable = [];
            {
                _weapon = _x;
                _muzzles = getArray(configFile >> "cfgWeapons" >> _weapon >> "muzzles");
                if (count _muzzles == 0) then { _muzzles = [_weapon ]; };
                {
                    _muzz = _x;
                    {
                        if (_x in magazines player) then {
                            _ammo_throwable set [ count _ammo_throwable, getText(configFile >> "cfgMagazines" >> _x >> "ammo") ];
                            _muzzles_throwable set [ count _muzzles_throwable, _muzz ];
                            _weapon_throwable set [ count _weapon_throwable, _weapon ];
                        };                      
                    } forEach getArray(configFile >> "cfgWeapons" >> _weapon >> _muzz >> "magazines");
                } forEach _muzzles;
            } forEach ["Throw"];

            _magCount = count _ammo_throwable;
            if (_magCount > 0) then {
                if (isNil "KB_CurrentThrowable") then { KB_CurrentThrowable = -1; };
                _currentAmmo = (weaponState player) select 3;       
                _idx = _ammo_throwable find _currentAmmo;
                if (_idx >= 0) then { KB_CurrentThrowable = _idx; };
                KB_CurrentThrowable = (KB_CurrentThrowable + 1) mod _magCount;
                player selectWeapon (_muzzles_throwable select KB_CurrentThrowable);
                _handled = true;
            };
        };
    };
	_surrender = {
		call player_surrender;
		_handled = true;
    };
    _gear = {
        if ((vehicle player != player) and !_shiftState and !_ctrlState and !_altState && !dialog) then {
            createGearDialog [player, "RscDisplayGear"];
            _handled = true;
        }
        else { if ((vehicle player == player) and (speed vehicle player > 0)) then {
            //[objNull, player, rSwitchMove,""] call RE;
            _handled = true;
        };};
    };
    _forcesave = {
        dayz_lastCheckBit = diag_ticktime;
        call player_forceSave;
		call dayz_EjectPlayer;
    };
    _forcesave2 = {
        if ((!isNull (findDisplay 106)) OR dialog) then {
            call player_forceSave;          
        };
    };
    _drop = {
		if (r_drag_sqf) then {
			_doors = nearestObjects [player, DayZ_DropDrageeObjects, 3]; //Prevent dropping dragged player through objects
			if (count _doors > 0) then {_handled = true;};
			force_dropBody = true;
		} else {
			_doors = nearestObjects [player, DZE_DoorsLocked, 3];
			if (count _doors > 0 && {speed player > 0}) then {_handled = true;}; //Prevent sprint and prone through doors glitch
		};
    };
    _interrupt = {
		if (vehicle player == player) then { //allow med actions in moving vehicles
			r_interrupt = true;
		};
		if (DZE_Surrender) then {call dze_surrender_off};
		if (dayz_autoRun) then {call dayz_autoRunOff;};
    };
    // TODO: left/right, when gear open: onKeyDown = "[_this,'onKeyDown',0,107,0,107] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
    _noise = {
		//Overriding default engine handling does not stop combination binds, need manual disableUserInput too
		_handled = [displayNull,_dikCode,_shiftState] call dze_filterCheats;
		
        if (diag_ticktime - dayz_lastCheckBit > 10 && !(_dikCode in channel_keys)) then {
            dayz_lastCheckBit = diag_ticktime;
            [player,20,true,(getPosATL player)] call player_alertZombies;
        };
    };
    _journal = {
        if (!dayz_isSwimming and !dialog) then {
            [player,4,true,(getPosATL player)] call player_alertZombies;
            createDialog 'horde_journal_front_cover';
        };
        _handled = true;
    };

    _build_left = {
		DZE_4 = true;
        // fence construction
        if (0 != count Dayz_constructionContext) then {
            _angleRef = Dayz_constructionContext select 1;
            _dir = _angleRef - (getDir player) -5;
            if (_dir > 180) then {_dir = _dir - 360}; 
            if (_dir < -180) then {_dir = _dir + 360};
            if ( _dir > -75) then {
                _new = floor((_angleRef - 5)/5)*5;
                Dayz_constructionContext set [ 1, _new]; // favorite angle
                r_interrupt = true;
            };
            _handled = true;
        };
        // tents and stash construction
        _object = player getVariable ["constructionObject", objNull];
        if (!isNull _object) then {
            _dir = getDir _object - 3;
            _object setDir _dir;
            _handled = true;
        };
        dayz_dodge = true;
    };
    _build_right = {
		DZE_6 = true;
        if (0 != count Dayz_constructionContext) then {
            _angleRef = Dayz_constructionContext select 1;
            _dir = _angleRef - (getDir player) +5;
            if (_dir > 180) then { _dir = _dir - 360; }; 
            if (_dir < -180) then { _dir = _dir + 360; };
            if (_dir < 75) then {
                _new = ceil((_angleRef + 5)/5)*5;
                Dayz_constructionContext set [ 1, _new]; // favorite angle
                r_interrupt = true;
            };
            _handled = true;
        };
        // tents and stash construction
        _object = player getVariable ["constructionObject", objNull];
        if (!isNull _object) then {
            _dir = getDir _object + 3;
            _object setDir _dir;
            _handled = true;
        };
        dayz_dodge = true;
    };

    _build_camOnOff = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_buildCamera.sqf";

    _build_str8OnOff = {
        if (0 != count Dayz_constructionContext) then {
            Dayz_constructionContext set [ 5, !(Dayz_constructionContext select 5) ];
            _handled = true;
            r_interrupt = true;
        };
		
		if (animationState player in ["bunnyhopunarmed","bunnyhoprifle"]) then {
			//Fixes invisible weapon switch glitch if double tapping vault with no weapon in hands
			_handled = true;
		};
		if (player isKindOf  "PZombie_VB") then {
			_handled = true; // do not allow player zombies to vault or jump
		} else {
			_nearbyObjects = nearestObjects[getPosATL player, dayz_disallowedVault, 8];
			if (count _nearbyObjects > 0) then {
				if ((diag_tickTime - dayz_lastCheckBit > 4)) then {
					[objNull, player, rSwitchMove,"GetOver"] call RE;
					player playActionNow "GetOver";
					dayz_lastCheckBit = diag_tickTime;
				} else {
					_handled = true;
				};
			};
		};
    };

    _block = {
        _handled = true;
    };
	
    _addArray = {
        {
            keyboard_keys set [_x, _this select 1];
        } forEach (_this select 0);
    };

    keyboard_keys = [];
	channel_keys = [];
	voice_keys = [];
	{voice_keys = voice_keys + (actionKeys _x)} count voice_actions;
	{channel_keys = channel_keys + (actionKeys _x)} count ["NextChannel","PrevChannel"];
    keyboard_keys resize 256;
    [[DIK_ESCAPE], _cancelBuild] call _addArray;
	[[DIK_INSERT], {DZE_Q_alt = true;}] call _addArray;
	[[DIK_A,DIK_D,DIK_LEFT,DIK_RIGHT], _interrupt] call _addArray;
	[[DIK_F], _dze_f] call _addArray;
	[[DIK_PRIOR], _dze_q] call _addArray;
	[[DIK_NEXT], _dze_z] call _addArray;
	[[DIK_Q], {DZE_4 = true;}] call _addArray;
	[[DIK_E], {DZE_6 = true;}] call _addArray;
	[[DIK_0], _autoRun] call _addArray;
	[[DIK_NUMPADMINUS,DIK_LSHIFT], _filterCheat] call _addArray;
	[[DIK_SPACE], {DZE_5 = true;}] call _addArray;
	[actionKeys "User6", {DZE_F = true;}] call _addArray;
	[actionKeys "User7", {DZE_Q_ctrl = true;}] call _addArray;
	[actionKeys "User8", {DZE_Z_ctrl = true;}] call _addArray;
	[actionKeys "User13", {DZE_Q_alt = true;}] call _addArray;
	[actionKeys "User14", {DZE_Z_alt = true;}] call _addArray;
	[actionKeys "User15", {DZE_Q = true;}] call _addArray;
	[actionKeys "User16", {DZE_Z = true;}] call _addArray;
	[actionKeys "User17", {DZE_4 = true;}] call _addArray;
	[actionKeys "User18", {DZE_6 = true;}] call _addArray;
	[actionKeys "User19", {DZE_5 = true;}] call _addArray;
	[actionKeys "Surrender", _surrender] call _addArray;
    [[DIK_1], _rifle] call _addArray;
    [[DIK_2], _pistol] call _addArray;
    [[DIK_3], _melee] call _addArray;
    //[[DIK_4], _throwable] call _addArray;
    [actionKeys "Gear", _gear] call _addArray;
    [actionKeys "Prone", _drop] call _addArray;
    [actionKeys "Crouch", _drop] call _addArray;
    [actionKeys "MoveLeft", _interrupt] call _addArray;
    [actionKeys "MoveRight", _interrupt] call _addArray;
    [actionKeys "MoveForward", _interrupt] call _addArray;
    [actionKeys "MoveBack", _interrupt] call _addArray;
    [actionKeys "TurnLeft", _interrupt] call _addArray;
    [actionKeys "TurnRight", _interrupt] call _addArray;
	[actionKeys "PushToTalk", _noise] call _addArray;
	[actionKeys "PushToTalkAll", _noise] call _addArray;
	[actionKeys "PushToTalkCommand", _noise] call _addArray;
	[actionKeys "PushToTalkDirect", _noise] call _addArray;
	[actionKeys "PushToTalkGroup", _noise] call _addArray;
	[actionKeys "PushToTalkSide", _noise] call _addArray;
	[actionKeys "PushToTalkVehicle", _noise] call _addArray;
    [actionKeys "VoiceOverNet", _noise] call _addArray;
	[actionKeys "NextChannel", _noise] call _addArray;
	[actionKeys "PrevChannel", _noise] call _addArray;
    [actionKeys "Chat", _noise] call _addArray;
    [actionKeys "User20", _journal] call _addArray;
    [actionKeys "Diary", _journal] call _addArray;
    [actionKeys "NetworkStats", _journal] call _addArray;
	[[DIK_F1], _muteSound] call _addArray;
    //[[DIK_F4, DIK_TAB, DIK_DELETE], _forcesave] call _addArray;
    //[[DIK_F4, DIK_RMENU, DIK_LMENU,DIK_LSHIFT,DIK_RSHIFT,DIK_ESCAPE], _forcesave2] call _addArray;
    [actionKeys "LeanLeft", _build_left ] call _addArray;
    [actionKeys "LeanRight", _build_right ] call _addArray;
    [actionKeys "PersonView", _build_camOnOff ] call _addArray; // Camera Mode
    [actionKeys "GetOver", _build_str8OnOff ] call _addArray; // V
//  [[DIK_NUMPAD7], _rotate_left] call _addArray;
//  [[DIK_NUMPAD9], _rotate_right] call _addArray;
    [actionKeys "ForceCommandingMode", {DZE_5 = true;_handled = true;}] call _addArray;
    [[  DIK_F9,DIK_F10,DIK_F11,DIK_F12,
        DIK_F8,DIK_F7,DIK_F6,DIK_F5,DIK_F4,
        DIK_F3,DIK_F2,DIK_9,
        DIK_8,DIK_7,DIK_6,DIK_5,DIK_4], _block] call _addArray;
	if (dayz_groupSystem) then {
		[[DIK_F5], _openGroups] call _addArray;
		[[DIK_LWIN,DIK_RWIN], {dayz_groupNameTags = !dayz_groupNameTags;_handled = true;}] call _addArray;
		[actionKeys "TacticalView", _block] call _addArray;
	};
	diag_log "keyboard_keys reset";
	if (!isNil "bis_fnc_halo_keydown_eh") then {bis_fnc_halo_keydown_eh = (finddisplay 46) displayaddeventhandler ["keydown","_this call bis_fnc_halo_keydown;"];}; // halo in progress
};

if (r_player_unconsciousInputDisabled) exitWith {true};
_code = keyboard_keys select _dikCode;
if (!isNil "_code") then {
    call _code;
};

_handled