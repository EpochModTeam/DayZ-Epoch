// (c) facoptere@gmail.com, licensed to DayZMod for the community

#include "\ca\editor\Data\Scripts\dikCodes.h"

local _dikCode = _this select 1;
local _shiftState = _this select 2;
local _ctrlState = _this select 3;
local _altState = _this select 4;
local _handled = false;

if (isNil "keyboard_keys") then {
    local _cancelBuild = {
		DZE_cancelBuilding = true;
		call dayz_EjectPlayer;
		_handled = false;
		if (r_player_dead) then {_handled = true;}; // Disable ESC after death
    };
	local _dze_f = {
		if (!_ctrlState && !_altState) then {DZE_F = true;};
	};
	local _dze_q = {
		if (!_ctrlState && !_altState) then {DZE_Q = true;};
		if (!_ctrlState && _altState) then {DZE_Q_alt = true;};
		if (_ctrlState && !_altState) then {DZE_Q_ctrl = true;};
	};
	local _dze_z = {
		if (!_ctrlState && !_altState) then {DZE_Z = true;};
		if (!_ctrlState && _altState) then {DZE_Z_alt = true;};
		if (_ctrlState && !_altState) then {DZE_Z_ctrl = true;};
	};
	local _autoRun = {
		if (!dayz_autoRun) then {
			dayz_autoRun = true;
			dayz_autoRunThread = [] spawn {
				local _weapon = currentWeapon player;
				while {dayz_autoRun} do {
					// SurfaceIsWater does not work for ponds
					// Check weapon to detect Arma action (dayz action is handled in dz_fn_switchWeapon)
					if (player != vehicle player || {r_fracture_legs || {surfaceIsWater getPosASL player} || {currentWeapon player != _weapon} || {(call fn_nearWaterHole) select 0}}) exitWith {
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
	local _filterCheat = {
		//Overriding default engine handling does not stop cheat input, need manual disableUserInput too
		_handled = [displayNull,_dikCode,_shiftState] call dze_filterCheats;
	};
	local _openGroups = {
		if (dayz_requireRadio && {!("ItemRadio" in items player)}) then {
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
	local _muteSound = {
		call player_toggleSoundMute;
		_handled = true;
	};
	local _statusUI = {
		DZE_UI = DZE_UI + 1;
		if (DZE_UI == 6) then {DZE_UI = 0; [format[localize "STR_UI_STATUS_ICONS" + " %1",localize "STR_DISABLED"],1] call dayz_rollingMessages;};
		if (DZE_UI == 1) then {[format[localize "STR_UI_STATUS_ICONS" + " %1",localize "STR_ENABLED"],1] call dayz_rollingMessages;};
		profileNamespace setVariable ["statusUI",DZE_UI];
		saveProfileNamespace;
		call ui_changeDisplay;
		_handled = true;
	};
    local _rifle = {
		2 call dz_fn_switchWeapon;
        _handled = true;
    };
    local _pistol = {
		3 call dz_fn_switchWeapon;
        _handled = true;
    };
    local _melee = { // Also works for rifle on back if DZE_TwoPrimaries = 2;
		4 call dz_fn_switchWeapon;
        _handled = true;
    };
	local _surrender = {
		call player_surrender;
		_handled = true;
    };
    local _gear = {
        if ((vehicle player != player) && {!_shiftState && !_ctrlState && !_altState && !dialog}) then {
            createGearDialog [player, "RscDisplayGear"];
            _handled = true;
        } else {
            if ((vehicle player == player) && {speed vehicle player > 0}) then {
                //[objNull, player, rSwitchMove,""] call RE;
                _handled = true;
            };
        };
    };
    local _forcesave = {
		if (diag_tickTime - dayz_lastSave > 10) then {
			call player_forceSave;
		};
    };
    local _drop = {
		local _doors = [];
		if (r_drag_sqf) then {
			_doors = nearestObjects [player, DayZ_DropDrageeObjects, 3]; //Prevent dropping dragged player through objects
			if (count _doors > 0) then {_handled = true;};
			force_dropBody = true;
		} else {
			_doors = nearestObjects [player, DZE_DoorsLocked, 3];
			if (count _doors > 0 && {speed player > 0}) then {_handled = true;}; //Prevent sprint and prone through doors glitch
		};
    };
    local _interrupt = {
		r_interrupt = true;
		if (DZE_Surrender) then {call dze_surrender_off};
		if (dayz_autoRun) then {call dayz_autoRunOff;};
    };
    // TODO: left/right, when gear open: onKeyDown = "[_this,'onKeyDown',0,107,0,107] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
    local _noise = {
		//Overriding default engine handling does not stop combination binds, need manual disableUserInput too
		_handled = [displayNull,_dikCode,_shiftState] call dze_filterCheats;

        if (diag_ticktime - dayz_lastCheckBit > 10 && {!(_dikCode in channel_keys)}) then {
            dayz_lastCheckBit = diag_ticktime;
            [player,20,true,(getPosATL player)] call player_alertZombies;
        };
    };
    local _journal = {
        if (!dayz_isSwimming && !dialog) then {
            [player,4,true,(getPosATL player)] call player_alertZombies;
            createDialog 'horde_journal_front_cover';
        };
        _handled = true;
    };

    local _bunnyhop = {
		r_interrupt = true;

		if (animationState player in ["bunnyhopunarmed","bunnyhoprifle"]) then {
			//Fixes invisible weapon switch glitch if double tapping vault with no weapon in hands
			_handled = true;
		};
		if (player isKindOf "PZombie_VB") then {
			_handled = true; // do not allow player zombies to vault or jump
		} else {
			local _nearbyObjects = nearestObjects [getPosATL player, dayz_disallowedVault, 8];
			if (count _nearbyObjects > 0) then {
				if (diag_tickTime - dayz_lastCheckBit > 4) then {
					[objNull, player, rSwitchMove,"GetOver"] call RE;
					player playActionNow "GetOver";
					dayz_lastCheckBit = diag_tickTime;
				} else {
					_handled = true;
				};
			};
		};
    };

    local _block = {
        _handled = true;
    };

    local _addArray = {
        {
			if (_x <= 999999) then {
				keyboard_keys set [_x, _this select 1];
			};
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
	[[DIK_F3], _statusUI] call _addArray;
	[[DIK_F4], {if (diag_tickTime - dayz_lastSave > 10) then {call player_forceSave;};_handled = true;}] call _addArray;
    [[DIK_TAB,DIK_DELETE], _forcesave] call _addArray;
	[actionKeys "LeanLeft", {DZE_4 = true; dayz_dodge = true;}] call _addArray;
	[actionKeys "LeanRight", {DZE_6 = true; dayz_dodge = true;}] call _addArray;
    [actionKeys "GetOver", _bunnyhop] call _addArray; // V
    [actionKeys "ForceCommandingMode", {DZE_5 = true;_handled = true;}] call _addArray;
    [[  DIK_F9,DIK_F10,DIK_F11,DIK_F12,
        DIK_F8,DIK_F7,DIK_F6,DIK_F5,
        DIK_F2,DIK_9,
        DIK_8,DIK_7,DIK_6,DIK_5,DIK_4,DIK_BACK], _block] call _addArray;
	if (dayz_groupSystem) then {
		[[DIK_F5], _openGroups] call _addArray;
		[[DIK_LWIN,DIK_RWIN], {dayz_groupNameTags = !dayz_groupNameTags;_handled = true;}] call _addArray;
		[actionKeys "TacticalView", _block] call _addArray;
	};
	[actionKeys "DSInterface", _block] call _addArray;
	[[DIK_P], {if (_shiftState) then {_handled = true;};}] call _addArray;
	//diag_log "keyboard_keys reset";
};

if (r_player_unconsciousInputDisabled) exitWith {true};
local _code = keyboard_keys select _dikCode;
if (!isNil "_code") then {
    call _code;
};

_handled