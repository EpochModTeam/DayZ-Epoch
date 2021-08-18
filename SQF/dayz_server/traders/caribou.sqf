[
	// Hero Vendor
	["FR_AC",[4802.38,3073.36,0],268.525],
	// Bandit Vendor
	["GUE_Commander",[3561.29,6028.32,0],191.786],	
	/******************Raun***********************/
	//Black Market
	["GUE_Woodlander2",[3949.58,858.747,0.96],290],
	//Weapons
	["RU_Citizen4",[3945.37,853.21,0.486464],331.563],
	//Ammunition
	["Profiteer1",[3942.57,853.036,0.48966],342.176],
	//General Store
	["Rita_Ensler_EP1",[3945.8,879.502,0.474328],318.246],
	//Medical Supplies
	["Dr_Hladik_EP1",[3945.95,873.693,0.475336],257.369],
	//Building/Parts
	["Worker2",[3945.96,867.512,0.647091],251.585],
	//Vehicles
	["TK_CIV_Worker01_EP1",[3932.26,883.862,0],299.434],
	//Boat Vendor
	["RU_Villager3",[3924.83,859.231,0],306.853],
	/*********************Raven Rock**********************/
	//Weapons
	["CIV_EuroMan01_EP1",[1399.69,6932.11,0],294.801],
	//Ammunition
	["CIV_EuroMan02_EP1",[1403.15,6935.88,0],305.71],
	//General Store
	["RU_WorkWoman5",[1383.77,6937.13,0],117.078],
	//Building/Parts	
	["Doctor",[1415.51,6965.92,0],119.761],	
	//Vehicles
	["Worker1",[1390.53,6944.12,0],91.0347],	
	//Vehicles
	["TK_CIV_Worker02_EP1",[1394.03,6980.33,0],184.047],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[1796.28,3674.45,0],125.488],
	//Boat Vendor
	["HouseWife1",[2392.69,7534.65,2.60754],263.407],	
	//Wholesaler
	["Profiteer2",[1198.43,1902.09,0],68.656],	
	//Wholesaler
	["Profiteer3",[4802.38,7338.27,0],175.745]	
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		//Raven Rock
		["Functionary1_EP1",[1386.9,6941.33,0],93],
		//Raun
		["Functionary1_EP1",[3946.33,886.11,0],261]
	] call server_spawnTraders;
};
