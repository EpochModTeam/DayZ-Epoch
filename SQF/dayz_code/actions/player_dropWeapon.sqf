private ["_item","_config","_onLadder","_consume","_meleeNum","_bag"];
_item = 	_this;
_config =	configFile >> "CfgWeapons" >> _item;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

call gear_ui_init;

_consume = 	([] + getArray (_config >> "magazines")) select 0;

_meleeNum = ({_x == _consume} count magazines player);
for "_i" from 1 to _meleeNum do {
	player removeMagazine _consume;
};

player removeWeapon _item;
if (_item == "MeleeHatchet") then {_item = "ItemHatchet";};
if (_item == "MeleeCrowbar") then {_item = "MeleeCrowbar";};
if (_item == "MeleeMachete") then {_item = "ItemMachete";};

//if (_item == "MeleeFishingPole") then {_item = "MeleeFishingPole";};
//if (_item == "MeleeSledge") then {_item = "MeleeSledge";};

_bag = createVehicle [format["WeaponHolder_%1",_item],getPosATL player,[], 0, "CAN_COLLIDE"];
_bag setdir (getDir player);
player reveal _bag;