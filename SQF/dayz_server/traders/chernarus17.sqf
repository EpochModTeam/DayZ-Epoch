[
	// Hero Vendor
	["FR_AC",[12947.7,12763.3,0],273.252],
	// Bandit Vendor
	["GUE_Commander",[1607.49,7780.24,0],206.985],
	/******************Stary************************/
	//Black Market	
	["GUE_Woodlander2",[6319.75,7780.39,0],111.174],
	//Weapons
	["Profiteer1",[6330.2,7792.34,0],127.651],
	//Ammunition
	["RU_Citizen4",[6329.11,7790.77,0],111.327],
	//General Store
	["Rita_Ensler_EP1",[6308.46,7800.94,0],308],
	//Medical Supplies
	["Dr_Hladik_EP1",[6307.59,7793.21,0],306.597],
	//Building/Parts
	["Worker2",[6391.78,7791.1,0],294.557],
	//Vehicles
	["Villager1",[6381.81,7767.48,0],121.089],	
	/***********************************************/	
	/******************Bash************************/
	//Weapons
	["CIV_EuroMan01_EP1",[4065.97,11664.7,0],13.221],
	//Ammunition
	["CIV_EuroMan02_EP1",[4063.41,11665.4,0],4.06381],
	//General Store
	["RU_WorkWoman5",[4059.36,11681.2,0],135.772],
	//Medical Supplies
	["Doctor",[4059.16,11671.9,0],69.6608],
	//Building/Parts
	["Worker1",[4078.35,11688.6,0],230],
	//Vehicles
	["TK_CIV_Worker02_EP1",[4086.18,11679.9,0],227],
	/**********************************************/
	/******************Klen************************/
	//Weapons
	["Rocker4",[11459.7,11385.8,0],44.9809],
	//Ammunition
	["RU_Citizen3",[11458,11387,0],38.9443],
	//General Store
	["RU_WorkWoman1",[11474.3,11389.6,0],243.732],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[11468,11394.9,0],197.338],
	//Building/Parts
	["Worker3",[11460.6,11395.9,0],151.445],
	//Vehicles
	["TK_CIV_Worker01_EP1",[11473.5,11383.1,0],154.968],
	/**********************************************/
	//Aircraft Dealer
	["RU_Pilot",[5066.9,9729.36,0],319.709],
	//Boat Vendor
	["RU_Villager3",[8387.1,2369.31,0],339.18],
	//Boat Vendor
	["HouseWife1",[13106.1,8253.15,2.01926],264],
	//Wholesaler
	["Profiteer2",[1100.26,2854.37,0],179.651],
	//Wholesaler	
	["Profiteer3",[13246.2,6071.39,0],5.43464]
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		//Stary
		["Functionary1_EP1",[6324.71,7787,0],64],
		//Bash
		["Functionary1_EP1",[4057.35,11662.7,0],47],
		//Klen
		["Functionary1_EP1",[11461,11348.6,0],312]
	] call server_spawnTraders;
};
