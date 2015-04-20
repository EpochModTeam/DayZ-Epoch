private ["_trader","_traders"];

_traders = [
	["Worker2",[5976.3,6163.73,0],220],
	["GUE_Soldier_MG",[8414.86,3368.66,0],332.222],
	["Soldier_GL_M16A2_PMC",[7222.37,2132.95,-0.00435293],66.7588],
	["RU_Villager3",[2648.3,7122.58,0],337.799],
	["HouseWife1",[8781.61,5191.57,0],172.181],
	["US_Delta_Force_Assault_EP1",[6272.86,1274.2,0.00279808],266.473],
	["RU_Citizen4",[6286.28,1298.19,0],251.311],
	["RU_Citizen1",[8407.63,3378.76,0],106.96],
	["RU_Citizen3",[4971.97,5114.35,0],276.692],
	["Woodlander1",[4979.22,5139.17,0],178.444],
	["RU_WorkWoman1",[4965.9,5108.64,0],2.75578],
	["Dr_Annie_Baker_EP1",[4965.64,5115.16,0],73.4975],
	["Profiteer4",[4957.15,5126.57,0],110.766],
	["Rocker4",[4971.45,5109.62,0],319.14],
	["CIV_EuroMan02_EP1",[1277.35,9078.92,0],171.432],
	["Woodlander3",[1288.84,9070.91,0],202.364],
	["Rita_Ensler_EP1",[1272.02,9076.05,0],116.104],
	["Dr_Hladik_EP1",[1271.24,9071.47,0],66.6204],
	["Worker3",[1289.31,9065.7,0],249.243],
	["CIV_EuroMan01_EP1",[1280.75,9076.26,0],249.027],
	["Pilot_EP1",[1996.11,1202.06,-0.0040834],86.7842],
	["TK_GUE_Soldier_5_EP1",[1995.38,1153.99,0],56.78],
	["RU_WorkWoman5",[2002.82,1203.03,-0.00800467],254.909],
	["Doctor",[1998.78,1197.31,0],9.42608],
	["UN_CDF_Soldier_Pilot_EP1",[1988.5,1124.82,0.000298142],78.2134],
	["TK_CIV_Takistani04_EP1",[1999,1207.14,0],189.798]
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
