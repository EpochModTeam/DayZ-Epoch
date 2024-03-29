private ["_weapons","_isArray","_backpackWpn","_backpackMag","_currentWpn","_isWeapon","_isMagazine","_countr","_class","_position","_dir","_currentAnim","_playerUID","_countMags","_magazines","_primweapon","_secweapon","_newBackpackType","_muzzles","_oldUnit","_group","_newUnit","_oldGroup","_idc","_display","_switchUnit","_leader","_currentCamera"];
_isArray = typeName _this == "ARRAY";
_class = if (_isArray) then {_this select 0} else {_this};

if (gear_done) then {disableUserInput true;disableUserInput true;};
disableSerialization;

_position = [player] call FNC_GetPos;
_dir = getDir player;
_currentAnim = animationState player;
_currentCamera = cameraView;
_playerUID = getPlayerUID player;

//BackUp Weapons and Mags
_weapons = weapons player;
_countMags = call player_countMagazinesWBackpack; //magazines player;
if (typeName _countMags != "ARRAY") exitWith {localize "str_actions_switchmodel_fail" call dayz_rollingMessages;};
_magazines = _countMags select 0;
if ((_playerUID == dayz_playerUID) && (count _magazines == 0) && (count (magazines player) > 0)) exitWith {
	localize "str_actions_switchmodel_fail" call dayz_rollingMessages;
	if (gear_done) then {
		(findDisplay 106) closeDisplay 0; closeDialog 0;
		disableUserInput false;disableUserInput false;disableUserInput false;disableUserInput false;
	};
};

_primweapon = primaryWeapon player;
_secweapon = secondaryWeapon player;

if (!(_primweapon in _weapons) && _primweapon != "") then {
	_weapons set [count _weapons, _primweapon];
};

if (!(_secweapon in _weapons) && _secweapon != "") then {
	_weapons set [count _weapons, _secweapon];
};

//BackUp Backpack
dayz_myBackpack = unitBackpack player;
_newBackpackType = typeOf dayz_myBackpack;
if (_newBackpackType != "") then {
	_backpackWpn = getWeaponCargo unitBackpack player;
	_backpackMag = _countMags select 1;
};

_currentWpn = currentWeapon player;
_muzzles = getArray(configFile >> "cfgWeapons" >> _currentWpn >> "muzzles");
if (count _muzzles > 1) then {_currentWpn = currentMuzzle player;};

//Secure Player for Transformation
//player setPosATL dayz_spawnPos;

//Prevent client crash
_display = findDisplay 106;
_display closeDisplay 0;

//BackUp Player Object
_oldUnit = player;
_oldGroup = group player;
_leader = (player == leader _oldGroup);

/***********************************/
//DONT USE player AFTER THIS POINT
/***********************************/

//Create New Character
//[player] joinSilent grpNull;
_group = createGroup west;
_newUnit = _group createUnit [_class,respawn_west_original,[],0,"NONE"];
_newUnit allowDamage false;

if (_isArray) then {
	mydamage_eh1 = _newUnit addEventHandler ["HandleDamage", {0}];
	_newUnit setVariable ["characterID",(_this select 1),true];
	_newUnit setVariable ["humanity",(_this select 2),true];
	_newUnit setVariable ["zombieKills",(_this select 3),true];
	_newUnit setVariable ["headShots",(_this select 4),true];
	_newUnit setVariable ["humanKills",(_this select 5),true];
	_newUnit setVariable ["banditKills",(_this select 6),true];
};
_newUnit setDir _dir;
{_newUnit removeMagazine _x;} count magazines _newUnit;
removeAllWeapons _newUnit;
removeAllItems _newUnit;
removebackpack _newUnit;

//Equip New Character
{
	if (typeName _x == "ARRAY") then {if (count _x > 0) then {_newUnit addMagazine [_x select 0,_x select 1]; }; } else { _newUnit addMagazine _x; };
} count _magazines;

{_newUnit addWeapon _x;} count _weapons;

//Check and Compare it
if (str(_weapons) != str(weapons _newUnit)) then {
	//Get Differecnce
	{_weapons = _weapons - [_x];} count (weapons _newUnit);

	//Add the Missing
	{_newUnit addWeapon _x;} count _weapons;
};

if (_primweapon != (primaryWeapon _newUnit)) then {
	_newUnit addWeapon _primweapon;
};

if (_secweapon != (secondaryWeapon _newUnit) && _secweapon != "") then {
	_newUnit addWeapon _secweapon;
};

_switchUnit = {
	//Make New Unit Playable (1 of these 3 commands causes crashes with gear dialog open)
	addSwitchableUnit _newUnit;
	setPlayable _newUnit;
	selectPlayer _newUnit;
	//Switch the units
	_rndx = floor(random 100);
	_rndy = floor(random 100);
	_oldUnit setPosATL [(respawn_west_original select 0) + _rndx, (respawn_west_original select 1) + _rndy, 0];	
	
	if (surfaceIsWater _position) then {
		_newUnit setPosASL _position;
	} else {
		_newUnit setPosATL _position;
	};	
	
	if (surfaceIsWater respawn_west_original) then {_newUnit call fn_exitSwim;};
	removeAllWeapons _oldUnit;
	{_oldUnit removeMagazine _x;} count magazines _oldUnit;
	if !(isNull _oldUnit) then {deleteVehicle _oldUnit;};
	if (!isNil "dayz_groupInit" && count (units _oldGroup) > 0) then {
		[_newUnit] joinSilent _oldGroup;
		if (count (units _group) == 0) then {deleteGroup _group;};
		if (_leader) then {
			//Request new leader promote player back to leader (group is local to leader)
			PVDZ_Server_UpdateGroup = [-1,player];
			publicVariableServer "PVDZ_Server_UpdateGroup";
		};
	};
	if (count (units _oldGroup) == 0) then {deleteGroup _oldGroup;};
	if (_currentWpn != "") then {_newUnit selectWeapon _currentWpn;};
};

//Add and Fill BackPack
if (!isNil "_newBackpackType" && {_newBackpackType != ""}) then {
	_newUnit addBackpack _newBackpackType;
	//_oldBackpack = dayz_myBackpack;
	dayz_myBackpack = unitBackpack _newUnit;

	call _switchUnit;
	if (gear_done) then {sleep 0.001;};
	["1"] call gearDialog_create;
	if (gear_done) then {sleep 0.001;};
	_countr = 0;
	{
		_isArray = typeName _x == "ARRAY";
		if (_isArray) then {
			_isWeapon = isClass (configFile >> "CfgWeapons" >> (_x select 0));
			_isMagazine = isClass (configFile >> "CfgMagazines" >> (_x select 0));
		} else {
			_isWeapon = isClass (configFile >> "CfgWeapons" >> _x);
			_isMagazine = isClass (configFile >> "CfgMagazines" >> _x);
		};
		if (!_isWeapon || (_isWeapon && _isMagazine)) then {
			_countr = _countr + 1;
			if (_isArray) then {
				if (_x select 1 > 0) then { //Javelin rockets in BP returns ["Javelin", 0],"Javelin". Dupe on relog -> # real Javs + 1 per skin change
					dayz_myBackpack addMagazineCargoGlobal [_x select 0, 1];
					_idc = 4999 + _countr;
					_idc setIDCAmmoCount (_x select 1);
				};
			} else {
				dayz_myBackpack addMagazineCargoGlobal [_x, 1];
			};
		};
	} count _backpackMag;
	(findDisplay 106) closeDisplay 0;

	[_backpackWpn,[],[],dayz_myBackpack] call fn_addCargo;
} else {
	call _switchUnit;
};

if (gear_done) then {disableUserInput false;disableUserInput false;disableUserInput false;disableUserInput false;};

//Debug Message
/*
diag_log "Swichtable Unit Created. Equipment:";
diag_log format["Weapons: %1",weapons _newUnit];
diag_log format["Magazines: %1",magazines _newUnit];
diag_log format["Backpack weapons: %1",getWeaponCargo unitBackpack _newUnit];
diag_log format["Backpack magazines: %1",getMagazineCargo unitBackpack _newUnit];
*/
player switchCamera _currentCamera;
if (_currentWpn != "") then {_newUnit selectWeapon _currentWpn;};
[objNull, player, rSwitchMove, _currentAnim] call RE;
//dayz_originalPlayer attachTo [_newUnit];
player disableConversation true;
player setVariable ["BIS_noCoreConversations",true];

//	_playerUID=getPlayerUID player;
//	_playerObjName = format["player%1",_playerUID];
//	call compile format["%1 = player;",_playerObjName];
//	publicVariable _playerObjName;

call dayz_meleeMagazineCheck;
{player reveal _x} count (nearestObjects [_position,["AllVehicles","WeaponHolder","Land_A_tent","BuiltItems","ModularItems","DZE_Base_Object"],75]);
