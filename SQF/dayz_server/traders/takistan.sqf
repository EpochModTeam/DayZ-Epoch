[
	// Hero Vendor
	["FR_AC",[8030.74,2005.81,0],175.928],
	// Bandit Vendor
	["GUE_Commander",[748.843,10485.5,0],138.185],
	/******************Nur************************/
	//Black Market
	["GUE_Woodlander2",[1958.92,12590.8,0],178],
	//Weapons
	["RU_Citizen4",[1954.46,12580.1,0],148.507],
	//Ammunition
	["Profiteer1",[1959.45,12580.1,0],236.66],
	//General Store
	["Rita_Ensler_EP1",[1957.42,12568.2,0],39.6604],
	//Medical Supplies
	["Dr_Hladik_EP1",[1953.5,12571.8,0],40.8509],	
	//Building/Parts
	["Worker2",[1963.87,12560.5,0],44.3217],
	//Vehicles
	["Villager1",[1936.82,12571.4,0],144],
	/***********************************************/
	/******************Garmsar************************/	
	//Weapons
	["CIV_EuroMan01_EP1",[10860,6315.05,7.25],0],
	//Ammunition
	["CIV_EuroMan02_EP1",[10857.3,6314.87,7.25],0],
	//General Store
	["RU_WorkWoman5",[10855.3,6322.54,7.15823],110.624],
	//Medical Supplies
	["Doctor",[10857.8,6325.85,6.81],180],
	//Building/Parts
	["Worker1",[10848.9,6320.26,8.18353],77.7288],
	//Vehicles
	["TK_CIV_Worker02_EP1",[10863.6,6316.83,6.72974],326.385],
	/***********************************************/
	/******************Khushab***********************/
	//Weapons
	["Rocker4",[417.94,5591.24,0],184.407],
	//Ammunition
	["RU_Citizen3",[423.126,5590.04,0],191.358],
	//General Store
	["RU_WorkWoman1",[392.182,5563.11,0],58.1144],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[384.035,5573.47,0],58.5864],
	//Building/Parts	
	["Worker3",[386.612,5569.44,0],50.1126],	
	//Vehicles
	["TK_CIV_Worker01_EP1",[433.2,5568.54,0],68.3431],
	/***********************************************/
	//Aircraft Dealer	
	["RU_Pilot",[5281.71,11160.2,0],294],
	//Wholesaler
	["Profiteer2",[7408.47,96.8015,0],122.687],
	//Wholesaler
	["Profiteer3",[11127.3,12662.9,0],198.318]	
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		//Nur
		["Functionary1_EP1",[1964.39,12575,0],200],
		//Garmsar
		["Functionary1_EP1",[10857.6,6325.05,0.44],129],
		//Khushab
		["Functionary1_EP1",[431.039,5574.53,0],84]
	] call server_spawnTraders;
};
