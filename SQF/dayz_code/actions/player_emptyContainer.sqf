/*
	Player action for emptying containers e.g. water bottle

	Single parameter:
		string		item classname

	Author:
		Foxy
*/

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_56" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private "_cfg";

_cfg = (ConfigFile >> "CfgMagazines" >> _this);

//class doesn't exist
if (!isClass(_cfg)) exitWith
{
	diag_log format ["DAYZ ERROR: Invalid magazine classname given to player_emptyContainer: %1", _this];
};

//class isn't a consumable
if (!isText(_cfg >> "containerEmpty")) exitWith
{
	diag_log format ["DAYZ ERROR: Non-emptiable item classname given to player_emptyContainer: %1", _this];
};

//player is on a ladder
if ((getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1) exitWith
{
	(localize "str_player_21") call dayz_rollingMessages;
};

//player doesn't have the consumable item
if (!(_this in magazines player)) exitWith { localize "str_misplaced_container" call dayz_rollingMessages; };

[player,(getPosATL player),5,"refuel"] spawn fnc_alertZombies;
player playActionNow "PutDown";

//Remove container
player removeMagazine _this;
player addMagazine getText (_cfg >> "containerEmpty");

//update gear ui or close if the player is in a vehicle
if (vehicle player == player) then
{
	call gear_ui_init;
}
else
{
	(findDisplay 106) closeDisplay 0;
};

dayz_actionInProgress = false;
