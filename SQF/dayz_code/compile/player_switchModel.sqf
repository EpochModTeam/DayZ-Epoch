private ["_weapons","_backpackWpn","_backpackMag","_currentWpn","_isWeapon","_backpackWpnTypes","_backpackWpnQtys","_countr","_class","_position","_dir","_currentAnim","_playerUID","_countMags","_magazines","_primweapon","_secweapon","_newBackpackType","_muzzles","_oldUnit","_group","_newUnit","_oldGroup","_idc","_display","_switchUnit"];
disableSerialization;
_class 			= _this;
_position = player modeltoWorld [0,0,0];
_dir = getDir player;
_currentAnim = animationState player;

_playerUID = [player] call FNC_GetPlayerUID;
_weapons 	= weapons player;
_countMags = call player_countMagazinesWBackpack;
if (((typeName _countMags) != "ARRAY")) exitWith {localize "str_actions_switchmodel_fail" call dayz_rollingMessages;};
_magazines = _countMags select 0;

if ((_playerUID == dayz_playerUID) && (count _magazines == 0) && (count (magazines player) > 0 )) exitWith {localize "str_actions_switchmodel_fail" call dayz_rollingMessages;};

_primweapon	= primaryWeapon player;
_secweapon	= secondaryWeapon player;

if(!(_primweapon in _weapons) && _primweapon != "") then {
	_weapons set [(count _weapons), _primweapon];
};

if(!(_secweapon in _weapons) && _secweapon != "") then {
	_weapons set [(count _weapons), _secweapon];
};

//BackUp Backpack
dayz_myBackpack = unitBackpack player;
_newBackpackType = (typeOf dayz_myBackpack);
if(_newBackpackType != "") then {
	_backpackWpn = getWeaponCargo unitBackpack player;

	_backpackMag = _countMags select 1;
};

//Get Muzzle
_currentWpn = currentWeapon player;
_muzzles = getArray(configFile >> "cfgWeapons" >> _currentWpn >> "muzzles");
if (count _muzzles > 1) then {
	_currentWpn = currentMuzzle player;
};
//	diag_log "Attempting to switch model";
//	diag_log str(_weapons);
//	diag_log str(_magazines);
//	diag_log (str(_backpackWpn));
//	diag_log (str(_backpackMag));

//Secure Player for Transformation
//player setPosATL dayz_spawnPos;

//Prevent client crash
_display = findDisplay 106;
_display closeDisplay 0;


//BackUp Player Object
_oldUnit = player;
_oldGroup = group player;

/**********************************/
//DONT USE player AFTER THIS POINT//
/**********************************/

//Create New Character

_group 		= createGroup west;
_newUnit = _group createUnit [_class,getMarkerPos "respawn_west",[],0,"NONE"];
_newUnit 	setDir _dir;
{_newUnit removeMagazine _x;} count  magazines _newUnit;
removeAllWeapons _newUnit;	

//Equip New Charactar
{
	if (typeName _x == "ARRAY") then {if ((count _x) > 0) then {_newUnit addMagazine [(_x select 0), (_x select 1)]; }; } else { _newUnit addMagazine _x; };
} count _magazines;

{
	_newUnit addWeapon _x;
} count _weapons;

//Check && Compare it
if(str(_weapons) != str(weapons _newUnit)) then {
	//Get Differecnce
	{
		_weapons = _weapons - [_x];
	} count (weapons _newUnit);
	//Add the Missing
	{
		_newUnit addWeapon _x;
	} count _weapons;
};

if(_primweapon !=  (primaryWeapon _newUnit)) then {
	_newUnit addWeapon _primweapon;		
};

if(_secweapon != (secondaryWeapon _newUnit) && _secweapon != "") then {
	_newUnit addWeapon _secweapon;		
};

_switchUnit = {
	addSwitchableUnit _newUnit;
	setPlayable _newUnit;
	selectPlayer _newUnit;
	//Switch the units
	//_createSafePos = [(getMarkerPos "respawn_west"), 2, 100, 0, 1, 20, 0] call BIS_fnc_findSafePos;
	_createSafePos = getMarkerPos "respawn_west";
	_rndx = floor(random 100);
	_rndy = floor(random 100);
	_oldUnit setPosATL [(_createSafePos select 0) + _rndx, (_createSafePos select 1) + _rndy, 0];
	_newUnit setPosATL _position;
	removeAllWeapons _oldUnit;
	{_oldUnit removeMagazine _x;} count  magazines _oldUnit;
	if !(isNull _oldUnit) then {deleteVehicle _oldUnit;};
	deleteGroup _oldGroup;
	if (_currentWpn != "") then {_newUnit selectWeapon _currentWpn;};
};
//Add && Fill BackPack
if (!isNil "_newBackpackType") then {
	if (_newBackpackType != "") then {
		_newUnit addBackpack _newBackpackType;
		dayz_myBackpack = unitBackpack _newUnit;
		//Weapons
		_backpackWpnTypes = [];
		_backpackWpnQtys = [];
		if (count _backpackWpn > 0) then {
			_backpackWpnTypes = _backpackWpn select 0;
			_backpackWpnQtys = _backpackWpn select 1;
		};
		[] call _switchUnit;
		if (gear_done) then {Sleep 0.001;};
		["1"] call gearDialog_create;
		if (gear_done) then {Sleep 0.001;};
		//magazines
		_countr = 0;
		{
			if ((typeName _x) != "STRING") then {
				_isWeapon = (isClass(configFile >> "CfgWeapons" >> (_x select 0)));
			} else {
				_isWeapon = (isClass(configFile >> "CfgWeapons" >> _x));
			};
			if (!_isWeapon) then {
				_countr = _countr + 1;
				if ((typeName _x) != "STRING") then {
					dayz_myBackpack addMagazineCargoGlobal [(_x select 0), 1];
					_idc = 4999 + _countr;
					_idc setIDCAmmoCount (_x select 1);
				} else {
					dayz_myBackpack addMagazineCargoGlobal [_x, 1];
				};
			};
		} count _backpackMag;
		(findDisplay 106) closeDisplay 0;
		if (gear_done) then {Sleep 0.001; disableUserInput false;};
		_countr = 0;
		{

			dayz_myBackpack addWeaponCargoGlobal [_x,(_backpackWpnQtys select _countr)];
			_countr = _countr + 1;
		} count _backpackWpnTypes;
	} else { [] call _switchUnit; };
} else { [] call _switchUnit; };

//Debug Message
diag_log "Swichtable Unit Created. Equipment:";
diag_log format["Weapons: %1",weapons _newUnit];
diag_log format["Magazines: %1",magazines _newUnit];
diag_log format["Backpack weapons: %1",getWeaponCargo unitBackpack _newUnit];
diag_log format["Backpack magazines: %1",getMagazineCargo unitBackpack _newUnit];

//Clear and delete old Unit
removeAllWeapons _oldUnit;
{_oldUnit removeMagazine _x;} count magazines _oldUnit;
if !(isNull _oldUnit) then {deleteVehicle _oldUnit;};
deleteGroup _oldGroup;

//	player switchCamera = _currentCamera;
if (_currentWpn != "") then {_newUnit selectWeapon _currentWpn;};

[objNull, player, rSwitchMove, _currentAnim] call RE;

player disableConversation true;
player setVariable ["BIS_noCoreConversations",true];

call dayz_meleeMagazineCheck;
{player reveal _x} count (nearestObjects [getPosATL player,["AllVehicles","WeaponHolder","Land_A_tent","BuiltItems","ModularItems","DZE_Base_Object"],75]);