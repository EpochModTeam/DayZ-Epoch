/*
	DayZ Unlock Door
	Usage: [_obj] call player_unlockDoor;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
	Modified for Zupa's DoorManagement.
*/
private ["_display","_displayCombo","_displayEye","_doorMethod","_hasAccess","_notNearestPlayer","_obj","_objectCharacterID"];

if (!isNil "DZE_DYN_UnlockDoorInprogress") exitWith {localize "str_epoch_player_21" call dayz_rollingMessages;};

DZE_DYN_UnlockDoorInprogress = true;

_doorMethod = "";
_displayCombo = findDisplay 41144;
_displayEye = findDisplay 61144;
if(!isNull _displayEye) then {_display = _displayEye; _doorMethod = "Eye";};
if(!isNull _displayCombo) then {_display = _displayCombo; _doorMethod = "Combo";};

if (!isNull dayz_selectedDoor) then {
	_obj = dayz_selectedDoor;
	_notNearestPlayer = _obj call dze_isnearest_player;

	if (_notNearestPlayer) then {
		_display closeDisplay 2;
		localize "STR_EPOCH_ACTIONS_16" call dayz_rollingMessages;
	} else {
		_objectCharacterID 	= _obj getVariable ["CharacterID","0"];

		if (DZE_doorManagement) then {
			_hasAccess = [player, _obj] call FNC_check_access;
			if (
				(_hasAccess select 0) or // door owner
				(_hasAccess select 2) or // plot owner
				(_hasAccess select 3) or // plot friend
				(_hasAccess select 4) or // plot admin
				(_hasAccess select 5) or // door friend
				(_hasAccess select 6)    // door admin
			) then {
				DZE_Lock_Door = dayz_selectedDoor getVariable['CharacterID','0'];
			};
		};

		if (isNil "dayz_UnlockTime") then {dayz_UnlockTime = 5;};
		if (DZE_doorManagementHarderPenalty && {(diag_tickTime - dayz_lastCodeFail) > 120}) then {dayz_UnlockTime = 5;};

		if (DZE_Lock_Door == _objectCharacterID) then {
			[player,"combo_unlock",0,false] call dayz_zombieSpeak;

			_display closeDisplay 2;

			if (_obj animationPhase "Open_hinge" == 0) then {
				_obj animate ["Open_hinge", 1];
			};
			if (_obj animationPhase "Open_latch" == 0) then {
				_obj animate ["Open_latch", 1];
			};

			if (_doorMethod == "Eye") then {
				localize "STR_EPOCH_DOORACCESS_SUCCESS" call dayz_rollingMessages;
			};
			dayz_UnlockTime = 5;
			dayz_lastCodeFail = 0;
			
			PVDZE_handleSafeGear = [player,_obj,5,if (_doorMethod == "EYE") then {"EYESCAN"} else {DZE_Lock_Door}];
			publicVariableServer "PVDZE_handleSafeGear";
		} else {
			PVDZE_handleSafeGear = [player,_obj,6,if (_doorMethod == "EYE") then {"EYESCAN"} else {DZE_Lock_Door}];
			publicVariableServer "PVDZE_handleSafeGear";
			
			DZE_Lock_Door = "";
			[player,"combo_locked",0,false] call dayz_zombieSpeak;
			[player,20,true,(getPosATL player)] spawn player_alertZombies;

			if (_doorMethod == "Eye") then {
				localize "STR_EPOCH_DOORACCESS_FAILURE" call dayz_rollingMessages;
				_display closeDisplay 2;
			} else {
				if (DZE_doorManagementHarderPenalty) then {
					dayz_lastCodeFail = (diag_tickTime + dayz_UnlockTime);
					dayz_UnlockTime = dayz_UnlockTime * 2;
				} else {
					dayz_lastCodeFail = (diag_tickTime + dayz_UnlockTime);
				};

				format [localize "str_epoch_player_19",round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;
				_display closeDisplay 2;
			};
		};
	};
} else {
	_display closeDisplay 2;
};
DZE_DYN_UnlockDoorInprogress = nil;
