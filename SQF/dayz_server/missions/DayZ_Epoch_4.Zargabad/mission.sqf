private ["_trader","_traders"];

_traders = [
	["Worker1",[3566.8,6822.43,0],93.1203],
	["Dr_Hladik_EP1",[3574.53,6826.01,0],59.3184],
	["CIV_EuroWoman01_EP1",[3567.5,6825.62,0],129.565],
	["CIV_EuroMan02_EP1",[3577.53,6843.07,0],109.875],
	["CIV_EuroMan01_EP1",[3578.87,6848.27,0],122.726],
	["TK_CIV_Takistani02_EP1",[4725.07,827.514,-0.00155908],145.139],
	["TK_CIV_Takistani03_EP1",[4728.35,830.568,0],186.024],
	["TK_CIV_Woman02_EP1",[4722.28,864.391,0.00125062],142.106],
	["TK_CIV_Takistani05_EP1",[4727.29,834.089,0],65.4768],
	["Tanny_PMC",[3569.91,6818.85,0],36.4783],
	["Profiteer4",[3573.85,6817.57,0],42.3124],
	["TK_CIV_Takistani04_EP1",[4722.18,825.216,-0.00344127],0]
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
