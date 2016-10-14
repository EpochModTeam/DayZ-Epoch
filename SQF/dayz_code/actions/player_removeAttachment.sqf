/*
	Attempts to remove an attachment from the player's current primary weapon or sidearm.
	
	Parameters:
		string		attachment item classname
		string		current weapon classname
		string		resulting weapon classname
	
	Author:
		Foxy
*/

#include "\z\addons\dayz_code\util\Player.hpp"

private ["_attachment","_weapon","_newWeapon","_weaponInUse","_newWeaponConfig","_muzzle"];

//check if player is on a ladder and if so, exit
if (Player_IsOnLadder()) exitWith
{
	closeDialog 0;
	(localize "str_player_21") call dayz_rollingMessages;
};

_attachment = _this select 0;
_weapon = _this select 1;
_newWeapon = _this select 2;

//check that player has enough room in inventory
//Remove melee magazines (BIS_fnc_invAdd and BIS_fnc_invSlotsEmpty fix)
false call dz_fn_meleeMagazines;
if ((([player] call BIS_fnc_invSlotsEmpty) select 4) < 1) exitWith
{
	closeDialog 0;
	(localize "str_player_24") call dayz_rollingMessages;
	true call dz_fn_meleeMagazines;
};
true call dz_fn_meleeMagazines;

//check that player has the weapon
if (!(player hasWeapon _weapon)) exitWith
{
	closeDialog 0;
	(localize "str_AttachmentMissingWeapon3") call dayz_rollingMessages;
};

//Check that newWeapon + attachment actually results in current weapon
_newWeaponConfig = configFile >> "CfgWeapons" >> _newWeapon >> "Attachments";
if (!isClass(_newWeaponConfig) || {getText(_newWeaponConfig >> _attachment) != _weapon}) exitWith
{
	closeDialog 0;
	localize "str_Attachmentcantremove" call dayz_rollingMessages;
};

_weaponInUse = (currentWeapon player == _weapon);

call gear_ui_init;
player playActionNow "Medic";

//replace weapon and add attachment to inventory
player removeWeapon _weapon;
player addWeapon _newWeapon;
player addMagazine _attachment;

//close gear
(findDisplay 106) closeDisplay 0;

//Select new weapon if the old was in use
if (_weaponInUse) then
{
	_muzzle = (getArray (configFile >> "CfgWeapons" >> _newWeapon >> "muzzles")) select 0;
	
	if (_muzzle == "this") then
	{
		player selectWeapon _newWeapon;
	}
	else
	{
		player selectWeapon _muzzle;
	};
};