private ["_trader","_traders"];

_traders = [
	["Ins_Woodlander3",[1390.53,6944.12,0],91.0347],
	["Ins_Worker2",[1394.03,6980.33,0],184.047],
	["Ins_Soldier_Sapper",[1399.69,6932.11,0],294.801],
	["Ins_Soldier_Medic",[1403.15,6935.88,0],305.71],
	["Ins_Woodlander1",[2392.69,7534.65,-0.0200195],263.407],
	["TK_Soldier_Spotter_EP1",[3561.29,6028.32,0],191.786],
	["Tanny_PMC",[4802.38,3073.36,-0.01297],268.525],
	["Ins_Lopotev",[3942.57,853.036,0],342.176],
	["Ins_Villager3",[3924.83,859.231,0.0168962],306.853],
	["Ins_Woodlander2",[3945.96,867.512,0],251.585],
	["RUS_Soldier_TL",[3945.37,853.21,0],331.563],
	["MVD_Soldier_TL",[1796.28,3674.45,0],125.488],
	["Soldier_GL_M16A2_PMC",[1198.43,1902.09,0],68.656],
	["Dr_Hladik_EP1",[3945.95,873.693,0],257.369],
	["Dr_Annie_Baker_EP1",[1415.51,6965.92,0],119.761],
	["RU_Damsel4",[1383.77,6937.13,0],117.078],
	["Soldier_TL_PMC",[4802.38,7338.27,0],175.745],
	["RU_Farmwife4",[3945.8,879.502,0],318.246],
	["CIV_Contractor1_BAF",[3932.26,883.862,0.0168583],299.434],
	["GUE_Soldier_GL",[5345.35,2304.45,0],45.3277]
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
