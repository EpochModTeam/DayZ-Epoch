[
	// Hero Vendor
	["FR_AC",[8886.2109, 10754.155, 0],88],
	// Bandit Vendor
	["GUE_Commander",[7265.519, 5804.6997,0],90],
	/******************Stary************************/
	//Black Market
	["GUE_Woodlander2",[6230.4067, 9139.9756,0],10],
	//Weapons
	["RU_Citizen4",[6214.999, 9146.9561, 0],85],
	//Ammunition
	["Profiteer1",[6214.8179, 9149.2217, 0],85],
	//General Store
	["Rita_Ensler_EP1",[6214.3115, 9169.0166, 0],89],
	//Medical Supplies
	["Dr_Hladik_EP1",[6222.4185, 9142.2793, 0],0],
	//Building/Parts
	["Worker2",[6214.7568, 9160.1494,0],89],
	//Vehicles
	["TK_CIV_Worker01_EP1",[6234.9307, 9165.4668,0],177],
	//Aircraft Dealer
	["RU_Pilot",[6238.23, 9148.1396,0],0],
	/***********************************************/
	//Boat Vendor
	["RU_Villager3",[6252.9136, 11938.433,0.6],-86.49],
	//Wholesaler
	["Profiteer2",[6237.6626, 11939.934,0],90]
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		//Sebjan
		["Functionary1_EP1",[6215.8,9177.55,0],133],
		//Hero
		["Functionary1_EP1",[8888.08,10759.4,0],114],
		//Bandit
		["Functionary1_EP1",[7268.28,5810.53,0],82]
	] call server_spawnTraders;
};
