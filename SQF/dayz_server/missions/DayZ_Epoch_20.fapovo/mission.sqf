private ["_trader","_traders"];

_traders = [
	["GUE_Soldier_Pilot",[4492.61,497.43,0.00108898],91.0957],
	["Dr_Annie_Baker_EP1",[3692.96,2407.95,0],68.8732],
	["GUE_Villager3",[3714.29,2411.41,0],197.464],
	["GUE_Woodlander2",[3709.23,2413.95,0],163.08],
	["RU_Damsel2",[3700.8,2405.09,0],17.1205],
	["GUE_Soldier_MG",[3695.71,2412.9,0],126.2],
	["GUE_Soldier_1",[3698.41,2412.88,0],136.568],
	["Dr_Hladik_EP1",[3364.38,4097.37,0],140.809],
	["BAF_Soldier_AAT_W",[3379.99,4089.87,0],354.936],
	["BAF_Soldier_AAR_MTP",[3375.47,4089.13,0],8.03756],
	["RU_Damsel1",[3380.24,4101.24,0],80.8811],
	["Soldier_Bodyguard_M4_PMC",[3406.23,4100.16,0],303.391],
	["GUE_Commander",[3395.4,4097.25,0],9.57026],
	["Tanny_PMC",[4350.24,3660.32,0],203.772],
	["Soldier_MG_PKM_PMC",[1603.94,1066.97,0.0130025],56.7438],
	["UN_CDF_Soldier_Crew_EP1",[3524.35,3132.55,-0.0261841],203.272],
	["GUE_Soldier_Scout",[3702.17,2414.24,0],134.771],
	["FR_Assault_R",[4677.69,1880.11,0.0221567],235.28]
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
