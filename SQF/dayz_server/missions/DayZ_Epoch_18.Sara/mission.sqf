private ["_trader","_traders"];

_traders = [
	["Profiteer4",[17176.2,13586.9,-0.00538754],73.4977],
	["RU_Villager3",[19245.6,13587,0],275.413],
	["Worker3",[14280.5,12382.6,0],345.399],
	["CIV_EuroMan01_EP1",[14281.5,12438.9,-0.004143],272.803],
	["RU_WorkWoman5",[14264.4,12423.2,0],105.948],
	["TK_GUE_Soldier_5_EP1",[14266,12375.6,-0.000602722],21.4575],
	["CIV_EuroMan02_EP1",[14282.5,12434.6,0],270.936],
	["Dr_Hladik_EP1",[12568.6,8359.86,0],311.354],
	["RU_Functionary1",[17269.8,9570.75,-0.00926071],177.474],
	["Woodlander1",[17175.9,13602.3,0],87.9029],
	["RU_WorkWoman1",[17175.6,13598.4,0],88.8961],
	["Rocker4",[17175.8,13593.9,0.00252295],83.4515],
	["RU_Citizen3",[17182.7,13599.3,0],253.984],
	["Dr_Annie_Baker_EP1",[17179.4,13574.9,-0.00479555],73.9206],
	["TK_CIV_Takistani04_EP1",[12575.7,8356.54,0],269.782],
	["RU_Citizen4",[11453.7,5420.59,0],202.669],
	["RU_Citizen1",[13559,8684.84,-0.0077101],184.643],
	["Pilot_EP1",[12569.6,8353.51,0],36.3956],
	["Rita_Ensler_EP1",[12556,8352.81,0],350.73],
	["Worker2",[9908.46,10003.7,0],3.01909],
	["GUE_Soldier_MG",[6411.28,7476.5,0],262.287],
	["RU_Profiteer4",[12548.4,8353.64,0],309.294],
	["Woodlander3",[12565.6,8350.7,0],300.073],
	["HouseWife1",[13488.9,6891.06,0],268.259],
	["Doctor",[14263.7,12434.9,0.000408053],95.8567]
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
