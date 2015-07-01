private ["_trader","_traders"];

_traders = [
	["Soldier_MG_PKM_PMC",[8264.54,15495.9,3.7374172],56.1028],
	["GUE_Woodlander3",[8266.67,15482.2,0],218.236],
	["GUE_Woodlander2",[8254.95,15509.6,0],189.353],
	["GUE_Worker2",[8262.31,15499.4,3.5365536],55.1128],
	["Damsel3",[8262.27,15499.9,0],228.636],
	["Soldier_GL_PMC",[8243.29,15505.4,0],134.795],
	["GUE_Villager3",[12421.7,5051.93,0],6.03454],
	["Dr_Annie_Baker_EP1",[12401.6,5045.47,1.8259125],324.168],
	["CIV_EuroWoman01_EP1",[12392.7,5053.99,1.4861736],172.955],
	["US_Delta_Force_AR_EP1",[12427.5,5058.27,3.513485],281.345],
	["Graves",[12425.6,5054.96,3.5064285],321.034],
	["GUE_Commander",[12421.8,5058.99,0],24.8034],
	["Ins_Soldier_AR",[15507.7,13226.1,-0.0176228],28.4826],
	["Ins_Lopotev",[15503.2,13227.2,0],9.45836],
	["Ins_Woodlander3",[15518.8,13226.5,0.00688857],339.319],
	["Ins_Worker2",[15473.2,13187.7,0],34.3503],
	["Dr_Hladik_EP1",[15520,13250.7,-0.012341],328.894],
	["Tanny_PMC",[5154.02,4855.44,0],266.032],
	["Ins_Woodlander2",[16865,5273.56,1.3620883],0],
	["TK_Special_Forces_EP1",[6773.4,16950.3,1.3511612],328.118],
	["RUS_Commander",[5372.98,16095.3,0],246.024],
	["TK_Special_Forces_MG_EP1",[2128.3,7807.78,0],260.566],
	["RUS_Soldier2",[10395.6,8270.34,0],214.982],
	["Drake_Light",[15128.7,16420.9,0],134.335],
	["Damsel5",[15536.5,13224.5,0],0],
	["pook_Doc_Bell47",[8269.49,15490.6,0],255.248]
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
