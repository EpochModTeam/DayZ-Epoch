[
	// Hero Vendor
	["FR_AC",[12946.4,12766.8,0],194],
	// Bandit Vendor
	["GUE_Commander",[1623,7797,0],274],
	/******************Stary************************/
	//Black Market
	["GUE_Woodlander2",[6321.04,7781.03,0],10],
	//Weapons
	["RU_Citizen4",[6322.2,7797.8,-0.27],220],
	//Ammunition
	["Profiteer1",[6319,7800.2,-0.27],220],
	//General Store
	["Rita_Ensler_EP1",[6310.9,7794.8,0],245],
	//Medical Supplies
	["Dr_Hladik_EP1",[6314.1,7791.5,0],217],
	//Building/Parts
	["Worker2",[6317.9,7789,0.0],244],
	//Vehicles
	["Villager1",[6300.6,7800.3,0],310],
	/***********************************************/
	/******************Bash************************/
	//Weapons
	["CIV_EuroMan01_EP1",[4064,11680,0],231],
	//Ammunition
	["CIV_EuroMan02_EP1",[4058,11679,0],90],
	//General Store
	["RU_WorkWoman5",[4072,11677,0],207],
	//Medical Supplies
	["Doctor",[4059,11660,0],24],
	//Building/Parts		
	["Worker1",[4054,11664,0],63],
	//Vehicles
	["TK_CIV_Worker02_EP1",[4041,11669,0],25],
	/***********************************************/
	/******************Klen************************/
	//Weapons
	["Rocker4",[11465.8,11354.5,0],310],
	//Ammunition
	["RU_Citizen3",[11462,11366,0],125],
	//General Store
	["RU_WorkWoman1",[11464.6,11350.4,0],310],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[11472,11370,0],217],
	//Building/Parts	
	["Worker3",[11471,11361,0],250],
	//Vehicles
	["TK_CIV_Worker01_EP1",[11449,11341,0],34],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[12061,12636.3,0],20],	
	//Boat Vendor
	["RU_Villager3",[7996,2899,0.6],87],
	//Boat Vendor
	["HouseWife1",[13468,5439,2.5],268],	
	//Wholesaler
	["Profiteer2",[13531,6356,0],102],
	//Wholesaler
	["Profiteer3",[4360,2261,0],196]
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
