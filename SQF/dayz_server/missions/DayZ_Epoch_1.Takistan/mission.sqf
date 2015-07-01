private ["_trader","_traders"];

_traders = [
	["TK_CIV_Takistani03_EP1",[1963.87,12560.5,0],44.3217],
	["TK_CIV_Woman03_EP1",[1957.42,12568.2,0],39.6604],
	["TK_CIV_Woman02_EP1",[1953.5,12571.8,0],40.8509],
	["Woodlander2",[433.2,5568.54,0],68.3431],
	["TK_CIV_Takistani05_EP1",[386.612,5569.44,0],50.1126],
	["Dr_Annie_Baker_EP1",[384.035,5573.47,0],58.5864],
	["RU_Profiteer3",[417.94,5591.24,0],184.407],
	["Profiteer1",[423.126,5590.04,0],191.358],
	["Functionary1",[431.404,5574.63,0],89.9425],
	["RU_Profiteer2",[10863.6,6316.83,7.0390654],686.38519],
	["RU_Damsel4",[10855.3,6322.54,7.0167804],7.0167804],
	["TK_CIV_Takistani06_EP1",[1954.46,12580.1,0],148.507],
	["TK_CIV_Takistani04_EP1",[1959.45,12580.1,0],236.66],
	["TK_CIV_Takistani02_EP1",[10848.9,6320.26,8.0427837],77.7288],
	["RU_Pilot",[5288.41,11157,0],135.347],
	["RU_Sportswoman5",[392.182,5563.11,0],58.1144],
	["RU_Woodlander3",[7408.47,96.8015,-0.00786185],122.687],
	["RU_Citizen4",[11127.3,12662.9,0],198.318],
	["TK_GUE_Soldier_Sniper_EP1",[748.843,10485.5,0],138.185],
	["Soldier_MG_PKM_PMC",[8030.74,2005.81,-0.00386977],175.928]
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
