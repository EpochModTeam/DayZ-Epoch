[
	// Hero Vendor
	["FR_AC",[4074.85,7258.77,0],306],
	// Bandit Vendor
	["GUE_Commander",[10938.7,651.237,0],28.1598],
	/******************Branibor***********************/
	//Black Market
	["GUE_Woodlander2",[7377.57,4292.67,0],44],
	//Weapons
	["RU_Citizen4",[7358.47,4332.59,0],170.363],
	//Ammunition
	["Profiteer1",[7361.08,4331.8,0],201.357],
	//General Store
	["Rita_Ensler_EP1",[7357,4325.87,0],27.5198],
	//Medical Supplies
	["Dr_Hladik_EP1",[7398.85,4296.94,0],253.028],
	//Building/Parts
	["Worker2",[7350.31,4331.09,0],51.0959],
	//Vehicles
	["Villager1",[7344.24,4301.96,0],70.4169],
	/***********************************************/
	/******************Bilgrad**********************/
	//Weapons
	["CIV_EuroMan01_EP1",[5531.35,8754.43,0],304.784],
	//Ammunition
	["CIV_EuroMan02_EP1",[5528.48,8753.55,0],16.0565],
	//General Store
	["RU_WorkWoman5",[5538.16,8755.99,0],334.528],
	//Medical Supplies
	["Doctor",[5523.58,8750.23,0],341.785],
	//Building/Parts
	["Worker1",[5542.85,8758.92,0],339.397],	
	//Vehicles
	["TK_CIV_Worker02_EP1",[5552.41,8770.15,0],340.636],
	/***********************************************/
	/******************Sabina**********************/
	//Weapons
	["Rocker4",[15313.9,9304.92,0],179.749],
	//Ammunition
	["RU_Citizen3",[15318.4,9304.92,0],186.429],
	//General Store
	["RU_WorkWoman1",[15299.1,9303.51,0],180.973],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[15295.8,9287.35,0],82.8423],
	//Building/Parts	
	["Worker3",[15306.2,9303.78,0],180.9],
	//Vehicles
	["TK_CIV_Worker01_EP1",[15319,9260.82,0],267.89],
	/***********************************************/
	/******************Lyepestok********************/
	//Weapons
	["RU_Citizen4",[11684.1,15195.8,0],60.7886],
	//Ammunition
	["Profiteer1",[11686.6,15193.1,0],19.6526],
	//General Store
	["Rita_Ensler_EP1",[11707.9,15225.8,0],222.935],
	//Medical Supplies
	["Dr_Hladik_EP1",[11710.8,15222.8,0],230.875],
	//Building/Parts
	["Worker2",[11701.8,15231.1,0],222.73],
	//Vehicles
	["Villager1",[11687.5,15226.8,0],309.145],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[6813.01,8539.05,0],220.008],
	//Aircraft Dealer
	["RU_Pilot",[16555.7,10161.1,0],0],	
	//Boat Vendor
	["RU_Villager3",[5418.96,9503.33,0],96.5135],
	//Boat Vendor
	["HouseWife1",[10698.3,5983.96,0],319.982],
	//Boat Vendor
	["RU_Villager3",[10570,16782.7,0],31.4],
	//Boat Vendor
	["HouseWife1",[17332,12930.3,0],309.228],	
	//Wholesaler
	["Profiteer2",[9864.43,7471.31,0],283.424],	
	//Wholesaler
	["Profiteer3",[13340.8,8610.9,0.466263],38.7793]
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		["Functionary1_EP1",[5461.0132,8762.3438,0.056497198],52],
		["Functionary1_EP1",[11026.932,842.23804,0.18712912],138.57352],
		["Functionary1_EP1",[17231.154,7661.1392,0.102005],-202.23622],
		["Functionary1_EP1",[12643.531,11811.004,100.51027],100.51027],
		["Functionary1_EP1",[15370.618,16458.928,0.056785069],-188.12981],
		["Functionary1_EP1",[10167.308,19075.475,0.26185527],-116.41749]
	] call server_spawnTraders;
};
