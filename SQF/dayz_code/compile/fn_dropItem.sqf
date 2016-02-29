private ["_item","_pos","_nearByPile","_holder"];

//Radius to search for holder
#define PILE_SEARCH_RADIUS 2
//Location to offset the holder
#define PILE_PLAYER_OFFSET [0,0,0]

_item = _this;
_holder = objNull;

//Lets get the location of the player in the world
_pos = player modeltoWorld PILE_PLAYER_OFFSET;

//Check if a holder is close by the player.
_nearByPile= nearestObjects [_pos, ["WeaponHolder","WeaponHolderBase"],PILE_SEARCH_RADIUS];

if (count _nearByPile == 0) then {
	_holder = createVehicle ["WeaponHolder", _pos, [], 0, "CAN_COLLIDE"];
} else {
	_holder = _nearByPile select 0;
};

//Add the item to the newly created holder or to the new holder.
_holder addMagazineCargoGlobal [_item,1];

//Make sure the holder spawns behind the physical location of the player
_holder setPosATL (player modeltoWorld PILE_PLAYER_OFFSET);

//Revel the item
player reveal _holder;