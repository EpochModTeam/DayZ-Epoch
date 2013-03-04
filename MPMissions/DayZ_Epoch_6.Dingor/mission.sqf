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

_unit_20 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Worker2", [6013.0737, 6629.2124, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _unit_20 = _this;
  _this setDir 138.41472;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
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

_vehicle_121 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Nav_Boathouse_PierL", [7004.6323, 2825.9958, -0.90982872], [], 0, "CAN_COLLIDE"];
  _vehicle_121 = _this;
  _this setDir 29.618628;
  _this setPos [7004.6323, 2825.9958, -0.90982872];
};

_unit_34 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Profiteer4", [7007.6035, 2824.1733, 0.72850579], [], 0, "CAN_COLLIDE"];
  _unit_34 = _this;
  _this setDir 290.83194;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
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
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7038.4414, 7088.2085, -3.6239624e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_206 = _this;
  _this setDir -5.7702498;
  _this setPos [7038.4414, 7088.2085, -3.6239624e-005];
};

_vehicle_208 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7011.2861, 7102.5928, -4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_208 = _this;
  _this setDir 58.806374;
  _this setPos [7011.2861, 7102.5928, -4.7683716e-006];
};

_vehicle_210 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10x", [7024.8511, 7095.0171, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_210 = _this;
  _this setDir 29.150982;
  _this setPos [7024.8511, 7095.0171, 1.9073486e-005];
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
  _this = _group_1 createUnit ["Pilot_EP1", [7032.3154, 7105.1035, -1.8119812e-005], [], 0, "CAN_COLLIDE"];
  _unit_49 = _this;
  _this setDir -131.83742;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_vehicle_218 = objNull;
if (true) then
{
  _this = createVehicle ["US_WarfareBAircraftFactory_Base_EP1", [7031.0713, 7101.4814, -0.30294973], [], 0, "CAN_COLLIDE"];
  _vehicle_218 = _this;
  _this setDir 76.220131;
  _this setPos [7031.0713, 7101.4814, -0.30294973];
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
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7002.2314, 7114.1797, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_227 = _this;
  _this setDir 45.435726;
  _this setPos [7002.2314, 7114.1797, 1.5258789e-005];
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
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [6991.8711, 7124.0059, -1.0490417e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_234 = _this;
  _this setDir -148.35767;
  _this setPos [6991.8711, 7124.0059, -1.0490417e-005];
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

_vehicle_320 = objNull;
if (true) then
{
  _this = createVehicle ["UH1Wreck", [4039.405, 1631.5167, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_320 = _this;
  _this setDir -81.372345;
  _this setPos [4039.405, 1631.5167, -1.9073486e-006];
};

_vehicle_321 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [4057.5479, 1659.8588, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_321 = _this;
  _this setPos [4057.5479, 1659.8588, -1.1444092e-005];
};

_vehicle_322 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHRescue", [4045.4038, 1644.5143, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_322 = _this;
  _this setPos [4045.4038, 1644.5143, 5.7220459e-006];
};

_vehicle_323 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [4044.1455, 1676.8668, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_323 = _this;
  _this setPos [4044.1455, 1676.8668, 5.7220459e-006];
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
  _this = _group_1 createUnit ["Dr_Annie_Baker_EP1", [893.47778, 5268.6675, 3.6778364], [], 0, "CAN_COLLIDE"];
  _unit_76 = _this;
  _this setDir -5.7020383;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;
};

_unit_77 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["CIV_EuroWoman01_EP1", [893.40503, 5269.6675, 0.56924075], [], 0, "CAN_COLLIDE"];
  _unit_77 = _this;
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

processInitCommands;
