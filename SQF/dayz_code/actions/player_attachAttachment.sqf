/*
	Attempts to attach attachment to the player's primary weapon or sidearm.

	Parameters:
		string		attachment item classname
		integer		type of weapon: 1 if primary, 0 if secondary

	Author:
		Foxy
*/

#include "\z\addons\dayz_code\util\Player.hpp"

private ["_attachment","_weapon","_config","_newWeapon","_weaponInUse","_muzzle"];

//check if player is on a ladder and if so, exit
if (Player_IsOnLadder()) exitWith
{
	closeDialog 0;
	(localize "str_player_21") call dayz_rollingMessages;
};

//name of attachment item
_attachment = _this select 0;

if (!(_attachment in magazines player)) exitWith
{
	closeDialog 0;
	localize "str_missingAttachment" call dayz_rollingMessages;
};

//Get player's primary weapon or sidearm
_weapon = if ((_this select 1) == 1)
then { primaryWeapon player }
else { _weapon = Player_GetSidearm(); if (isNil "_weapon") then { "" } else { _weapon } };

//check if player has the weapon
if (_weapon == "") exitWith
{
	closedialog 0;
	
	localize
	(
		if ((_this select 1) == 1)
		then {"str_AttachmentmissingWeapon"}
		else {"str_AttachmentmissingWeapon2"}
	) call dayz_rollingMessages;
};

//retrieve Attachments class config
_config = configFile >> "CfgWeapons" >> _weapon >> "Attachments";

//check that weapon has Attachments class and attachments class has <_attachment> field.
if (!isClass(_config) || {!isText(_config >> _attachment)}) exitWith
{
	closeDialog 0;
	
	localize
	(
		if ((_this select 1) == 1)
		then {"str_AttachmentWeaponConfig"}
		else {"str_AttachmentWeaponConfig2"}
	) call dayz_rollingMessages;
};

_newWeapon = getText (_config >> _attachment);
_weaponInUse = (currentWeapon player == _weapon);

call gear_ui_init;
player playActionNow "Medic";

//remove attachment from inventory and replace weapon
player removeMagazine _attachment;
player removeWeapon _weapon;
player addWeapon _newWeapon;

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