[
	// Hero Vendor
	["FR_AC",[9756.03,4029.03,0],47.76],
	// Bandit Vendor
	["GUE_Commander",[13576,7496.83,0],244.2],
	/******************Berezniki**********************/
	//Black Market
	["GUE_Woodlander2",[7978.67,10585,0.100001],255.138],
	//Weapons
	["RU_Citizen4",[7972.58,10572.9,0.100001],350.78],
	//Ammunition
	["Profiteer1",[7970.02,10572.9,0.100001],5.55704],
	//General Store
	["Rita_Ensler_EP1",[7976.58,10574.9,0.100001],353.574],
	//Medical Supplies
	["Dr_Hladik_EP1",[7963.69,10573.7,0.100001],14.9982],
	//Building/Parts
	["Worker2",[7985.6,10607.4,0],92.5541],
	//Vehicles
	["Villager1",[7989.91,10604.4,0],97.4502],
	/***********************************************/
	/******************Jesco************************/
	//Weapons
	["Rocker4",[9655.04,10879.7,0],0],
	//Ammunition
	["RU_Citizen3",[9652.11,10879.6,0],351.272],
	//General Store
	["RU_WorkWoman1",[9664.75,10890.2,0],268.986],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[9660.08,10903.6,0],180.822],
	//Building/Parts	
	["Worker3",[9665.88,10898,0],253.782],
	//Vehicles
	["TK_CIV_Worker01_EP1",[9648.12,10900.9,0],169.788],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[8150.32,4332.67,0],200.831],	
	//Boat Vendor
	["RU_Villager3",[11920.5,5269.97,1.82816],12.3663],
	//Wholesaler
	["Profiteer2",[14834.7,7661,0],185.512],
	//Wholesaler
	["Profiteer3",[10033.4,5945.52,0],181.422]	
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		//Jesco
		["Functionary1_EP1",[9662.23,10879.8,0],0],
		//Berezniki
		["Functionary1_EP1",[7979.71,10577.8,0.1],292]
	] call server_spawnTraders;
};
