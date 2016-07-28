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
	class Object19 { type = "USMC_WarfareBFieldhHospital"; position[] = {6770.4, 2739.77, 0}; direction = 42; onFire = 0; };
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

if (isServer) then {

_vehicle_1238 = objNull;
if (true) then
{
  _this = "Land_Misc_deerstand" createVehicle [4862.22, 2287.81, 0];
  _vehicle_1238 = _this;
  _this setDir 125;
  _this setPos [4862.22, 2287.81, 0];
};

_vehicle_1239 = objNull;
if (true) then
{
  _this = "Land_tent_east" createVehicle [4863.82, 2274.84, 0];
  _vehicle_1239 = _this;
  _this setDir 217;
  _this setPos [4863.82, 2274.84, 0];
};

_vehicle_1240 = objNull;
if (true) then
{
  _this = "Land_tent_east" createVehicle [4874.83, 2267.48, 0];
  _vehicle_1240 = _this;
  _this setDir 217;
  _this setPos [4874.83, 2267.48, 0];
};

_vehicle_1241 = objNull;
if (true) then
{
  _this = "RU_WarfareBFieldhHospital" createVehicle [4885.42, 2260.38, 0];
  _vehicle_1241 = _this;
  _this setDir 307;
  _this setPos [4885.42, 2260.38, 0];
};

_vehicle_1242 = objNull;
if (true) then
{
  _this = "Land_tent_east" createVehicle [4855.34, 2262.99, 0];
  _vehicle_1242 = _this;
  _this setDir 217;
  _this setPos [4855.34, 2262.99, 0];
};

_vehicle_1243 = objNull;
if (true) then
{
  _this = "RU_WarfareBFieldhHospital" createVehicle [4893.43, 2252.95, 0];
  _vehicle_1243 = _this;
  _this setDir 306;
  _this setPos [4893.43, 2252.95, 0];
};

_vehicle_1244 = objNull;
if (true) then
{
  _this = "Land_Toilet" createVehicle [4902.83, 2248.38, 0];
  _vehicle_1244 = _this;
  _this setDir 299;
  _this setPos [4902.83, 2248.38, 0];
};

_vehicle_1245 = objNull;
if (true) then
{
  _this = "Land_Misc_deerstand" createVehicle [4841.69, 2258.74, 0];
  _vehicle_1245 = _this;
  _this setDir 125;
  _this setPos [4841.69, 2258.74, 0];
};

_vehicle_1246 = objNull;
if (true) then
{
  _this = "RU_WarfareBFieldhHospital" createVehicle [4876.42, 2248.05, 0];
  _vehicle_1246 = _this;
  _this setDir 306;
  _this setPos [4876.42, 2248.05, 0];
};

_vehicle_1247 = objNull;
if (true) then
{
  _this = "RU_WarfareBFieldhHospital" createVehicle [4885.11, 2241.78, 0];
  _vehicle_1247 = _this;
  _this setDir 306;
  _this setPos [4885.11, 2241.78, 0];
};

_vehicle_1248 = objNull;
if (true) then
{
  _this = "RU_WarfareBBarracks" createVehicle [4913.5, 2241.41, 0];
  _vehicle_1248 = _this;
  _this setDir 127;
  _this setPos [4913.5, 2241.41, 0];
};

_vehicle_1249 = objNull;
if (true) then
{
  _this = "Land_Misc_deerstand" createVehicle [4933.25, 2236.43, 0];
  _vehicle_1249 = _this;
  _this setDir 310;
  _this setPos [4933.25, 2236.43, 0];
};

_vehicle_1250 = objNull;
if (true) then
{
  _this = "Land_GuardShed" createVehicle [4924.02, 2222.51, 0];
  _vehicle_1250 = _this;
  _this setDir 306;
  _this setPos [4924.02, 2222.51, 0];
};

_vehicle_1251 = objNull;
if (true) then
{
  _this = "Land_GuardShed" createVehicle [4928.72, 2219.37, 0];
  _vehicle_1251 = _this;
  _this setDir 306;
  _this setPos [4928.72, 2219.37, 0];
};

_vehicle_1252 = objNull;
if (true) then
{
  _this = "Land_GuardShed" createVehicle [4933.11, 2215.88, 0];
  _vehicle_1252 = _this;
  _this setDir 306;
  _this setPos [4933.11, 2215.88, 0];
};

_vehicle_1253 = objNull;
if (true) then
{
  _this = "Land_Misc_deerstand" createVehicle [4912.54, 2209.47, 0];
  _vehicle_1253 = _this;
  _this setDir 300;
  _this setPos [4912.54, 2209.47, 0];
};

_vehicle_1254 = objNull;
if (true) then
{
  _this = "CampEast_EP1" createVehicle [6746.89, 2784.08, 0];
  _vehicle_1254 = _this;
  _this setDir 42;
  _this setPos [6746.89, 2784.08, 0];
};

_vehicle_1255 = objNull;
if (true) then
{
  _this = "CampEast_EP1" createVehicle [6757.55, 2776.1, 0];
  _vehicle_1255 = _this;
  _this setDir 42;
  _this setPos [6757.55, 2776.1, 0];
};

_vehicle_1256 = objNull;
if (true) then
{
  _this = "USMC_WarfareBFieldhHospital" createVehicle [6767.52, 2762.48, 0];
  _vehicle_1256 = _this;
  _this setDir 313;
  _this setPos [6767.52, 2762.48, 0];
};

_vehicle_1257 = objNull;
if (true) then
{
  _this = "USMC_WarfareBFieldhHospital" createVehicle [6770.4, 2739.77, 0];
  _vehicle_1257 = _this;
  _this setDir 42;
  _this setPos [6770.4, 2739.77, 0];
};

_vehicle_1258 = objNull;
if (true) then
{
  _this = "CampEast" createVehicle [6295.02, 7800.98, 0];
  _vehicle_1258 = _this;
  _this setDir 127;
  _this setPos [6295.02, 7800.98, 0];
};

_vehicle_1259 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6302.78, 7796.63, 0];
  _vehicle_1259 = _this;
  _this setDir 36;
  _this setPos [6302.78, 7796.63, 0];
};

_vehicle_1260 = objNull;
if (true) then
{
  _this = "CampEast" createVehicle [6305.61, 7810.76, 0];
  _vehicle_1260 = _this;
  _this setDir 128;
  _this setPos [6305.61, 7810.76, 0];
};

_vehicle_1261 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6308.41, 7792.74, 0];
  _vehicle_1261 = _this;
  _this setDir 37;
  _this setPos [6308.41, 7792.74, 0];
};

_vehicle_1262 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6314, 7788.65, 0];
  _vehicle_1262 = _this;
  _this setDir 36;
  _this setPos [6314, 7788.65, 0];
};

_vehicle_1263 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6312.84, 7805.57, 0];
  _vehicle_1263 = _this;
  _this setDir 213;
  _this setPos [6312.84, 7805.57, 0];
};

_vehicle_1264 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6319.54, 7784.91, 0];
  _vehicle_1264 = _this;
  _this setDir 33;
  _this setPos [6319.54, 7784.91, 0];
};

_vehicle_1265 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6318.92, 7801.74, 0];
  _vehicle_1265 = _this;
  _this setDir 212;
  _this setPos [6318.92, 7801.74, 0];
};

_vehicle_1266 = objNull;
if (true) then
{
  _this = "Land_Misc_GContainer_Big" createVehicle [6313.24, 7844.13, 0];
  _vehicle_1266 = _this;
  _this setDir 304;
  _this setPos [6313.24, 7844.13, 0];
};

_vehicle_1267 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6325.31, 7781.19, 0];
  _vehicle_1267 = _this;
  _this setDir 33;
  _this setPos [6325.31, 7781.19, 0];
};

_vehicle_1268 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6325.1, 7798.06, 0];
  _vehicle_1268 = _this;
  _this setDir 212;
  _this setPos [6325.1, 7798.06, 0];
};

_vehicle_1269 = objNull;
if (true) then
{
  _this = "Land_Misc_GContainer_Big" createVehicle [6316.67, 7841.9, 0];
  _vehicle_1269 = _this;
  _this setDir 304;
  _this setPos [6316.67, 7841.9, 0];
};

_vehicle_1270 = objNull;
if (true) then
{
  _this = "Land_Misc_GContainer_Big" createVehicle [6320.43, 7839.67, 0];
  _vehicle_1270 = _this;
  _this setDir 304;
  _this setPos [6320.43, 7839.67, 0];
};

_vehicle_1271 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6331.19, 7777.51, 0];
  _vehicle_1271 = _this;
  _this setDir 30;
  _this setPos [6331.19, 7777.51, 0];
};

_vehicle_1272 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6331.25, 7794.36, 0];
  _vehicle_1272 = _this;
  _this setDir 211;
  _this setPos [6331.25, 7794.36, 0];
};

_vehicle_1273 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6337.11, 7790.99, 0];
  _vehicle_1273 = _this;
  _this setDir 213;
  _this setPos [6337.11, 7790.99, 0];
};

_vehicle_1274 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6343.22, 7787.23, 0];
  _vehicle_1274 = _this;
  _this setDir 211;
  _this setPos [6343.22, 7787.23, 0];
};

_vehicle_1275 = objNull;
if (true) then
{
  _this = "Camp" createVehicle [6349.45, 7783.62, 0];
  _vehicle_1275 = _this;
  _this setDir 212;
  _this setPos [6349.45, 7783.62, 0];
};

_vehicle_1276 = objNull;
if (true) then
{
  _this = "Land_Toilet" createVehicle [6353.54, 7781.55, 0];
  _vehicle_1276 = _this;
  _this setDir 32;
  _this setPos [6353.54, 7781.55, 0];
};

_vehicle_1277 = objNull;
if (true) then
{
  _this = "Land_Toilet" createVehicle [6354.75, 7780.9, 0];
  _vehicle_1277 = _this;
  _this setDir 32;
  _this setPos [6354.75, 7780.9, 0];
};

_vehicle_1278 = objNull;
if (true) then
{
  _this = "Land_Toilet" createVehicle [6355.89, 7780.34, 0];
  _vehicle_1278 = _this;
  _this setDir 32;
  _this setPos [6355.89, 7780.34, 0];
};

_vehicle_1279 = objNull;
if (true) then
{
  _this = "Land_Toilet" createVehicle [6357.09, 7779.68, 0];
  _vehicle_1279 = _this;
  _this setDir 32;
  _this setPos [6357.09, 7779.68, 0];
};

_vehicle_1280 = objNull;
if (true) then
{
  _this = "Land_tent_east" createVehicle [11940.6, 9095, 0];
  _vehicle_1280 = _this;
  _this setDir 219;
  _this setPos [11940.6, 9095, 0];
};

_vehicle_1281 = objNull;
if (true) then
{
  _this = "Land_Misc_deerstand" createVehicle [11837.1, 9405.64, 0];
  _vehicle_1281 = _this;
  _this setDir 99;
  _this setPos [11837.1, 9405.64, 0];
};

_vehicle_1282 = objNull;
if (true) then
{
  _this = "Land_Misc_deerstand" createVehicle [12432.6, 9287.22, 0];
  _vehicle_1282 = _this;
  _this setDir 295;
  _this setPos [12432.6, 9287.22, 0];
};

_vehicle_1283 = objNull;
if (true) then
{
  _this = "CampEast" createVehicle [12213, 9734.75, 0];
  _vehicle_1283 = _this;
  _this setDir 13;
  _this setPos [12213, 9734.75, 0];
};

_vehicle_1284 = objNull;
if (true) then
{
  _this = "CampEast" createVehicle [12273.1, 9724.66, 0];
  _vehicle_1284 = _this;
  _this setDir 13;
  _this setPos [12273.1, 9724.66, 0];
};

_vehicle_1285 = objNull;
if (true) then
{
  _this = "CampEast" createVehicle [12220.8, 9758.06, 0];
  _vehicle_1285 = _this;
  _this setDir 13;
  _this setPos [12220.8, 9758.06, 0];
};

_vehicle_1286 = objNull;
if (true) then
{
  _this = "CampEast" createVehicle [12249.2, 9752.89, 0];
  _vehicle_1286 = _this;
  _this setDir 13;
  _this setPos [12249.2, 9752.89, 0];
};


};
