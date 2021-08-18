[
	// Hero Vendor
	["FR_AC",[9050.65,4055.26,0],35.2983],
	// Bandit Vendor
	["GUE_Commander",[1909.89,3622.99,4.76837e-007],183.139],
	/******************Pikia************************/
	//Black Market
	["GUE_Woodlander2",[4422.8,1620,0],295],
	//Weapons
	["RU_Citizen4",[4431.65,1623.09,0],281.091],
	//Ammunition
	["Profiteer1",[4430.99,1620.78,0],304.163],
	//General Store
	["Rita_Ensler_EP1",[4421.15,1631.66,0],23],
	//Medical Supplies
	["Dr_Hladik_EP1",[4430.79,1627.1,0],23],
	//Building/Parts
	["Worker2",[4425.9,1629.26,0],23],
	//Vehicles
	["Villager1",[4405.04,1629.91,0],11.3336],
	/***********************************************/
	/******************Selca************************/
	//Weapons
	["CIV_EuroMan01_EP1",[8675.69,3120.54,0],48.4401],
	//Ammunition
	["CIV_EuroMan02_EP1",[8674.46,3121.78,0],33.7334],
	//General Store
	["RU_WorkWoman5",[8681.44,3139.74,0],101.616],
	//Medical Supplies
	["Doctor",[8690.04,3130.85,0],238.05],
	//Building/Parts	
	["Worker1",[8681.8,3145.08,0],108.462],
	//Vehicles
	["TK_CIV_Worker02_EP1",[8676.08,3126.28,0],123.976],
	/***********************************************/
	/******************Planica************************/
	//Weapons
	["Rocker4",[4338.67,6319.23,0],190],
	//Ammunition
	["RU_Citizen3",[4341.65,6319.35,0],192],
	//General Store
	["RU_WorkWoman1",[4329.74,6320.1,0],212.502],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[4325.83,6321.77,0],184],
	//Building/Parts	
	["Worker3",[4322.6,6313.97,0],115.789],
	//Vehicles
	["TK_CIV_Worker01_EP1",[4329.28,6316.97,0.038826],301.594],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[4767.63,7481.72,0],339.697],	
	//Boat Vendor	
	["RU_Villager3",[3357.34,2293.95,10.7656],6.96],
	//Boat Vendor	
	["HouseWife1",[3793.9,7652,5.9],89],
	//Wholesaler
	["Profiteer2",[5229.55,8228.82,0],267],
	//Wholesaler
	["Profiteer3",[7222,732.791,0],308.085]
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		["Functionary1_EP1",[4770.4067,7482.2651,-1.7],0],
		["Functionary1_EP1",[4431.1997,1616.5604,1.9],-85],
		["Functionary1_EP1",[8252.4922,15494.612,0.22],93]
	] call server_spawnTraders;
};
