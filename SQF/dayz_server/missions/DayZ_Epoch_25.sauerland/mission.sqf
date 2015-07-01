private ["_trader","_traders"];

_traders = [
	["Damsel4",[24732.8,21743.2,0],64.5643],
	["Rocker2",[24754.1,21753.2,0],233.194],
	["Dr_Hladik_EP1",[24729.2,21755.9,-0.00130558],104.384],
	["RU_Profiteer1",[24763,21731.8,0.0128018],147.91],
	["US_Delta_Force_AR_EP1",[24769,21744.1,0],252.538],
	["FR_Cooper",[24767.8,21747.7,-0.0122953],246.749],
	["Ins_Soldier_AR",[15523.8,17039.6,0],85.0973],
	["TK_Commander_EP1",[15523.6,17043.1,0],88.6004],
	["Ins_Soldier_GL",[15506.8,16990.7,1.2402413],0],
	["RU_Damsel2",[15464.7,17023.2,0],98.7967],
	["CIV_EuroMan01_EP1",[15535.4,17013.4,0],74.9945],
	["RU_Villager1",[15516.6,17037.8,0],252.183],
	["pook_Doc_Bell47",[15520.7,16983.4,-0.000213623],300.054],
	["Citizen2_EP1",[13144.1,6626.85,0],98.5598],
	["RU_Damsel5",[13171.2,6627.71,0],177.219],
	["RU_Doctor",[13191,6634.41,0],261.68],
	["TK_Soldier_AMG_EP1",[13191.3,6616.9,0],330.541],
	["TK_Soldier_Crew_EP1",[13187.9,6615.84,0],357.004],
	["Profiteer1",[13154.7,6602.8,0],23.6118],
	["RU_Soldier_Pilot",[15351.9,18520.6,0],265.643],
	["Tanny_PMC",[11041.1,15684.5,0],149.873],
	["MVD_Soldier_Marksman",[16890.6,1780.76,-0.0279468],31.9086],
	["Soldier_MG_PMC",[223.627,22712.1,0],129.516],
	["GUE_Soldier_MG",[2446.07,3899.76,0],262.573]
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
