/*
	DayZ Lock Safe
	Usage: [_obj] spawn player_unlockVault;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_obj","_ownerID","_alreadyPacking","_playerNear","_claimedBy","_text","_objType","_ComboMatch"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_21" call dayz_rollingMessages;};
dayz_actionInProgress = true;

{player removeAction _x} count s_player_combi;
s_player_combi = [];
s_player_unlockvault = 1;

_obj = _this;
_objType = typeOf _obj;

if !(_objType in DZE_LockedStorage) exitWith {
	s_player_unlockvault = -1;
	dayz_actionInProgress = false;
};

_playerNear = _obj call dze_isnearest_player;
if (_playerNear) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_20" call dayz_rollingMessages;};

// Silently exit if object no longer exists || alive
if (isNull _obj || !(alive _obj)) exitWith { dayz_actionInProgress = false; };

_unlockedClass = getText (configFile >> "CfgVehicles" >> _objType >> "unlockedClass");
_text = getText (configFile >> "CfgVehicles" >> _objType >> "displayName");

_alreadyPacking = _obj getVariable["packing",0];
_claimedBy = _obj getVariable["claimed","0"];
_ownerID = _obj getVariable["CharacterID","0"];
_ComboMatch = (_ownerID == dayz_combination);
if (DZE_permanentPlot) then {_ownerID = _obj getVariable["ownerPUID","0"];};

if (_alreadyPacking == 1) exitWith {dayz_actionInProgress = false; format[localize "str_epoch_player_124",_text] call dayz_rollingMessages;};

if (_ComboMatch || (_ownerID == dayz_playerUID)) then {
	// Check if any players are nearby if not allow player to claim item.
	_playerNear = {isPlayer _x} count (player nearEntities ["CAManBase", 6]) > 1;
	
	// Only allow if not already claimed.
	if (_claimedBy == "0" || !_playerNear) then {
		// Since item was not claimed proceed with claiming it.
		_obj setVariable["claimed",dayz_playerUID,true];
	};

	_claimedBy = _obj getVariable["claimed","0"];
	
	if (_claimedBy == dayz_playerUID) then {
		if (!isNull _obj && alive _obj) then {
			_obj setVariable["packing",1];
			
			disableUserInput true; // Make sure player can not modify gear while it is filling
			(findDisplay 106) closeDisplay 0; // Close gear
			dze_waiting = nil;
			
			[_unlockedClass,objNull] call fn_waitForObject;
			
			PVDZE_handleSafeGear = [player,_obj,0];
			publicVariableServer "PVDZE_handleSafeGear";
			//wait for response from server to verify safe was logged before proceeding
			waitUntil {!isNil "dze_waiting"};
			disableUserInput false; // Safe is done filling now
			
			player playActionNow "Medic";
			uiSleep 1;
			[player,"tentpack",0,false] call dayz_zombieSpeak;
			uiSleep 5;
			format[localize "STR_BLD_UNLOCKED",_text] call dayz_rollingMessages;
		};
	} else {
		dayz_actionInProgress = false; 
		format[localize "str_player_beinglooted",_text] call dayz_rollingMessages;
	};
} else {
	PVDZE_handleSafeGear = [player,_obj,3,dayz_combination];
	publicVariableServer "PVDZE_handleSafeGear";
	
	player playActionNow "Medic";
	uiSleep 1;
	[player,"repair",0,false] call dayz_zombieSpeak;
	[player,25,true,(getPosATL player)] spawn player_alertZombies;
	uiSleep 5;
	format[localize "STR_BLD_WRONG_COMBO",_text] call dayz_rollingMessages;
};
s_player_unlockvault = -1;
dayz_actionInProgress = false;
