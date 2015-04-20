/*---------------------------------------------------------------------------
                      Author: AVendettaForYou
                          Date: 12/11/13
        If modified and released give credits where due thank you
---------------------------------------------------------------------------*/

private ["_trader","_traders"];

_traders = [
	// Branibor
	["GUE_Soldier_3",[7344.24,4301.96,0],70.4169],
	// Hero
	["Soldier_Sniper_PMC",[15598.2,16402.7,0],265.159],
	["GUE_Woodlander3",[15579.4,16376.2,0],0],
	// Misc.
	["GUE_Soldier_Pilot",[16555.7,10161.2,0.0151847],355.822],
	["GUE_Worker2",[17503.7,7155.46,0.00335389],271.781],
	["GUE_Worker2",[4075.87,7263.99,0],265.611],
	["Reynolds_PMC",[9864.43,7471.31,0],283.424],
	// Lyepestok
	["Doctor",[11710.8,15222.8,0],230.875],
	["Soldier_Sniper_KSVK_PMC",[11686.6,15193.1,0],19.6526],
	["Soldier_GL_PMC",[11684.1,15195.8,0],60.7886],
	["Citizen3",[11707.9,15225.8,0],222.935],
	["RU_Worker4",[11701.8,15231.1,0],222.73],
	["RU_Woodlander4",[11687.5,15226.8,0],309.145],
	// Bilgrad
	["RU_Woodlander4",[5552.41,8770.15,0],340.636],
	["RU_Worker4",[5542.85,8758.92,0],339.397],
	["Citizen3",[5538.16,8755.99,0],334.528],
	["Soldier_Sniper_KSVK_PMC",[5531.35,8754.43,0],304.784],
	["Soldier_GL_PMC",[5528.48,8753.55,0],16.0565],
	["Doctor",[5523.58,8750.23,0],341.785],
	// Branibor
	["Citizen3",[7357,4325.87,0],27.5198],
	["RU_Worker4",[7350.31,4331.09,0],51.0959],
	["Soldier_GL_PMC",[7361.08,4331.8,0],201.357],
	["Soldier_Sniper_KSVK_PMC",[7358.47,4332.59,0],170.363],
	["Doctor",[7398.85,4296.94,0],253.028],
	// Sabina
	["Doctor",[15295.8,9287.35,0.00631553],82.8423],
	["Soldier_Sniper_KSVK_PMC",[15318.4,9304.92,0.0108214],186.429],
	["Soldier_GL_PMC",[15313.9,9304.92,0.0106677],179.749],
	["RU_Woodlander4",[15319,9260.82,0],267.89],
	["Citizen3",[15299.1,9303.51,-0.00283599],180.973],
	["RU_Worker4",[15306.2,9303.78,0],180.9],
	// Bandit
	["GUE_Woodlander1",[10938.7,651.237,-0.0131238],28.1598],
	["RU_Worker1",[10967,654.583,0.00524795],224.194],
	["RU_Farmwife5",[10954.2,658.168,-0.00851113],124.944],
	["Dr_Hladik_EP1",[10958.1,663.196,0],138.088],
	// Hero
	["RU_Damsel5",[15595,16378.5,-0.00128174],316.384],
	["RU_Doctor",[15576,16377.4,0],33.4371],
	// Misc.
	["UN_CDF_Soldier_Pilot_EP1",[6813.01,8539.05,0.00216675],220.008],
	["Profiteer2_EP1",[5418.96,9503.33,0],96.5135],
	["Worker4",[10577.3,16777.3,0],30.9187],
	["Worker4",[17332,12930.3,-0.00674999],309.228],
	["Profiteer2_EP1",[10698.3,5983.96,0],319.982],
	["GUE_Commander",[17503.3,7163.08,-0.00295061],239.88],
	["GUE_Soldier_CO",[17503.4,7159.95,-0.003923],289.477],
	["GUE_Commander",[4073.06,7257.97,0],323.041],
	["GUE_Soldier_CO",[4074.76,7260.08,0],276.96],
	["GUE_Soldier_2",[13340.8,8610.9,-0.0100136],38.7793]
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
