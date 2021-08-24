[
	// Hero Vendor
	["FR_AC",[17269.8,9570.75,0],177.474],
	// Bandit Vendor
	["GUE_Commander",[6411.28,7476.5,0],262.287],
	/******************Bagango************************/
	//Black Market
	["GUE_Woodlander2",[14285.6,12431.6,0],217],
	//Weapons
	["RU_Citizen4",[14281.5,12438.9,0],272.803],
	//Ammunition
	["Profiteer1",[14282.5,12434.6,0],270.936],
	//General Store
	["Rita_Ensler_EP1",[14264.4,12423.2,0],93],
	//Medical Supplies
	["Dr_Hladik_EP1",[14263.7,12434.9,0],95.8567],
	//Building/Parts
	["Worker2",[14266,12375.6,0],21.4575],
	//Vehicles
	["Villager1",[14280.5,12382.6,0],345.399],
	/***********************************************/
	/******************Corazol***********************/
	//Weapons
	["CIV_EuroMan01_EP1",[12575.7,8356.54,0],269.782],
	//Ammunition
	["CIV_EuroMan02_EP1",[12569.6,8353.51,0],36.3956],
	//General Store
	["RU_WorkWoman5",[12556,8352.81,0],350.73],
	//Medical Supplies
	["Doctor",[12568.6,8359.86,0],311.354],
	//Building/Parts	
	["Worker1",[12565.6,8350.7,0],300.073],
	//Vehicles
	["TK_CIV_Worker02_EP1",[12548.4,8353.64,0],309.294],
	/***********************************************/
	/******************Ixel************************/
	//Weapons
	["Rocker4",[17175.8,13593.9,0],83.4515],
	//Ammunition
	["RU_Citizen3",[17182.7,13599.3,0],253.984],
	//General Store
	["RU_WorkWoman1",[17175.6,13598.4,0],88.8961],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[17179.4,13574.9,0],73.9206],
	//Building/Parts	
	["Worker3",[17175.9,13602.3,0],87.9029],
	//Vehicles
	["TK_CIV_Worker01_EP1",[17176.2,13586.9,0],73.4977],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[9908.46,10003.7,0],3.01909],
	//Boat Vendor
	["RU_Villager3",[19245.6,13587,2.55686],275.413],
	//Boat Vendor
	["HouseWife1",[13488.9,6891.06,3.55589],268.259],
	//Wholesaler
	["Profiteer2",[11453.7,5420.59,0],202.669],
	//Wholesaler
	["Profiteer3",[13558.3,8684.33,0],184.643]	
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		//Corazol
		["Functionary1_EP1",[12552.1,8355.03,0],29],
		//Bagango
		["Functionary1_EP1",[14264.6,12431.2,0],97],
		//Ixel
		["Functionary1_EP1",[17189,13596.6,0],160]
	] call server_spawnTraders;
};
