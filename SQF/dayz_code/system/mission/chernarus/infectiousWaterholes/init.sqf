
private ["_WaterHoleArray","_ShuffleArray"];

_WaterHoleArray = [
	"BlackLake",
	"Gvozdno",
	"Gvozdno",
	"Kabanino",
	"Kopyto",
	"Mogilevka",
	"Nadezdinho",
	"NorthNadezdinho",
	"NorthPusta",
	"NorthTopolka",
	"Novy",
	"PobedaDam",
	"Pogorevka",
	"Polana",
	"Prud",
	"Sosnovy",
	"Stary",
	"Topolka",
	"Vysota",
	"WillowLake"
];

_ShuffleArray = {
	private ["_ar","_rand_array","_rand"];
	_ar = _this;
	_rand_array = [];
	while {count _ar > 0} do {
		_rand = (count _ar);
		_rand = floor (random _rand);
		_rand_array set [count _rand_array, _ar select _rand];
		_ar set [_rand, "randarray_del"];
		_ar = _ar - ["randarray_del"];
		sleep 0.001;
	};
	_rand_array;
};

_infectedWaterHoles = _WaterHoleArray call _ShuffleArray;

_i = 0;
_t = 0;
_activeArray = [];
//diag_log [ diag_tickTime, __FILE__, "Sp4wing infectious waterholes..."];
{
	if ((random 1) < 0.5) then {
		call compile preprocessFileLineNumbers ("\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\"+_x+".sqf");
		_activeArray set [count _activeArray, _x]; // set  
		_i = _i + 1;
	};
	_t = _t + 1;
	sleep 0.01;
}count _infectedWaterHoles;
//diag_log [ diag_tickTime, __FILE__, "Infectious waterholes Max,Spawned,Active:",_t,_i,_activeArray];


