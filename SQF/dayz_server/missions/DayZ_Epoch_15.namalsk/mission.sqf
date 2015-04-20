private ["_trader","_traders"];

_traders = [
	["nac_soldier_2",[8885.5391,10756.329,8.9604874],80.769196],
	["GUE_Villager4",[5764.49,10776.7,0],357.216],
	["RU_Farmwife4",[5776.19,10776,0],0],
	["Soldier_Sniper_PMC",[4700.25,8918.91,3.8798354],78.7732],
	["Dr_Hladik_EP1",[5564,10344.5,0],276.84],
	["GUE_Woodlander2",[7719.58,5856.17,0],14.1895],
	["CIV_Contractor2_BAF",[4705.47,8924.3,0],339.76],
	["GUE_Soldier_Pilot",[7318.1,8022.74,2.9222913],253.328],
	["GUE_Soldier_CO",[7238.93,7046.76,0],137.642],
	["GUE_Soldier_Crew",[4296.85,4772.51,0],324.179],
	["GUE_Soldier_2",[5031.35,8233.04,4.8950696],157.839],
	["GUE_Soldier_1",[5032.74,8232.71,4.8950772],185.295],
	["Woodlander2",[4312.33,4779.08,0],41.2027],
	["Tanny_PMC",[3605.6,8037.08,0],187.502],
	["UN_CDF_Soldier_EP1",[2188.57,5768.1,0],198.478],
	["UN_CDF_Soldier_MG_EP1",[8885.9,10755.4,0],84.4804],
	["RU_Farmwife3",[4297.91,4782.7,0],302.864],
	["UN_CDF_Soldier_Pilot_EP1",[6280.84,9403.42,0.18137954],124.436]
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
