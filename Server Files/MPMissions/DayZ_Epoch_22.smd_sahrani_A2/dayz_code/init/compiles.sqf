if (isServer) then {
	
};

if (!isDedicated) then {	
	//Add your custom or override functions here
	//fnc_usec_selfActions = compile preprocessFileLineNumbers "dayz_code\compile\fn_selfActions.sqf";

	//	All fixes down below can be removed in a future Epoch Update

	//	Fix Wooden bases with wooden walls and floors got not properly recognized as shelter.
	fnc_issheltered = compile preprocessFileLineNumbers "dayz_code\compile\fn_isSheltered.sqf";

	//	Fix upgrading AAV_DZE to AAV_DZE1 did not work, only needed if you are using the AAV_DZE
	player_upgradeVehicle =	compile preprocessFileLineNumbers "dayz_code\compile\player_upgradeVehicle.sqf";

	//	Fix Maintain the Virtual Garage with Coins does not work properly
	if (DZE_Virtual_Garage) then {
		Player_MaintainVG = compile preprocessFileLineNumbers "dayz_code\actions\virtualGarage\player_MaintainVG.sqf";
	};

};