[
	// Hero Vendor
	["FR_AC",[4682.89, 4098.08,0],177.9],
	// Bandit Vendor
	["GUE_Commander",[2847.86, 9258.80,0],-35.77],
	/******************Motodrom************************/
	//Black Market
	["GUE_Woodlander2",[2359.11, 4178.96,0],-268.02],
	//Weapons
	["RU_Citizen4",[2365.94, 4191.84,0],-231],
	//Ammunition
	["Profiteer1",[2368.34,4193.23,0],150],
	//General Store
	["Rita_Ensler_EP1",[2402.41, 4165.27,0],267],
	//Medical Supplies
	["Dr_Hladik_EP1",[2372.39, 4139.26,0],0],
	//Building/Parts
	["Worker2",[2402.69, 4177.35,0],244],
	//Vehicles
	["Villager1",[2399.04, 4143.42,0],275],
	/***********************************************/
	/******************El Villon************************/
	//Weapons
	["CIV_EuroMan01_EP1",[7628.64, 2090.11,0],-203],
	//Ammunition
	["CIV_EuroMan02_EP1",[7631.88, 2091.27,0],-203],
	//General Store
	["RU_WorkWoman5",[7646.99, 2077,0],-28.16],
	//Medical Supplies
	["Doctor",[7618.89, 2069.66,0],23.64],
	//Building/Parts		
	["Worker1",[7639.27, 2072.98,0],-20.21],
	//Vehicles
	["TK_CIV_Worker02_EP1",[7666.03, 2100.46,0],-459.89],
	/***********************************************/
	/******************San Isabel************************/
	//Weapons
	["Rocker4",[5210.57, 7685.411,0],-45.77],
	//Ammunition
	["RU_Citizen3",[5207.96, 7682.50,0],-45.77],
	//General Store
	["RU_WorkWoman1",[5168.5, 7717.6,0.57],130.60],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[5186, 7715.8,0.05],221.05],
	//Building/Parts	
	["Worker3",[5201.7, 7673.89,0],-47.61],
	//Vehicles
	["TK_CIV_Worker01_EP1",[5163.4, 7696.9,0],-271.42],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[3019.19, 7141.56,0],261.77],	
	//Boat Vendor
	["RU_Villager3",[1426.07, 1173.74,0],0],
	//Boat Vendor
	["HouseWife1",[9068.4, 8676.99,0],-197.44],	
	//Wholesaler
	["Profiteer2",[1431.42, 1173.83,0],0],
	//Wholesaler
	["Profiteer3",[9082.1, 8675.91,0],256.14]
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && Z_globalBanking && Z_globalBankingTraders) then {
	[
		["Functionary1_EP1",[3020.2061,5945.2783,0.23],0],
		["Functionary1_EP1",[4140.2051,1505.2682,2.3],55],
		["Functionary1_EP1",[7519.0171,2949.8694,6.2],-177],
		["Functionary1_EP1",[4239.9063,4841.8989,3.8],94]
	] call server_spawnTraders;
};
