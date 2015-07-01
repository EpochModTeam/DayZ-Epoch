private ["_trader","_traders"];

_traders = [
	["FR_Sykes",[1100.26,2854.37,0],179.651],
	["GUE_Villager4",[8387.1,2369.31,0],171.998],
	["GUE_Soldier_CO",[13246.2,6071.39,0],5.43464],
	["UN_CDF_Soldier_Crew_EP1",[6391.78,7791.1,0],294.557],
	["UN_CDF_Soldier_Pilot_EP1",[6381.81,7767.48,0],121.089],
	["Soldier_MG_PMC",[6329.11,7790.77,0],111.327],
	["Soldier_MG_PKM_PMC",[6330.2,7792.34,0],127.651],
	["GUE_Worker2",[6308.4,7801.23,0],280.564],
	["Dr_Annie_Baker_EP1",[6307.59,7793.21,0],306.597],
	["TK_GUE_Soldier_5_EP1",[4078.29,11688.6,0],190.822],
	["GUE_Soldier_2",[4086.22,11679.8,0],205.641],
	["Drake",[11459.7,11385.8,0],44.9809],
	["BAF_Soldier_AAR_DDPM",[11458,11387,0],38.9443],
	["US_Delta_Force_AR_EP1",[11473.5,11383.1,0],154.968],
	["Soldier_Sniper_PMC",[5066.9,9729.36,0],319.709],
	["Tanny_PMC",[12947.7,12763.3,0],273.252],
	["GUE_Soldier_3",[6319.75,7780.39,0],111.174],
	["GUE_Soldier_Crew",[13106.1,8253.15,3.9812155],78.3213],
	["GUE_Commander",[4063.41,11665.4,0],4.06381],
	["TK_GUE_Warlord_EP1",[4065.97,11664.7,0],13.221],
	["CIV_EuroWoman02_EP1",[4059.16,11671.9,0],69.6608],
	["RU_Damsel4",[4059.36,11681.2,0],135.772],
	["GUE_Soldier_1",[1607.49,7780.24,0],206.985],
	["BAF_Soldier_EN_MTP",[11460.6,11395.9,0],151.445],
	["Herrera_Light",[11468,11394.9,0],197.338],
	["US_Delta_Force_Medic_EP1",[11474.3,11389.6,0],243.732]
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
