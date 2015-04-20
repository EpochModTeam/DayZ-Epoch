private ["_trader","_traders"];

_traders = [
	["Profiteer4",[11449.5,11341,0],34.5259],
	["RU_Villager3",[7996.1,2899.08,0.669153],86.8589],
	["Worker3",[4041.62,11668.9,-3.05176e-005],24.9128],
	["CIV_EuroMan01_EP1",[4064.07,11680.1,0],231.007],
	["RU_WorkWoman5",[4071.99,11676.7,0],206.817],
	["TK_GUE_Soldier_5_EP1",[4054.22,11664.7,0],62.9967],
	["CIV_EuroMan02_EP1",[4058.05,11678.7,0],89.8909],
	["Dr_Hladik_EP1",[6314.1,7791.53,0],217.326],
	["RU_Functionary1",[12946.3,12766.6,0],194.242],
	["Woodlander1",[11471.2,11361.2,3.05176e-005],250.154],
	["RU_WorkWoman1",[11463.9,11351.7,-3.05176e-005],261.277],
	["Rocker4",[11465.5,11354.5,-3.05176e-005],310.039],
	["RU_Citizen3",[11462.3,11366,0],125.74],
	["Dr_Annie_Baker_EP1",[11472,11370.6,0],208.205],
	["TK_CIV_Takistani04_EP1",[6321,7794.45,0.276886],359.642],
	["RU_Citizen4",[13530.9,6356.74,0],102.758],
	["RU_Citizen1",[4360.62,2260.98,0],196.699],
	["Pilot_EP1",[6317.05,7797.92,0],104.175],
	["Rita_Ensler_EP1",[6310.78,7794.51,0],245.567],
	["Worker2",[12061.6,12636.3,0.0569916],19.9271],
	["GUE_Soldier_MG",[1623.17,7797.79,0],274.599],
	["RU_Profiteer4",[6300.31,7800.59,0],310.641],
	["Woodlander3",[6317.99,7789.33,0],229.209],
	["HouseWife1",[13468.4,5439.58,2.55675],268.259],
	["Doctor",[4059.44,11660.4,0],24.2669],
	["GUE_Woodlander2",[6321.04,7781.03,0],9.66389]
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
