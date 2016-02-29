/*
	Player action for emptying containers e.g. water bottle
	
	Single parameter:
		string		item classname
	
	Author:
		Foxy
*/

private
[
	"_cfg",
	"_nutrition",
	"_bloodRegen",
	"_infectionChance",
	"_sound",
	"_output"
];

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
if (!(_this in magazines player)) exitWith
{
	//TODO move to stringtable
	"You seem to have misplaced the container." call dayz_rollingMessages;
};

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