private ["_trader","_traders"];

_traders = [
	["ibr_lingorman2s",[3059.0198,8021.9331,2.8610229e-006],-5.0591068],
	["ibr_lingorman3s",[8348.2188,8739.2813,8.5592041],367.17648],
	["ibr_lingorman5",[7509.8115,2951.6182,-8.5830688e-006],167.27051],
	["ibr_lingorman7s",[2381.4463,4119.7832,3.8146973e-006],82.011307],
	["ibr_lingorman5s",[3925.5791,5225.2319,1.7729917],89.601418],
	["ibr_lingorman2",[3879.7634,2236.843,1.1846944],43.212208],
	["ibr_lingorman4",[5511.9951,4394.8013,4.1448889],25.054167],
	["ibr_lingorman7",[7508.0059,2951.5234,0],178.10352],
	["ibr_lingorman6",[2375.4302,4120.2432,3.8146973e-006],70.515434],
	["ibr_lingorman6s",[1737.4084,4142.3691,3.8146973e-006],184.57875],
	["RU_Worker1",[4250.4,4481.94,0],13.247],
	["Citizen2_EP1",[3011.97,5934.86,0],7.30765],
	["Worker1",[3005.1,5931.66,0],267.201],
	["Worker2",[6013.07,6629.21,0],138.415],
	["Pilot_EP1",[7033.14,7103.1,0.05],309.607],
	["Worker2",[6545.79,6867.13,0],10.4142],
	["Worker4",[7551.16,3025.2,0.98590052],258.638],
	["Pilot",[4143.93,1481.03,0.00555694],71.022],
	["RU_Madam3",[4181.92,2341.84,0],273.644],
	["CIV_EuroMan01_EP1",[3610.3,3688.41,-0.00326538],199.118],
	["CIV_EuroMan02_EP1",[3610.01,3685.41,-0.00141907],251.185],
	["Dr_Annie_Baker_EP1",[897.126,5270.09,3.6778364],257.268],
	["CIV_EuroWoman01_EP1",[891.179,5271.91,0.56924075],95.8739],
	["Citizen3_EP1",[719.3,1576.94,14.100372],72.7376],
	["Rocker4",[1724.68,4136.97,0],90.8087],
	["Damsel3",[2382.6,4114.35,0],88.6649],
	["TK_CIV_Woman02_EP1",[4236.7,4842.82,0],194.37],
	["TK_CIV_Woman03_EP1",[6676.33,6361.18,0.72185659],132.672],
	["RU_Doctor",[6678.15,4294.7,0.55937135],15.4701],
	["TK_CIV_Takistani04_EP1",[4099.89,9243.42,0],170.867],
	["Functionary1",[4144.02,1478.63,0],107.247]
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
