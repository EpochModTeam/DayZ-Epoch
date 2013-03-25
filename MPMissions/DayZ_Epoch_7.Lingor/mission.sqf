_this = createCenter civilian;
_center_1 = _this;

_group_1 = createGroup _center_1;

_unit_2 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["RU_Worker1", [4250.3955, 4481.9404, 3.8481112], [], 0, "CAN_COLLIDE"];
  _unit_2 = _this;
  _this setDir 13.246977;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_1 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [4259.7813, 4481.9922, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1 = _this;
  _this setPos [4259.7813, 4481.9922, 3.8146973e-006];
};

_vehicle_2 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [4259.8442, 4481.999, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_2 = _this;
  _this setPos [4259.8442, 4481.999, 7.6293945e-006];
};

_vehicle_4 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [4260.189, 4479.7954, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_4 = _this;
  _this setPos [4260.189, 4479.7954, 0];
};

_vehicle_6 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [4259.2642, 4479.4463, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_6 = _this;
  _this setPos [4259.2642, 4479.4463, 3.8146973e-006];
};

_vehicle_8 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [4260.1787, 4484.5254, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_8 = _this;
  _this setPos [4260.1787, 4484.5254, 3.8146973e-005];
};

_vehicle_10 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [4260.5479, 4486.4893, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_10 = _this;
  _this setPos [4260.5479, 4486.4893, -1.1444092e-005];
};

_vehicle_12 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [4260.8511, 4488.0884, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_12 = _this;
  _this setPos [4260.8511, 4488.0884, -7.6293945e-006];
};

_vehicle_14 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [4261.0244, 4489.0308, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_14 = _this;
  _this setPos [4261.0244, 4489.0308, -7.6293945e-006];
};

_vehicle_16 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [4261.897, 4489.5439, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_16 = _this;
  _this setPos [4261.897, 4489.5439, 3.8146973e-006];
};

_vehicle_18 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [4257.1494, 4489.6807, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_18 = _this;
  _this setPos [4257.1494, 4489.6807, 7.6293945e-006];
};

_vehicle_26 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [4098.4092, 4329.665, -5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_26 = _this;
  _this setDir 118.27595;
  _this setPos [4098.4092, 4329.665, -5.3405762e-005];
};

_unit_11 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Citizen2_EP1", [3011.9712, 5934.8613, 3.5805645], [], 0, "CAN_COLLIDE"];
  _unit_11 = _this;
  _this setDir 7.3076472;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_59 = objNull;
if (true) then
{
  _this = createVehicle ["Desk", [3011.8303, 5935.6201, 3.8947544], [], 0, "CAN_COLLIDE"];
  _vehicle_59 = _this;
  _this setDir -180.86284;
  _this setPos [3011.8303, 5935.6201, 3.8947544];
};

_vehicle_60 = objNull;
if (true) then
{
  _this = createVehicle ["WoodChair", [3012.4822, 5934.7539, 3.7793715], [], 0, "CAN_COLLIDE"];
  _vehicle_60 = _this;
  _this setDir -227.09953;
  _this setPos [3012.4822, 5934.7539, 3.7793715];
};

_vehicle_61 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Chest_EP1", [3009.7896, 5931.9956, 4.1642027], [], 0, "CAN_COLLIDE"];
  _vehicle_61 = _this;
  _this setDir 89.394867;
  _this setPos [3009.7896, 5931.9956, 4.1642027];
};

_unit_15 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Worker1", [3005.1003, 5931.6553, 0.32037464], [], 0, "CAN_COLLIDE"];
  _unit_15 = _this;
  _this setDir 267.2005;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_62 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [3005.2141, 5933.4253, 0.31556273], [], 0, "CAN_COLLIDE"];
  _vehicle_62 = _this;
  _this setDir -59.247307;
  _this setPos [3005.2141, 5933.4253, 0.31556273];
};

_vehicle_63 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Wheel_cart_EP1", [3001.4761, 5934.6978, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_63 = _this;
  _this setDir 138.28281;
  _this setPos [3001.4761, 5934.6978, -3.8146973e-006];
};

_vehicle_64 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [3005.1704, 5935.4644, 0.35124215], [], 0, "CAN_COLLIDE"];
  _vehicle_64 = _this;
  _this setPos [3005.1704, 5935.4644, 0.35124215];
};

_vehicle_65 = objNull;
if (true) then
{
  _this = createVehicle ["VaultStorageLocked", [3012.9451, 5933.3184, 3.8884375], [], 0, "CAN_COLLIDE"];
  _vehicle_65 = _this;
  _this setDir 90.675438;
  _this setPos [3012.9451, 5933.3184, 3.8884375];
};

_vehicle_73 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [6012.7847, 6630.7202, 4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_73 = _this;
  _this setDir 136.34302;
  _this setPos [6012.7847, 6630.7202, 4.7683716e-006];
};

_vehicle_74 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [6011.2813, 6624.6587, 9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_74 = _this;
  _this setDir 8.7853069;
  _this setPos [6011.2813, 6624.6587, 9.5367432e-007];
};

_vehicle_75 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [6013.127, 6628.1973, 9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_75 = _this;
  _this setDir 0.77082282;
  _this setPos [6013.127, 6628.1973, 9.5367432e-007];
};

_vehicle_76 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [6011.9268, 6629.4814, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_76 = _this;
  _this setDir -54.061131;
  _this setPos [6011.9268, 6629.4814, 2.8610229e-006];
};

_vehicle_78 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6010.9263, 6629.5459, -0.52930099], [], 0, "CAN_COLLIDE"];
  _vehicle_78 = _this;
  _this setDir 91.918221;
  _this setPos [6010.9263, 6629.5459, -0.52930099];
};

_vehicle_80 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6010.8105, 6625.5591, -0.52279139], [], 0, "CAN_COLLIDE"];
  _vehicle_80 = _this;
  _this setDir 91.918221;
  _this setPos [6010.8105, 6625.5591, -0.52279139];
};

_vehicle_89 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6012.6953, 6623.6016, -0.48468429], [], 0, "CAN_COLLIDE"];
  _vehicle_89 = _this;
  _this setDir 359.37524;
  _this setPos [6012.6953, 6623.6016, -0.48468429];
};

_vehicle_93 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6015.3022, 6631.5132, -0.83070749], [], 0, "CAN_COLLIDE"];
  _vehicle_93 = _this;
  _this setDir 272.03046;
  _this setPos [6015.3022, 6631.5132, -0.83070749];
};

_vehicle_94 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6015.1797, 6627.5254, -0.83721638], [], 0, "CAN_COLLIDE"];
  _vehicle_94 = _this;
  _this setDir 272.03046;
  _this setPos [6015.1797, 6627.5254, -0.83721638];
};

_vehicle_98 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Stoplight01", [4069.2266, 1501.7034, -4.529953e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_98 = _this;
  _this setDir 187.51984;
  _this setPos [4069.2266, 1501.7034, -4.529953e-006];
};

_vehicle_100 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Stoplight01", [4069.2222, 1511.67, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_100 = _this;
  _this setDir 267.54846;
  _this setPos [4069.2222, 1511.67, 1.5258789e-005];
};

_vehicle_153 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [7002.1836, 6718.5122, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_153 = _this;
  _this setDir -32.674587;
  _this setPos [7002.1836, 6718.5122, 3.8146973e-006];
};

_vehicle_163 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [6960.6968, 6716.687, -2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_163 = _this;
  _this setDir -75.767067;
  _this setPos [6960.6968, 6716.687, -2.0980835e-005];
};

_vehicle_165 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [7032.0459, 6715.1523, -1.7166138e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_165 = _this;
  _this setDir -32.674587;
  _this setPos [7032.0459, 6715.1523, -1.7166138e-005];
};

_vehicle_167 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [7174.3286, 6719.7095, 8.6372004], [], 0, "CAN_COLLIDE"];
  _vehicle_167 = _this;
  _this setDir -32.674587;
  _this setPos [7174.3286, 6719.7095, 8.6372004];
};

_vehicle_169 = objNull;
if (true) then
{
  _this = createVehicle ["BRDMWreck", [6972.0547, 6716.2876, -9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_169 = _this;
  _this setPos [6972.0547, 6716.2876, -9.5367432e-006];
};

_vehicle_173 = objNull;
if (true) then
{
  _this = createVehicle ["Body1", [7024.21, 6714.582, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_173 = _this;
  _this setPos [7024.21, 6714.582, 2.0980835e-005];
};

_vehicle_174 = objNull;
if (true) then
{
  _this = createVehicle ["Body2", [7032.5601, 6720.2114, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_174 = _this;
  _this setPos [7032.5601, 6720.2114, -2.2888184e-005];
};

_vehicle_177 = objNull;
if (true) then
{
  _this = createVehicle ["HMMWVWreck", [7020.8237, 6717.3867, -5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_177 = _this;
  _this setDir -100.86343;
  _this setPos [7020.8237, 6717.3867, -5.7220459e-006];
};

_vehicle_179 = objNull;
if (true) then
{
  _this = createVehicle ["Mi8Wreck", [7126.4229, 6678.9072, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_179 = _this;
  _this setDir 112.1351;
  _this setPos [7126.4229, 6678.9072, 7.6293945e-006];
};

_vehicle_180 = objNull;
if (true) then
{
  _this = createVehicle ["hiluxWreck", [7030.0659, 6718.7505, -5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_180 = _this;
  _this setDir -85.205856;
  _this setPos [7030.0659, 6718.7505, -5.7220459e-006];
};

_vehicle_182 = objNull;
if (true) then
{
  _this = createVehicle ["hiluxWreck", [6998.6372, 6706.4907, -0.13066408], [], 0, "CAN_COLLIDE"];
  _vehicle_182 = _this;
  _this setDir -234.43153;
  _this setPos [6998.6372, 6706.4907, -0.13066408];
};

_vehicle_184 = objNull;
if (true) then
{
  _this = createVehicle ["datsun01Wreck", [7006.8306, 6711.436, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_184 = _this;
  _this setPos [7006.8306, 6711.436, 1.9073486e-006];
};

_vehicle_186 = objNull;
if (true) then
{
  _this = createVehicle ["datsun01Wreck", [6984.7051, 6719.5889, 1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_186 = _this;
  _this setDir -129.17189;
  _this setPos [6984.7051, 6719.5889, 1.335144e-005];
};

_vehicle_188 = objNull;
if (true) then
{
  _this = createVehicle ["datsun02Wreck", [7005.3413, 6712.9321, -9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_188 = _this;
  _this setPos [7005.3413, 6712.9321, -9.5367432e-006];
};

_vehicle_189 = objNull;
if (true) then
{
  _this = createVehicle ["Land_BagFenceLong", [7038.5918, 6722.856, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_189 = _this;
  _this setDir 95.071053;
  _this setPos [7038.5918, 6722.856, -1.9073486e-006];
};

_vehicle_191 = objNull;
if (true) then
{
  _this = createVehicle ["Land_BagFenceLong", [7038.4966, 6719.8979, -9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_191 = _this;
  _this setDir 95.071053;
  _this setPos [7038.4966, 6719.8979, -9.5367432e-006];
};

_vehicle_193 = objNull;
if (true) then
{
  _this = createVehicle ["Land_BagFenceLong", [7029.064, 6715.8281, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_193 = _this;
  _this setDir 89.523254;
  _this setPos [7029.064, 6715.8281, -1.5258789e-005];
};

_vehicle_195 = objNull;
if (true) then
{
  _this = createVehicle ["Land_BagFenceLong", [7038.1792, 6712.5532], [], 0, "CAN_COLLIDE"];
  _vehicle_195 = _this;
  _this setDir 92.07534;
  _this setPos [7038.1792, 6712.5532];
};

_vehicle_197 = objNull;
if (true) then
{
  _this = createVehicle ["Land_GuardShed", [7035.9502, 6723.7271, 0.098142877], [], 0, "CAN_COLLIDE"];
  _vehicle_197 = _this;
  _this setDir 93.618011;
  _this setPos [7035.9502, 6723.7271, 0.098142877];
};

_vehicle_200 = objNull;
if (true) then
{
  _this = createVehicle ["datsun01Wreck", [7010.833, 6727.2344, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_200 = _this;
  _this setDir -235.33638;
  _this setPos [7010.833, 6727.2344, -1.9073486e-006];
};

_vehicle_202 = objNull;
if (true) then
{
  _this = createVehicle ["SKODAWreck", [7013.7979, 6719.1035, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_202 = _this;
  _this setDir -94.321419;
  _this setPos [7013.7979, 6719.1035, -7.6293945e-006];
};

_vehicle_204 = objNull;
if (true) then
{
  _this = createVehicle ["SKODAWreck", [6990.6025, 6715.5903, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_204 = _this;
  _this setDir -67.565224;
  _this setPos [6990.6025, 6715.5903, -1.9073486e-006];
};

_vehicle_206 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7037.21, 7088.1753, -3.6239624e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_206 = _this;
  _this setDir -5.3128109;
  _this setPos [7037.21, 7088.1753, -3.6239624e-005];
};

_vehicle_208 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7009.8228, 7103.9951, -4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_208 = _this;
  _this setDir 61.908318;
  _this setPos [7009.8228, 7103.9951, -4.7683716e-006];
};

_vehicle_210 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10x", [7024.0229, 7095.5371, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_210 = _this;
  _this setDir 29.150982;
  _this setPos [7024.0229, 7095.5371, 1.9073486e-005];
};

_vehicle_216 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [7007.3916, 7065.0034, 2.0027161e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_216 = _this;
  _this setPos [7007.3916, 7065.0034, 2.0027161e-005];
};

_unit_49 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Pilot_EP1", [7033.144, 7103.0996, -1.8119812e-005], [], 0, "CAN_COLLIDE"];
  _unit_49 = _this;
  _this setDir -50.393272;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_218 = objNull;
if (true) then
{
  _this = createVehicle ["US_WarfareBAircraftFactory_Base_EP1", [7032.6265, 7101.5986, -0.30294973], [], 0, "CAN_COLLIDE"];
  _vehicle_218 = _this;
  _this setDir 91.5569;
  _this setPos [7032.6265, 7101.5986, -0.30294973];
};

_vehicle_221 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7046.355, 7097.1211, 9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_221 = _this;
  _this setDir -79.75882;
  _this setPos [7046.355, 7097.1211, 9.5367432e-007];
};

_vehicle_224 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7048.9663, 7112.625, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_224 = _this;
  _this setDir -81.812408;
  _this setPos [7048.9663, 7112.625, -1.9073486e-006];
};

_vehicle_227 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7001.2275, 7115.7017, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_227 = _this;
  _this setDir 45.435726;
  _this setPos [7001.2275, 7115.7017, 1.5258789e-005];
};

_vehicle_230 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7051.7598, 7127.8184, 6.6757202e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_230 = _this;
  _this setDir -76.161797;
  _this setPos [7051.7598, 7127.8184, 6.6757202e-005];
};

_vehicle_232 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7056.0059, 7142.7363, 4.3869019e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_232 = _this;
  _this setDir -70.717758;
  _this setPos [7056.0059, 7142.7363, 4.3869019e-005];
};

_vehicle_234 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [6990.8672, 7125.5278, -1.0490417e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_234 = _this;
  _this setDir -148.35767;
  _this setPos [6990.8672, 7125.5278, -1.0490417e-005];
};

_vehicle_237 = objNull;
if (true) then
{
  _this = createVehicle ["C130J_wreck_EP1", [7160.4795, 7028.8413, -0.9763608], [], 0, "CAN_COLLIDE"];
  _vehicle_237 = _this;
  _this setDir -94.948288;
  _this setPos [7160.4795, 7028.8413, -0.9763608];
};

_unit_51 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Worker2", [6545.7944, 6867.1309, 0.13616294], [], 0, "CAN_COLLIDE"];
  _unit_51 = _this;
  _this setDir 10.41416;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_238 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [6549.7144, 6858.3931, 0.13082904], [], 0, "CAN_COLLIDE"];
  _vehicle_238 = _this;
  _this setDir 165.20537;
  _this setPos [6549.7144, 6858.3931, 0.13082904];
};

_vehicle_239 = objNull;
if (true) then
{
  _this = createVehicle ["Bleacher_EP1", [6551.6631, 6859.7646, 0.12988916], [], 0, "CAN_COLLIDE"];
  _vehicle_239 = _this;
  _this setDir 89.958008;
  _this setPos [6551.6631, 6859.7646, 0.12988916];
};

_vehicle_240 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_BoardsPack1", [6553.749, 6864.4971, 0.12704161], [], 0, "CAN_COLLIDE"];
  _vehicle_240 = _this;
  _this setDir 180.21848;
  _this setPos [6553.749, 6864.4971, 0.12704161];
};

_vehicle_241 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Coil_EP1", [6527.7593, 6859.1826, 0.11686949], [], 0, "CAN_COLLIDE"];
  _vehicle_241 = _this;
  _this setPos [6527.7593, 6859.1826, 0.11686949];
};

_vehicle_242 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [6526.542, 6868.3838, 0.1134037], [], 0, "CAN_COLLIDE"];
  _vehicle_242 = _this;
  _this setDir 270.26187;
  _this setPos [6526.542, 6868.3838, 0.1134037];
};

_vehicle_243 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_container", [6542.1255, 6857.8682, 0.12327708], [], 0, "CAN_COLLIDE"];
  _vehicle_243 = _this;
  _this setDir 270.75836;
  _this setPos [6542.1255, 6857.8682, 0.12327708];
};

_vehicle_244 = objNull;
if (true) then
{
  _this = createVehicle ["Paleta2", [6542.8608, 6857.5757, 0.11866082], [], 0, "CAN_COLLIDE"];
  _vehicle_244 = _this;
  _this setDir 50.050522;
  _this setPos [6542.8608, 6857.5757, 0.11866082];
};

_vehicle_245 = objNull;
if (true) then
{
  _this = createVehicle ["Pile_of_wood", [6555.4971, 6875.7959, 0.15875089], [], 0, "CAN_COLLIDE"];
  _vehicle_245 = _this;
  _this setDir -0.79297096;
  _this setPos [6555.4971, 6875.7959, 0.15875089];
};

_vehicle_246 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barrel_water", [6554.2686, 6862.376, 0.14002545], [], 0, "CAN_COLLIDE"];
  _vehicle_246 = _this;
  _this setPos [6554.2686, 6862.376, 0.14002545];
};

_vehicle_247 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Rubble_EP1", [6535.2529, 6882.0449, 2.4795532e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_247 = _this;
  _this setDir -3.6153793;
  _this setPos [6535.2529, 6882.0449, 2.4795532e-005];
};

_vehicle_248 = objNull;
if (true) then
{
  _this = createVehicle ["Land_transport_crates_EP1", [6546.7632, 6861.1108, 0.14200571], [], 0, "CAN_COLLIDE"];
  _vehicle_248 = _this;
  _this setDir -175.17001;
  _this setPos [6546.7632, 6861.1108, 0.14200571];
};

_vehicle_249 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [6547.0522, 6863.2729, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_249 = _this;
  _this setDir -87.286407;
  _this setPos [6547.0522, 6863.2729, 2.0980835e-005];
};

_vehicle_251 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [6547.1968, 6865.4902, -8.5830688e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_251 = _this;
  _this setDir -87.286407;
  _this setPos [6547.1968, 6865.4902, -8.5830688e-006];
};

_vehicle_253 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [6545.9834, 6867.9663, 9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_253 = _this;
  _this setDir -177.23503;
  _this setPos [6545.9834, 6867.9663, 9.5367432e-007];
};

_vehicle_256 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Table_EP1", [6535.3096, 6859.5034, 0.12701441], [], 0, "CAN_COLLIDE"];
  _vehicle_256 = _this;
  _this setDir 94.061516;
  _this setPos [6535.3096, 6859.5034, 0.12701441];
};

_vehicle_257 = objNull;
if (true) then
{
  _this = createVehicle ["SKODAWreck", [6527.0474, 6864.104, 0.11144794], [], 0, "CAN_COLLIDE"];
  _vehicle_257 = _this;
  _this setDir 357.48425;
  _this setPos [6527.0474, 6864.104, 0.11144794];
};

_vehicle_258 = objNull;
if (true) then
{
  _this = createVehicle ["UAZWreck", [6534.5, 6864.4141, 0.15619081], [], 0, "CAN_COLLIDE"];
  _vehicle_258 = _this;
  _this setDir -86.189613;
  _this setPos [6534.5, 6864.4141, 0.15619081];
};

_unit_59 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Worker4", [7551.1641, 3025.2014, 0.98590052], [], 0, "CAN_COLLIDE"];
  _unit_59 = _this;
  _this setDir -101.36158;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_264 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [7538.8926, 3023.0486, 1.4305115e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_264 = _this;
  _this setPos [7538.8926, 3023.0486, 1.4305115e-006];
};

_vehicle_265 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [7552.5366, 3020.7312, -9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_265 = _this;
  _this setDir 60.440258;
  _this setPos [7552.5366, 3020.7312, -9.5367432e-007];
};

_vehicle_266 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4024.3315, 1634.5819, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_266 = _this;
  _this setDir 90.429932;
  _this setPos [4024.3315, 1634.5819, 1.9073486e-006];
};

_vehicle_268 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4027.5989, 1634.6813, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_268 = _this;
  _this setDir 90.429932;
  _this setPos [4027.5989, 1634.6813, 3.8146973e-006];
};

_vehicle_270 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4025.906, 1634.5331, 2.5109601], [], 0, "CAN_COLLIDE"];
  _vehicle_270 = _this;
  _this setDir 90.429932;
  _this setPos [4025.906, 1634.5331, 2.5109601];
};

_vehicle_275 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4024.509, 1650.1462, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_275 = _this;
  _this setDir 90.429932;
  _this setPos [4024.509, 1650.1462, 1.9073486e-006];
};

_vehicle_276 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4027.7764, 1650.2456, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_276 = _this;
  _this setDir 90.429932;
  _this setPos [4027.7764, 1650.2456, 3.8146973e-006];
};

_vehicle_277 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4026.0835, 1650.0974, 2.5109596], [], 0, "CAN_COLLIDE"];
  _vehicle_277 = _this;
  _this setDir 90.429932;
  _this setPos [4026.0835, 1650.0974, 2.5109596];
};

_vehicle_287 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4024.5505, 1665.8475, 1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_287 = _this;
  _this setDir 90.429932;
  _this setPos [4024.5505, 1665.8475, 1.335144e-005];
};

_vehicle_288 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4027.8179, 1665.9469, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_288 = _this;
  _this setDir 90.429932;
  _this setPos [4027.8179, 1665.9469, 1.5258789e-005];
};

_vehicle_289 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4026.125, 1665.7987, 2.5109711], [], 0, "CAN_COLLIDE"];
  _vehicle_289 = _this;
  _this setDir 90.429932;
  _this setPos [4026.125, 1665.7987, 2.5109711];
};

_vehicle_290 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4024.728, 1681.4119, 1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_290 = _this;
  _this setDir 90.429932;
  _this setPos [4024.728, 1681.4119, 1.335144e-005];
};

_vehicle_291 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4027.9954, 1681.5112, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_291 = _this;
  _this setDir 90.429932;
  _this setPos [4027.9954, 1681.5112, 1.5258789e-005];
};

_vehicle_292 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4026.3025, 1681.363, 2.5109711], [], 0, "CAN_COLLIDE"];
  _vehicle_292 = _this;
  _this setDir 90.429932;
  _this setPos [4026.3025, 1681.363, 2.5109711];
};

_vehicle_308 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [4028.6228, 1690.3645, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_308 = _this;
  _this setDir 2.3165083;
  _this setPos [4028.6228, 1690.3645, 1.1444092e-005];
};

_vehicle_310 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [4028.2632, 1625.7249, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_310 = _this;
  _this setDir 2.3165083;
  _this setPos [4028.2632, 1625.7249, 7.6293945e-006];
};

_vehicle_312 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [4036.8276, 1690.4551, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_312 = _this;
  _this setDir 2.3165083;
  _this setPos [4036.8276, 1690.4551, 1.9073486e-006];
};

_vehicle_314 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [4036.7354, 1625.7802, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_314 = _this;
  _this setDir 2.3165083;
  _this setPos [4036.7354, 1625.7802, 1.9073486e-006];
};

_vehicle_316 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [4045.1501, 1625.7771, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_316 = _this;
  _this setDir 2.3165083;
  _this setPos [4045.1501, 1625.7771, 1.9073486e-006];
};

_vehicle_318 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [4045.1294, 1690.4385, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_318 = _this;
  _this setDir 2.3165083;
  _this setPos [4045.1294, 1690.4385, 1.1444092e-005];
};

_vehicle_321 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [4052.9197, 1660.2445, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_321 = _this;
  _this setPos [4052.9197, 1660.2445, -1.1444092e-005];
};

_vehicle_322 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHRescue", [4050.1282, 1641.5254, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_322 = _this;
  _this setPos [4050.1282, 1641.5254, 5.7220459e-006];
};

_vehicle_323 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [4045.9771, 1681.688, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_323 = _this;
  _this setPos [4045.9771, 1681.688, 5.7220459e-006];
};

_vehicle_326 = objNull;
if (true) then
{
  _this = createVehicle ["US_WarfareBVehicleServicePoint_Base_EP1", [4031.0403, 1660.6776, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_326 = _this;
  _this setDir 180.37967;
  _this setPos [4031.0403, 1660.6776, 3.8146973e-006];
};

_unit_65 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Pilot", [4034.3279, 1659.9537, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _unit_65 = _this;
  _this setDir 72.854317;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_unit_66 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["RU_Madam3", [4181.9175, 2341.8435, 5.1864305], [], 0, "CAN_COLLIDE"];
  _unit_66 = _this;
  _this setDir 273.64359;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_330 = objNull;
if (true) then
{
  _this = createVehicle ["Land_sunshade_EP1", [4182.2153, 2341.1003, 5.1476407], [], 0, "CAN_COLLIDE"];
  _vehicle_330 = _this;
  _this setPos [4182.2153, 2341.1003, 5.1476407];
};

_vehicle_331 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [4184.0469, 2337.9309, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_331 = _this;
  _this setPos [4184.0469, 2337.9309, 2.8610229e-006];
};

_vehicle_332 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Carpet_rack_EP1", [4182.8921, 2341.6826, 4.6923232], [], 0, "CAN_COLLIDE"];
  _vehicle_332 = _this;
  _this setDir 198.13498;
  _this setPos [4182.8921, 2341.6826, 4.6923232];
};

_vehicle_333 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_EP1", [4183.3662, 2342.8289, 4.5924778], [], 0, "CAN_COLLIDE"];
  _vehicle_333 = _this;
  _this setDir -160.56055;
  _this setPos [4183.3662, 2342.8289, 4.5924778];
};

_vehicle_336 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3600.7373, 3696.0884, -0.64465016], [], 0, "CAN_COLLIDE"];
  _vehicle_336 = _this;
  _this setDir -233.2516;
  _this setPos [3600.7373, 3696.0884, -0.64465016];
};

_vehicle_338 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3603.7349, 3698.2659, -0.50133944], [], 0, "CAN_COLLIDE"];
  _vehicle_338 = _this;
  _this setDir -199.05846;
  _this setPos [3603.7349, 3698.2659, -0.50133944];
};

_vehicle_340 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3607.5752, 3698.8123, -0.49055767], [], 0, "CAN_COLLIDE"];
  _vehicle_340 = _this;
  _this setDir -179.30513;
  _this setPos [3607.5752, 3698.8123, -0.49055767];
};

_vehicle_342 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3611.4778, 3698.0579, -0.46155328], [], 0, "CAN_COLLIDE"];
  _vehicle_342 = _this;
  _this setDir -157.50938;
  _this setPos [3611.4778, 3698.0579, -0.46155328];
};

_vehicle_344 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3614.9824, 3696.2061, -0.42996332], [], 0, "CAN_COLLIDE"];
  _vehicle_344 = _this;
  _this setDir -148.45085;
  _this setPos [3614.9824, 3696.2061, -0.42996332];
};

_vehicle_346 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3618.1829, 3693.8066, -0.23917532], [], 0, "CAN_COLLIDE"];
  _vehicle_346 = _this;
  _this setDir -140.77544;
  _this setPos [3618.1829, 3693.8066, -0.23917532];
};

_vehicle_348 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3620.4292, 3690.6772, -0.26382336], [], 0, "CAN_COLLIDE"];
  _vehicle_348 = _this;
  _this setDir -111.78784;
  _this setPos [3620.4292, 3690.6772, -0.26382336];
};

_vehicle_350 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3621.2959, 3686.8018, -0.34412155], [], 0, "CAN_COLLIDE"];
  _vehicle_350 = _this;
  _this setDir -89.836296;
  _this setPos [3621.2959, 3686.8018, -0.34412155];
};

_vehicle_352 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3620.5303, 3682.8596, -0.29929495], [], 0, "CAN_COLLIDE"];
  _vehicle_352 = _this;
  _this setDir -66.145126;
  _this setPos [3620.5303, 3682.8596, -0.29929495];
};

_vehicle_354 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3618.176, 3679.8586, -0.29147175], [], 0, "CAN_COLLIDE"];
  _vehicle_354 = _this;
  _this setDir -36.491985;
  _this setPos [3618.176, 3679.8586, -0.29147175];
};

_vehicle_362 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3614.9348, 3677.5239, -0.42766428], [], 0, "CAN_COLLIDE"];
  _vehicle_362 = _this;
  _this setDir -31.574051;
  _this setPos [3614.9348, 3677.5239, -0.42766428];
};

_vehicle_363 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3611.2588, 3676.4917, -0.41680309], [], 0, "CAN_COLLIDE"];
  _vehicle_363 = _this;
  _this setDir -0.022483418;
  _this setPos [3611.2588, 3676.4917, -0.41680309];
};

_vehicle_364 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3607.3323, 3676.6973, -0.47064328], [], 0, "CAN_COLLIDE"];
  _vehicle_364 = _this;
  _this setDir 7.0776691;
  _this setPos [3607.3323, 3676.6973, -0.47064328];
};

_vehicle_365 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3597.2871, 3682.6611, -0.37657964], [], 0, "CAN_COLLIDE"];
  _vehicle_365 = _this;
  _this setDir 49.218327;
  _this setPos [3597.2871, 3682.6611, -0.37657964];
};

_vehicle_366 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3603.5254, 3677.8088, -0.46705386], [], 0, "CAN_COLLIDE"];
  _vehicle_366 = _this;
  _this setDir 24.308466;
  _this setPos [3603.5254, 3677.8088, -0.46705386];
};

_vehicle_367 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3600.1563, 3679.8994, -0.42016283], [], 0, "CAN_COLLIDE"];
  _vehicle_367 = _this;
  _this setDir 39.547977;
  _this setPos [3600.1563, 3679.8994, -0.42016283];
};

_vehicle_375 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3595.9851, 3685.9504, -0.35252863], [], 0, "CAN_COLLIDE"];
  _vehicle_375 = _this;
  _this setDir 82.228989;
  _this setPos [3595.9851, 3685.9504, -0.35252863];
};

_vehicle_377 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [3596.5723, 3689.6033, -0.39722514], [], 0, "CAN_COLLIDE"];
  _vehicle_377 = _this;
  _this setDir 114.75807;
  _this setPos [3596.5723, 3689.6033, -0.39722514];
};

_vehicle_379 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3608.136, 3687.3967, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_379 = _this;
  _this setPos [3608.136, 3687.3967, 0];
};

_vehicle_382 = objNull;
if (true) then
{
  _this = createVehicle ["PowGen_Big", [3618.9395, 3689.2029], [], 0, "CAN_COLLIDE"];
  _vehicle_382 = _this;
  _this setDir -16.767889;
  _this setPos [3618.9395, 3689.2029];
};

_vehicle_383 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net2", [3618.2227, 3682.4531, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_383 = _this;
  _this setDir -63.723;
  _this setPos [3618.2227, 3682.4531, 3.0517578e-005];
};

_vehicle_384 = objNull;
if (true) then
{
  _this = createVehicle ["US_WarfareBBarracks_Base_EP1", [3609.2202, 3684.4927, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_384 = _this;
  _this setPos [3609.2202, 3684.4927, -1.5258789e-005];
};

_vehicle_385 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3597.5115, 3693.2378, 0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_385 = _this;
  _this setPos [3597.5115, 3693.2378, 0.00012207031];
};

_vehicle_388 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3598.5288, 3691.9739, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_388 = _this;
  _this setPos [3598.5288, 3691.9739, -1.5258789e-005];
};

_vehicle_390 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3599.5535, 3690.085, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_390 = _this;
  _this setPos [3599.5535, 3690.085, -4.5776367e-005];
};

_vehicle_392 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3599.9688, 3688.2695, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_392 = _this;
  _this setPos [3599.9688, 3688.2695, 0];
};

_vehicle_394 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3600.6646, 3685.6267, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_394 = _this;
  _this setPos [3600.6646, 3685.6267, 1.5258789e-005];
};

_vehicle_396 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3600.7554, 3684.7537, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_396 = _this;
  _this setPos [3600.7554, 3684.7537, 0];
};

_vehicle_398 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3599.0222, 3685.6394, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_398 = _this;
  _this setPos [3599.0222, 3685.6394, 0];
};

_vehicle_400 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3599.8218, 3692.7725, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_400 = _this;
  _this setPos [3599.8218, 3692.7725, 3.0517578e-005];
};

_vehicle_402 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3598.6577, 3682.7478, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_402 = _this;
  _this setPos [3598.6577, 3682.7478, -4.5776367e-005];
};

_vehicle_404 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3600.1599, 3681.8916, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_404 = _this;
  _this setPos [3600.1599, 3681.8916, 0];
};

_vehicle_406 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3600.8157, 3682.5178, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_406 = _this;
  _this setPos [3600.8157, 3682.5178, 0];
};

_vehicle_408 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3599.7629, 3683.759, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_408 = _this;
  _this setPos [3599.7629, 3683.759, 3.0517578e-005];
};

_unit_71 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["CIV_EuroMan01_EP1", [3610.2993, 3688.4067, 0.2740716], [], 0, "CAN_COLLIDE"];
  _unit_71 = _this;
  _this setDir -160.882;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_unit_72 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["CIV_EuroMan02_EP1", [3610.0063, 3685.4143, 0.2596041], [], 0, "CAN_COLLIDE"];
  _unit_72 = _this;
  _this setDir -108.81454;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_unit_76 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Dr_Annie_Baker_EP1", [897.12573, 5270.0874, 3.6778364], [], 0, "CAN_COLLIDE"];
  _unit_76 = _this;
  _this setDir -102.73165;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_unit_77 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["CIV_EuroWoman01_EP1", [891.1792, 5271.9116, 0.56924075], [], 0, "CAN_COLLIDE"];
  _unit_77 = _this;
  _this setDir 95.87394;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_411 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [890.14648, 5274.9531], [], 0, "CAN_COLLIDE"];
  _vehicle_411 = _this;
  _this setDir 197.19943;
  _this setPos [890.14648, 5274.9531];
};

_vehicle_414 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierRedCross_EP1", [901.63324, 5275.2324, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_414 = _this;
  _this setDir 184.97194;
  _this setPos [901.63324, 5275.2324, 1.9073486e-006];
};

_vehicle_416 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_TankSmall", [871.35272, 5270.3936, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_416 = _this;
  _this setDir 88.226517;
  _this setPos [871.35272, 5270.3936, 5.7220459e-006];
};

_unit_80 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Citizen3_EP1", [719.30035, 1576.938, 14.100372], [], 0, "CAN_COLLIDE"];
  _unit_80 = _this;
  _this setDir 72.737617;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_422 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [3020.0552, 5938.1196, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_422 = _this;
  _this setDir -85.603584;
  _this setPos [3020.0552, 5938.1196, 1.1444092e-005];
};

_vehicle_423 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [7509.5303, 2945.7224, -0.29705814], [], 0, "CAN_COLLIDE"];
  _vehicle_423 = _this;
  _this setDir 2.6208634;
  _this setPos [7509.5303, 2945.7224, -0.29705814];
};

_vehicle_424 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrate_NoInteractive_", [7506.8936, 2951.8135, 1.0967255e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_424 = _this;
  _this setDir 90.282372;
  _this setPos [7506.8936, 2951.8135, 1.0967255e-005];
};

_vehicle_425 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Large", [7507.2349, 2952.9058, -4.2915344e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_425 = _this;
  _this setDir 181.83423;
  _this setPos [7507.2349, 2952.9058, -4.2915344e-006];
};

_vehicle_426 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Medium", [7508.4854, 2952.8169, 8.1062317e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_426 = _this;
  _this setDir 89.771851;
  _this setPos [7508.4854, 2952.8169, 8.1062317e-006];
};

_vehicle_427 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Small", [7509.8081, 2952.8748, -1.2397766e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_427 = _this;
  _this setDir 8.0604963;
  _this setPos [7509.8081, 2952.8748, -1.2397766e-005];
};

_vehicle_428 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Antenna", [7511.041, 2958.074, 6.3968663], [], 0, "CAN_COLLIDE"];
  _vehicle_428 = _this;
  _this setDir -33.135361;
  _this setPos [7511.041, 2958.074, 6.3968663];
};

_vehicle_430 = objNull;
if (true) then
{
  _this = createVehicle ["Land_BagFenceLong", [3064.0002, 8021.4639, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_430 = _this;
  _this setDir -83.460388;
  _this setPos [3064.0002, 8021.4639, -3.8146973e-006];
};

_vehicle_432 = objNull;
if (true) then
{
  _this = createVehicle ["Land_BagFenceLong", [3064.2795, 8023.8096, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_432 = _this;
  _this setDir -83.460388;
  _this setPos [3064.2795, 8023.8096, 2.8610229e-006];
};

_vehicle_436 = objNull;
if (true) then
{
  _this = createVehicle ["Land_BagFenceLong", [3054.6702, 8025.4917, -1.0490417e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_436 = _this;
  _this setDir -83.460388;
  _this setPos [3054.6702, 8025.4917, -1.0490417e-005];
};

_vehicle_437 = objNull;
if (true) then
{
  _this = createVehicle ["Land_BagFenceLong", [3054.3909, 8023.146, -1.7166138e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_437 = _this;
  _this setDir -83.460388;
  _this setPos [3054.3909, 8023.146, -1.7166138e-005];
};

_unit_85 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["ibr_lingorman2s", [3059.0198, 8021.9331, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _unit_85 = _this;
  _this setDir -5.0591068;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_440 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [3059.0242, 8022.8438, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_440 = _this;
  _this setDir 8.7294521;
  _this setPos [3059.0242, 8022.8438, 3.8146973e-006];
};

_vehicle_441 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [3059.6768, 8021.3618, 8.5830688e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_441 = _this;
  _this setDir 170.00513;
  _this setPos [3059.6768, 8021.3618, 8.5830688e-006];
};

_vehicle_442 = objNull;
if (true) then
{
  _this = createVehicle ["Land_covering_hut_big_EP1", [3059.1511, 8022.8965, 4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_442 = _this;
  _this setDir 188.12738;
  _this setPos [3059.1511, 8022.8965, 4.7683716e-006];
};

_vehicle_443 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_palletsfoiled", [3062.7034, 8021.5137, 9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_443 = _this;
  _this setDir 7.7950034;
  _this setPos [3062.7034, 8021.5137, 9.5367432e-006];
};

_vehicle_444 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_can", [3060.9761, 8020.916, 6.4849854e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_444 = _this;
  _this setPos [3060.9761, 8020.916, 6.4849854e-005];
};

_vehicle_445 = objNull;
if (true) then
{
  _this = createVehicle ["Paleta1", [3062.6533, 8022.9053, 1.6212463e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_445 = _this;
  _this setPos [3062.6533, 8022.9053, 1.6212463e-005];
};

_vehicle_446 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barrel_water", [3057.2195, 8021.8716, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_446 = _this;
  _this setPos [3057.2195, 8021.8716, 6.1035156e-005];
};

_vehicle_447 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_TankSmall", [3087.1904, 8026.5039, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_447 = _this;
  _this setDir 99.213409;
  _this setPos [3087.1904, 8026.5039, -3.8146973e-006];
};

_unit_87 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["ibr_lingorman3s", [8348.2188, 8739.2813, 8.5592041], [], 0, "CAN_COLLIDE"];
  _unit_87 = _this;
  _this setDir 367.17648;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_448 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo2E", [8339.4531, 8742.9795, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_448 = _this;
  _this setDir 24.328873;
  _this setPos [8339.4531, 8742.9795, 7.6293945e-006];
};

_vehicle_449 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_palletsfoiled_heap", [8341.9658, 8739.124, 7.9894919], [], 0, "CAN_COLLIDE"];
  _vehicle_449 = _this;
  _this setDir 295.72287;
  _this setPos [8341.9658, 8739.124, 7.9894919];
};

_unit_90 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["ibr_lingorman5", [7509.8115, 2951.6182, -8.5830688e-006], [], 0, "CAN_COLLIDE"];
  _unit_90 = _this;
  _this setDir 167.27051;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_450 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierRedCross_EP1", [6679.5654, 4293.8071, 3.8700938], [], 0, "CAN_COLLIDE"];
  _vehicle_450 = _this;
  _this setDir 96.069023;
  _this setPos [6679.5654, 4293.8071, 3.8700938];
};

_vehicle_452 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_Backpackheap_EP1", [4182.4282, 2340.3843, 4.7060971], [], 0, "CAN_COLLIDE"];
  _vehicle_452 = _this;
  _this setPos [4182.4282, 2340.3843, 4.7060971];
};

_vehicle_453 = objNull;
if (true) then
{
  _this = createVehicle ["Satelit", [727.2605, 1572.275, 17.612398], [], 0, "CAN_COLLIDE"];
  _vehicle_453 = _this;
  _this setDir -24.525103;
  _this setPos [727.2605, 1572.275, 17.612398];
};

_vehicle_454 = objNull;
if (true) then
{
  _this = createVehicle ["Land_transport_crates_EP1", [719.60687, 1580.7175, 14.107553], [], 0, "CAN_COLLIDE"];
  _vehicle_454 = _this;
  _this setPos [719.60687, 1580.7175, 14.107553];
};

_vehicle_456 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net3", [718.51355, 1571.7415, 14.103069], [], 0, "CAN_COLLIDE"];
  _vehicle_456 = _this;
  _this setPos [718.51355, 1571.7415, 14.103069];
};

_vehicle_457 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [720.22693, 1577.3777, 14.113554], [], 0, "CAN_COLLIDE"];
  _vehicle_457 = _this;
  _this setDir 86.831856;
  _this setPos [720.22693, 1577.3777, 14.113554];
};

_vehicle_459 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CncBlock_D", [1724.5776, 4134.0972, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_459 = _this;
  _this setPos [1724.5776, 4134.0972, 3.8146973e-006];
};

_vehicle_460 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CncBlock", [1768.2799, 4140.96], [], 0, "CAN_COLLIDE"];
  _vehicle_460 = _this;
  _this setPos [1768.2799, 4140.96];
};

_vehicle_462 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CncBlock", [1765.6605, 4140.9443, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_462 = _this;
  _this setPos [1765.6605, 4140.9443, 7.6293945e-006];
};

_vehicle_465 = objNull;
if (true) then
{
  _this = createVehicle ["Land_covering_hut_EP1", [1724.369, 4136.9204, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_465 = _this;
  _this setDir 88.205536;
  _this setPos [1724.369, 4136.9204, 3.8146973e-005];
};

_vehicle_472 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierChecked", [1766.761, 4133.8008], [], 0, "CAN_COLLIDE"];
  _vehicle_472 = _this;
  _this setPos [1766.761, 4133.8008];
};

_vehicle_474 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierChecked", [1767.0544, 4116.6021, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_474 = _this;
  _this setPos [1767.0544, 4116.6021, -1.1444092e-005];
};

_vehicle_476 = objNull;
if (true) then
{
  _this = createVehicle ["Sign_1L_Noentry_EP1", [1724.9796, 4121.3779, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_476 = _this;
  _this setDir -91.972839;
  _this setPos [1724.9796, 4121.3779, 3.8146973e-006];
};

_vehicle_478 = objNull;
if (true) then
{
  _this = createVehicle ["Sign_1L_Noentry_EP1", [1725.5295, 4133.7915], [], 0, "CAN_COLLIDE"];
  _vehicle_478 = _this;
  _this setDir -91.998009;
  _this setPos [1725.5295, 4133.7915];
};

_vehicle_482 = objNull;
if (true) then
{
  _this = createVehicle ["Land_SignB_Pub_CZ3", [1748.7087, 4141.1421, 3.5652723], [], 0, "CAN_COLLIDE"];
  _vehicle_482 = _this;
  _this setDir 0.14918116;
  _this setPos [1748.7087, 4141.1421, 3.5652723];
};

_vehicle_483 = objNull;
if (true) then
{
  _this = createVehicle ["Land_SignB_Pub_RU2", [1741.3301, 4141.0781, 3.4627702], [], 0, "CAN_COLLIDE"];
  _vehicle_483 = _this;
  _this setPos [1741.3301, 4141.0781, 3.4627702];
};

_vehicle_485 = objNull;
if (true) then
{
  _this = createVehicle ["Land_SignB_Pub_CZ1", [1734.0756, 4141.1563, 3.582387], [], 0, "CAN_COLLIDE"];
  _vehicle_485 = _this;
  _this setPos [1734.0756, 4141.1563, 3.582387];
};

_vehicle_487 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [1738.0853, 4143.479, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_487 = _this;
  _this setDir 196.25143;
  _this setPos [1738.0853, 4143.479, 3.8146973e-006];
};

_vehicle_488 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Bucket_EP1", [1738.2743, 4142.5542], [], 0, "CAN_COLLIDE"];
  _vehicle_488 = _this;
  _this setDir 0.48201698;
  _this setPos [1738.2743, 4142.5542];
};

_vehicle_489 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [1725.1685, 4136.8999, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_489 = _this;
  _this setDir -91.010567;
  _this setPos [1725.1685, 4136.8999, 7.6293945e-006];
};

_unit_99 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Rocker4", [1724.6815, 4136.9688, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _unit_99 = _this;
  _this setDir 90.808693;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_491 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [1723.614, 4136.0293], [], 0, "CAN_COLLIDE"];
  _vehicle_491 = _this;
  _this setDir -122.29593;
  _this setPos [1723.614, 4136.0293];
};

_vehicle_492 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barrel_water", [1745.8879, 4142.6265, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_492 = _this;
  _this setDir 172.86455;
  _this setPos [1745.8879, 4142.6265, 3.8146973e-006];
};

_vehicle_493 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [1748.2552, 4137.853, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_493 = _this;
  _this setPos [1748.2552, 4137.853, 7.6293945e-006];
};

_vehicle_494 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_can", [1744.1908, 4150.4619, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_494 = _this;
  _this setDir -51.489697;
  _this setPos [1744.1908, 4150.4619, 1.5258789e-005];
};

_vehicle_496 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_can", [1743.4209, 4150.5376, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_496 = _this;
  _this setDir 257.38394;
  _this setPos [1743.4209, 4150.5376, 7.6293945e-006];
};

_vehicle_499 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_can", [1743.3628, 4151.3809, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_499 = _this;
  _this setDir 257.38394;
  _this setPos [1743.3628, 4151.3809, 1.9073486e-005];
};

_vehicle_501 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_container", [1745.1577, 4148.2568, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_501 = _this;
  _this setDir -92.637192;
  _this setPos [1745.1577, 4148.2568, 3.8146973e-006];
};

_vehicle_502 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.2236, 2051.6445, 8.392334e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_502 = _this;
  _this setPos [1403.2236, 2051.6445, 8.392334e-005];
};

_vehicle_504 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.702, 2046.2094, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_504 = _this;
  _this setPos [1403.702, 2046.2094, 1.9073486e-005];
};

_vehicle_506 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.4702, 2039.1973, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_506 = _this;
  _this setPos [1403.4702, 2039.1973, -1.9073486e-006];
};

_vehicle_508 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.499, 2039.1062, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_508 = _this;
  _this setPos [1403.499, 2039.1062, 7.6293945e-006];
};

_vehicle_510 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.438, 2035.5847, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_510 = _this;
  _this setPos [1403.438, 2035.5847, 2.0980835e-005];
};

_vehicle_512 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.4159, 2031.601, 2.4795532e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_512 = _this;
  _this setPos [1403.4159, 2031.601, 2.4795532e-005];
};

_vehicle_514 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.546, 2026.2252, 1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_514 = _this;
  _this setPos [1403.546, 2026.2252, 1.335144e-005];
};

_vehicle_516 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.6064, 2019.2866, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_516 = _this;
  _this setPos [1403.6064, 2019.2866, 5.7220459e-006];
};

_vehicle_518 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.5935, 2013.1499, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_518 = _this;
  _this setPos [1403.5935, 2013.1499, 2.0980835e-005];
};

_vehicle_520 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.5012, 2007.3782, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_520 = _this;
  _this setPos [1403.5012, 2007.3782, 1.5258789e-005];
};

_vehicle_522 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1405.9001, 2026.0728, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_522 = _this;
  _this setPos [1405.9001, 2026.0728, 2.6702881e-005];
};

_vehicle_524 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.1068, 2023.432, 3.2424927e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_524 = _this;
  _this setPos [1406.1068, 2023.432, 3.2424927e-005];
};

_vehicle_526 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.0992, 2021.6211, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_526 = _this;
  _this setPos [1406.0992, 2021.6211, 3.8146973e-005];
};

_vehicle_528 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.1158, 2018.9373, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_528 = _this;
  _this setPos [1406.1158, 2018.9373, -3.8146973e-006];
};

_vehicle_530 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.1338, 2015.0096, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_530 = _this;
  _this setPos [1406.1338, 2015.0096, 3.4332275e-005];
};

_vehicle_532 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.6072, 2009.9104, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_532 = _this;
  _this setPos [1406.6072, 2009.9104, 1.1444092e-005];
};

_vehicle_534 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.613, 2004.8444, 2.8610229e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_534 = _this;
  _this setPos [1406.613, 2004.8444, 2.8610229e-005];
};

_vehicle_536 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.3947, 2000.8915, 5.1498413e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_536 = _this;
  _this setPos [1406.3947, 2000.8915, 5.1498413e-005];
};

_vehicle_538 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.2279, 1997.0323, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_538 = _this;
  _this setPos [1406.2279, 1997.0323, 3.8146973e-006];
};

_vehicle_540 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.1278, 1990.7054, 4.3869019e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_540 = _this;
  _this setPos [1406.1278, 1990.7054, 4.3869019e-005];
};

_vehicle_542 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.3862, 1985.5955, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_542 = _this;
  _this setPos [1406.3862, 1985.5955, 3.8146973e-006];
};

_vehicle_544 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.7466, 1980.457, 1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_544 = _this;
  _this setPos [1406.7466, 1980.457, 1.335144e-005];
};

_vehicle_546 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1407.5146, 1972.8853, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_546 = _this;
  _this setPos [1407.5146, 1972.8853, 1.1444092e-005];
};

_vehicle_548 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1407.5922, 1972.1659, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_548 = _this;
  _this setPos [1407.5922, 1972.1659, -3.8146973e-006];
};

_vehicle_550 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.1478, 1973.0807, -1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_550 = _this;
  _this setPos [1406.1478, 1973.0807, -1.335144e-005];
};

_vehicle_552 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.9722, 1976.0425, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_552 = _this;
  _this setPos [1403.9722, 1976.0425, 3.8146973e-006];
};

_vehicle_554 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1404.666, 1995.4025, 2.4795532e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_554 = _this;
  _this setPos [1404.666, 1995.4025, 2.4795532e-005];
};

_vehicle_556 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1402.2484, 1999.4333, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_556 = _this;
  _this setPos [1402.2484, 1999.4333, 5.7220459e-006];
};

_vehicle_558 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1402.5822, 2003.1664, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_558 = _this;
  _this setPos [1402.5822, 2003.1664, 3.8146973e-005];
};

_vehicle_560 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1403.8904, 1988.8065, -5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_560 = _this;
  _this setPos [1403.8904, 1988.8065, -5.7220459e-006];
};

_vehicle_562 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1404.714, 1978.9713, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_562 = _this;
  _this setPos [1404.714, 1978.9713, -1.5258789e-005];
};

_vehicle_564 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1405.7783, 1974.2136, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_564 = _this;
  _this setPos [1405.7783, 1974.2136, -3.8146973e-006];
};

_vehicle_566 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1408.0748, 1970.6648, 1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_566 = _this;
  _this setPos [1408.0748, 1970.6648, 1.335144e-005];
};

_vehicle_568 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1408.1173, 1975.3817, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_568 = _this;
  _this setPos [1408.1173, 1975.3817, 1.1444092e-005];
};

_vehicle_570 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1409.2897, 1966.8199, 1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_570 = _this;
  _this setPos [1409.2897, 1966.8199, 1.335144e-005];
};

_vehicle_572 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1411.4287, 1962.2711, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_572 = _this;
  _this setPos [1411.4287, 1962.2711, 1.9073486e-005];
};

_vehicle_574 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1415.6058, 1955.1791, 1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_574 = _this;
  _this setPos [1415.6058, 1955.1791, 1.335144e-005];
};

_vehicle_576 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1419.5128, 1947.8145, -9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_576 = _this;
  _this setPos [1419.5128, 1947.8145, -9.5367432e-006];
};

_vehicle_578 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1406.7238, 1968.3264, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_578 = _this;
  _this setPos [1406.7238, 1968.3264, 1.5258789e-005];
};

_vehicle_580 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1408.9993, 1962.6255, 3.2424927e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_580 = _this;
  _this setPos [1408.9993, 1962.6255, 3.2424927e-005];
};

_vehicle_582 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1410.6362, 1959.3861, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_582 = _this;
  _this setPos [1410.6362, 1959.3861, 3.8146973e-006];
};

_vehicle_584 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1413.3668, 1954.1974, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_584 = _this;
  _this setPos [1413.3668, 1954.1974, 1.9073486e-005];
};

_vehicle_586 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1415.2162, 1950.5515, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_586 = _this;
  _this setPos [1415.2162, 1950.5515, 3.0517578e-005];
};

_vehicle_588 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1418.1914, 1944.3807, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_588 = _this;
  _this setPos [1418.1914, 1944.3807, 1.5258789e-005];
};

_vehicle_590 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1419.9709, 1940.6923, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_590 = _this;
  _this setPos [1419.9709, 1940.6923, 0];
};

_vehicle_592 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1412.7903, 1954.9432, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_592 = _this;
  _this setPos [1412.7903, 1954.9432, 2.6702881e-005];
};

_vehicle_594 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1414.0262, 1951.5081, 4.7683716e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_594 = _this;
  _this setPos [1414.0262, 1951.5081, 4.7683716e-005];
};

_vehicle_596 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1414.0743, 1951.4496, 4.0054321e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_596 = _this;
  _this setPos [1414.0743, 1951.4496, 4.0054321e-005];
};

_vehicle_599 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1411.2385, 1956.5641, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_599 = _this;
  _this setPos [1411.2385, 1956.5641, 2.2888184e-005];
};

_vehicle_601 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1413.1163, 1953.3424, 2.8610229e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_601 = _this;
  _this setPos [1413.1163, 1953.3424, 2.8610229e-005];
};

_vehicle_603 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1426.1188, 1940.6849, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_603 = _this;
  _this setPos [1426.1188, 1940.6849, 1.9073486e-005];
};

_vehicle_605 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1422.9714, 1941.0532, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_605 = _this;
  _this setPos [1422.9714, 1941.0532, 3.8146973e-006];
};

_vehicle_607 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1424.3065, 1940.7756, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_607 = _this;
  _this setPos [1424.3065, 1940.7756, 2.6702881e-005];
};

_vehicle_609 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1422.6444, 1938.2953, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_609 = _this;
  _this setPos [1422.6444, 1938.2953, 3.8146973e-006];
};

_vehicle_611 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1428.98, 1932.8778, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_611 = _this;
  _this setPos [1428.98, 1932.8778, 2.0980835e-005];
};

_vehicle_613 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1431.0825, 1931.9982, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_613 = _this;
  _this setPos [1431.0825, 1931.9982, 1.9073486e-005];
};

_vehicle_615 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1434.405, 1929.829, 9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_615 = _this;
  _this setPos [1434.405, 1929.829, 9.5367432e-006];
};

_vehicle_617 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1434.6235, 1931.2589, 3.2424927e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_617 = _this;
  _this setPos [1434.6235, 1931.2589, 3.2424927e-005];
};

_vehicle_619 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1432.8658, 1933.6847, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_619 = _this;
  _this setPos [1432.8658, 1933.6847, 1.9073486e-005];
};

_vehicle_621 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1435.5049, 1926.2098, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_621 = _this;
  _this setPos [1435.5049, 1926.2098, 2.6702881e-005];
};

_vehicle_623 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1436.9396, 1924.5253, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_623 = _this;
  _this setPos [1436.9396, 1924.5253, 3.0517578e-005];
};

_vehicle_625 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1441.0435, 1922.1107, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_625 = _this;
  _this setPos [1441.0435, 1922.1107, 3.8146973e-005];
};

_vehicle_627 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1444.444, 1920.6869, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_627 = _this;
  _this setPos [1444.444, 1920.6869, 3.0517578e-005];
};

_vehicle_629 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1441.5249, 1927.229, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_629 = _this;
  _this setPos [1441.5249, 1927.229, 3.4332275e-005];
};

_vehicle_631 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1437.8228, 1930.3096, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_631 = _this;
  _this setPos [1437.8228, 1930.3096, 2.6702881e-005];
};

_vehicle_633 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1445.7821, 1923.4973, 6.2942505e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_633 = _this;
  _this setPos [1445.7821, 1923.4973, 6.2942505e-005];
};

_vehicle_635 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1450.392, 1919.5502, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_635 = _this;
  _this setPos [1450.392, 1919.5502, 2.0980835e-005];
};

_vehicle_637 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1448.7489, 1917.2361, -1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_637 = _this;
  _this setPos [1448.7489, 1917.2361, -1.335144e-005];
};

_vehicle_639 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1449.1003, 1915.0551, 4.9591064e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_639 = _this;
  _this setPos [1449.1003, 1915.0551, 4.9591064e-005];
};

_vehicle_641 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1455.8418, 1916.7179, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_641 = _this;
  _this setPos [1455.8418, 1916.7179, 3.8146973e-006];
};

_vehicle_643 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1455.8547, 1915.8413, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_643 = _this;
  _this setPos [1455.8547, 1915.8413, 4.5776367e-005];
};

_vehicle_645 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1453.7401, 1916.8666, 1.7166138e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_645 = _this;
  _this setPos [1453.7401, 1916.8666, 1.7166138e-005];
};

_vehicle_647 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1458.8568, 1912.5823, 6.4849854e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_647 = _this;
  _this setPos [1458.8568, 1912.5823, 6.4849854e-005];
};

_vehicle_649 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1460.9817, 1911.3665, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_649 = _this;
  _this setPos [1460.9817, 1911.3665, 7.6293945e-005];
};

_vehicle_651 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1455.9425, 1913.2216, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_651 = _this;
  _this setPos [1455.9425, 1913.2216, 7.6293945e-006];
};

_vehicle_653 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1466.3516, 1909.2959, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_653 = _this;
  _this setPos [1466.3516, 1909.2959, 2.2888184e-005];
};

_vehicle_655 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1465.1154, 1910.8516, -2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_655 = _this;
  _this setPos [1465.1154, 1910.8516, -2.0980835e-005];
};

_vehicle_657 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1459.7589, 1915.4115, 6.6757202e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_657 = _this;
  _this setPos [1459.7589, 1915.4115, 6.6757202e-005];
};

_vehicle_659 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1463.5752, 1908.0925, 6.6757202e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_659 = _this;
  _this setPos [1463.5752, 1908.0925, 6.6757202e-005];
};

_vehicle_661 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1470.4937, 1907.9478, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_661 = _this;
  _this setPos [1470.4937, 1907.9478, 3.0517578e-005];
};

_vehicle_663 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1470.7487, 1908.7734, 4.7683716e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_663 = _this;
  _this setPos [1470.7487, 1908.7734, 4.7683716e-005];
};

_vehicle_665 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1476.5311, 1905.5405, 3.6239624e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_665 = _this;
  _this setPos [1476.5311, 1905.5405, 3.6239624e-005];
};

_vehicle_667 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1474.4553, 1906.0409, 4.3869019e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_667 = _this;
  _this setPos [1474.4553, 1906.0409, 4.3869019e-005];
};

_vehicle_669 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1469.8922, 1905.897, 9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_669 = _this;
  _this setPos [1469.8922, 1905.897, 9.5367432e-006];
};

_vehicle_671 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1466.8738, 1906.6659, 1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_671 = _this;
  _this setPos [1466.8738, 1906.6659, 1.335144e-005];
};

_vehicle_673 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1480.2546, 1903.4077, 4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_673 = _this;
  _this setPos [1480.2546, 1903.4077, 4.7683716e-006];
};

_vehicle_675 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1478.5616, 1902.0203, 6.2942505e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_675 = _this;
  _this setPos [1478.5616, 1902.0203, 6.2942505e-005];
};

_vehicle_677 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1484.7233, 1899.718, 1.8119812e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_677 = _this;
  _this setPos [1484.7233, 1899.718, 1.8119812e-005];
};

_vehicle_679 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1488.7826, 1897.0314, 3.6239624e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_679 = _this;
  _this setPos [1488.7826, 1897.0314, 3.6239624e-005];
};

_vehicle_681 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1490.5345, 1899.7715, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_681 = _this;
  _this setPos [1490.5345, 1899.7715, 7.6293945e-006];
};

_vehicle_683 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1484.2828, 1903.0048, -1.7166138e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_683 = _this;
  _this setPos [1484.2828, 1903.0048, -1.7166138e-005];
};

_vehicle_685 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1487.201, 1901.4955, -9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_685 = _this;
  _this setPos [1487.201, 1901.4955, -9.5367432e-007];
};

_vehicle_687 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1481.8486, 1900.3966, -3.2424927e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_687 = _this;
  _this setPos [1481.8486, 1900.3966, -3.2424927e-005];
};

_vehicle_689 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1493.0559, 1897.6085, 8.5830688e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_689 = _this;
  _this setPos [1493.0559, 1897.6085, 8.5830688e-006];
};

_vehicle_691 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1493.4994, 1895.5824, 4.0054321e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_691 = _this;
  _this setPos [1493.4994, 1895.5824, 4.0054321e-005];
};

_vehicle_693 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1497.7837, 1895.1807, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_693 = _this;
  _this setPos [1497.7837, 1895.1807, 0];
};

_vehicle_695 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1499.0862, 1896.0881, 9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_695 = _this;
  _this setPos [1499.0862, 1896.0881, 9.5367432e-006];
};

_vehicle_697 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1497.7783, 1895.9447, 9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_697 = _this;
  _this setPos [1497.7783, 1895.9447, 9.5367432e-006];
};

_vehicle_699 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1496.9807, 1895.9797, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_699 = _this;
  _this setPos [1496.9807, 1895.9797, -3.8146973e-006];
};

_vehicle_745 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1500.6659, 1893.1949, -4.7683716e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_745 = _this;
  _this setDir -8.0373869;
  _this setPos [1500.6659, 1893.1949, -4.7683716e-007];
};

_vehicle_746 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1504.2588, 1891.5118, -0.59274149], [], 0, "CAN_COLLIDE"];
  _vehicle_746 = _this;
  _this setDir -8.0373869;
  _this setPos [1504.2588, 1891.5118, -0.59274149];
};

_vehicle_747 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1504.2755, 1892.9584, -0.4581089], [], 0, "CAN_COLLIDE"];
  _vehicle_747 = _this;
  _this setDir -8.0373869;
  _this setPos [1504.2755, 1892.9584, -0.4581089];
};

_vehicle_748 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1502.1958, 1895.1141, 0.097434998], [], 0, "CAN_COLLIDE"];
  _vehicle_748 = _this;
  _this setDir -8.0373869;
  _this setPos [1502.1958, 1895.1141, 0.097434998];
};

_vehicle_749 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1505.8545, 1888.0815, -3.2030048], [], 0, "CAN_COLLIDE"];
  _vehicle_749 = _this;
  _this setDir -8.0373869;
  _this setPos [1505.8545, 1888.0815, -3.2030048];
};

_vehicle_750 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1507.5101, 1886.6147, -4.2255135], [], 0, "CAN_COLLIDE"];
  _vehicle_750 = _this;
  _this setDir -8.0373869;
  _this setPos [1507.5101, 1886.6147, -4.2255135];
};

_vehicle_751 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1511.9116, 1884.7975, -5.1324883], [], 0, "CAN_COLLIDE"];
  _vehicle_751 = _this;
  _this setDir -8.0373869;
  _this setPos [1511.9116, 1884.7975, -5.1324883];
};

_vehicle_752 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1515.4779, 1883.8634, -5.9944592], [], 0, "CAN_COLLIDE"];
  _vehicle_752 = _this;
  _this setDir -8.0373869;
  _this setPos [1515.4779, 1883.8634, -5.9944592];
};

_vehicle_753 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1511.6727, 1889.9332, -2.8802185], [], 0, "CAN_COLLIDE"];
  _vehicle_753 = _this;
  _this setDir -8.0373869;
  _this setPos [1511.6727, 1889.9332, -2.8802185];
};

_vehicle_754 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1507.5763, 1892.4655, -1.2019415], [], 0, "CAN_COLLIDE"];
  _vehicle_754 = _this;
  _this setDir -8.0373869;
  _this setPos [1507.5763, 1892.4655, -1.2019415];
};

_vehicle_755 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1516.4093, 1886.8326, -5.3048124], [], 0, "CAN_COLLIDE"];
  _vehicle_755 = _this;
  _this setDir -8.0373869;
  _this setPos [1516.4093, 1886.8326, -5.3048124];
};

_vehicle_756 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1521.5264, 1883.5691, -7.0268135], [], 0, "CAN_COLLIDE"];
  _vehicle_756 = _this;
  _this setDir -8.0373869;
  _this setPos [1521.5264, 1883.5691, -7.0268135];
};

_vehicle_757 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1520.223, 1881.0479, -8.5625868], [], 0, "CAN_COLLIDE"];
  _vehicle_757 = _this;
  _this setDir -8.0373869;
  _this setPos [1520.223, 1881.0479, -8.5625868];
};

_vehicle_758 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1520.8756, 1878.9381, -10.467565], [], 0, "CAN_COLLIDE"];
  _vehicle_758 = _this;
  _this setDir -8.0373869;
  _this setPos [1520.8756, 1878.9381, -10.467565];
};

_vehicle_759 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1527.3184, 1881.5275, -9.4580536], [], 0, "CAN_COLLIDE"];
  _vehicle_759 = _this;
  _this setDir -8.0373869;
  _this setPos [1527.3184, 1881.5275, -9.4580536];
};

_vehicle_760 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1527.4541, 1880.6604, -10.198848], [], 0, "CAN_COLLIDE"];
  _vehicle_760 = _this;
  _this setDir -8.0373869;
  _this setPos [1527.4541, 1880.6604, -10.198848];
};

_vehicle_761 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1525.2163, 1881.3804, -9.3726749], [], 0, "CAN_COLLIDE"];
  _vehicle_761 = _this;
  _this setDir -8.0373869;
  _this setPos [1525.2163, 1881.3804, -9.3726749];
};

_vehicle_762 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1530.8822, 1877.8531, -11.437141], [], 0, "CAN_COLLIDE"];
  _vehicle_762 = _this;
  _this setDir -8.0373869;
  _this setPos [1530.8822, 1877.8531, -11.437141];
};

_vehicle_763 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1533.1561, 1876.9471, -11.417229], [], 0, "CAN_COLLIDE"];
  _vehicle_763 = _this;
  _this setDir -8.0373869;
  _this setPos [1533.1561, 1876.9471, -11.417229];
};

_vehicle_764 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1527.9069, 1878.0786, -12.394706], [], 0, "CAN_COLLIDE"];
  _vehicle_764 = _this;
  _this setDir -8.0373869;
  _this setPos [1527.9069, 1878.0786, -12.394706];
};

_vehicle_765 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1538.7627, 1875.647, -11.582319], [], 0, "CAN_COLLIDE"];
  _vehicle_765 = _this;
  _this setDir -8.0373869;
  _this setPos [1538.7627, 1875.647, -11.582319];
};

_vehicle_766 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1537.3218, 1877.0143, -11.121175], [], 0, "CAN_COLLIDE"];
  _vehicle_766 = _this;
  _this setDir -8.0373869;
  _this setPos [1537.3218, 1877.0143, -11.121175];
};

_vehicle_767 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1531.3795, 1880.7809, -9.2114944], [], 0, "CAN_COLLIDE"];
  _vehicle_767 = _this;
  _this setDir -8.0373869;
  _this setPos [1531.3795, 1880.7809, -9.2114944];
};

_vehicle_768 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1536.182, 1874.0676, -12.792175], [], 0, "CAN_COLLIDE"];
  _vehicle_768 = _this;
  _this setDir -8.0373869;
  _this setPos [1536.182, 1874.0676, -12.792175];
};

_vehicle_769 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1543.0535, 1874.8912, -13.025449], [], 0, "CAN_COLLIDE"];
  _vehicle_769 = _this;
  _this setDir -8.0373869;
  _this setPos [1543.0535, 1874.8912, -13.025449];
};

_vehicle_770 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1543.1899, 1875.745, -12.766273], [], 0, "CAN_COLLIDE"];
  _vehicle_770 = _this;
  _this setDir -8.0373869;
  _this setPos [1543.1899, 1875.745, -12.766273];
};

_vehicle_771 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1549.3676, 1873.3518, -15.173582], [], 0, "CAN_COLLIDE"];
  _vehicle_771 = _this;
  _this setDir -8.0373869;
  _this setPos [1549.3676, 1873.3518, -15.173582];
};

_vehicle_772 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1547.2419, 1873.5573, -14.799598], [], 0, "CAN_COLLIDE"];
  _vehicle_772 = _this;
  _this setDir -8.0373869;
  _this setPos [1547.2419, 1873.5573, -14.799598];
};

_vehicle_773 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1542.7439, 1872.7767, -13.678513], [], 0, "CAN_COLLIDE"];
  _vehicle_773 = _this;
  _this setDir -8.0373869;
  _this setPos [1542.7439, 1872.7767, -13.678513];
};

_vehicle_774 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1539.6477, 1873.1162, -12.83673], [], 0, "CAN_COLLIDE"];
  _vehicle_774 = _this;
  _this setDir -8.0373869;
  _this setPos [1539.6477, 1873.1162, -12.83673];
};

_vehicle_775 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1553.3524, 1871.7606, -15.788325], [], 0, "CAN_COLLIDE"];
  _vehicle_775 = _this;
  _this setDir -8.0373869;
  _this setPos [1553.3524, 1871.7606, -15.788325];
};

_vehicle_776 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1551.8699, 1870.1497, -16.441624], [], 0, "CAN_COLLIDE"];
  _vehicle_776 = _this;
  _this setDir -8.0373869;
  _this setPos [1551.8699, 1870.1497, -16.441624];
};

_vehicle_777 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1558.2931, 1868.7319, -16.819935], [], 0, "CAN_COLLIDE"];
  _vehicle_777 = _this;
  _this setDir -8.0373869;
  _this setPos [1558.2931, 1868.7319, -16.819935];
};

_vehicle_778 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1562.6881, 1866.6398, -17.395283], [], 0, "CAN_COLLIDE"];
  _vehicle_778 = _this;
  _this setDir -8.0373869;
  _this setPos [1562.6881, 1866.6398, -17.395283];
};

_vehicle_779 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1564.0398, 1869.5975, -17.674089], [], 0, "CAN_COLLIDE"];
  _vehicle_779 = _this;
  _this setDir -8.0373869;
  _this setPos [1564.0398, 1869.5975, -17.674089];
};

_vehicle_780 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1557.3975, 1871.9246, -16.484322], [], 0, "CAN_COLLIDE"];
  _vehicle_780 = _this;
  _this setDir -8.0373869;
  _this setPos [1557.3975, 1871.9246, -16.484322];
};

_vehicle_781 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1560.4985, 1870.8387, -17.098413], [], 0, "CAN_COLLIDE"];
  _vehicle_781 = _this;
  _this setDir -8.0373869;
  _this setPos [1560.4985, 1870.8387, -17.098413];
};

_vehicle_782 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1555.3523, 1869.002, -16.80928], [], 0, "CAN_COLLIDE"];
  _vehicle_782 = _this;
  _this setDir -8.0373869;
  _this setPos [1555.3523, 1869.002, -16.80928];
};

_vehicle_783 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1566.8391, 1867.808, -17.859123], [], 0, "CAN_COLLIDE"];
  _vehicle_783 = _this;
  _this setDir -8.0373869;
  _this setPos [1566.8391, 1867.808, -17.859123];
};

_vehicle_784 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1567.5612, 1865.8641, -17.782013], [], 0, "CAN_COLLIDE"];
  _vehicle_784 = _this;
  _this setDir -8.0373869;
  _this setPos [1567.5612, 1865.8641, -17.782013];
};

_vehicle_785 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1571.8601, 1866.0662, -17.887877], [], 0, "CAN_COLLIDE"];
  _vehicle_785 = _this;
  _this setDir -8.0373869;
  _this setPos [1571.8601, 1866.0662, -17.887877];
};

_vehicle_786 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1573.0223, 1867.1467, -17.964603], [], 0, "CAN_COLLIDE"];
  _vehicle_786 = _this;
  _this setDir -8.0373869;
  _this setPos [1573.0223, 1867.1467, -17.964603];
};

_vehicle_787 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1571.7471, 1866.8213, -17.937065], [], 0, "CAN_COLLIDE"];
  _vehicle_787 = _this;
  _this setDir -8.0373869;
  _this setPos [1571.7471, 1866.8213, -17.937065];
};

_vehicle_788 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1570.9531, 1866.7446, -17.951029], [], 0, "CAN_COLLIDE"];
  _vehicle_788 = _this;
  _this setDir -8.0373869;
  _this setPos [1570.9531, 1866.7446, -17.951029];
};

_vehicle_834 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1574.014, 1864.0258, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_834 = _this;
  _this setPos [1574.014, 1864.0258, 7.6293945e-006];
};

_vehicle_836 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1575.6329, 1862.0518, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_836 = _this;
  _this setPos [1575.6329, 1862.0518, 2.0980835e-005];
};

_vehicle_838 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1574.6757, 1860.9238, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_838 = _this;
  _this setPos [1574.6757, 1860.9238, 1.5258789e-005];
};

_vehicle_840 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1577.7784, 1858.4786, 6.6757202e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_840 = _this;
  _this setPos [1577.7784, 1858.4786, 6.6757202e-006];
};

_vehicle_842 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1579.7792, 1857.7972, 9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_842 = _this;
  _this setPos [1579.7792, 1857.7972, 9.5367432e-007];
};

_vehicle_844 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1582.4124, 1856.6359, 9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_844 = _this;
  _this setPos [1582.4124, 1856.6359, 9.5367432e-007];
};

_vehicle_846 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1584.9603, 1854.8326, -9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_846 = _this;
  _this setPos [1584.9603, 1854.8326, -9.5367432e-007];
};

_vehicle_848 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1587.2229, 1853.6354, 6.6757202e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_848 = _this;
  _this setPos [1587.2229, 1853.6354, 6.6757202e-006];
};

_vehicle_850 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1579.7731, 1861.0508, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_850 = _this;
  _this setPos [1579.7731, 1861.0508, 1.1444092e-005];
};

_vehicle_852 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1578.2852, 1861.575, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_852 = _this;
  _this setPos [1578.2852, 1861.575, 3.8146973e-006];
};

_vehicle_854 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1582.8229, 1859.0016, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_854 = _this;
  _this setPos [1582.8229, 1859.0016, 1.5258789e-005];
};

_vehicle_856 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1588.0621, 1855.8453, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_856 = _this;
  _this setPos [1588.0621, 1855.8453, 1.1444092e-005];
};

_vehicle_858 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1591.6143, 1852.7014, -2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_858 = _this;
  _this setPos [1591.6143, 1852.7014, -2.8610229e-006];
};

_vehicle_860 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1595.337, 1849.483, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_860 = _this;
  _this setPos [1595.337, 1849.483, 2.8610229e-006];
};

_vehicle_862 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1599.2668, 1846.2048, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_862 = _this;
  _this setPos [1599.2668, 1846.2048, 3.8146973e-006];
};

_vehicle_864 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1592.6093, 1849.7126, -2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_864 = _this;
  _this setPos [1592.6093, 1849.7126, -2.8610229e-006];
};

_vehicle_866 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1590.4684, 1851.5116, 9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_866 = _this;
  _this setPos [1590.4684, 1851.5116, 9.5367432e-007];
};

_vehicle_868 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1592.4728, 1850.4476, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_868 = _this;
  _this setPos [1592.4728, 1850.4476, -1.9073486e-006];
};

_vehicle_870 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1594.479, 1849.2231, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_870 = _this;
  _this setPos [1594.479, 1849.2231, 0];
};

_vehicle_872 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1596.1107, 1848.1119, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_872 = _this;
  _this setPos [1596.1107, 1848.1119, 3.8146973e-006];
};

_vehicle_874 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1598.3942, 1847.8588, -6.6757202e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_874 = _this;
  _this setPos [1598.3942, 1847.8588, -6.6757202e-006];
};

_vehicle_876 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1602.2103, 1844.8295, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_876 = _this;
  _this setPos [1602.2103, 1844.8295, 3.8146973e-006];
};

_vehicle_878 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1602.8276, 1843.3445, -4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_878 = _this;
  _this setPos [1602.8276, 1843.3445, -4.7683716e-006];
};

_vehicle_880 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1603.1504, 1841.9563, -4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_880 = _this;
  _this setPos [1603.1504, 1841.9563, -4.7683716e-006];
};

_vehicle_882 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1603.6025, 1840.402, -1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_882 = _this;
  _this setPos [1603.6025, 1840.402, -1.335144e-005];
};

_vehicle_884 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1604.3562, 1839.1985, -9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_884 = _this;
  _this setPos [1604.3562, 1839.1985, -9.5367432e-007];
};

_vehicle_886 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1605.6774, 1838.3353, -9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_886 = _this;
  _this setPos [1605.6774, 1838.3353, -9.5367432e-007];
};

_vehicle_888 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1607.1445, 1837.4667, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_888 = _this;
  _this setPos [1607.1445, 1837.4667, -7.6293945e-006];
};

_vehicle_890 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1608.9497, 1836.5073, 9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_890 = _this;
  _this setPos [1608.9497, 1836.5073, 9.5367432e-006];
};

_vehicle_892 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1609.9916, 1835.7577, -6.6757202e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_892 = _this;
  _this setPos [1609.9916, 1835.7577, -6.6757202e-006];
};

_vehicle_894 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1612.5756, 1833.2268, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_894 = _this;
  _this setPos [1612.5756, 1833.2268, 1.5258789e-005];
};

_vehicle_896 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1615.2919, 1831.1049, 1.6212463e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_896 = _this;
  _this setPos [1615.2919, 1831.1049, 1.6212463e-005];
};

_vehicle_898 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1618.1664, 1828.9205, -5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_898 = _this;
  _this setPos [1618.1664, 1828.9205, -5.7220459e-006];
};

_vehicle_900 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1619.5602, 1827.7673, 9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_900 = _this;
  _this setPos [1619.5602, 1827.7673, 9.5367432e-007];
};

_vehicle_902 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1623.8699, 1824.0315, 1.6212463e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_902 = _this;
  _this setPos [1623.8699, 1824.0315, 1.6212463e-005];
};

_vehicle_904 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1617.2003, 1826.7382, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_904 = _this;
  _this setPos [1617.2003, 1826.7382, 3.8146973e-006];
};

_vehicle_906 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1614.1605, 1828.5406, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_906 = _this;
  _this setPos [1614.1605, 1828.5406, 1.9073486e-006];
};

_vehicle_908 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1611.6143, 1829.9893, -1.7166138e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_908 = _this;
  _this setPos [1611.6143, 1829.9893, -1.7166138e-005];
};

_vehicle_910 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1611.3544, 1830.2028, -2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_910 = _this;
  _this setPos [1611.3544, 1830.2028, -2.8610229e-006];
};

_vehicle_912 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1613.1691, 1828.2498, -1.8119812e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_912 = _this;
  _this setPos [1613.1691, 1828.2498, -1.8119812e-005];
};

_vehicle_914 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1614.2483, 1827.1924, 2.1934509e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_914 = _this;
  _this setPos [1614.2483, 1827.1924, 2.1934509e-005];
};

_vehicle_916 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1616.1692, 1825.5277, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_916 = _this;
  _this setPos [1616.1692, 1825.5277, -2.2888184e-005];
};

_vehicle_918 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1619.6238, 1823.6997, 9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_918 = _this;
  _this setPos [1619.6238, 1823.6997, 9.5367432e-006];
};

_vehicle_920 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1622.7299, 1821.4688, 1.5735626e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_920 = _this;
  _this setPos [1622.7299, 1821.4688, 1.5735626e-005];
};

_vehicle_922 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1625.9869, 1819.113, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_922 = _this;
  _this setPos [1625.9869, 1819.113, 2.0980835e-005];
};

_vehicle_924 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1627.8781, 1818.1185, 8.058548e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_924 = _this;
  _this setPos [1627.8781, 1818.1185, 8.058548e-005];
};

_vehicle_926 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1632.2449, 1815.8772, 1.4781952e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_926 = _this;
  _this setPos [1632.2449, 1815.8772, 1.4781952e-005];
};

_vehicle_928 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1635.6849, 1814.3217, 9.9658966e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_928 = _this;
  _this setPos [1635.6849, 1814.3217, 9.9658966e-005];
};

_vehicle_930 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1640.1884, 1811.8916, 1.2397766e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_930 = _this;
  _this setPos [1640.1884, 1811.8916, 1.2397766e-005];
};

_vehicle_932 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1643.4092, 1809.8962, 2.2649765e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_932 = _this;
  _this setPos [1643.4092, 1809.8962, 2.2649765e-005];
};

_vehicle_934 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1646.3644, 1808.0806, 7.8678131e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_934 = _this;
  _this setPos [1646.3644, 1808.0806, 7.8678131e-006];
};

_vehicle_936 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1649.7631, 1806.2141, -1.0728836e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_936 = _this;
  _this setPos [1649.7631, 1806.2141, -1.0728836e-005];
};

_vehicle_938 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1654.1132, 1803.8894, 7.390976e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_938 = _this;
  _this setPos [1654.1132, 1803.8894, 7.390976e-006];
};

_vehicle_940 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1655.8881, 1802.8428, -1.6689301e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_940 = _this;
  _this setPos [1655.8881, 1802.8428, -1.6689301e-006];
};

_vehicle_942 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2160.0034, 2466.4324, 1.168251e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_942 = _this;
  _this setPos [2160.0034, 2466.4324, 1.168251e-005];
};

_vehicle_944 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2160.1599, 2459.8899, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_944 = _this;
  _this setPos [2160.1599, 2459.8899, 2.8610229e-006];
};

_vehicle_946 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2160.196, 2455.3699, 1.4543533e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_946 = _this;
  _this setPos [2160.196, 2455.3699, 1.4543533e-005];
};

_vehicle_948 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2160.5281, 2450.511, 2.1457672e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_948 = _this;
  _this setPos [2160.5281, 2450.511, 2.1457672e-005];
};

_vehicle_950 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2160.7393, 2446.6011, 1.6212463e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_950 = _this;
  _this setPos [2160.7393, 2446.6011, 1.6212463e-005];
};

_vehicle_952 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2160.7922, 2440.0947, -2.7656555e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_952 = _this;
  _this setPos [2160.7922, 2440.0947, -2.7656555e-005];
};

_vehicle_954 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2160.8113, 2435.8203, -2.5749207e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_954 = _this;
  _this setPos [2160.8113, 2435.8203, -2.5749207e-005];
};

_vehicle_956 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2160.8635, 2432.8616, -2.1934509e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_956 = _this;
  _this setPos [2160.8635, 2432.8616, -2.1934509e-005];
};

_vehicle_958 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2157.4131, 2433.8428, -1.0967255e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_958 = _this;
  _this setPos [2157.4131, 2433.8428, -1.0967255e-005];
};

_vehicle_960 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2156.6372, 2438.1555, -2.5749207e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_960 = _this;
  _this setPos [2156.6372, 2438.1555, -2.5749207e-005];
};

_vehicle_962 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2156.8906, 2442.6497, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_962 = _this;
  _this setPos [2156.8906, 2442.6497, 1.9073486e-005];
};

_vehicle_964 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2157.6128, 2449.0461, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_964 = _this;
  _this setPos [2157.6128, 2449.0461, 2.2888184e-005];
};

_vehicle_966 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2158.0029, 2454.2158, 1.502037e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_966 = _this;
  _this setPos [2158.0029, 2454.2158, 1.502037e-005];
};

_vehicle_968 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2158.0378, 2458.3794, 1.4543533e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_968 = _this;
  _this setPos [2158.0378, 2458.3794, 1.4543533e-005];
};

_vehicle_970 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2158.0134, 2461.4993, 2.1934509e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_970 = _this;
  _this setPos [2158.0134, 2461.4993, 2.1934509e-005];
};

_vehicle_972 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2158.0381, 2465.4204, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_972 = _this;
  _this setPos [2158.0381, 2465.4204, 5.7220459e-006];
};

_vehicle_976 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2163.5432, 2471.3306, 2.5510788e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_976 = _this;
  _this setPos [2163.5432, 2471.3306, 2.5510788e-005];
};

_vehicle_978 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2163.2424, 2468.4744, 4.2915344e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_978 = _this;
  _this setPos [2163.2424, 2468.4744, 4.2915344e-006];
};

_vehicle_980 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2163.343, 2464.7673, 1.502037e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_980 = _this;
  _this setPos [2163.343, 2464.7673, 1.502037e-005];
};

_vehicle_982 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2163.7441, 2461.0251, 2.2172928e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_982 = _this;
  _this setPos [2163.7441, 2461.0251, 2.2172928e-005];
};

_vehicle_984 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2163.9321, 2457.9741, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_984 = _this;
  _this setPos [2163.9321, 2457.9741, 2.8610229e-006];
};

_vehicle_986 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2164.0303, 2454.2068, 2.3603439e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_986 = _this;
  _this setPos [2164.0303, 2454.2068, 2.3603439e-005];
};

_vehicle_988 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2163.8862, 2448.4146], [], 0, "CAN_COLLIDE"];
  _vehicle_988 = _this;
  _this setPos [2163.8862, 2448.4146];
};

_vehicle_990 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2168.313, 2388.6794, 4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_990 = _this;
  _this setPos [2168.313, 2388.6794, 4.196167e-005];
};

_vehicle_992 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2164.052, 2440.2805, -2.4795532e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_992 = _this;
  _this setPos [2164.052, 2440.2805, -2.4795532e-005];
};

_vehicle_994 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2164.1821, 2437.9631, -2.0027161e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_994 = _this;
  _this setPos [2164.1821, 2437.9631, -2.0027161e-005];
};

_vehicle_996 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2164.0952, 2435.261, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_996 = _this;
  _this setPos [2164.0952, 2435.261, 2.8610229e-006];
};

_vehicle_998 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2164.2598, 2433.3267, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_998 = _this;
  _this setPos [2164.2598, 2433.3267, -3.8146973e-005];
};

_vehicle_1000 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2162.6985, 2432.7651, -5.2452087e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1000 = _this;
  _this setPos [2162.6985, 2432.7651, -5.2452087e-006];
};

_vehicle_1002 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2159.8933, 2432.1731, -5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1002 = _this;
  _this setPos [2159.8933, 2432.1731, -5.3405762e-005];
};

_vehicle_1004 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2158.9741, 2432.5574, -7.1048737e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1004 = _this;
  _this setPos [2158.9741, 2432.5574, -7.1048737e-005];
};

_vehicle_1006 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2157.8223, 2433.0657, -4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1006 = _this;
  _this setPos [2157.8223, 2433.0657, -4.196167e-005];
};

_vehicle_1010 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2165.6873, 2432.958, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1010 = _this;
  _this setPos [2165.6873, 2432.958, 2.2888184e-005];
};

_vehicle_1013 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2386.3433, 4153.5366, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1013 = _this;
  _this setPos [2386.3433, 4153.5366, -3.8146973e-006];
};

_vehicle_1015 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2370.1675, 4148.7012, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1015 = _this;
  _this setPos [2370.1675, 4148.7012, 1.9073486e-005];
};

_vehicle_1017 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2373.8606, 4166.0337, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1017 = _this;
  _this setPos [2373.8606, 4166.0337, -3.8146973e-006];
};

_vehicle_1019 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2388.9893, 4171.8311, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1019 = _this;
  _this setPos [2388.9893, 4171.8311, -3.8146973e-006];
};

_vehicle_1021 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2396.8999, 4161.9893, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1021 = _this;
  _this setPos [2396.8999, 4161.9893, 0];
};

_vehicle_1023 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2396.0259, 4183.2827, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1023 = _this;
  _this setPos [2396.0259, 4183.2827, 1.1444092e-005];
};

_vehicle_1025 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2388.2368, 4189.6465, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1025 = _this;
  _this setPos [2388.2368, 4189.6465, -7.6293945e-006];
};

_vehicle_1027 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2374.8953, 4183.6499, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1027 = _this;
  _this setPos [2374.8953, 4183.6499, 7.6293945e-006];
};

_vehicle_1029 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2365.5923, 4164.4824, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1029 = _this;
  _this setPos [2365.5923, 4164.4824, 0];
};

_vehicle_1031 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2366.9863, 4186.4429, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1031 = _this;
  _this setPos [2366.9863, 4186.4429, 3.8146973e-006];
};

_vehicle_1033 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2366.6267, 4174.833, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1033 = _this;
  _this setPos [2366.6267, 4174.833, -7.6293945e-006];
};

_vehicle_1035 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2393.6531, 4142.4048, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1035 = _this;
  _this setPos [2393.6531, 4142.4048, 3.8146973e-006];
};

_vehicle_1037 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2391.6262, 4126.168, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1037 = _this;
  _this setPos [2391.6262, 4126.168, -1.5258789e-005];
};

_vehicle_1039 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2401.0112, 4118.2749, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1039 = _this;
  _this setPos [2401.0112, 4118.2749, 3.8146973e-006];
};

_vehicle_1041 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2406.6968, 4110.7471, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1041 = _this;
  _this setPos [2406.6968, 4110.7471, 0];
};

_vehicle_1043 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2434.6033, 4105.1328, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1043 = _this;
  _this setPos [2434.6033, 4105.1328, -7.6293945e-006];
};

_vehicle_1045 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2445.5708, 4104.8081, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1045 = _this;
  _this setPos [2445.5708, 4104.8081, 3.8146973e-006];
};

_vehicle_1047 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2456.396, 4104.7871, 4.9591064e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1047 = _this;
  _this setPos [2456.396, 4104.7871, 4.9591064e-005];
};

_vehicle_1049 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2467.6196, 4106.0142, -2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1049 = _this;
  _this setPos [2467.6196, 4106.0142, -2.6702881e-005];
};

_vehicle_1051 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2479.5986, 4105.8389, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1051 = _this;
  _this setPos [2479.5986, 4105.8389, 3.0517578e-005];
};

_vehicle_1053 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2507.8867, 4104.0269, -7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1053 = _this;
  _this setPos [2507.8867, 4104.0269, -7.6293945e-005];
};

_vehicle_1055 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2513.9624, 4103.4658, -0.00011825562], [], 0, "CAN_COLLIDE"];
  _vehicle_1055 = _this;
  _this setPos [2513.9624, 4103.4658, -0.00011825562];
};

_vehicle_1057 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2491.4675, 4103.5464, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1057 = _this;
  _this setPos [2491.4675, 4103.5464, -1.1444092e-005];
};

_vehicle_1059 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2522.6418, 4107.7671, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1059 = _this;
  _this setPos [2522.6418, 4107.7671, -1.1444092e-005];
};

_vehicle_1061 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2535.0156, 4110.2461, -6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1061 = _this;
  _this setPos [2535.0156, 4110.2461, -6.8664551e-005];
};

_vehicle_1063 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2540.0366, 4115.8164, -0.0001335144], [], 0, "CAN_COLLIDE"];
  _vehicle_1063 = _this;
  _this setPos [2540.0366, 4115.8164, -0.0001335144];
};

_vehicle_1065 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2545.0632, 4123.2905, 0.00034713745], [], 0, "CAN_COLLIDE"];
  _vehicle_1065 = _this;
  _this setPos [2545.0632, 4123.2905, 0.00034713745];
};

_vehicle_1067 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2550.1321, 4127.7144, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1067 = _this;
  _this setPos [2550.1321, 4127.7144, -1.1444092e-005];
};

_vehicle_1069 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2558.7905, 4133.3711, 0.0001335144], [], 0, "CAN_COLLIDE"];
  _vehicle_1069 = _this;
  _this setPos [2558.7905, 4133.3711, 0.0001335144];
};

_vehicle_1071 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2562.9915, 4140.2227, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1071 = _this;
  _this setPos [2562.9915, 4140.2227, -3.0517578e-005];
};

_vehicle_1073 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2568.3142, 4143.019, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1073 = _this;
  _this setPos [2568.3142, 4143.019, -3.8146973e-006];
};

_vehicle_1075 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2573.5549, 4145.1924, -3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1075 = _this;
  _this setPos [2573.5549, 4145.1924, -3.4332275e-005];
};

_vehicle_1077 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2582.1001, 4146.9409, -4.9591064e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1077 = _this;
  _this setPos [2582.1001, 4146.9409, -4.9591064e-005];
};

_vehicle_1079 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2588.2102, 4148.0659, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1079 = _this;
  _this setPos [2588.2102, 4148.0659, 7.6293945e-006];
};

_vehicle_1081 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2596.1365, 4147.8823, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1081 = _this;
  _this setPos [2596.1365, 4147.8823, 0];
};

_vehicle_1083 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2608.8225, 4147.0117, -2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1083 = _this;
  _this setPos [2608.8225, 4147.0117, -2.6702881e-005];
};

_vehicle_1085 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2622.8044, 4145.5942, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1085 = _this;
  _this setPos [2622.8044, 4145.5942, 2.2888184e-005];
};

_vehicle_1087 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2632.8623, 4144.2925, 9.5367432e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1087 = _this;
  _this setPos [2632.8623, 4144.2925, 9.5367432e-005];
};

_vehicle_1089 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2643.0625, 4141.4263, 0.00011825562], [], 0, "CAN_COLLIDE"];
  _vehicle_1089 = _this;
  _this setPos [2643.0625, 4141.4263, 0.00011825562];
};

_vehicle_1091 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2641.8115, 4136.0239, -0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_1091 = _this;
  _this setPos [2641.8115, 4136.0239, -0.00012207031];
};

_vehicle_1093 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2662.9578, 4126.5913, 0.00067138672], [], 0, "CAN_COLLIDE"];
  _vehicle_1093 = _this;
  _this setPos [2662.9578, 4126.5913, 0.00067138672];
};

_vehicle_1095 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2663.4993, 4121.4131, 0.00084686279], [], 0, "CAN_COLLIDE"];
  _vehicle_1095 = _this;
  _this setPos [2663.4993, 4121.4131, 0.00084686279];
};

_vehicle_1097 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2687.1694, 4098.3569, -0.00019836426], [], 0, "CAN_COLLIDE"];
  _vehicle_1097 = _this;
  _this setPos [2687.1694, 4098.3569, -0.00019836426];
};

_vehicle_1099 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2679.281, 4103.1816, -9.9182129e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1099 = _this;
  _this setPos [2679.281, 4103.1816, -9.9182129e-005];
};

_vehicle_1101 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2673.7112, 4109.9438, -0.0001449585], [], 0, "CAN_COLLIDE"];
  _vehicle_1101 = _this;
  _this setPos [2673.7112, 4109.9438, -0.0001449585];
};

_vehicle_1103 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2781.4199, 4152.0298, -2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1103 = _this;
  _this setPos [2781.4199, 4152.0298, -2.6702881e-005];
};

_vehicle_1105 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2778.8162, 4159.5181, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1105 = _this;
  _this setPos [2778.8162, 4159.5181, -2.2888184e-005];
};

_vehicle_1107 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2812.5098, 4148.3633, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1107 = _this;
  _this setPos [2812.5098, 4148.3633, 0];
};

_vehicle_1109 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2909.2817, 4164.0669, -2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1109 = _this;
  _this setPos [2909.2817, 4164.0669, -2.6702881e-005];
};

_vehicle_1111 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2921.4041, 4187.7827, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1111 = _this;
  _this setPos [2921.4041, 4187.7827, -3.8146973e-005];
};

_vehicle_1113 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2913.9944, 4179.9307, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1113 = _this;
  _this setPos [2913.9944, 4179.9307, -7.6293945e-006];
};

_vehicle_1115 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2929.0332, 4181.3716, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1115 = _this;
  _this setPos [2929.0332, 4181.3716, -3.0517578e-005];
};

_vehicle_1117 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2937.9063, 4183.5151, 0.00022125244], [], 0, "CAN_COLLIDE"];
  _vehicle_1117 = _this;
  _this setPos [2937.9063, 4183.5151, 0.00022125244];
};

_vehicle_1119 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2943.8726, 4184.3867, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1119 = _this;
  _this setPos [2943.8726, 4184.3867, 6.1035156e-005];
};

_vehicle_1121 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2951.5098, 4184.5439, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1121 = _this;
  _this setPos [2951.5098, 4184.5439, 3.8146973e-005];
};

_vehicle_1123 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2960.4712, 4183.2725, -0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_1123 = _this;
  _this setPos [2960.4712, 4183.2725, -0.00011444092];
};

_vehicle_1125 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2970.8384, 4181.8994, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1125 = _this;
  _this setPos [2970.8384, 4181.8994, -3.8146973e-005];
};

_vehicle_1127 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2977.6211, 4180.0894, 0.0001449585], [], 0, "CAN_COLLIDE"];
  _vehicle_1127 = _this;
  _this setPos [2977.6211, 4180.0894, 0.0001449585];
};

_vehicle_1129 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2984.7295, 4178.8667, -0.00016784668], [], 0, "CAN_COLLIDE"];
  _vehicle_1129 = _this;
  _this setPos [2984.7295, 4178.8667, -0.00016784668];
};

_vehicle_1131 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2990.1201, 4177.0103, -8.392334e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1131 = _this;
  _this setPos [2990.1201, 4177.0103, -8.392334e-005];
};

_vehicle_1133 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3058.3875, 4150.5391, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1133 = _this;
  _this setPos [3058.3875, 4150.5391, -1.5258789e-005];
};

_vehicle_1135 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3059.1062, 4142.6411, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1135 = _this;
  _this setPos [3059.1062, 4142.6411, 1.5258789e-005];
};

_vehicle_1137 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2927.719, 4025.6504, 9.9182129e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1137 = _this;
  _this setPos [2927.719, 4025.6504, 9.9182129e-005];
};

_vehicle_1139 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2919.5015, 4020.7617, 0.00031280518], [], 0, "CAN_COLLIDE"];
  _vehicle_1139 = _this;
  _this setPos [2919.5015, 4020.7617, 0.00031280518];
};

_vehicle_1141 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2913.9473, 4012.811, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1141 = _this;
  _this setPos [2913.9473, 4012.811, 5.3405762e-005];
};

_vehicle_1143 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2909.1367, 4005.9839, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1143 = _this;
  _this setPos [2909.1367, 4005.9839, 7.6293945e-006];
};

_vehicle_1145 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2818.1445, 3979.2017, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1145 = _this;
  _this setPos [2818.1445, 3979.2017, 4.5776367e-005];
};

_vehicle_1147 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2812.9885, 4000.6489, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1147 = _this;
  _this setPos [2812.9885, 4000.6489, -1.5258789e-005];
};

_vehicle_1149 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2808.5376, 4012.5166, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1149 = _this;
  _this setPos [2808.5376, 4012.5166, 1.5258789e-005];
};

_vehicle_1151 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2801.0706, 4021.9761, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1151 = _this;
  _this setPos [2801.0706, 4021.9761, -2.2888184e-005];
};

_vehicle_1153 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2678.1089, 3981.6162, -8.392334e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1153 = _this;
  _this setPos [2678.1089, 3981.6162, -8.392334e-005];
};

_vehicle_1155 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2665.3628, 3983.1501, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1155 = _this;
  _this setPos [2665.3628, 3983.1501, -7.6293945e-006];
};

_vehicle_1157 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2662.8145, 3983.4346, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1157 = _this;
  _this setPos [2662.8145, 3983.4346, -1.5258789e-005];
};

_vehicle_1159 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2603.2654, 3959.1509, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1159 = _this;
  _this setPos [2603.2654, 3959.1509, -1.5258789e-005];
};

_vehicle_1161 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2607.9919, 3963.0286, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1161 = _this;
  _this setPos [2607.9919, 3963.0286, -1.5258789e-005];
};

_vehicle_1163 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2611.4561, 3964.916, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1163 = _this;
  _this setPos [2611.4561, 3964.916, 6.8664551e-005];
};

_vehicle_1165 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2508.582, 3918.3352, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1165 = _this;
  _this setPos [2508.582, 3918.3352, -3.0517578e-005];
};

_vehicle_1167 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2498.0122, 3922.3752, -8.392334e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1167 = _this;
  _this setPos [2498.0122, 3922.3752, -8.392334e-005];
};

_vehicle_1169 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2489.2031, 3925.9053, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1169 = _this;
  _this setPos [2489.2031, 3925.9053, -3.8146973e-005];
};

_vehicle_1171 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2482.2056, 3929.2158, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1171 = _this;
  _this setPos [2482.2056, 3929.2158, 3.0517578e-005];
};

_vehicle_1173 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2476.3501, 3932.3313, -6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1173 = _this;
  _this setPos [2476.3501, 3932.3313, -6.8664551e-005];
};

_vehicle_1175 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2467.8093, 3936.0703, -5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1175 = _this;
  _this setPos [2467.8093, 3936.0703, -5.3405762e-005];
};

_vehicle_1177 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2462.5093, 3938.8096, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1177 = _this;
  _this setPos [2462.5093, 3938.8096, 3.8146973e-005];
};

_vehicle_1179 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2461.106, 3933.6523, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1179 = _this;
  _this setPos [2461.106, 3933.6523, 6.1035156e-005];
};

_vehicle_1181 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2461.0435, 3934.8025, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1181 = _this;
  _this setPos [2461.0435, 3934.8025, 3.8146973e-005];
};

_vehicle_1183 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2413.2163, 4057.771, 5.7220459e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1183 = _this;
  _this setPos [2413.2163, 4057.771, 5.7220459e-005];
};

_vehicle_1185 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2418.0701, 4048.0713, -0.00017547607], [], 0, "CAN_COLLIDE"];
  _vehicle_1185 = _this;
  _this setPos [2418.0701, 4048.0713, -0.00017547607];
};

_vehicle_1187 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2420.864, 4043.396, -0.00018310547], [], 0, "CAN_COLLIDE"];
  _vehicle_1187 = _this;
  _this setPos [2420.864, 4043.396, -0.00018310547];
};

_vehicle_1189 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2402.022, 4101.2441, -1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1189 = _this;
  _this setPos [2402.022, 4101.2441, -1.9073486e-005];
};

_vehicle_1191 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2394.2231, 4110.4038, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1191 = _this;
  _this setPos [2394.2231, 4110.4038, 7.6293945e-006];
};

_vehicle_1193 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2384.4878, 4118.7236, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1193 = _this;
  _this setPos [2384.4878, 4118.7236, 3.8146973e-006];
};

_vehicle_1197 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Market_stalls_02_EP1", [2378.9502, 4120.5229, -0.0015979339], [], 0, "CAN_COLLIDE"];
  _vehicle_1197 = _this;
  _this setDir 88.631721;
  _this setPos [2378.9502, 4120.5229, -0.0015979339];
};

_vehicle_1198 = objNull;
if (true) then
{
  _this = createVehicle ["hiluxWreck", [2554.7102, 4106.3071, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1198 = _this;
  _this setDir -121.60853;
  _this setPos [2554.7102, 4106.3071, 3.8146973e-006];
};

_vehicle_1199 = objNull;
if (true) then
{
  _this = createVehicle ["datsun01Wreck", [2415.7356, 3959.1521, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1199 = _this;
  _this setDir 125.05973;
  _this setPos [2415.7356, 3959.1521, 3.0517578e-005];
};

_unit_102 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["ibr_lingorman7s", [2381.4463, 4119.7832, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _unit_102 = _this;
  _this setDir 82.011307;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_1200 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_Backpackheap", [2378.1616, 4111.7178, -0.094033144], [], 0, "CAN_COLLIDE"];
  _vehicle_1200 = _this;
  _this setDir -28.637999;
  _this setPos [2378.1616, 4111.7178, -0.094033144];
};

_vehicle_1201 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2379.5068, 4118.7373, -0.14667462], [], 0, "CAN_COLLIDE"];
  _vehicle_1201 = _this;
  _this setDir 177.25717;
  _this setPos [2379.5068, 4118.7373, -0.14667462];
};

_vehicle_1203 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2375.5645, 4116.4087, -0.31964549], [], 0, "CAN_COLLIDE"];
  _vehicle_1203 = _this;
  _this setDir 91.725258;
  _this setPos [2375.5645, 4116.4087, -0.31964549];
};

_vehicle_1206 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2375.4509, 4112.4043, -0.32879552], [], 0, "CAN_COLLIDE"];
  _vehicle_1206 = _this;
  _this setDir 91.725258;
  _this setPos [2375.4509, 4112.4043, -0.32879552];
};

_vehicle_1209 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2373.6208, 4118.3154, -0.33018667], [], 0, "CAN_COLLIDE"];
  _vehicle_1209 = _this;
  _this setDir 356.63684;
  _this setPos [2373.6208, 4118.3154, -0.33018667];
};

_vehicle_1212 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2371.7102, 4120.1694, -0.30549455], [], 0, "CAN_COLLIDE"];
  _vehicle_1212 = _this;
  _this setDir 91.725258;
  _this setPos [2371.7102, 4120.1694, -0.30549455];
};

_vehicle_1215 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2373.7329, 4122.2295, -0.33225906], [], 0, "CAN_COLLIDE"];
  _vehicle_1215 = _this;
  _this setDir 537.2901;
  _this setPos [2373.7329, 4122.2295, -0.33225906];
};

_vehicle_1218 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [2383.5132, 4114.3213], [], 0, "CAN_COLLIDE"];
  _vehicle_1218 = _this;
  _this setDir 89.808487;
  _this setPos [2383.5132, 4114.3213];
};

_vehicle_1219 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [2379.5537, 4111.5229, -3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1219 = _this;
  _this setDir -124.09386;
  _this setPos [2379.5537, 4111.5229, -3.4332275e-005];
};

_unit_106 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Damsel3", [2382.6038, 4114.354, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _unit_106 = _this;
  _this setDir 88.664886;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_unit_109 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["ibr_lingorman5s", [3925.5791, 5225.2319, 1.7729917], [], 0, "CAN_COLLIDE"];
  _unit_109 = _this;
  _this setDir 89.601418;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_unit_111 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["ibr_lingorman2", [3879.7634, 2236.843, 1.1846944], [], 0, "CAN_COLLIDE"];
  _unit_111 = _this;
  _this setDir 43.212208;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_unit_113 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["ibr_lingorman4", [5511.9951, 4394.8013, 4.1448889], [], 0, "CAN_COLLIDE"];
  _unit_113 = _this;
  _this setDir 25.054167;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_1220 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4229.8789, 4829.3271, -0.54357761], [], 0, "CAN_COLLIDE"];
  _vehicle_1220 = _this;
  _this setDir -5.4010339;
  _this setPos [4229.8789, 4829.3271, -0.54357761];
};

_vehicle_1222 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4233.7554, 4829.9385, -0.54356235], [], 0, "CAN_COLLIDE"];
  _vehicle_1222 = _this;
  _this setDir -5.4010339;
  _this setPos [4233.7554, 4829.9385, -0.54356235];
};

_vehicle_1224 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4237.7109, 4830.4077, -0.54355854], [], 0, "CAN_COLLIDE"];
  _vehicle_1224 = _this;
  _this setDir -5.4010339;
  _this setPos [4237.7109, 4830.4077, -0.54355854];
};

_vehicle_1226 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4241.5688, 4830.769, -0.54353946], [], 0, "CAN_COLLIDE"];
  _vehicle_1226 = _this;
  _this setDir -5.4010339;
  _this setPos [4241.5688, 4830.769, -0.54353946];
};

_vehicle_1232 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4223.6563, 4844.4219, -0.24126761], [], 0, "CAN_COLLIDE"];
  _vehicle_1232 = _this;
  _this setDir 82.428879;
  _this setPos [4223.6563, 4844.4219, -0.24126761];
};

_vehicle_1233 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4224.2837, 4840.6104, -0.095285259], [], 0, "CAN_COLLIDE"];
  _vehicle_1233 = _this;
  _this setDir 77.20562;
  _this setPos [4224.2837, 4840.6104, -0.095285259];
};

_vehicle_1234 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4224.9741, 4836.7158, -0.29024652], [], 0, "CAN_COLLIDE"];
  _vehicle_1234 = _this;
  _this setDir 82.428879;
  _this setPos [4224.9741, 4836.7158, -0.29024652];
};

_vehicle_1235 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4225.4805, 4832.8784, -0.18821298], [], 0, "CAN_COLLIDE"];
  _vehicle_1235 = _this;
  _this setDir 82.428879;
  _this setPos [4225.4805, 4832.8784, -0.18821298];
};

_vehicle_1240 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4237.0669, 4847.6821, -0.26649076], [], 0, "CAN_COLLIDE"];
  _vehicle_1240 = _this;
  _this setDir 174.35881;
  _this setPos [4237.0669, 4847.6821, -0.26649076];
};

_vehicle_1241 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4233.084, 4847.2417, -0.28165296], [], 0, "CAN_COLLIDE"];
  _vehicle_1241 = _this;
  _this setDir 174.35881;
  _this setPos [4233.084, 4847.2417, -0.28165296];
};

_vehicle_1242 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4229.1919, 4846.7192, -0.3164061], [], 0, "CAN_COLLIDE"];
  _vehicle_1242 = _this;
  _this setDir 169.60085;
  _this setPos [4229.1919, 4846.7192, -0.3164061];
};

_vehicle_1243 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4225.2397, 4846.2183, -0.26708832], [], 0, "CAN_COLLIDE"];
  _vehicle_1243 = _this;
  _this setDir 174.35881;
  _this setPos [4225.2397, 4846.2183, -0.26708832];
};

_vehicle_1248 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4244.2446, 4834.0781, -0.41050881], [], 0, "CAN_COLLIDE"];
  _vehicle_1248 = _this;
  _this setDir -97.093491;
  _this setPos [4244.2446, 4834.0781, -0.41050881];
};

_vehicle_1249 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4243.7217, 4838.0415, -0.26842239], [], 0, "CAN_COLLIDE"];
  _vehicle_1249 = _this;
  _this setDir -97.093491;
  _this setPos [4243.7217, 4838.0415, -0.26842239];
};

_vehicle_1250 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4243.1377, 4841.9839, -0.3272759], [], 0, "CAN_COLLIDE"];
  _vehicle_1250 = _this;
  _this setDir -97.093491;
  _this setPos [4243.1377, 4841.9839, -0.3272759];
};

_vehicle_1251 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4242.6587, 4845.8257, -0.51001912], [], 0, "CAN_COLLIDE"];
  _vehicle_1251 = _this;
  _this setDir -97.093491;
  _this setPos [4242.6587, 4845.8257, -0.51001912];
};

_unit_117 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["TK_CIV_Woman02_EP1", [4236.6968, 4842.8164, 0.36117083], [], 0, "CAN_COLLIDE"];
  _unit_117 = _this;
  _this setDir 194.36969;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_1257 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [4226.8652, 4830.7383, -0.33793208], [], 0, "CAN_COLLIDE"];
  _vehicle_1257 = _this;
  _this setDir 53.001484;
  _this setPos [4226.8652, 4830.7383, -0.33793208];
};

_unit_120 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["TK_CIV_Woman03_EP1", [6676.3252, 6361.1772, 0.72185659], [], 0, "CAN_COLLIDE"];
  _unit_120 = _this;
  _this setDir 132.67206;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_unit_121 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["ibr_lingorman7", [7508.0059, 2951.5234], [], 0, "CAN_COLLIDE"];
  _unit_121 = _this;
  _this setDir 178.10352;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_1293 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2159.6296, 2421.1941], [], 0, "CAN_COLLIDE"];
  _vehicle_1293 = _this;
  _this setDir 1.8247305;
  _this setPos [2159.6296, 2421.1941];
};

_vehicle_1294 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2159.5776, 2414.6499, -0.08383131], [], 0, "CAN_COLLIDE"];
  _vehicle_1294 = _this;
  _this setDir 1.8247305;
  _this setPos [2159.5776, 2414.6499, -0.08383131];
};

_vehicle_1295 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2159.4709, 2410.1311, -0.023808956], [], 0, "CAN_COLLIDE"];
  _vehicle_1295 = _this;
  _this setDir 1.8247305;
  _this setPos [2159.4709, 2410.1311, -0.023808956];
};

_vehicle_1296 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2159.6458, 2405.2639, -0.12359715], [], 0, "CAN_COLLIDE"];
  _vehicle_1296 = _this;
  _this setDir 1.8247305;
  _this setPos [2159.6458, 2405.2639, -0.12359715];
};

_vehicle_1297 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2159.7336, 2401.3503, -0.16824484], [], 0, "CAN_COLLIDE"];
  _vehicle_1297 = _this;
  _this setDir 1.8247305;
  _this setPos [2159.7336, 2401.3503, -0.16824484];
};

_vehicle_1298 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2159.5789, 2394.8442, 0.044388771], [], 0, "CAN_COLLIDE"];
  _vehicle_1298 = _this;
  _this setDir 1.8247305;
  _this setPos [2159.5789, 2394.8442, 0.044388771];
};

_vehicle_1299 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2159.4626, 2390.5725, 0.067659378], [], 0, "CAN_COLLIDE"];
  _vehicle_1299 = _this;
  _this setDir 1.8247305;
  _this setPos [2159.4626, 2390.5725, 0.067659378];
};

_vehicle_1300 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2159.4204, 2387.6125, -0.06663084], [], 0, "CAN_COLLIDE"];
  _vehicle_1300 = _this;
  _this setDir 1.8247305;
  _this setPos [2159.4204, 2387.6125, -0.06663084];
};

_vehicle_1301 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2156.0024, 2388.7041, -0.18757296], [], 0, "CAN_COLLIDE"];
  _vehicle_1301 = _this;
  _this setDir 1.8247305;
  _this setPos [2156.0024, 2388.7041, -0.18757296];
};

_vehicle_1302 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2155.3645, 2393.0391, -0.064325809], [], 0, "CAN_COLLIDE"];
  _vehicle_1302 = _this;
  _this setDir 1.8247305;
  _this setPos [2155.3645, 2393.0391, -0.064325809];
};

_vehicle_1303 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2155.7615, 2397.5225, -0.18317366], [], 0, "CAN_COLLIDE"];
  _vehicle_1303 = _this;
  _this setDir 1.8247305;
  _this setPos [2155.7615, 2397.5225, -0.18317366];
};

_vehicle_1304 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2156.6865, 2403.8928, -0.1876688], [], 0, "CAN_COLLIDE"];
  _vehicle_1304 = _this;
  _this setDir 1.8247305;
  _this setPos [2156.6865, 2403.8928, -0.1876688];
};

_vehicle_1305 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2157.241, 2409.0471, -0.057866096], [], 0, "CAN_COLLIDE"];
  _vehicle_1305 = _this;
  _this setDir 1.8247305;
  _this setPos [2157.241, 2409.0471, -0.057866096];
};

_vehicle_1306 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2157.4084, 2413.2078, -0.026735783], [], 0, "CAN_COLLIDE"];
  _vehicle_1306 = _this;
  _this setDir 1.8247305;
  _this setPos [2157.4084, 2413.2078, -0.026735783];
};

_vehicle_1307 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2157.4834, 2416.3271, -0.14461565], [], 0, "CAN_COLLIDE"];
  _vehicle_1307 = _this;
  _this setDir 1.8247305;
  _this setPos [2157.4834, 2416.3271, -0.14461565];
};

_vehicle_1308 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2157.6323, 2420.2451, -0.045662403], [], 0, "CAN_COLLIDE"];
  _vehicle_1308 = _this;
  _this setDir 1.8247305;
  _this setPos [2157.6323, 2420.2451, -0.045662403];
};

_vehicle_1309 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2157.8394, 2423.231, -0.061496258], [], 0, "CAN_COLLIDE"];
  _vehicle_1309 = _this;
  _this setDir 1.8247305;
  _this setPos [2157.8394, 2423.231, -0.061496258];
};

_vehicle_1310 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2163.3235, 2425.9775, -0.28048325], [], 0, "CAN_COLLIDE"];
  _vehicle_1310 = _this;
  _this setDir 1.8247305;
  _this setPos [2163.3235, 2425.9775, -0.28048325];
};

_vehicle_1311 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2162.9316, 2423.1321, -0.06627655], [], 0, "CAN_COLLIDE"];
  _vehicle_1311 = _this;
  _this setDir 1.8247305;
  _this setPos [2162.9316, 2423.1321, -0.06627655];
};

_vehicle_1312 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2162.9143, 2419.4241, -0.075117588], [], 0, "CAN_COLLIDE"];
  _vehicle_1312 = _this;
  _this setDir 1.8247305;
  _this setPos [2162.9143, 2419.4241, -0.075117588];
};

_vehicle_1313 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2163.196, 2415.6709, -0.11952925], [], 0, "CAN_COLLIDE"];
  _vehicle_1313 = _this;
  _this setDir 1.8247305;
  _this setPos [2163.196, 2415.6709, -0.11952925];
};

_vehicle_1314 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2163.2864, 2412.615, 0.0073661804], [], 0, "CAN_COLLIDE"];
  _vehicle_1314 = _this;
  _this setDir 1.8247305;
  _this setPos [2163.2864, 2412.615, 0.0073661804];
};

_vehicle_1315 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2163.2659, 2408.8467, -0.032703876], [], 0, "CAN_COLLIDE"];
  _vehicle_1315 = _this;
  _this setDir 1.8247305;
  _this setPos [2163.2659, 2408.8467, -0.032703876];
};

_vehicle_1316 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2162.9365, 2403.0618, -0.11552858], [], 0, "CAN_COLLIDE"];
  _vehicle_1316 = _this;
  _this setDir 1.8247305;
  _this setPos [2162.9365, 2403.0618, -0.11552858];
};

_vehicle_1317 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2162.759, 2398.2002, -0.076071262], [], 0, "CAN_COLLIDE"];
  _vehicle_1317 = _this;
  _this setDir 1.8247305;
  _this setPos [2162.759, 2398.2002, -0.076071262];
};

_vehicle_1318 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2162.8435, 2394.927, 0.29087067], [], 0, "CAN_COLLIDE"];
  _vehicle_1318 = _this;
  _this setDir 1.8247305;
  _this setPos [2162.8435, 2394.927, 0.29087067];
};

_vehicle_1319 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2162.8999, 2392.6067, 0.5951128], [], 0, "CAN_COLLIDE"];
  _vehicle_1319 = _this;
  _this setDir 1.8247305;
  _this setPos [2162.8999, 2392.6067, 0.5951128];
};

_vehicle_1320 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2162.7275, 2389.9092, 0.51497364], [], 0, "CAN_COLLIDE"];
  _vehicle_1320 = _this;
  _this setDir 1.8247305;
  _this setPos [2162.7275, 2389.9092, 0.51497364];
};

_vehicle_1321 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2162.8291, 2387.9697, 0.4459796], [], 0, "CAN_COLLIDE"];
  _vehicle_1321 = _this;
  _this setDir 1.8247305;
  _this setPos [2162.8291, 2387.9697, 0.4459796];
};

_vehicle_1322 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2161.251, 2387.4578, 0.19368935], [], 0, "CAN_COLLIDE"];
  _vehicle_1322 = _this;
  _this setDir 1.8247305;
  _this setPos [2161.251, 2387.4578, 0.19368935];
};

_vehicle_1323 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2158.4282, 2386.9558, -0.15359497], [], 0, "CAN_COLLIDE"];
  _vehicle_1323 = _this;
  _this setDir 1.8247305;
  _this setPos [2158.4282, 2386.9558, -0.15359497];
};

_vehicle_1324 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2157.5222, 2387.3689, -0.21097612], [], 0, "CAN_COLLIDE"];
  _vehicle_1324 = _this;
  _this setDir 1.8247305;
  _this setPos [2157.5222, 2387.3689, -0.21097612];
};

_vehicle_1325 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2156.3872, 2387.9136, -0.21829891], [], 0, "CAN_COLLIDE"];
  _vehicle_1325 = _this;
  _this setDir 1.8247305;
  _this setPos [2156.3872, 2387.9136, -0.21829891];
};

_vehicle_1326 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2164.6157, 2385.926, 0.64275646], [], 0, "CAN_COLLIDE"];
  _vehicle_1326 = _this;
  _this setDir 1.8247305;
  _this setPos [2164.6157, 2385.926, 0.64275646];
};

_vehicle_1327 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [2164.2454, 2387.5557, 0.63445425], [], 0, "CAN_COLLIDE"];
  _vehicle_1327 = _this;
  _this setDir 1.8247305;
  _this setPos [2164.2454, 2387.5557, 0.63445425];
};

_vehicle_1431 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1881.7946, 2796.8223], [], 0, "CAN_COLLIDE"];
  _vehicle_1431 = _this;
  _this setDir 30.597799;
  _this setPos [1881.7946, 2796.8223];
};

_vehicle_1432 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1878.5995, 2791.1111, -0.2580142], [], 0, "CAN_COLLIDE"];
  _vehicle_1432 = _this;
  _this setDir 30.597799;
  _this setPos [1878.5995, 2791.1111, -0.2580142];
};

_vehicle_1433 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1876.3298, 2787.2021, 0.034440994], [], 0, "CAN_COLLIDE"];
  _vehicle_1433 = _this;
  _this setDir 30.597799;
  _this setPos [1876.3298, 2787.2021, 0.034440994];
};

_vehicle_1434 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1874.1423, 2782.8508, 0.27002501], [], 0, "CAN_COLLIDE"];
  _vehicle_1434 = _this;
  _this setDir 30.597799;
  _this setPos [1874.1423, 2782.8508, 0.27002501];
};

_vehicle_1435 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1872.3341, 2779.3777, 0.37668562], [], 0, "CAN_COLLIDE"];
  _vehicle_1435 = _this;
  _this setDir 30.597799;
  _this setPos [1872.3341, 2779.3777, 0.37668562];
};

_vehicle_1436 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1869.0677, 2773.751, 0.54542875], [], 0, "CAN_COLLIDE"];
  _vehicle_1436 = _this;
  _this setDir 30.597799;
  _this setPos [1869.0677, 2773.751, 0.54542875];
};

_vehicle_1437 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1866.9088, 2770.0615, 0.52196002], [], 0, "CAN_COLLIDE"];
  _vehicle_1437 = _this;
  _this setDir 30.597799;
  _this setPos [1866.9088, 2770.0615, 0.52196002];
};

_vehicle_1438 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1865.4475, 2767.4878, 0.50360966], [], 0, "CAN_COLLIDE"];
  _vehicle_1438 = _this;
  _this setDir 30.597799;
  _this setPos [1865.4475, 2767.4878, 0.50360966];
};

_vehicle_1439 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1862.9768, 2770.0889, 0.50970721], [], 0, "CAN_COLLIDE"];
  _vehicle_1439 = _this;
  _this setDir 30.597799;
  _this setPos [1862.9768, 2770.0889, 0.50970721];
};

_vehicle_1440 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1864.5044, 2774.196, 0.53644657], [], 0, "CAN_COLLIDE"];
  _vehicle_1440 = _this;
  _this setDir 30.597799;
  _this setPos [1864.5044, 2774.196, 0.53644657];
};

_vehicle_1441 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1867.0103, 2777.9353, 0.47919559], [], 0, "CAN_COLLIDE"];
  _vehicle_1441 = _this;
  _this setDir 30.597799;
  _this setPos [1867.0103, 2777.9353, 0.47919559];
};

_vehicle_1442 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1870.8873, 2783.0735, 0.31169701], [], 0, "CAN_COLLIDE"];
  _vehicle_1442 = _this;
  _this setDir 30.597799;
  _this setPos [1870.8873, 2783.0735, 0.31169701];
};

_vehicle_1443 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1873.8547, 2787.3252, 0.15510297], [], 0, "CAN_COLLIDE"];
  _vehicle_1443 = _this;
  _this setDir 30.597799;
  _this setPos [1873.8547, 2787.3252, 0.15510297];
};

_vehicle_1444 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1876.004, 2790.8916, -0.036997557], [], 0, "CAN_COLLIDE"];
  _vehicle_1444 = _this;
  _this setDir 30.597799;
  _this setPos [1876.004, 2790.8916, -0.036997557];
};

_vehicle_1445 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1877.571, 2793.5891, 0.087661982], [], 0, "CAN_COLLIDE"];
  _vehicle_1445 = _this;
  _this setDir 30.597799;
  _this setPos [1877.571, 2793.5891, 0.087661982];
};

_vehicle_1446 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1879.5883, 2796.9519, 0.31468701], [], 0, "CAN_COLLIDE"];
  _vehicle_1446 = _this;
  _this setDir 30.597799;
  _this setPos [1879.5883, 2796.9519, 0.31468701];
};

_vehicle_1447 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1887.3348, 2799.2366, -0.89164042], [], 0, "CAN_COLLIDE"];
  _vehicle_1447 = _this;
  _this setDir 30.597799;
  _this setPos [1887.3348, 2799.2366, -0.89164042];
};

_vehicle_1448 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1885.6223, 2796.9309, -0.74290705], [], 0, "CAN_COLLIDE"];
  _vehicle_1448 = _this;
  _this setDir 30.597799;
  _this setPos [1885.6223, 2796.9309, -0.74290705];
};

_vehicle_1449 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1883.8217, 2793.6895, -0.64330173], [], 0, "CAN_COLLIDE"];
  _vehicle_1449 = _this;
  _this setDir 30.597799;
  _this setPos [1883.8217, 2793.6895, -0.64330173];
};

_vehicle_1450 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1882.2628, 2790.2642, -0.62207794], [], 0, "CAN_COLLIDE"];
  _vehicle_1450 = _this;
  _this setDir 30.597799;
  _this setPos [1882.2628, 2790.2642, -0.62207794];
};

_vehicle_1451 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1880.8711, 2787.5427, -0.74685669], [], 0, "CAN_COLLIDE"];
  _vehicle_1451 = _this;
  _this setDir 30.597799;
  _this setPos [1880.8711, 2787.5427, -0.74685669];
};

_vehicle_1452 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1879.0383, 2784.2498, -0.247334], [], 0, "CAN_COLLIDE"];
  _vehicle_1452 = _this;
  _this setDir 30.597799;
  _this setPos [1879.0383, 2784.2498, -0.247334];
};

_vehicle_1453 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1875.9657, 2779.3369, 0.3287704], [], 0, "CAN_COLLIDE"];
  _vehicle_1453 = _this;
  _this setDir 30.597799;
  _this setPos [1875.9657, 2779.3369, 0.3287704];
};

_vehicle_1454 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1840.8838, 2728.3459, 3.2201879], [], 0, "CAN_COLLIDE"];
  _vehicle_1454 = _this;
  _this setDir 30.597799;
  _this setPos [1840.8838, 2728.3459, 3.2201879];
};

_vehicle_1455 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1871.9683, 2772.251, 0.54061007], [], 0, "CAN_COLLIDE"];
  _vehicle_1455 = _this;
  _this setDir 30.597799;
  _this setPos [1871.9683, 2772.251, 0.54061007];
};

_vehicle_1456 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1870.9005, 2770.1909, 0.53525853], [], 0, "CAN_COLLIDE"];
  _vehicle_1456 = _this;
  _this setDir 30.597799;
  _this setPos [1870.9005, 2770.1909, 0.53525853];
};

_vehicle_1457 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1869.4507, 2767.9089, 0.5185194], [], 0, "CAN_COLLIDE"];
  _vehicle_1457 = _this;
  _this setDir 30.597799;
  _this setPos [1869.4507, 2767.9089, 0.5185194];
};

_vehicle_1458 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1868.6074, 2766.1602, 0.50647855], [], 0, "CAN_COLLIDE"];
  _vehicle_1458 = _this;
  _this setDir 30.597799;
  _this setPos [1868.6074, 2766.1602, 0.50647855];
};

_vehicle_1459 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1866.9778, 2766.4709, 0.50302815], [], 0, "CAN_COLLIDE"];
  _vehicle_1459 = _this;
  _this setDir 30.597799;
  _this setPos [1866.9778, 2766.4709, 0.50302815];
};

_vehicle_1460 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1864.262, 2767.3894, 0.49930716], [], 0, "CAN_COLLIDE"];
  _vehicle_1460 = _this;
  _this setDir 30.597799;
  _this setPos [1864.262, 2767.3894, 0.49930716];
};

_vehicle_1461 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1863.666, 2768.188, 0.50167298], [], 0, "CAN_COLLIDE"];
  _vehicle_1461 = _this;
  _this setDir 30.597799;
  _this setPos [1863.666, 2768.188, 0.50167298];
};

_vehicle_1462 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1862.9335, 2769.2122, 0.50485516], [], 0, "CAN_COLLIDE"];
  _vehicle_1462 = _this;
  _this setDir 30.597799;
  _this setPos [1862.9335, 2769.2122, 0.50485516];
};

_vehicle_1463 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1869.6487, 2765.1155, 0.50425267], [], 0, "CAN_COLLIDE"];
  _vehicle_1463 = _this;
  _this setDir 30.597799;
  _this setPos [1869.6487, 2765.1155, 0.50425267];
};

_vehicle_1464 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1859.5625, 2762.5403, 0.39152479], [], 0, "CAN_COLLIDE"];
  _vehicle_1464 = _this;
  _this setDir 32.422527;
  _this setPos [1859.5625, 2762.5403, 0.39152479];
};

_vehicle_1465 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1856.1869, 2756.9333, 0.43368793], [], 0, "CAN_COLLIDE"];
  _vehicle_1465 = _this;
  _this setDir 32.422527;
  _this setPos [1856.1869, 2756.9333, 0.43368793];
};

_vehicle_1466 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1853.795, 2753.0981, 0.61093831], [], 0, "CAN_COLLIDE"];
  _vehicle_1466 = _this;
  _this setDir 32.422527;
  _this setPos [1853.795, 2753.0981, 0.61093831];
};

_vehicle_1467 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1851.4683, 2748.8188, 1.0220218], [], 0, "CAN_COLLIDE"];
  _vehicle_1467 = _this;
  _this setDir 32.422527;
  _this setPos [1851.4683, 2748.8188, 1.0220218];
};

_vehicle_1468 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1849.5519, 2745.4065, 1.3967192], [], 0, "CAN_COLLIDE"];
  _vehicle_1468 = _this;
  _this setDir 32.422527;
  _this setPos [1849.5519, 2745.4065, 1.3967192];
};

_vehicle_1469 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1846.1069, 2739.884, 2.922919], [], 0, "CAN_COLLIDE"];
  _vehicle_1469 = _this;
  _this setDir 32.422527;
  _this setPos [1846.1069, 2739.884, 2.922919];
};

_vehicle_1470 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1843.833, 2736.2666, 3.9146259], [], 0, "CAN_COLLIDE"];
  _vehicle_1470 = _this;
  _this setDir 32.422527;
  _this setPos [1843.833, 2736.2666, 3.9146259];
};

_vehicle_1471 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1842.2898, 2733.741, 2.3510129], [], 0, "CAN_COLLIDE"];
  _vehicle_1471 = _this;
  _this setDir 32.422527;
  _this setPos [1842.2898, 2733.741, 2.3510129];
};

_vehicle_1472 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1839.9034, 2736.4199, 1.7278202], [], 0, "CAN_COLLIDE"];
  _vehicle_1472 = _this;
  _this setDir 32.422527;
  _this setPos [1839.9034, 2736.4199, 1.7278202];
};

_vehicle_1473 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1841.5603, 2740.4761, 2.6967762], [], 0, "CAN_COLLIDE"];
  _vehicle_1473 = _this;
  _this setDir 32.422527;
  _this setPos [1841.5603, 2740.4761, 2.6967762];
};

_vehicle_1474 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1844.1846, 2744.1328, 2.0881774], [], 0, "CAN_COLLIDE"];
  _vehicle_1474 = _this;
  _this setDir 32.422527;
  _this setPos [1844.1846, 2744.1328, 2.0881774];
};

_vehicle_1475 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1848.2229, 2749.1453, 1.1048715], [], 0, "CAN_COLLIDE"];
  _vehicle_1475 = _this;
  _this setDir 32.422527;
  _this setPos [1848.2229, 2749.1453, 1.1048715];
};

_vehicle_1476 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1851.324, 2753.2993, 0.68238735], [], 0, "CAN_COLLIDE"];
  _vehicle_1476 = _this;
  _this setDir 32.422527;
  _this setPos [1851.324, 2753.2993, 0.68238735];
};

_vehicle_1477 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1853.5861, 2756.7959, 0.52819419], [], 0, "CAN_COLLIDE"];
  _vehicle_1477 = _this;
  _this setDir 32.422527;
  _this setPos [1853.5861, 2756.7959, 0.52819419];
};

_vehicle_1478 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1855.2384, 2759.4424, 0.32939267], [], 0, "CAN_COLLIDE"];
  _vehicle_1478 = _this;
  _this setDir 32.422527;
  _this setPos [1855.2384, 2759.4424, 0.32939267];
};

_vehicle_1479 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1857.3607, 2762.7395, 0.33569455], [], 0, "CAN_COLLIDE"];
  _vehicle_1479 = _this;
  _this setDir 32.422527;
  _this setPos [1857.3607, 2762.7395, 0.33569455];
};

_vehicle_1480 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1859.0588, 2765.2046, 0.35185385], [], 0, "CAN_COLLIDE"];
  _vehicle_1480 = _this;
  _this setDir 32.422527;
  _this setPos [1859.0588, 2765.2046, 0.35185385];
};

_vehicle_1481 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1864.0608, 2760.3105, 0.16229653], [], 0, "CAN_COLLIDE"];
  _vehicle_1481 = _this;
  _this setDir 32.422527;
  _this setPos [1864.0608, 2760.3105, 0.16229653];
};

_vehicle_1482 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1862.2751, 2758.0608, 0.34601426], [], 0, "CAN_COLLIDE"];
  _vehicle_1482 = _this;
  _this setDir 32.422527;
  _this setPos [1862.2751, 2758.0608, 0.34601426];
};

_vehicle_1483 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1860.3727, 2754.8774, 0.31855106], [], 0, "CAN_COLLIDE"];
  _vehicle_1483 = _this;
  _this setDir 32.422527;
  _this setPos [1860.3727, 2754.8774, 0.31855106];
};

_vehicle_1484 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1859.8217, 2755.9707, 0.37150431], [], 0, "CAN_COLLIDE"];
  _vehicle_1484 = _this;
  _this setDir 32.422527;
  _this setPos [1859.8217, 2755.9707, 0.37150431];
};

_vehicle_1485 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1858.3438, 2753.2939, 0.57767463], [], 0, "CAN_COLLIDE"];
  _vehicle_1485 = _this;
  _this setDir 32.422527;
  _this setPos [1858.3438, 2753.2939, 0.57767463];
};

_vehicle_1486 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1856.408, 2750.0608, 0.72901702], [], 0, "CAN_COLLIDE"];
  _vehicle_1486 = _this;
  _this setDir 32.422527;
  _this setPos [1856.408, 2750.0608, 0.72901702];
};

_vehicle_1487 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1853.1798, 2745.2485, 1.2660539], [], 0, "CAN_COLLIDE"];
  _vehicle_1487 = _this;
  _this setDir 32.422527;
  _this setPos [1853.1798, 2745.2485, 1.2660539];
};

_vehicle_1488 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1850.5524, 2741.1543, 2.0416172], [], 0, "CAN_COLLIDE"];
  _vehicle_1488 = _this;
  _this setDir 32.422527;
  _this setPos [1850.5524, 2741.1543, 2.0416172];
};

_vehicle_1489 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1848.9591, 2738.2939, 3.1506174], [], 0, "CAN_COLLIDE"];
  _vehicle_1489 = _this;
  _this setDir 32.422527;
  _this setPos [1848.9591, 2738.2939, 3.1506174];
};

_vehicle_1490 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1847.8267, 2736.2681, 3.9809177], [], 0, "CAN_COLLIDE"];
  _vehicle_1490 = _this;
  _this setDir 32.422527;
  _this setPos [1847.8267, 2736.2681, 3.9809177];
};

_vehicle_1491 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1846.3053, 2734.0339, 4.4397144], [], 0, "CAN_COLLIDE"];
  _vehicle_1491 = _this;
  _this setDir 32.422527;
  _this setPos [1846.3053, 2734.0339, 4.4397144];
};

_vehicle_1492 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1845.4056, 2732.3125, 3.2594898], [], 0, "CAN_COLLIDE"];
  _vehicle_1492 = _this;
  _this setDir 32.422527;
  _this setPos [1845.4056, 2732.3125, 3.2594898];
};

_vehicle_1493 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1843.7866, 2732.6755, 2.7137868], [], 0, "CAN_COLLIDE"];
  _vehicle_1493 = _this;
  _this setDir 32.422527;
  _this setPos [1843.7866, 2732.6755, 2.7137868];
};

_vehicle_1494 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1841.1012, 2733.6807, 1.5603864], [], 0, "CAN_COLLIDE"];
  _vehicle_1494 = _this;
  _this setDir 32.422527;
  _this setPos [1841.1012, 2733.6807, 1.5603864];
};

_vehicle_1495 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1840.532, 2734.4966, 1.4408033], [], 0, "CAN_COLLIDE"];
  _vehicle_1495 = _this;
  _this setDir 32.422527;
  _this setPos [1840.532, 2734.4966, 1.4408033];
};

_vehicle_1496 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1839.832, 2735.5435, 1.3711183], [], 0, "CAN_COLLIDE"];
  _vehicle_1496 = _this;
  _this setDir 32.422527;
  _this setPos [1839.832, 2735.5435, 1.3711183];
};

_vehicle_1497 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1835.6301, 2729.8679, 2.2852361], [], 0, "CAN_COLLIDE"];
  _vehicle_1497 = _this;
  _this setDir 32.422527;
  _this setPos [1835.6301, 2729.8679, 2.2852361];
};

_vehicle_1498 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [1846.4136, 2731.2358, 3.2106807], [], 0, "CAN_COLLIDE"];
  _vehicle_1498 = _this;
  _this setDir 32.422527;
  _this setPos [1846.4136, 2731.2358, 3.2106807];
};

_unit_127 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["ibr_lingorman6", [2375.4302, 4120.2432, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _unit_127 = _this;
  _this setDir 70.515434;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_1570 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [2372.9741, 4119.0942, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1570 = _this;
  _this setPos [2372.9741, 4119.0942, 7.6293945e-006];
};

_vehicle_1571 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_TyreHeap", [2373.0583, 4121.0146, -0.36407927], [], 0, "CAN_COLLIDE"];
  _vehicle_1571 = _this;
  _this setPos [2373.0583, 4121.0146, -0.36407927];
};

_unit_128 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["ibr_lingorman6s", [1737.4084, 4142.3691, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _unit_128 = _this;
  _this setDir 184.57875;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_1573 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [4239.7866, 4838.1948], [], 0, "CAN_COLLIDE"];
  _vehicle_1573 = _this;
  _this setDir 263.12741;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [4239.7866, 4838.1948];
};

_vehicle_1574 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Hospital", [4194.916, 5026.9009, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1574 = _this;
  _this setDir 0.42999688;
  _this setPos [4194.916, 5026.9009, 3.8146973e-006];
};

_vehicle_1576 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [7030.1812, 7101.311, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1576 = _this;
  _this setDir 177.98137;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [7030.1812, 7101.311, -3.0517578e-005];
};

_vehicle_1579 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [3601.4385, 3688.615, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1579 = _this;
  _this setDir 93.240929;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [3601.4385, 3688.615, 1.5258789e-005];
};

_vehicle_1581 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [4033.2229, 1665.0542, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1581 = _this;
  _this setDir 273.75558;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [4033.2229, 1665.0542, 3.8146973e-006];
};

_vehicle_1583 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [897.94263, 5275.291, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1583 = _this;
  _this setDir 181.31325;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [897.94263, 5275.291, 1.9073486e-006];
};

_vehicle_1586 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [2398.7625, 4106.9507, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1586 = _this;
  _this setPos [2398.7625, 4106.9507, 0];
};

_vehicle_1587 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [2383.6909, 4129.8105, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1587 = _this;
  _this setDir 251.04749;
  _this setPos [2383.6909, 4129.8105, -3.0517578e-005];
};

_vehicle_1589 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [1724.5612, 4134.7891, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1589 = _this;
  _this setDir 278.99225;
  _this setPos [1724.5612, 4134.7891, -3.8146973e-006];
};

_vehicle_1591 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [4256.0864, 4486.8037, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1591 = _this;
  _this setDir 251.04749;
  _this setPos [4256.0864, 4486.8037, 0];
};

_vehicle_1593 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [4241.6924, 4836.3877, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1593 = _this;
  _this setDir 251.04749;
  _this setPos [4241.6924, 4836.3877, 0];
};

_vehicle_1595 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [7038.0854, 7102.2104], [], 0, "CAN_COLLIDE"];
  _vehicle_1595 = _this;
  _this setDir 437.86368;
  _this setPos [7038.0854, 7102.2104];
};

_vehicle_1597 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [4031.4514, 1654.8457, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1597 = _this;
  _this setDir 251.04749;
  _this setPos [4031.4514, 1654.8457, 0];
};

_vehicle_1599 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [7542.707, 3028.2769, 1.4305115e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1599 = _this;
  _this setDir 251.04749;
  _this setPos [7542.707, 3028.2769, 1.4305115e-006];
};

_vehicle_1601 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [7508.752, 2949.1206, 1.4305115e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1601 = _this;
  _this setDir 251.04749;
  _this setPos [7508.752, 2949.1206, 1.4305115e-006];
};

_vehicle_1602 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [3034.5256, 5933.7026, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1602 = _this;
  _this setPos [3034.5256, 5933.7026, 3.0517578e-005];
};

_vehicle_1603 = objNull;
if (true) then
{
  _this = createVehicle ["Mi8Wreck", [4036.0217, 1627.2798], [], 0, "CAN_COLLIDE"];
  _vehicle_1603 = _this;
  _this setDir 99.993553;
  _this setPos [4036.0217, 1627.2798];
};

_vehicle_1604 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2693.4846, 4097.4878, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1604 = _this;
  _this setPos [2693.4846, 4097.4878, 3.8146973e-005];
};

_vehicle_1606 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2684.4263, 4098.562, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1606 = _this;
  _this setPos [2684.4263, 4098.562, -2.2888184e-005];
};

_vehicle_1608 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2703.1843, 4098.0688, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1608 = _this;
  _this setPos [2703.1843, 4098.0688, 0];
};

_vehicle_1610 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2721.8, 4105.8521, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1610 = _this;
  _this setPos [2721.8, 4105.8521, 4.5776367e-005];
};

_vehicle_1612 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2735.8655, 4114.8359, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1612 = _this;
  _this setPos [2735.8655, 4114.8359, 7.6293945e-005];
};

_vehicle_1614 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2736.6545, 4120.6885, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1614 = _this;
  _this setPos [2736.6545, 4120.6885, 5.3405762e-005];
};

_vehicle_1616 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2746.1665, 4129.9658, -0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_1616 = _this;
  _this setPos [2746.1665, 4129.9658, -0.00011444092];
};

_vehicle_1618 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2760.6035, 4139.4644, 0.00030517578], [], 0, "CAN_COLLIDE"];
  _vehicle_1618 = _this;
  _this setPos [2760.6035, 4139.4644, 0.00030517578];
};

_vehicle_1620 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2772.6321, 4148.3115, -9.5367432e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1620 = _this;
  _this setPos [2772.6321, 4148.3115, -9.5367432e-005];
};

_vehicle_1622 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2779.5662, 4152.7622, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1622 = _this;
  _this setPos [2779.5662, 4152.7622, 1.1444092e-005];
};

_vehicle_1624 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2785.822, 4153.0029, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1624 = _this;
  _this setPos [2785.822, 4153.0029, 6.8664551e-005];
};

_vehicle_1626 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2791.4368, 4151.3032, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1626 = _this;
  _this setPos [2791.4368, 4151.3032, 0];
};

_vehicle_1628 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2801.2693, 4149.0347, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1628 = _this;
  _this setPos [2801.2693, 4149.0347, -3.0517578e-005];
};

_vehicle_1630 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2809.5383, 4145.4468, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1630 = _this;
  _this setPos [2809.5383, 4145.4468, -1.5258789e-005];
};

_vehicle_1632 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2817.6047, 4139.1045, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1632 = _this;
  _this setPos [2817.6047, 4139.1045, -3.8146973e-005];
};

_vehicle_1634 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2823.6042, 4134.2656, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1634 = _this;
  _this setPos [2823.6042, 4134.2656, 5.3405762e-005];
};

_vehicle_1636 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2831.1714, 4130.751, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1636 = _this;
  _this setPos [2831.1714, 4130.751, -2.2888184e-005];
};

_vehicle_1638 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2843.4514, 4128.2642, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1638 = _this;
  _this setPos [2843.4514, 4128.2642, 6.1035156e-005];
};

_vehicle_1640 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2861.0498, 4129.9272, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1640 = _this;
  _this setPos [2861.0498, 4129.9272, -3.0517578e-005];
};

_vehicle_1642 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2873.7461, 4136.0337, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1642 = _this;
  _this setPos [2873.7461, 4136.0337, -1.5258789e-005];
};

_vehicle_1644 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2881.0173, 4142.5439, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1644 = _this;
  _this setPos [2881.0173, 4142.5439, -3.8146973e-006];
};

_vehicle_1646 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2886.1926, 4147.8823, 4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1646 = _this;
  _this setPos [2886.1926, 4147.8823, 4.196167e-005];
};

_vehicle_1648 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2891.8767, 4154.2842, -6.4849854e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1648 = _this;
  _this setPos [2891.8767, 4154.2842, -6.4849854e-005];
};

_vehicle_1650 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2896.5237, 4161.9556, -4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1650 = _this;
  _this setPos [2896.5237, 4161.9556, -4.196167e-005];
};

_vehicle_1652 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3034.2573, 4171.0005, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1652 = _this;
  _this setPos [3034.2573, 4171.0005, -2.2888184e-005];
};

_vehicle_1654 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3043.8406, 4166.769, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1654 = _this;
  _this setPos [3043.8406, 4166.769, -6.1035156e-005];
};

_vehicle_1656 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3051.3882, 4161.6528, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1656 = _this;
  _this setPos [3051.3882, 4161.6528, 9.1552734e-005];
};

_vehicle_1658 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3057.1597, 4154.792, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1658 = _this;
  _this setPos [3057.1597, 4154.792, 5.3405762e-005];
};

_vehicle_1660 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3062.0796, 4145.6909, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1660 = _this;
  _this setPos [3062.0796, 4145.6909, 9.1552734e-005];
};

_vehicle_1662 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3060.8833, 4138.4727, -0.00021362305], [], 0, "CAN_COLLIDE"];
  _vehicle_1662 = _this;
  _this setPos [3060.8833, 4138.4727, -0.00021362305];
};

_vehicle_1664 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3054.7815, 4132.2051, -0.00012969971], [], 0, "CAN_COLLIDE"];
  _vehicle_1664 = _this;
  _this setPos [3054.7815, 4132.2051, -0.00012969971];
};

_vehicle_1666 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3050.1497, 4127.4292, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1666 = _this;
  _this setPos [3050.1497, 4127.4292, 5.3405762e-005];
};

_vehicle_1668 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3043.2854, 4124.8604, 0.00016021729], [], 0, "CAN_COLLIDE"];
  _vehicle_1668 = _this;
  _this setPos [3043.2854, 4124.8604, 0.00016021729];
};

_vehicle_1670 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3037.9272, 4120.9668, -9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1670 = _this;
  _this setPos [3037.9272, 4120.9668, -9.1552734e-005];
};

_vehicle_1672 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3036.8606, 4111.9722, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1672 = _this;
  _this setPos [3036.8606, 4111.9722, 7.6293945e-006];
};

_vehicle_1674 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3042.5889, 4116.2998, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1674 = _this;
  _this setPos [3042.5889, 4116.2998, 7.6293945e-006];
};

_vehicle_1676 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3033.9187, 4106.8594, -5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1676 = _this;
  _this setPos [3033.9187, 4106.8594, -5.3405762e-005];
};

_vehicle_1678 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3029.8545, 4094.6499, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1678 = _this;
  _this setPos [3029.8545, 4094.6499, 1.5258789e-005];
};

_vehicle_1680 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3025.1692, 4089.4949, -0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_1680 = _this;
  _this setPos [3025.1692, 4089.4949, -0.00012207031];
};

_vehicle_1682 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3019.4907, 4083.3948, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1682 = _this;
  _this setPos [3019.4907, 4083.3948, 7.6293945e-006];
};

_vehicle_1684 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3017.302, 4080.0176, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1684 = _this;
  _this setPos [3017.302, 4080.0176, -7.6293945e-006];
};

_vehicle_1686 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3013.7229, 4071.5288, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1686 = _this;
  _this setPos [3013.7229, 4071.5288, 3.0517578e-005];
};

_vehicle_1688 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3011.2327, 4066.7695, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1688 = _this;
  _this setPos [3011.2327, 4066.7695, -1.5258789e-005];
};

_vehicle_1690 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3009.5244, 4061.3547, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1690 = _this;
  _this setPos [3009.5244, 4061.3547, 0];
};

_vehicle_1692 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3012.1187, 4053.218, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1692 = _this;
  _this setPos [3012.1187, 4053.218, 5.3405762e-005];
};

_vehicle_1694 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3014.6458, 4045.7996, -0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_1694 = _this;
  _this setPos [3014.6458, 4045.7996, -0.00011444092];
};

_vehicle_1696 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3015.4131, 4038.9246, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1696 = _this;
  _this setPos [3015.4131, 4038.9246, 6.1035156e-005];
};

_vehicle_1698 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3015.0034, 4030.5703, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1698 = _this;
  _this setPos [3015.0034, 4030.5703, 5.3405762e-005];
};

_vehicle_1700 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3013.6177, 4025.364, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1700 = _this;
  _this setPos [3013.6177, 4025.364, 3.8146973e-005];
};

_vehicle_1702 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3011.3777, 4015.4458, -0.00029754639], [], 0, "CAN_COLLIDE"];
  _vehicle_1702 = _this;
  _this setPos [3011.3777, 4015.4458, -0.00029754639];
};

_vehicle_1704 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3008.8801, 4012.3918, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1704 = _this;
  _this setPos [3008.8801, 4012.3918, 5.3405762e-005];
};

_vehicle_1706 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2968.52, 3999.8271, 0.00074005127], [], 0, "CAN_COLLIDE"];
  _vehicle_1706 = _this;
  _this setPos [2968.52, 3999.8271, 0.00074005127];
};

_vehicle_1708 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2969.2932, 4005.1602, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1708 = _this;
  _this setPos [2969.2932, 4005.1602, 9.1552734e-005];
};

_vehicle_1710 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2967.5901, 4012.176, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1710 = _this;
  _this setPos [2967.5901, 4012.176, 4.5776367e-005];
};

_vehicle_1712 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2960.116, 4020.1829, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1712 = _this;
  _this setPos [2960.116, 4020.1829, -3.0517578e-005];
};

_vehicle_1714 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2957.218, 4024.6565, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1714 = _this;
  _this setPos [2957.218, 4024.6565, 2.2888184e-005];
};

_vehicle_1716 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2953.1357, 4028.0623, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1716 = _this;
  _this setPos [2953.1357, 4028.0623, 3.0517578e-005];
};

_vehicle_1718 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2948.1995, 4031.6814, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1718 = _this;
  _this setPos [2948.1995, 4031.6814, -4.5776367e-005];
};

_vehicle_1720 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2944.3096, 4033.4578, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1720 = _this;
  _this setPos [2944.3096, 4033.4578, 7.6293945e-006];
};

_vehicle_1722 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2939.5593, 4031.2583, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1722 = _this;
  _this setPos [2939.5593, 4031.2583, 7.6293945e-006];
};

_vehicle_1724 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2934.9089, 4027.8132, 8.392334e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1724 = _this;
  _this setPos [2934.9089, 4027.8132, 8.392334e-005];
};

_vehicle_1726 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2925.4028, 4023.7043, 0.00016021729], [], 0, "CAN_COLLIDE"];
  _vehicle_1726 = _this;
  _this setPos [2925.4028, 4023.7043, 0.00016021729];
};

_vehicle_1728 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2922.8384, 4018.8638, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1728 = _this;
  _this setPos [2922.8384, 4018.8638, 1.5258789e-005];
};

_vehicle_1730 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2917.335, 4015.8806, 0.00023651123], [], 0, "CAN_COLLIDE"];
  _vehicle_1730 = _this;
  _this setPos [2917.335, 4015.8806, 0.00023651123];
};

_vehicle_1732 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2915.1047, 4012.2813, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1732 = _this;
  _this setPos [2915.1047, 4012.2813, -6.1035156e-005];
};

_vehicle_1734 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2911.9316, 4008.7107, 0.00017547607], [], 0, "CAN_COLLIDE"];
  _vehicle_1734 = _this;
  _this setPos [2911.9316, 4008.7107, 0.00017547607];
};

_vehicle_1736 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2908.3679, 4001.3455, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1736 = _this;
  _this setPos [2908.3679, 4001.3455, 0];
};

_vehicle_1738 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2908.3611, 3993.6157, 0.00015258789], [], 0, "CAN_COLLIDE"];
  _vehicle_1738 = _this;
  _this setPos [2908.3611, 3993.6157, 0.00015258789];
};

_vehicle_1740 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2904.7119, 3986.7422, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1740 = _this;
  _this setPos [2904.7119, 3986.7422, 3.0517578e-005];
};

_vehicle_1742 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2902.2986, 3978.1206, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1742 = _this;
  _this setPos [2902.2986, 3978.1206, 1.5258789e-005];
};

_vehicle_1744 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2897.9761, 3968.7363, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1744 = _this;
  _this setPos [2897.9761, 3968.7363, 6.1035156e-005];
};

_vehicle_1746 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2892.1514, 3959.1221, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1746 = _this;
  _this setPos [2892.1514, 3959.1221, 0];
};

_vehicle_1748 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2886.5603, 3951.8665, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1748 = _this;
  _this setPos [2886.5603, 3951.8665, 6.1035156e-005];
};

_vehicle_1750 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2880.3398, 3942.2813, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1750 = _this;
  _this setPos [2880.3398, 3942.2813, 1.5258789e-005];
};

_vehicle_1752 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2875.7375, 3937.283, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1752 = _this;
  _this setPos [2875.7375, 3937.283, -3.0517578e-005];
};

_vehicle_1754 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2872.2813, 3929.8892, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1754 = _this;
  _this setPos [2872.2813, 3929.8892, 0];
};

_vehicle_1756 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2862.4253, 3925.8872, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1756 = _this;
  _this setPos [2862.4253, 3925.8872, 7.6293945e-005];
};

_vehicle_1758 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2855.0129, 3925.1455, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1758 = _this;
  _this setPos [2855.0129, 3925.1455, -4.5776367e-005];
};

_vehicle_1760 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2848.5776, 3925.1433, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1760 = _this;
  _this setPos [2848.5776, 3925.1433, -2.2888184e-005];
};

_vehicle_1762 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2842.5498, 3926.4468, 0.00017547607], [], 0, "CAN_COLLIDE"];
  _vehicle_1762 = _this;
  _this setPos [2842.5498, 3926.4468, 0.00017547607];
};

_vehicle_1764 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2836.4448, 3931.6194, 9.9182129e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1764 = _this;
  _this setPos [2836.4448, 3931.6194, 9.9182129e-005];
};

_vehicle_1766 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2832.4661, 3939.0974, 0.00016021729], [], 0, "CAN_COLLIDE"];
  _vehicle_1766 = _this;
  _this setPos [2832.4661, 3939.0974, 0.00016021729];
};

_vehicle_1768 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2829.8567, 3948.9392, 0.0002822876], [], 0, "CAN_COLLIDE"];
  _vehicle_1768 = _this;
  _this setPos [2829.8567, 3948.9392, 0.0002822876];
};

_vehicle_1770 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2827.5945, 3955.7896, 0.00016784668], [], 0, "CAN_COLLIDE"];
  _vehicle_1770 = _this;
  _this setPos [2827.5945, 3955.7896, 0.00016784668];
};

_vehicle_1772 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2825.0759, 3961.8271, -0.00016784668], [], 0, "CAN_COLLIDE"];
  _vehicle_1772 = _this;
  _this setPos [2825.0759, 3961.8271, -0.00016784668];
};

_vehicle_1774 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2821.1279, 3972.8113, -0.00042724609], [], 0, "CAN_COLLIDE"];
  _vehicle_1774 = _this;
  _this setPos [2821.1279, 3972.8113, -0.00042724609];
};

_vehicle_1776 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2818.5969, 3983.6233, 8.392334e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1776 = _this;
  _this setPos [2818.5969, 3983.6233, 8.392334e-005];
};

_vehicle_1778 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2816.4758, 3994.7629, 0.00016021729], [], 0, "CAN_COLLIDE"];
  _vehicle_1778 = _this;
  _this setPos [2816.4758, 3994.7629, 0.00016021729];
};

_vehicle_1780 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2815.8884, 4000.908, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1780 = _this;
  _this setPos [2815.8884, 4000.908, -4.5776367e-005];
};

_vehicle_1782 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2815.0205, 4010.3335, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1782 = _this;
  _this setPos [2815.0205, 4010.3335, 2.2888184e-005];
};

_vehicle_1784 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2811.27, 4015.7458, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1784 = _this;
  _this setPos [2811.27, 4015.7458, -3.8146973e-005];
};

_vehicle_1786 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2799.3364, 4018.7783, -0.00033569336], [], 0, "CAN_COLLIDE"];
  _vehicle_1786 = _this;
  _this setPos [2799.3364, 4018.7783, -0.00033569336];
};

_vehicle_1788 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2791.5127, 4020.6611, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1788 = _this;
  _this setPos [2791.5127, 4020.6611, -7.6293945e-006];
};

_vehicle_1790 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2782.1792, 4015.7935, 0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_1790 = _this;
  _this setPos [2782.1792, 4015.7935, 0.00012207031];
};

_vehicle_1792 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2775.2065, 4011.0986, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1792 = _this;
  _this setPos [2775.2065, 4011.0986, 3.0517578e-005];
};

_vehicle_1794 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2769.2686, 4008.7261, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1794 = _this;
  _this setPos [2769.2686, 4008.7261, 2.2888184e-005];
};

_vehicle_1796 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2761.821, 4005.3777, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1796 = _this;
  _this setPos [2761.821, 4005.3777, 0];
};

_vehicle_1798 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2755.2349, 4000.9563, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1798 = _this;
  _this setPos [2755.2349, 4000.9563, -4.5776367e-005];
};

_vehicle_1800 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2748.4707, 3996.55, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1800 = _this;
  _this setPos [2748.4707, 3996.55, 2.2888184e-005];
};

_vehicle_1802 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2741.2683, 3993.875, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1802 = _this;
  _this setPos [2741.2683, 3993.875, -1.5258789e-005];
};

_vehicle_1804 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2730.8684, 3989.613, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1804 = _this;
  _this setPos [2730.8684, 3989.613, -3.0517578e-005];
};

_vehicle_1806 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2719.3826, 3986.8518, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1806 = _this;
  _this setPos [2719.3826, 3986.8518, 2.2888184e-005];
};

_vehicle_1808 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2708.6128, 3985.5024, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1808 = _this;
  _this setPos [2708.6128, 3985.5024, 2.2888184e-005];
};

_vehicle_1810 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2698.6648, 3983.9141, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1810 = _this;
  _this setPos [2698.6648, 3983.9141, -6.1035156e-005];
};

_vehicle_1812 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2683.011, 3982.6887, 0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_1812 = _this;
  _this setPos [2683.011, 3982.6887, 0.00011444092];
};

_vehicle_1814 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2673.6133, 3985.2278, -0.00010681152], [], 0, "CAN_COLLIDE"];
  _vehicle_1814 = _this;
  _this setPos [2673.6133, 3985.2278, -0.00010681152];
};

_vehicle_1816 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2666.4319, 3986.7703, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1816 = _this;
  _this setPos [2666.4319, 3986.7703, -1.5258789e-005];
};

_vehicle_1818 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2657.1609, 3986.4802, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1818 = _this;
  _this setPos [2657.1609, 3986.4802, 7.6293945e-006];
};

_vehicle_1820 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2647.1104, 3982.7458, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1820 = _this;
  _this setPos [2647.1104, 3982.7458, -4.5776367e-005];
};

_vehicle_1822 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2634.6948, 3977.6589, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1822 = _this;
  _this setPos [2634.6948, 3977.6589, -3.8146973e-005];
};

_vehicle_1824 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2629.6379, 3974.2761, 0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_1824 = _this;
  _this setPos [2629.6379, 3974.2761, 0.00012207031];
};

_vehicle_1826 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2622.6667, 3971.0352, -9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1826 = _this;
  _this setPos [2622.6667, 3971.0352, -9.1552734e-005];
};

_vehicle_1828 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2616.7808, 3968.4341, 8.392334e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1828 = _this;
  _this setPos [2616.7808, 3968.4341, 8.392334e-005];
};

_vehicle_1830 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2610.1531, 3963.5571, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1830 = _this;
  _this setPos [2610.1531, 3963.5571, 6.8664551e-005];
};

_vehicle_1832 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2604.5688, 3959.4146, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1832 = _this;
  _this setPos [2604.5688, 3959.4146, 3.0517578e-005];
};

_vehicle_1834 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2572.134, 3939.374, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1834 = _this;
  _this setPos [2572.134, 3939.374, -7.6293945e-006];
};

_vehicle_1836 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2562.1882, 3934.0259, -5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1836 = _this;
  _this setPos [2562.1882, 3934.0259, -5.3405762e-005];
};

_vehicle_1838 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2553.9448, 3930.3518, -5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1838 = _this;
  _this setPos [2553.9448, 3930.3518, -5.3405762e-005];
};

_vehicle_1840 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2541.9395, 3924.1902, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1840 = _this;
  _this setPos [2541.9395, 3924.1902, -2.2888184e-005];
};

_vehicle_1842 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2532.6079, 3921.5889, -6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1842 = _this;
  _this setPos [2532.6079, 3921.5889, -6.8664551e-005];
};

_vehicle_1844 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2522.3125, 3919.552, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1844 = _this;
  _this setPos [2522.3125, 3919.552, 4.5776367e-005];
};

_vehicle_1846 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2514.342, 3919.6724, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1846 = _this;
  _this setPos [2514.342, 3919.6724, 0];
};

_vehicle_1848 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2507.0439, 3923.9155, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1848 = _this;
  _this setPos [2507.0439, 3923.9155, 0];
};

_vehicle_1850 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2496.1914, 3927.3018, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1850 = _this;
  _this setPos [2496.1914, 3927.3018, -6.1035156e-005];
};

_vehicle_1852 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2486.5889, 3928.7002, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1852 = _this;
  _this setPos [2486.5889, 3928.7002, -4.5776367e-005];
};

_vehicle_1854 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2479.0398, 3932.9194, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1854 = _this;
  _this setPos [2479.0398, 3932.9194, -6.1035156e-005];
};

_vehicle_1856 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2459.1902, 3944.1584, -6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1856 = _this;
  _this setPos [2459.1902, 3944.1584, -6.8664551e-005];
};

_vehicle_1858 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2455.7036, 3945.8262, -0.00010681152], [], 0, "CAN_COLLIDE"];
  _vehicle_1858 = _this;
  _this setPos [2455.7036, 3945.8262, -0.00010681152];
};

_vehicle_1860 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2451.9104, 3948.0474, 0.00010681152], [], 0, "CAN_COLLIDE"];
  _vehicle_1860 = _this;
  _this setPos [2451.9104, 3948.0474, 0.00010681152];
};

_vehicle_1862 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2445.4438, 3951.1255, -0.00015258789], [], 0, "CAN_COLLIDE"];
  _vehicle_1862 = _this;
  _this setPos [2445.4438, 3951.1255, -0.00015258789];
};

_vehicle_1864 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2440.1023, 3954.6978, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1864 = _this;
  _this setPos [2440.1023, 3954.6978, -6.1035156e-005];
};

_vehicle_1866 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2434.8953, 3958.2744, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1866 = _this;
  _this setPos [2434.8953, 3958.2744, 2.2888184e-005];
};

_vehicle_1868 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2427.6904, 3963.8865, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1868 = _this;
  _this setPos [2427.6904, 3963.8865, 7.6293945e-005];
};

_vehicle_1870 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2423.2761, 3967.7371, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1870 = _this;
  _this setPos [2423.2761, 3967.7371, 2.2888184e-005];
};

_vehicle_1872 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2420.1899, 3971.9216, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1872 = _this;
  _this setPos [2420.1899, 3971.9216, -1.5258789e-005];
};

_vehicle_1874 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2418.7639, 3979.6809, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1874 = _this;
  _this setPos [2418.7639, 3979.6809, -7.6293945e-006];
};

_vehicle_1876 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2419, 3986.7332, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1876 = _this;
  _this setPos [2419, 3986.7332, -1.5258789e-005];
};

_vehicle_1878 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2410.1018, 4068.9185, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1878 = _this;
  _this setPos [2410.1018, 4068.9185, -3.8146973e-006];
};

_vehicle_1880 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2411.6882, 4062.7744, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1880 = _this;
  _this setPos [2411.6882, 4062.7744, -7.6293945e-006];
};

_vehicle_1882 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2413.2168, 4058.2739, 0.00011825562], [], 0, "CAN_COLLIDE"];
  _vehicle_1882 = _this;
  _this setPos [2413.2168, 4058.2739, 0.00011825562];
};

_vehicle_1884 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2415.3606, 4054.0347, 0.00020599365], [], 0, "CAN_COLLIDE"];
  _vehicle_1884 = _this;
  _this setPos [2415.3606, 4054.0347, 0.00020599365];
};

_vehicle_1886 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2419.4167, 4047.5879, -0.0001449585], [], 0, "CAN_COLLIDE"];
  _vehicle_1886 = _this;
  _this setPos [2419.4167, 4047.5879, -0.0001449585];
};

_vehicle_1888 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2422.4631, 4043.126, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1888 = _this;
  _this setPos [2422.4631, 4043.126, 5.3405762e-005];
};

_vehicle_1890 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [2426.24, 4034.6721, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1890 = _this;
  _this setPos [2426.24, 4034.6721, -2.2888184e-005];
};

_vehicle_1891 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierWhite_EP1", [3010.3718, 5929.4023, 7.362772], [], 0, "CAN_COLLIDE"];
  _vehicle_1891 = _this;
  _this setDir 13.515052;
  _this setPos [3010.3718, 5929.4023, 7.362772];
};

_vehicle_1892 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierUSA", [7041.3745, 7092.3813, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1892 = _this;
  _this setPos [7041.3745, 7092.3813, 3.0517578e-005];
};

_vehicle_1894 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierOPFOR_EP1", [7514.4966, 2949.5847, 2.0032303], [], 0, "CAN_COLLIDE"];
  _vehicle_1894 = _this;
  _this setDir 263.13947;
  _this setPos [7514.4966, 2949.5847, 2.0032303];
};

_vehicle_1896 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierWhite_EP1", [4031.2651, 1667.1394, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1896 = _this;
  _this setDir 93.686035;
  _this setPos [4031.2651, 1667.1394, -1.9073486e-006];
};

_vehicle_1897 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierWhite_EP1", [2374.2107, 4128.9751, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1897 = _this;
  _this setDir -80.712975;
  _this setPos [2374.2107, 4128.9751, 3.8146973e-006];
};

_vehicle_1901 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [6017.5332, 6616.5186, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1901 = _this;
  _this setPos [6017.5332, 6616.5186, 0];
};

_vehicle_1903 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierWhite_EP1", [6009.9697, 6630.625, 1.0490417e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1903 = _this;
  _this setDir -7.1864672;
  _this setPos [6009.9697, 6630.625, 1.0490417e-005];
};

_unit_154 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["RU_Doctor", [6678.1494, 4294.6987, 0.55937135], [], 0, "CAN_COLLIDE"];
  _unit_154 = _this;
  _this setDir 15.470127;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_unit_155 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["TK_CIV_Worker01_EP1", [6012.9453, 6629.125], [], 0, "CAN_COLLIDE"];
  _unit_155 = _this;
  _this setDir 156.50609;
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

processInitCommands;
