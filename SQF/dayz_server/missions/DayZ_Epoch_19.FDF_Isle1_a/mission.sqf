private ["_trader","_traders"];

_traders = [
	["GUE_Soldier_Pilot",[8150.32,4332.67,0],200.831],
	["Soldier_MG_PKM_PMC",[9652.11,10879.6,0],351.272],
	["Soldier_GL_M16A2_PMC",[9655.04,10879.7,0],0],
	["GUE_Villager4",[9665.88,10898,0],253.782],
	["CIV_Contractor2_BAF",[9648.12,10900.9,0],169.788],
	["Dr_Annie_Baker_EP1",[9660.08,10903.6,0],180.822],
	["Damsel5",[9664.75,10890.2,0],268.986],
	["GUE_Villager3",[11920.5,5269.97,-0.0234528],12.3663],
	["RU_Farmwife4",[7976.58,10574.9,0],353.574],
	["GUE_Soldier_AR",[7972.58,10572.9,0],350.78],
	["GUE_Soldier_CO",[7970.02,10572.9,0],5.55704],
	["GUE_Woodlander2",[7985.6,10607.4,0],92.5541],
	["GUE_Soldier_GL",[7989.91,10604.4,0],97.4502],
	["Dr_Hladik_EP1",[7963.69,10573.7,0],14.9982],
	["Tanny_PMC",[9756.03,4029.03,0],47.7658],
	["GUE_Soldier_Crew",[13576,7496.83,0],244.2],
	["GUE_Soldier_3",[14834.7,7661,1.19209e-007],185.512],
	["GUE_Soldier_1",[10033.4,5945.52,0],181.422],
	["Soldier_TL_PMC",[7978.67,10585,0],255.138]
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
