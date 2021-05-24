private ["_gearClasses","_coins","_class","_uid","_charID","_object","_worldspace","_key","_allowed","_obj","_inv","_objectID","_objectUID","_proceed","_activatingplayer","_clientKey","_exitReason","_playerUID","_weapons","_magazines","_backpacks"];

if (count _this < 8) exitWith {diag_log format ["Server_SwapObject error: Wrong parameter format from player %1",_this select 5];};

_charID =	_this select 0;
_object = _this select 1;
_worldspace = 	_this select 2;
_class = _this select 3;
_obj = _this select 4;
_activatingplayer = _this select 5;
_inv = _this select 6;
_clientKey = _this select 7;
_proceed = false;
_objectID = "0";
_objectUID = "0";
_playerUID = getPlayerUID _activatingPlayer;

_exitReason = [_this,"SwapObject",(_worldspace select 1),_clientKey,_playerUID,_activatingPlayer] call server_verifySender;
if (_exitReason != "") exitWith {diag_log _exitReason};

if (!isNull(_obj)) then {
	// Find objectID
	_objectID = _obj getVariable ["ObjectID","0"];
	// Find objectUID
	_objectUID = _obj getVariable ["ObjectUID","0"];
	if !(DZE_GodModeBase) then {
		_obj removeAllMPEventHandlers "MPKilled";
	};
	if ((_class isKindOf "Land_A_tent" || {_class in DZE_isNewStorage}) && !(_class in DZE_isLockedStorageUpgrade)) then {
		_weapons = getWeaponCargo _obj;
		_magazines = getMagazineCargo _obj;
		_backpacks = getBackpackCargo _obj;
		_inv = [_weapons,_magazines,_backpacks];
	};
	if (_class in DZE_isLockedStorageUpgrade) then {
		_weapons = _obj getVariable ["WeaponCargo",[]];
		_magazines = _obj getVariable ["MagazineCargo",[]];
		_backpacks = _obj getVariable ["BackpackCargo",[]];
		_inv = [_weapons,_magazines,_backpacks];
	};
	if (Z_SingleCurrency && {_class in DZE_MoneyStorageClasses}) then {
		_coins = _obj getVariable ["cashMoney",0];
	};

	// Remove old object
	deleteVehicle _obj;

	_proceed = true;
};

if (isNull(_object)) then {
	_proceed = false;
};

if (_objectID == "0" && {_objectUID == "0"}) then {
	_proceed = false;
} else {
	[_objectID,_objectUID,_obj] call server_deleteObjDirect;
};

_allowed = [_object, "Server"] call check_publishobject;
if (!_allowed || !_proceed) exitWith {
	if(!isNull(_object)) then {
		deleteVehicle _object;
	};
	diag_log ("Invalid object swap by playerUID:" + _playerUID);
};

// Publish variables
_object setVariable ["CharacterID",_charID,true];

//_object setVariable ["ObjectUID",_objectUID,true];
_object setVariable ["OEMPos",(_worldspace select 1),true];

//diag_log ("PUBLISH: Attempt " + str(_object));

//get UID
_uid = _worldspace call dayz_objectUID2;

//Send request
_key = str formatText["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, 0, _charID, _worldspace call AN_fnc_formatWorldspace, _inv, [], 0,_uid];

//diag_log ("HIVE: WRITE: "+ str(_key));
_key call server_hiveWrite;

_object setVariable ["lastUpdate",diag_tickTime];
_object setVariable ["ObjectUID", _uid,true];
// _object setVariable ["CharacterID",_charID,true];
if (DZE_GodModeBase && {!(_class in DZE_GodModeBaseExclude)}) then {
	_object addEventHandler ["HandleDamage",{false}];
} else {
	_object addMPEventHandler ["MPKilled",{_this call vehicle_handleServerKilled;}];
};

_gearClasses = ["Wooden_shed2_DZ","WoodShack2_DZ","StorageShed2_DZ","GunRack2_DZ","WoodCrate2_DZ","TentStorage0","TentStorage1","TentStorage2","TentStorage3","TentStorage4","DomeTentStorage0","DomeTentStorage1","DomeTentStorage2","DomeTentStorage3","DomeTentStorage4","DesertTentStorage0","DesertTentStorage1","DesertTentStorage2","DesertTentStorage3","DesertTentStorage4","StashSmall1","StashSmall2","StashSmall3","StashSmall4","StashMedium","StashMedium1","StashMedium2","StashMedium3","StashMedium4","TentStorageWinter0","TentStorageWinter1","TentStorageWinter2","TentStorageWinter3","TentStorageWinter4","WinterDomeTentStorage0","WinterDomeTentStorage1","WinterDomeTentStorage2","WinterDomeTentStorage3","WinterDomeTentStorage4"];

if (count _inv > 0 && {_class in _gearClasses}) then {
	[_weapons,_magazines,_backpacks,_object] call fn_addCargo;
};
if (_class in DZE_isLockedStorageUpgrade) then {
	_object setVariable ["WeaponCargo",_weapons,false];
	_object setVariable ["MagazineCargo",_magazines,false];
	_object setVariable ["BackpackCargo",_backpacks,false];
};

// Test disabling simulation server side on buildables only.
_object enableSimulation false;

dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

if (Z_SingleCurrency && {_class in DZE_MoneyStorageClasses && {_coins > 0}}) then { //Do not use server_updateObject, safes and lockboxes need a different handling
	_object setVariable ["cashMoney",_coins,true];
	_key = format["CHILD:309:%1:",_uid] + str _inv + ":" + str _coins + ":";
	_key call server_hiveWrite;
};

diag_log format["PUBLISH: Player %1(%2) upgraded or downgraded object to %3 with UID:%4 @%5",(_activatingPlayer call fa_plr2str),_playerUID,_class,_uid,((_worldspace select 1) call fa_coor2str)];
