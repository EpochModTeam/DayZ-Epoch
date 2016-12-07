//Towngenerator buildings moved to sqf (POI style)
//Created by "TownGenerator->POIsqf tool" © AlexAFlorov

/* Objects added from TownGenerator
	class Object0 { type = "Land_Misc_deerstand"; position[] = {4862.22, 2287.81, 0}; direction = 125; onFire = 0; };
	class Object1 { type = "Land_tent_east"; position[] = {4863.82, 2274.84, 0}; direction = 217; onFire = 0; };
	class Object2 { type = "Land_tent_east"; position[] = {4874.83, 2267.48, 0}; direction = 217; onFire = 0; };
	class Object3 { type = "RU_WarfareBFieldhHospital"; position[] = {4885.42, 2260.38, 0}; direction = 307; onFire = 0; };
	class Object4 { type = "Land_tent_east"; position[] = {4855.34, 2262.99, 0}; direction = 217; onFire = 0; };
	class Object5 { type = "RU_WarfareBFieldhHospital"; position[] = {4893.43, 2252.95, 0}; direction = 306; onFire = 0; };
	class Object6 { type = "Land_Toilet"; position[] = {4902.83, 2248.38, 0}; direction = 299; onFire = 0; };
	class Object7 { type = "Land_Misc_deerstand"; position[] = {4841.69, 2258.74, 0}; direction = 125; onFire = 0; };
	class Object8 { type = "RU_WarfareBFieldhHospital"; position[] = {4876.42, 2248.05, 0}; direction = 306; onFire = 0; };
	class Object9 { type = "RU_WarfareBFieldhHospital"; position[] = {4885.11, 2241.78, 0}; direction = 306; onFire = 0; };
	class Object10 { type = "RU_WarfareBBarracks"; position[] = {4913.5, 2241.41, 0}; direction = 127; onFire = 0; };
	class Object11 { type = "Land_Misc_deerstand"; position[] = {4933.25, 2236.43, 0}; direction = 310; onFire = 0; };
	class Object12 { type = "Land_GuardShed"; position[] = {4924.02, 2222.51, 0}; direction = 306; onFire = 0; };
	class Object13 { type = "Land_GuardShed"; position[] = {4928.72, 2219.37, 0}; direction = 306; onFire = 0; };
	class Object14 { type = "Land_GuardShed"; position[] = {4933.11, 2215.88, 0}; direction = 306; onFire = 0; };
	class Object15 { type = "Land_Misc_deerstand"; position[] = {4912.54, 2209.47, 0}; direction = 300; onFire = 0; };
	class Object16 { type = "CampEast_EP1"; position[] = {6746.89, 2784.08, 0}; direction = 42; onFire = 0; };
	class Object17 { type = "CampEast_EP1"; position[] = {6757.55, 2776.1, 0}; direction = 42; onFire = 0; };
	class Object18 { type = "USMC_WarfareBFieldhHospital"; position[] = {6767.52, 2762.48, 0}; direction = 313; onFire = 0; };
	class Object19 { type = "USMC_WarfareBFieldhHospital"; position[] = {6772.4341, 2739.3132, 0}; direction = 42; onFire = 0; };
	class Object20 { type = "CampEast"; position[] = {6295.02, 7800.98, 0}; direction = 127; onFire = 0; };
	class Object21 { type = "Camp"; position[] = {6302.78, 7796.63, 0}; direction = 36; onFire = 0; };
	class Object22 { type = "CampEast"; position[] = {6305.61, 7810.76, 0}; direction = 128; onFire = 0; };
	class Object23 { type = "Camp"; position[] = {6308.41, 7792.74, 0}; direction = 37; onFire = 0; };
	class Object24 { type = "Camp"; position[] = {6314, 7788.65, 0}; direction = 36; onFire = 0; };
	class Object25 { type = "Camp"; position[] = {6312.84, 7805.57, 0}; direction = 213; onFire = 0; };
	class Object26 { type = "Camp"; position[] = {6319.54, 7784.91, 0}; direction = 33; onFire = 0; };
	class Object27 { type = "Camp"; position[] = {6318.92, 7801.74, 0}; direction = 212; onFire = 0; };
	class Object28 { type = "Land_Misc_GContainer_Big"; position[] = {6313.24, 7844.13, 0}; direction = 304; onFire = 0; };
	class Object29 { type = "Camp"; position[] = {6325.31, 7781.19, 0}; direction = 33; onFire = 0; };
	class Object30 { type = "Camp"; position[] = {6325.1, 7798.06, 0}; direction = 212; onFire = 0; };
	class Object31 { type = "Land_Misc_GContainer_Big"; position[] = {6316.67, 7841.9, 0}; direction = 304; onFire = 0; };
	class Object32 { type = "Land_Misc_GContainer_Big"; position[] = {6320.43, 7839.67, 0}; direction = 304; onFire = 0; };
	class Object33 { type = "Camp"; position[] = {6331.19, 7777.51, 0}; direction = 30; onFire = 0; };
	class Object34 { type = "Camp"; position[] = {6331.25, 7794.36, 0}; direction = 211; onFire = 0; };
	class Object35 { type = "Camp"; position[] = {6337.11, 7790.99, 0}; direction = 213; onFire = 0; };
	class Object36 { type = "Camp"; position[] = {6343.22, 7787.23, 0}; direction = 211; onFire = 0; };
	class Object37 { type = "Camp"; position[] = {6349.45, 7783.62, 0}; direction = 212; onFire = 0; };
	class Object38 { type = "Land_Toilet"; position[] = {6353.54, 7781.55, 0}; direction = 32; onFire = 0; };
	class Object39 { type = "Land_Toilet"; position[] = {6354.75, 7780.9, 0}; direction = 32; onFire = 0; };
	class Object40 { type = "Land_Toilet"; position[] = {6355.89, 7780.34, 0}; direction = 32; onFire = 0; };
	class Object41 { type = "Land_Toilet"; position[] = {6357.09, 7779.68, 0}; direction = 32; onFire = 0; };
	class Object42 { type = "Land_tent_east"; position[] = {11940.6, 9095, 0}; direction = 219; onFire = 0; };
	class Object43 { type = "Land_Misc_deerstand"; position[] = {11837.1, 9405.64, 0}; direction = 99; onFire = 0; };
	class Object44 { type = "Land_Misc_deerstand"; position[] = {12432.6, 9287.22, 0}; direction = 295; onFire = 0; };
	class Object45 { type = "CampEast"; position[] = {12213, 9734.75, 0}; direction = 13; onFire = 0; };
	class Object46 { type = "CampEast"; position[] = {12273.1, 9724.66, 0}; direction = 13; onFire = 0; };
	class Object47 { type = "CampEast"; position[] = {12220.8, 9758.06, 0}; direction = 13; onFire = 0; };
	class Object48 { type = "CampEast"; position[] = {12249.2, 9752.89, 0}; direction = 13; onFire = 0; };
*/

[
	["Land_Misc_deerstand",[4862.22,2287.81,0],125],
	["Land_tent_east",[4863.82,2274.84,0],217],
	["Land_tent_east",[4874.83,2267.48,0],217],
	["RU_WarfareBFieldhHospital",[4885.42,2260.38,0],307],
	["Land_tent_east",[4855.34,2262.99,0],217],
	["RU_WarfareBFieldhHospital",[4893.43,2252.95,0],306],
	["Land_Toilet",[4902.83,2248.38,0],299],
	["Land_Misc_deerstand",[4841.69,2258.74,0],125],
	["RU_WarfareBFieldhHospital",[4876.42,2248.05,0],306],
	["RU_WarfareBFieldhHospital",[4885.11,2241.78,0],306],
	["RU_WarfareBBarracks",[4913.5,2241.41,0],127],
	["Land_Misc_deerstand",[4933.25,2236.43,0],310],
	["Land_GuardShed",[4924.02,2222.51,0],306],
	["Land_GuardShed",[4928.72,2219.37,0],306],
	["Land_GuardShed",[4933.11,2215.88,0],306],
	["Land_Misc_deerstand",[4912.54,2209.47,0],300],
	["CampEast_EP1",[6746.89,2784.08,0],42],
	["CampEast_EP1",[6757.55,2776.1,0],42],
	["USMC_WarfareBFieldhHospital",[6767.52,2762.48,0],313],
	["USMC_WarfareBFieldhHospital",[6772.4341,2739.3132,0],42],
	["CampEast",[6295.02,7800.98,0],127],
	["Camp",[6302.78,7796.63,0],36],
	["CampEast",[6305.61,7810.76,0],128],
	["Camp",[6308.41,7792.74,0],37],
	["Camp",[6314,7788.65,0],36],
	["Camp",[6312.84,7805.57,0],213],
	["Camp",[6319.54,7784.91,0],33],
	["Camp",[6318.92,7801.74,0],212],
	["Land_Misc_GContainer_Big",[6313.24,7844.13,0],304],
	["Camp",[6325.31,7781.19,0],33],
	["Camp",[6325.1,7798.06,0],212],
	["Land_Misc_GContainer_Big",[6316.67,7841.9,0],304],
	["Land_Misc_GContainer_Big",[6320.43,7839.67,0],304],
	["Camp",[6331.19,7777.51,0],30],
	["Camp",[6331.25,7794.36,0],211],
	["Camp",[6337.11,7790.99,0],213],
	["Camp",[6343.22,7787.23,0],211],
	["Camp",[6349.45,7783.62,0],212],
	["Land_Toilet",[6353.54,7781.55,0],32],
	["Land_Toilet",[6354.75,7780.9,0],32],
	["Land_Toilet",[6355.89,7780.34,0],32],
	["Land_Toilet",[6357.09,7779.68,0],32],
	["Land_tent_east",[11940.6,9095,0],219],
	["Land_Misc_deerstand",[11837.1,9405.64,0],99],
	["Land_Misc_deerstand",[12432.6,9287.22,0],295],
	["CampEast",[12213,9734.75,0],13],
	["CampEast",[12273.1,9724.66,0],13],
	["CampEast",[12220.8,9758.06,0],13],
	["CampEast",[12249.2,9752.89,0],13]
] call {
	private ["_blocked","_object","_position","_type"];
	{
		_blocked = false;
		_position = _x select 1;
		{if (_position distance _x < 150) exitWith {_blocked = true;};} forEach dayz_townGeneratorBlackList;
		if (!_blocked) then {
			_type = _x select 0;
			_object = _type createVehicle [0,0,0];
			_object setDir (_x select 2);
			_object setPos _position;
		};
	} count _this;
};