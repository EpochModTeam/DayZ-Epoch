/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/

private ["_antiwallhack","_houseType","_houseList","_tmp","_patchList","_house","_o","_nbhouses","_nbpatchs","_pos"];

_antiwallhack=[
	[
		"Land_A_Hospital",  // building type
		[
			[6414.05,2760.21,0], [6817.3,2702.03,0], [10517.9,2287.55,0], [11956.7,9120.21,0] // optional precomputed building positions
		],
		[
			[17.6182,-1.8418,3.23178,"Land_CncBlock_D",0],[15.7192,-1.84277,3.22177,"Land_CncBlock_D",0],[-17.4,-0.38,-4.25,"Land_CncBlock_D",90],[-17.4,2.25,-4.25,"Land_CncBlock_D",90],[-17.4,4.22,-4.25,"Land_CncBlock_D",90],[-17.42,-3.55,-7.63,"Land_CncBlock_D",90],[-13.27,2.83,-4.25,"Fort_RazorWire",180],[-13.23,4.28,-4.25,"Fort_RazorWire",180],[-16.81,1.38,-4.25,"Hedgehog",85],[-16.82,-0.6,-4.25,"Hedgehog",90],[-7.45,4.26,-4.25,"Fort_RazorWire",180]  // what to add on building (coordinates/type/angle)
		]
	],
	[
		"Land_HouseB_Tenement",
		[
			[6855.66,2496.78,0]
		],
		[
			[-9.66602,7.66602,18.3236,"Fort_RazorWire",0], [-1.30273,7.66602,18.3236,"Fort_RazorWire",0], [-9.66602,0.814453,18.3236,"Fort_RazorWire",0], [-1.30273,0.814453,18.3236,"Fort_RazorWire",0], [-15.0029,4.18359,18.3236,"Fort_RazorWire",90], [3.62109,3.95117,18.3236,"Fort_RazorWire",270], [-7.42,8.15,-20.57,"Fort_RazorWire",180], [-4.67,9.92,-21.55,"Fort_RazorWire",180]
		]
	],
	[
		"Land_A_Office02",
		[[6552.96,2807.47,0], [7036.05,2526.13,0], [10028.6,1832.52,0]], 
		[
			[2.17627, 1.98828, 5.31387,  "Land_CncBlock_D" , 0], [2.85547, 3.02246, 5.38394,  "Land_CncBlock_D" , 0], [-15.7412, 3.98145, 5.38394,  "Land_CncBlock_D" , 270], [-20.2915, 4.01563, 5.35391,  "Land_CncBlock_D" , 90], [-20.291, 1.22559, 5.36392,  "Land_CncBlock_D" , 90], [-19.0527, -0.318359, 5.38394,  "Land_CncBlock_D" , 0], [-16.6426, -0.321289, 5.38394,  "Land_CncBlock_D" , 0], [-15.4575, 1.01563, 5.35391,  "Land_CncBlock_D" , 270], [-16.7344, 5.30762, 5.38394,  "Land_CncBlock_D" , 180], [-19.0361, 5.30859, 5.38394,  "Land_CncBlock_D" , 180]
		]
	],
	[
		"Land_A_Office01",
		[[3804.1,8924.83,-0.15], [10481.5,2358.45,0], [12742.4,9593.23,0]], 
		[
			[0.837891, -1.13086, 5.93463, "Land_CncBlock_D", 90], [2.30957, -2.65918, 6.02472, "Land_CncBlock_D", 0], [3.68457, -1.2168, 6.06476, "Land_CncBlock_D", 270], [2.36914, -1.09863, 6.01471, "Land_CncBlock_D", 225], [2.4043, 0.155273, 6.14484, "Land_CncBlock_D", 180], [2.18359, -1.36035, 6.01471, "Land_CncBlock_D", 135]
		]
	],
	[
		"Land_A_statue01",
		[[3796.36,8838.01,0], [6531.07,2804.09,0], [6811.04,2455.16,0]], 
		[
			[1.50049,2.14844,-3.6926,"Land_CncBlock_D",180], [2.86523,0.0966797,-3.69263,"Land_CncBlock_D",270], [1.38232,-2.17578,-3.69305,"Land_CncBlock_D",0]
		]
	],
	[
		"Land_Barn_Metal", 
		[[2860.45,9746.05,0.682495],[4565.07,4528.81,0.199997], [6339.55,7693.31,0.0499878],[11329.8,6646.15,0.331261]], 
		[	
			[7.02,17.13,-5.74,"Misc_TyreHeap",36], [-5.4,7.85,-5.44,"SKODAWreck",181], [-7.5,8.87,-5.44,"SKODAWreck",181], [-0.99,-9.31,-5.44,"UralWreck",320],
			[8.33,8.43,-5.44,"datsun01Wreck",176], [4.13,10.16,-5.44,"SKODAWreck",176], [-7.21,-15.37,-5.44,"SKODAWreck",8], [3.3,15.19,-5.44,"UralWreck",210], 
			[-5.76,12.87,-5.44,"SKODAWreck",150], [6.76,-6.86,-5.54,"LADAWreck",85], [-0.42,-21.9,-5.75,"Misc_TyreHeap",95]
		]
	]
];

_nbhouses = 0;
_nbpatchs = 0;
{
	_houseType = _x select 0;
	_houseList = _x select 1;
	if (count _houseList == 0) then { 
		_houseList = (getMarkerpos "center") nearObjects [_houseType, 20000];
	}
	else {
		_tmp = [];
		{
			_tmp set [count _tmp, _x nearestObject _houseType];
		} forEach _houseList;
		_houseList = _tmp;
	};
	_patchList = _x select 2;
	{
		_nbhouses = _nbhouses +1;
		_house = _x;
		{
			_pos = +(_x);
			_pos resize 3;
			_pos = _house modelToWorld _pos;
			_o = createVehicle [(_x select 3), _pos, [], 0, "CAN_COLLIDE"];
			_o setDir ((getDir _house)+(_x select 4));
			_o setPosATL _pos;
			diag_log [ typeOf _o, getPosATL _o, getDir _o, 0, nil];
			_nbpatchs = _nbpatchs +1;
		} forEach _patchList;
		//diag_log format["Found building %1 at %2", _houseType, getPosATL _house ];
	} forEach _houseList;
} forEach _antiwallhack;

diag_log(format["%1: %2 buildings patched with %3 objects", __FILE__, _nbhouses, _nbpatchs]);




