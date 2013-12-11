private ["_class","_position","_dir","_group","_oldUnit","_newUnit","_currentWpn","_muzzles","_currentAnim","_playerUID","_weapons","_magazines","_primweapon","_secweapon","_playerObjName","_wpnType","_ismelee","_tagSetting"];
_class 			= _this;

_position 		= getPosATL player;
_dir 			= getDir player;
_currentAnim 	= animationState player;
//_currentCamera	= cameraView;

_tagSetting = player getVariable["DZE_display_name",false];

//Get PlayerID
_playerUID = "";
if (count playableUnits == 0 and isServer) then {
	//In Single Player
	isSinglePlayer = true;
	player sidechat "Single player Mode detected!";
	//_id = [42,"SinglePlayer"] spawn server_onPlayerConnect;
	_playerUID = "42";
} else {
	_playerUID = getPlayerUID player;
};

//BackUp Weapons and Mags

_weapons 	= weapons player;
_magazines	= call player_countmagazines; //magazines player;

if ( (_playerUID == dayz_playerUID) && (count _magazines == 0) && (count (magazines player) > 0 )) exitWith {cutText [(localize "str_epoch_player_17"), "PLAIN DOWN"]};

_primweapon	= primaryWeapon player;
_secweapon	= secondaryWeapon player;

//Checks
if(!(_primweapon in _weapons) && _primweapon != "") then {
	_weapons = _weapons + [_primweapon];
};

if(!(_secweapon in _weapons) && _secweapon != "") then {
	_weapons = _weapons + [_secweapon];
};

//Get Muzzle
_currentWpn = currentWeapon player;
_muzzles = getArray(configFile >> "cfgWeapons" >> _currentWpn >> "muzzles");
if (count _muzzles > 1) then {
	_currentWpn = currentMuzzle player;
};

//Debug Message
/*
diag_log "Attempting to switch model";
diag_log str(_weapons);
diag_log str(_magazines);
diag_log (str(_backpackWpn));
diag_log (str(_backpackMag));
*/

//Secure Player for Transformation
player setPosATL dayz_spawnPos;

//BackUp Player Object
_oldUnit = player;
	
/***********************************/
//DONT USE player AFTER THIS POINT
/***********************************/

//Create New Character
//[player] joinSilent grpNull;
_group 		= createGroup west;
_newUnit 	= _group createUnit [_class,dayz_spawnPos,[],0,"NONE"];

_newUnit 	setPosATL _position;
_newUnit 	setDir _dir;

//Clear New Character
{_newUnit removeMagazine _x;} forEach  magazines _newUnit;
removeAllWeapons _newUnit;	

//Equip New Charactar
{
	if (typeName _x == "ARRAY") then {_newUnit addMagazine [_x select 0,_x select 1] } else { _newUnit addMagazine _x };
} forEach _magazines;
	
{
	_newUnit addWeapon _x;
} forEach _weapons;

//Check and Compare it
if(str(_weapons) != str(weapons _newUnit)) then {
	//Get Differecnce
	{
		_weapons = _weapons - [_x];
	} forEach (weapons _newUnit);
	
	//Add the Missing
	{
		_newUnit addWeapon _x;
	} forEach _weapons;
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

//Debug Message
/*
diag_log "Swichtable Unit Created. Equipment:";
diag_log str(weapons _newUnit);
diag_log str(magazines _newUnit);
diag_log str(getWeaponCargo unitBackpack _newUnit);
diag_log str(getMagazineCargo unitBackpack _newUnit);
*/
//Make New Unit Playable
addSwitchableUnit _newUnit;
setPlayable _newUnit;
selectPlayer _newUnit;

//Clear and delete old Unit
removeAllWeapons _oldUnit;
{_oldUnit removeMagazine _x;} forEach  magazines _oldUnit;
		
deleteVehicle _oldUnit;

//Move player inside

//	player switchCamera = _currentCamera;
if(_currentWpn != "") then {_newUnit selectWeapon _currentWpn;};
[objNull, player, rSwitchMove,_currentAnim] call RE;
//dayz_originalPlayer attachTo [_newUnit];
player disableConversation true;
	
player setVariable ["bodyName",dayz_playerName,true];

if (_tagSetting) then {
	DZE_ForceNameTags = true;
};

_playerUID=getPlayerUID player;
_playerObjName = format["player%1",_playerUID];
call compile format["%1 = player;",_playerObjName];
publicVariable _playerObjName;
	
//melee check
_wpnType = primaryWeapon player;
_ismelee = (gettext (configFile >> "CfgWeapons" >> _wpnType >> "melee"));
if (_ismelee == "true") then {
	call dayz_meleeMagazineCheck; 
};
        
//reveal the same objects we do on login
{player reveal _x} forEach (nearestObjects [getPosATL player, dayz_reveal, 50]);