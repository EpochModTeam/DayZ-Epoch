private ["_item","_pos","_nearByPile","_holder"];

//Radius to search for holder
#define PILE_SEARCH_RADIUS 2
//Location to offset the holder
#define PILE_OFFSET [0,0,0]

_item = _this;
_holder = objNull;

//Lets get the location of the player in the world
_pos = player modeltoWorld PILE_OFFSET;

//Check if a holder is close by the player.
_nearByPile= nearestObjects [_pos, ["WeaponHolder","WeaponHolderBase"],PILE_SEARCH_RADIUS];

if (count _nearByPile == 0) then {
	//No weapon holders found in the radius, spawn a new one
	_holder = createVehicle ["WeaponHolder", _pos, [], 0, "CAN_COLLIDE"];
} else {
	//Found a near by weapon holder lets select it.
	_holder = _nearByPile select 0;
	
	//check to make sure the player can see the selected weapon holder.
	_objects = lineIntersectsWith [(_holder modeltoWorld PILE_OFFSET), _pos, player, _holder, true];
	
	//Can you see the current selected weapon holder
	if ((count _objects) > 0) then {
		//Unable to see the current selected weapon holder within the radius lets create a new one.
		_holder = createVehicle ["WeaponHolder", _pos, [], 0, "CAN_COLLIDE"];
	};
};

//Add the item to the holder or to the newly created holder.
_holder addMagazineCargoGlobal [_item,1];

//Revel the item
player reveal _holder;