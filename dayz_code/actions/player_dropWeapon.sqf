private["_item"];
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

_bag = createVehicle [format["WeaponHolder_%1",_item],getPosATL player,[], 0, "CAN_COLLIDE"];
_bag setdir (getDir player);
player reveal _bag;