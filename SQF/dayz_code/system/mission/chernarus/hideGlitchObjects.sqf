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
	[[10603,2418,0],363524], //psi_bouda.p3d dog house
	[[4402,5661,0],214072], //psi_bouda.p3d dog house
	[[4488,6401,0],212813], //psi_bouda.p3d dog house
	[[2703,10074,0],123787], //psi_bouda.p3d dog house
	[[11770,12196,0],251560], //psi_bouda.p3d dog house
	
	//Clip into zero_building Land_HouseV_3I3
	[[2799,5209,0],187483], //fuel_tank_small.p3d
	[[2800,5200,0],187495], //psi_bouda.p3d dog house
	
	//Clip into zero_building Land_HouseV_1L2
	[[3672,2435,0],327675], //kbud.p3d outhouse
	
	//Custom building interiors too high/low above/below terrain level to enter
	[[6079,4911,0],223850], //Land_Shed_W4 zero_building
	[[7261,2799,0],342775], //Land_Shed_W4 zero_building
	[[12871,8031,0],294946], //Land_HouseV_3I3 zero_building
	[[12971,8022,0],295117], //Land_HouseV_3I3 zero_building
	//Land_houseV_2T2 back stairs too high, temporary until Streatman model update
	[[8679,2428,0],358075],
	[[13351,5442,0],306657],
	[[1746,2181,0],324987]
];

//Respawn at correct position
[[
	["Land_Shed_W4",[6078.64,4911.5,-0.55],0],
	["Land_Shed_W4",[7261.45,2799.33,0],317.308],
	["Fence_corrugated_plate",[7262.15,2805.85,0],142.308], //Cover floating fences nearby
	["Fence_corrugated_plate",[7265.2,2808.42,0],137.308],
	["Land_HouseV_3I3",[12870.7,8031.49,0],180],
	["Land_HouseV_3I3",[12971,8022.49,0],268],
	//Land_houseV_2T2 back stairs too high, temporary until Streatman model update
	["Land_houseV_2T2",[8678.94,2427.98,-0.3],245],
	["Land_houseV_2T2",[13350.6,5441.92,-0.1],0],
	["Land_houseV_2T2",[1746.44,2180.63,-0.1],175]
],true,true,true] call fnc_spawnObjects;