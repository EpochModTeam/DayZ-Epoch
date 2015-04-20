private ["_trader","_traders"];

_traders = [
	["GUE_Soldier_Pilot",[4767.63,7481.72,0],339.697],
	["UN_CDF_Soldier_MG_EP1",[5229.55,8228.63,0],228.41],
	["GUE_Woodlander3",[8681.8,3145.08,0],108.462],
	["Damsel5",[8681.44,3139.74,0],101.616],
	["GUE_Soldier_Sab",[1909.89,3622.99,0],183.139],
	["Tanny_PMC",[9050.65,4055.26,0],35.2983],
	["GUE_Commander",[4431.65,1623.09,0],281.091],
	["GUE_Woodlander1",[4430.99,1620.78,-0.00511611],304.163],
	["UN_CDF_Soldier_AAT_EP1",[7222,732.791,-0.0107743],308.085],
	["BAF_Soldier_AMG_W",[8674.46,3121.78,0],33.7334],
	["Citizen2_EP1",[4425.9,1629.26,-0.0119615],6.10452],
	["RU_Farmwife1",[4421.15,1631.66,-0.00866652],11.2973],
	["CZ_Special_Forces_MG_DES_EP1",[8676.08,3126.28,0],123.976],
	["US_Soldier_Medic_EP1",[8690.04,3130.85,0],238.05],
	["BAF_Soldier_AAA_DDPM",[8675.69,3120.54,0],48.4401],
	["GUE_Soldier_2",[4405.04,1629.91,0],11.3336],
	["GUE_Soldier_1",[3357.14,2294.59,0.00157547],65.9749],
	["Rita_Ensler_EP1",[4329.28,6316.97,0],301.594],
	["ValentinaVictim",[4329.74,6320.1,0],212.502],
	["USMC_SoldierS_Engineer",[4341.65,6319.35,0],161.613],
	["USMC_Soldier_TL",[4338.67,6319.23,0],165.644],
	["Reynolds_PMC",[4322.6,6313.97,0],115.789],
	["FR_Corpsman",[2240.34,9481.82,0],107.455],
	["GUE_Soldier_AR",[2236.76,9477,0],59.4891],
	["Dr_Hladik_EP1",[4430.79,1627.1,0],353.988],
	["Soldier_PMC",[4422.88,1619.82,0.00637519],283.135],
	["RU_Villager1",[3794.38,7651.18,0],122.195]
];

{
	_trader = createAgent [_x select 0,_x select 1,[],0,"CAN_COLLIDE"]; 
	{_trader removeMagazine _x;} count magazines _trader;
	removeAllItems _trader;
	removeAllWeapons _trader;
	removeBackpack _trader;
	_trader switchMove "";
	_trader setDir (_x select 2);
	_trader setVehicleInit "this disableAI 'ANIM'; this disableAI 'AUTOTARGET'; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0; this allowDamage false;";
	_trader setUnitAbility 0.6;
	_trader disableAI "ANIM";
	_trader disableAI "AUTOTARGET";
	_trader disableAI "FSM";
	_trader disableAI "MOVE";
	_trader disableAI "TARGET";
	_trader setBehaviour "CARELESS";
	_trader forceSpeed 0;
	_trader allowDamage false;
	_trader enableSimulation false;
} count _traders;

processInitCommands;
