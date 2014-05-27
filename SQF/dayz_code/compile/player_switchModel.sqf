private ["_weapons","_backpackWpn","_backpackMag","_currentWpn","_backpackWpnTypes","_backpackWpnQtys","_countr","_class","_position","_dir","_currentAnim","_tagSetting","_playerUID","_countMags","_magazines","_primweapon","_secweapon","_newBackpackType","_muzzles","_oldUnit","_group","_newUnit","_playerObjName","_wpnType","_ismelee"];

_class 			= _this;
_position 		= getPosATL player;
_dir 			= getDir player;
_currentAnim 	= animationState player;
_tagSetting = player getVariable["DZE_display_name",false];
_playerUID = getPlayerUID player;
_weapons 	= weapons player;
_countMags = call player_countMagazines; 
_magazines = _countMags select 0;

if ((_playerUID == dayz_playerUID) && (count _magazines == 0) && (count (magazines player) > 0 )) exitWith {cutText [(localize "str_epoch_player_17"), "PLAIN DOWN"]};

_primweapon	= primaryWeapon player;
_secweapon	= secondaryWeapon player;

if(!(_primweapon in _weapons) && _primweapon != "") then {
	_weapons = _weapons + [_primweapon];
};

if(!(_secweapon in _weapons) && _secweapon != "") then {
	_weapons = _weapons + [_secweapon];
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

//Secure Player for Transformation
player setPosATL dayz_spawnPos;

//BackUp Player Object
_oldUnit = player;

/**********************************/
//DONT USE player AFTER THIS POINT//
/**********************************/

//Create New Character
_group 		= createGroup west;
_newUnit 	= _group createUnit [_class,dayz_spawnPos,[],0,"NONE"];

_newUnit 	setPosATL _position;
_newUnit 	setDir _dir;

//Clear New Character
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
if (_primweapon == "MeleeCrowbar") then {
	_newUnit addMagazine 'crowbar_swing';
};
if (_primweapon == "MeleeSledge") then {
	_newUnit addMagazine 'sledge_swing';
};
if (_primweapon == "MeleeHatchet_DZE") then {
	_newUnit addMagazine 'Hatchet_Swing';
};
if (_primweapon == "MeleeMachete") then {
	_newUnit addMagazine 'Machete_swing';
};
if (_primweapon == "MeleeFishingPole") then {
	_newUnit addMagazine 'Fishing_Swing';
};

if(_secweapon != (secondaryWeapon _newUnit) && _secweapon != "") then {
	_newUnit addWeapon _secweapon;		
};
_switchUnit = {
	addSwitchableUnit _newUnit;
	setPlayable _newUnit;
	selectPlayer _newUnit;
	removeAllWeapons _oldUnit;
	{_oldUnit removeMagazine _x;} count  magazines _oldUnit;
	deleteVehicle _oldUnit;
	if(_currentWpn != "") then {_newUnit selectWeapon _currentWpn;};
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
		if (gear_done) then {sleep 0.001;};
		["1"] call gearDialog_create;
		//magazines
		_countr = 0;
		{
			if (!(isClass(configFile >> "CfgWeapons" >> _x))) then {
				_countr = _countr + 1;
				if ((typeName _x) != "STRING") then {
					(unitBackpack player) addMagazineCargoGlobal [(_x select 0), 1];
					_idc = 4999 + _countr;
					_idc setIDCAmmoCount (_x select 1);
				} else {
					(unitBackpack player) addMagazineCargoGlobal [_x, 1];
				};
			};
		} count _backpackMag;
		(findDisplay 106) closeDisplay 0;
		_countr = 0;
		{
			(unitBackpack player) addWeaponCargoGlobal [_x,(_backpackWpnQtys select _countr)];
			_countr = _countr + 1;
		} count _backpackWpnTypes;
	} else { [] call _switchUnit; };
} else { [] call _switchUnit; };
[objNull, player, rSwitchMove,_currentAnim] call RE;
player disableConversation true;

//player setVariable ["bodyName",dayz_playerName,true]; //Outcommit (Issue #991) - Also removed in DayZ Mod 1.8

if (_tagSetting) then {
	DZE_ForceNameTags = true;
};

_playerUID = getPlayerUID player;
_playerObjName = format["PVDZE_player%1",_playerUID];
call compile format["%1 = player;",_playerObjName];
publicVariableServer _playerObjName; //Outcommit in DayZ 1.8 No clue for what this is - Skaronator

//melee check
_wpnType = primaryWeapon player;
_ismelee = (gettext (configFile >> "CfgWeapons" >> _wpnType >> "melee"));
if (_ismelee == "true") then {
	call dayz_meleeMagazineCheck; 
};

//reveal the same objects we do on login
{player reveal _x} count (nearestObjects [getPosATL player, dayz_reveal, 50]);