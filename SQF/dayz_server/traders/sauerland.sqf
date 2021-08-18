[
	// Hero Vendor
	["FR_AC",[11041.1,15684.5,0],193],
	// Bandit Vendor
	["GUE_Commander",[16890.6,1780.76,0],31.9086],
	/******************Seedorf************************/
	//Black Market	
	["GUE_Woodlander2",[15506.8,16990.7,1.24229],0],
	//Weapons
	["RU_Citizen4",[15523.8,17039.6,0],85.0973],
	//Ammunition
	["Profiteer1",[15523.6,17043.1,0],88.6004],
	//General Store
	["Rita_Ensler_EP1",[15464.7,17023.2,0],98.7967],
	//Medical Supplies
	["Dr_Hladik_EP1",[15520.7,16983.4,0.0164719],300.054],
	//Building/Parts
	["Worker2",[15516.6,17037.8,0],252.183],
	//Vehicles
	["Villager1",[15535.4,17013.4,0],74.9945],
	/***********************************************/	
	/******************Oberdorf************************/
	//Weapons
	["CIV_EuroMan01_EP1",[13191.3,6616.9,0],330.541],
	//Ammunition
	["CIV_EuroMan02_EP1",[13187.9,6615.84,0],343],
	//General Store
	["RU_WorkWoman5",[13171.2,6627.71,0],177.219],
	//Medical Supplies
	["Doctor",[13191,6634.41,0],261.68],
	//Building/Parts
	["Worker1",[13144.1,6626.85,0],80],
	//Vehicles
	["TK_CIV_Worker02_EP1",[13154.7,6602.8,0],23.6118],
	/***********************************************/
	/******************Oberberg************************/
	//Weapons
	["Rocker4",[24767.8,21747.7,0],246.749],
	//Ammunition
	["RU_Citizen3",[24769,21744.1,0],260],
	//General Store
	["RU_WorkWoman1",[24732.8,21743.2,0],64.5643],
	//Medical Supplies
	["Dr_Annie_Baker_EP1",[24729.2,21755.9,0.016571],104.384],
	//Building/Parts	
	["Worker3",[24754.1,21753.2,0],233.194],
	//Vehicles
	["TK_CIV_Worker01_EP1",[24763,21731.8,0],147.91],
	/***********************************************/
	//Aircraft Dealer
	["RU_Pilot",[15351.9,18520.6,0.0569839],265.643],
	//Boat Vendor
	["RU_Villager3",[947.346,23180.2,0.00201881],250],
	//Wholesaler
	["Profiteer2",[223.627,22712.1,0],154],
	//Wholesaler
	["Profiteer3",[2446.07,3899.76,0],262.573]	
] call server_spawnTraders;

// Bankers
if (Z_singleCurrency && {Z_globalBanking && Z_globalBankingTraders}) then {
	[
		//Seedorf
		["Functionary1_EP1",[15488.6,17014.2,0],172],
		//Oberdorf
		["Functionary1_EP1",[13160.8,6624.8,0],134],
		//Oberberg
		["Functionary1_EP1",[24738.5,21748.2,0],62]
	] call server_spawnTraders;
};
