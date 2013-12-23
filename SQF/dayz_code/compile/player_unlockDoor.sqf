/*
	DayZ Unlock Door
	Usage: [_obj] call player_unlockDoor;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_display","_obj","_objectCharacterID"];

if(!isNil "DZE_DYN_UnlockDoorInprogress") exitWith { cutText [(localize "str_epoch_player_21") , "PLAIN DOWN"]; };

DZE_DYN_UnlockDoorInprogress = true;

if(!isNull dayz_selectedDoor) then {

	if (!isNil 'KeyCodeTryTimer') then {
		if(diag_tickTime > KeyCodeTryTimer) then {
			KeyCodeTry = nil;
			KeyCodeTryTimer = nil;
		};
	};

	// our target
	_obj = dayz_selectedDoor;

	_notNearestPlayer = _obj call dze_isnearest_player;

	if (_notNearestPlayer) then {
		// close display since another player is closer
		_display = findDisplay 41144;
		_display closeDisplay 3000;
		cutText [(localize "STR_EPOCH_ACTIONS_16"), "PLAIN DOWN"];
	} else {
	
		// get object combination
		_objectCharacterID 	= _obj getVariable ["CharacterID","0"];

		// Check combination
		if (DZE_Lock_Door == _objectCharacterID) then {

			[player,"combo_unlock",0,false] call dayz_zombieSpeak;

			// close display
			_display = findDisplay 41144;
			_display closeDisplay 3000;

			// unlock if locked
			if(_obj animationPhase "Open_hinge" == 0) then {
				_obj animate ["Open_hinge", 1];
			};

			if(_obj animationPhase "Open_latch" == 0) then {
				_obj animate ["Open_latch", 1];
			};
			KeyCodeTry = nil;

		} else {

			[10,10] call dayz_HungerThirst;

			DZE_Lock_Door = "";
			[player,"combo_locked",0,false] call dayz_zombieSpeak;
			[player,20,true,(getPosATL player)] spawn player_alertZombies;

			if (isNil 'KeyCodeTry') then {KeyCodeTry = 0;};

			KeyCodeTry = KeyCodeTry + 1;

			if (!isNil 'KeyCodeTryTimer') then {KeyCodeTryTimer = diag_tickTime+10;};

			if(KeyCodeTry >= ((round(random 4)) + 4)) then {
			
				if (isNil 'KeyCodeTryTimer') then {KeyCodeTryTimer = diag_tickTime+10;};
			
				cutText [(localize "str_epoch_player_19"), "PLAIN DOWN"];
				_display = findDisplay 41144;
				_display closeDisplay 3000;
			};
		};
	};
} else {
	
	// close display since no target
	_display = findDisplay 41144;
	_display closeDisplay 3000;
};
DZE_DYN_UnlockDoorInprogress = nil;
