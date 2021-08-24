[
	// Hero Vendor
	["FR_AC",[5154.02,4855.44,0],266.032],
	// Bandit Vendor
	["GUE_Commander",[10395.6,8270.34,0],214.982],
	/******************Lenzburg************************/
	//Black Market
	["GUE_Woodlander2",[8243.29,15505.4,0.25],134.795],	
	//Weapons
	["RU_Citizen4",[8264.54,15495.9,3.55006],52.1028],
	//Ammunition
	["Profiteer1",[8262.31,15499.4,3.55006],52.1128],
	//General Store
	["Rita_Ensler_EP1",[8262.27,15499.9,0.250063],228.636],
	//Medical Supplies
	["Dr_Hladik_EP1",[8269.49,15490.6,0.250063],255.248],
	//Building/Parts	
	["Worker2",[8254.95,15509.6,0.250067],189.353],
	//Vehicles
	["Villager1",[8266.67,15482.2,0.123269],218.236],
	/***********************************************/
	/******************Emmen************************/
	//Weapons
	["CIV_EuroMan01_EP1",[15507.7,13226.1,0],28.48],
	//Ammunition
	["CIV_EuroMan02_EP1",[15503.2,13227.2,0],28.48],
	//General Store
	["RU_WorkWoman5",[15536.5,13224.5,0],0],
	//Medical Supplies
	["Doctor",[15520,13250.7,0.294226],328.894],
	//Building/Parts	
	["Worker1",[15518.8,13226.5,0],335],
	//Vehicles
	["TK_CIV_Worker02_EP1",[15473.2,13187.7,0],34.3503],
	/***********************************************/
	/*****************Schratten***********************/
	//Weapons
	["Rocker4",[12427.5,5058.27,3.47403],303],
	//Ammunition
	["RU_Citizen3",[12425.6,5054.96,3.49786],303],
	//General Store
	["RU_WorkWoman1",[12392.7,5053.99,0.520996],172.955],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[12401.6,5045.47,0.894516],324.168],
	//Building/Parts	
	["Worker3",[12421.7,5051.93,0.220291],31],
	//Vehicles
	["TK_CIV_Worker01_EP1",[12421.8,5058.99,0.225952],24.8034],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[15128.7,16420.9,0.0772419],134.335],	
	//Boat Vendor
	["RU_Villager3",[16864.951,5273.5635,1.3620883],180],
	//Boat Vendor
	["HouseWife1",[6773.4,16950.3,1.79731],328.118],
	//Wholesaler
	["Profiteer2",[5371,16091.2,0],0],
	//Wholesaler
	["Profiteer3",[2128.3,7807.78,6.99081],260.566]	
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		["Functionary1_EP1",[12399.83,5054.3413,0.2],52],
		["Functionary1_EP1",[15529.827,13236.555,2.38],164],
		["Functionary1_EP1",[8252.4922,15494.612,0.22],24.5],
		["Functionary1_EP1",[2123.4653,7806.499,0.28],53]
	] call server_spawnTraders;
};
