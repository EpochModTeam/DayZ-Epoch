[
	//Hero Vendor
	["FR_AC",[734.914,3116.88,0],28.5644],
	//Bandit Vendor
	["GUE_Commander",[9504.74,7123.16,0],206.644],
	/******************Lissabon*********************/
	//Black Market
	["GUE_Woodlander2",[4369.14,6708.19,0],261],
	//Weapons
	["RU_Citizen4",[4363.72,6721.04,0],228],
	//Ammunition
	["Profiteer1",[4365.52,6717.18,0],228],
	//General Store
	["Rita_Ensler_EP1",[4344.71,6724.58,0],167],
	//Medical Supplies
	["Dr_Hladik_EP1",[4353.15,6724.43,0],175],
	//Building/Parts
	["Worker2",[4337.63,6725.31,0],162],
	//Vehicles
	["TK_CIV_Worker01_EP1",[4363.65,6687.16,0],285],
	/***********************************************/
	/******************Riad************************/
	//Weapons
	["CIV_EuroMan01_EP1",[5857.33,3545.05,0],275],
	//Ammunition
	["CIV_EuroMan02_EP1",[5851.68,3540.15,0],3],
	//General Store
	["RU_WorkWoman5",[5877.69,3530.61,0],317],
	//Medical Supplies
	["Doctor",[5887.22,3542.14,0],227],
	//Building/Parts		
	["Worker1",[5856.33,3554.11,0],139],
	//Vehicles
	["TK_CIV_Worker02_EP1",[5868.08,3517.22,0],44],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[543.68,6889.99,0.284153],72.2415],
	//Aircraft Dealer
	["RU_Pilot",[9709.12,2663.65,0],331.017],
	//Boat Vendor
	["RU_Villager3",[8562.11,5676.39,5.47142],5.33906],
	//Boat Vendor
	["HouseWife1",[1677.95,4563.61,5.30231],186.156],
	//Wholesaler
	["Profiteer2",[3109.31,3760.81,0],263.038],
	//Wholesaler
	["Profiteer3",[7132.36,6479.76,0],88]
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && Z_globalBanking && Z_globalBankingTraders) then {
	[
		//Lissabon
		["Functionary1_EP1",[4349.68,6725.49,0],179],
		//Riad
		["Functionary1_EP1",[5883.27,3548.17,0],225]
	] call server_spawnTraders;
};
