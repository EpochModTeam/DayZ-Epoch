/*
	Hide glitched map objects which can not be deleted, and disable loot spawn on them
	HideObject is preferable to setDam because effects are not broadcast over the network
	and there are no laggy destruction effects (smoke etc.)
*/
private "_object";

{
	_object = (_x select 0) nearestObject (_x select 1);
	_object hideObject true;
	_object setVariable ["looted",999999,false];
} count [
	//Clip into Land_houseV_2T2 interior
	[[3555,2560,0],327215], //psi_bouda.p3d dog house
	
	//Clip into zero_building Land_HouseV_3I3
	[[2799,5209,0],187483], //fuel_tank_small.p3d
	[[2800,5200,0],187495], //psi_bouda.p3d dog house
	
	//Clip into zero_building Land_HouseV_1L2
	[[3672,2435,0],327675], //kbud.p3d outhouse
	
	//Floating zero_building Land_Shed_W4
	[[7261,2799,0],342775]
];

//Respawn at correct position
[[
	["Land_Shed_W4",[7261.45,2799.33,0],317.308],
	["Fence_corrugated_plate",[7262.15,2805.85,0],142.308],
	["Fence_corrugated_plate",[7265.2,2808.42,0],137.308]
],true,true,true] call fnc_spawnObjects;