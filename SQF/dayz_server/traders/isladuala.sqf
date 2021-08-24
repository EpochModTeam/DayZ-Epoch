[
	// Hero Vendor
	["FR_AC",[6272.86,1274.2,0],266.473],
	// Bandit Vendor
	["GUE_Commander",[8414.86,3368.66,0],332.222],
	/******************Camara************************/
	//Black Market
	["GUE_Woodlander2",[1972.15,1203.71,0],101],
	//Weapons
	["CIV_EuroMan01_EP1",[1999,1207.14,0],189.79],
	//Ammunition
	["CIV_EuroMan02_EP1",[1996.11,1202.06,0],86.7842],
	//General Store
	["RU_WorkWoman5",[2002.82,1203.03,0],254.909],
	//Medical Supplies
	["Doctor",[1998.78,1197.31,0],9.42],
	//Building/Parts	
	["Worker1",[1995.38,1153.99,0],56.78],
	//Vehicles
	["TK_CIV_Worker02_EP1",[1988.5,1124.82,0],78.2],
	/***********************************************/	
	/******************Pinley************************/	
	//Weapons
	["RU_Citizen4",[1280.75,9076.26,0],249.027],
	//Ammunition
	["Profiteer1",[1277.35,9078.92,0],171.432],
	//General Store
	["Rita_Ensler_EP1",[1272.02,9076.05,0],116.104],
	//Medical Supplies
	["Dr_Hladik_EP1",[1271.24,9071.47,0],66.6204],
	//Building/Parts
	["Worker2",[1288.84,9070.91,0],202.364],
	//Vehicles
	["Villager1",[1289.31,9065.7,0],249.243],
	/***********************************************/		
	/******************Nubak************************/
	//Weapons
	["Rocker4",[4971.45,5109.62,0],319.14],
	//Ammunition
	["RU_Citizen3",[4971.97,5114.35,0],276.692],
	//General Store
	["RU_WorkWoman1",[4965.9,5108.64,0],2.75578],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[4965.64,5115.16,0],73.4975],
	//Building/Parts	
	["Worker3",[4979.22,5139.17,0],178.444],
	//Vehicles
	["TK_CIV_Worker01_EP1",[4957.15,5126.57,0],110.766],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[5976.3,6163.73,0],220],	
	//Boat Vendor
	["RU_Villager3",[2648.3,7122.58,0],337.799],
	//Boat Vendor
	["HouseWife1",[8781.61,5191.57,0],172.181],
	//Wholesaler
	["Profiteer2",[6286.28,1298.19,0],251.311],
	//Wholesaler
	["Profiteer3",[8407.63,3378.76,0],106.96]	
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		//Camara
		["Functionary1_EP1",[2001.31,1196.58,0],342],
		//Nubak
		["Functionary1_EP1",[4959.47,5117.99,0],11],
		//Pinley
		["Functionary1_EP1",[1286.47,9073.91,0],197]
	] call server_spawnTraders;
};
