/*
	Hide glitched map objects which can not be deleted
	HideObject is preferable to setDam because effects are not broadcasted over the network
	and there are no laggy destruction effects (smoke etc.)
*/

{(_x select 0) nearestObject (_x select 1) hideObject true} count [
	//Clip into Land_houseV_2T2 interior
	[[3555,2560,0],327215], //psi_bouda.p3d dog house //smoke after setDam
	
	//Clip into zero_building Land_HouseV_3I3
	[[2799,5209,0],187483], //fuel_tank_small.p3d //still visible and inflamed after setDam
	[[2800,5200,0],187495], //psi_bouda.p3d dog house //smoke after setDam
	
	//Clip into zero_building Land_HouseV_1L2
	[[3672,2435,0],327675] //kbud.p3d outhouse
];