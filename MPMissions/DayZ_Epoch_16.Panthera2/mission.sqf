_this = createCenter west;
_center_0 = _this;

_group_0 = createGroup _center_0;

_this = createCenter civilian;
_center_1 = _this;

_group_1 = createGroup _center_1;

_vehicle_22 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [594.25812, 8935.4941, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_22 = _this;
  _this setPos [594.25812, 8935.4941, -1.9073486e-006];
};

_this = createCenter resistance;
_center_2 = _this;

_group_2 = createGroup _center_2;

_unit_63 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Soldier_Pilot", [543.11591, 8938.4941, 0.11634689], [], 0, "CAN_COLLIDE"];
  _unit_63 = _this;
  _this setDir 108.94255;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_65 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["UN_CDF_Soldier_MG_EP1", [2832.325, 8023.3774, 0.11357399], [], 0, "CAN_COLLIDE"];
  _unit_65 = _this;
  _this setDir -131.58987;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_25 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [2831.4177, 8022.6206, 0.15148999], [], 0, "CAN_COLLIDE"];
  _vehicle_25 = _this;
  _this setDir 39.406651;
  _this setPos [2831.4177, 8022.6206, 0.15148999];
  _this setVehicleInit "this allowDammage false; this enableSimulation false;";
};

_vehicle_26 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net1", [2835.425, 8023.3193, 0.071667306], [], 0, "CAN_COLLIDE"];
  _vehicle_26 = _this;
  _this setDir -54.977657;
  _this setPos [2835.425, 8023.3193, 0.071667306];
};

_vehicle_28 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net1", [2833.5068, 8024.4727, 0.072472528], [], 0, "CAN_COLLIDE"];
  _vehicle_28 = _this;
  _this setDir -43.586216;
  _this setPos [2833.5068, 8024.4727, 0.072472528];
};

_vehicle_30 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net1", [2834.0081, 8021.9819, 0.079588138], [], 0, "CAN_COLLIDE"];
  _vehicle_30 = _this;
  _this setDir -36.030712;
  _this setPos [2834.0081, 8021.9819, 0.079588138];
};

_unit_67 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Woodlander3", [8681.8027, 3145.0779, 2.8371811e-005], [], 0, "CAN_COLLIDE"];
  _unit_67 = _this;
  _this setDir 89.712273;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_32 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [8682.7588, 3144.9507, -2.3841858e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_32 = _this;
  _this setDir 93.772865;
  _this setPos [8682.7588, 3144.9507, -2.3841858e-007];
  _this setVehicleInit "this allowDammage false; this enableSimulation false;";
};

_vehicle_33 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [8681.375, 3143.1555, 9.059906e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_33 = _this;
  _this setDir 183.30055;
  _this setPos [8681.375, 3143.1555, 9.059906e-006];
};

_vehicle_34 = objNull;
if (true) then
{
  _this = createVehicle ["VaultStorageLocked", [8681.4189, 3146.6782, 1.4543533e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_34 = _this;
  _this setDir -85.670563;
  _this setPos [8681.4189, 3146.6782, 1.4543533e-005];
};

_unit_69 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Damsel5", [8681.4404, 3139.7356, 0.00013637543], [], 0, "CAN_COLLIDE"];
  _unit_69 = _this;
  _this setDir 101.61608;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_36 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [8682.2109, 3139.7153, -0.00018525124], [], 0, "CAN_COLLIDE"];
  _vehicle_36 = _this;
  _this setDir 93.772865;
  _this setPos [8682.2109, 3139.7153, -0.00018525124];
};

_vehicle_38 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_EP1", [8681.0635, 3138.0845, 8.5830688e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_38 = _this;
  _this setDir 13.43499;
  _this setPos [8681.0635, 3138.0845, 8.5830688e-006];
};

_vehicle_39 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_Backpackheap_EP1", [8681.2725, 3141.811], [], 0, "CAN_COLLIDE"];
  _vehicle_39 = _this;
  _this setPos [8681.2725, 3141.811];
};

_unit_78 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Soldier_Sab", [1909.8895, 3622.9905, 0.89042556], [], 0, "CAN_COLLIDE"];
  _unit_78 = _this;
  _this setDir -176.86101;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_40 = objNull;
if (true) then
{
  _this = createVehicle ["C130J_wreck_EP1", [1913.585, 3622.0823, -0.21721387], [], 0, "CAN_COLLIDE"];
  _vehicle_40 = _this;
  _this setDir -190.43407;
  _this setPos [1913.585, 3622.0823, -0.21721387];
};

_vehicle_41 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [1874.6018, 3562.0923, -4.7683716e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_41 = _this;
  _this setPos [1874.6018, 3562.0923, -4.7683716e-007];
};

_unit_83 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["Tanny_PMC", [2337.4709, 5237.0854, 3.1079786], [], 0, "CAN_COLLIDE"];
  _unit_83 = _this;
  _this setDir 120.79683;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_88 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Commander", [3982.6201, 6139.3389, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _unit_88 = _this;
  _this setDir 75.922546;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_91 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Woodlander1", [3982.1863, 6141.291, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _unit_91 = _this;
  _this setDir 98.994049;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_43 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Large", [3982.6479, 6137.7866, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_43 = _this;
  _this setDir 47.296623;
  _this setPos [3982.6479, 6137.7866, 3.8146973e-006];
};

_vehicle_44 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Small", [3981.2024, 6138.5249, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_44 = _this;
  _this setDir -91.175629;
  _this setPos [3981.2024, 6138.5249, 5.3405762e-005];
};

_vehicle_45 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrate_NoInteractive_", [3980.717, 6140.6123, -4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_45 = _this;
  _this setDir -75.093681;
  _this setPos [3980.717, 6140.6123, -4.196167e-005];
};

_vehicle_46 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [3984.0913, 6147.2495, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_46 = _this;
  _this setDir -46.105625;
  _this setPos [3984.0913, 6147.2495, -2.2888184e-005];
};

_vehicle_48 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CamoNet_EAST", [3983.8074, 6140.5, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_48 = _this;
  _this setDir -110.48308;
  _this setPos [3983.8074, 6140.5, -1.5258789e-005];
};

_vehicle_49 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [3983.5408, 6139.4087, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_49 = _this;
  _this setDir 79.01667;
  _this setPos [3983.5408, 6139.4087, 3.0517578e-005];
  _this setVehicleInit "this allowDammage false; this enableSimulation false;";
};

_vehicle_51 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [3983.1147, 6141.4097, 8.7738037e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_51 = _this;
  _this setDir 79.01667;
  _this setPos [3983.1147, 6141.4097, 8.7738037e-005];
  _this setVehicleInit "this allowDammage false; this enableSimulation false;";
};

_vehicle_62 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [9051.9014, 4062.7161, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_62 = _this;
  _this setPos [9051.9014, 4062.7161, 7.6293945e-006];
};

_unit_102 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["BAF_Pilot_MTP", [9046.5566, 4056.2429, 6.6757202e-006], [], 0, "CAN_COLLIDE"];
  _unit_102 = _this;
  _this setDir 41.582272;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_63 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [9047.4131, 4057.229, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_63 = _this;
  _this setDir 41.133785;
  _this setPos [9047.4131, 4057.229, -1.5258789e-005];
  _this setVehicleInit "this allowDammage false; this enableSimulation false;";
};

_vehicle_68 = objNull;
if (true) then
{
  _this = createVehicle ["TK_GUE_WarfareBAircraftFactory_EP1", [9047.7295, 4055.4709, -0.31283149], [], 0, "CAN_COLLIDE"];
  _vehicle_68 = _this;
  _this setDir 132.63834;
  _this setPos [9047.7295, 4055.4709, -0.31283149];
};

_vehicle_69 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [9115.0938, 4073.1077, -5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_69 = _this;
  _this setPos [9115.0938, 4073.1077, -5.7220459e-006];
};

_unit_107 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["UN_CDF_Soldier_AAT_EP1", [7224.3716, 730.62354, -4.6730042e-005], [], 0, "CAN_COLLIDE"];
  _unit_107 = _this;
  _this setDir -51.914528;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_71 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net1", [7225.8159, 729.15967, -9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_71 = _this;
  _this setDir 41.511929;
  _this setPos [7225.8159, 729.15967, -9.5367432e-007];
};

_vehicle_81 = objNull;
if (true) then
{
  _this = createVehicle ["BMP2_HQ_TK_unfolded_EP1", [5629.6938, 5047.5347, -0.28514138], [], 0, "CAN_COLLIDE"];
  _vehicle_81 = _this;
  _this setDir 161.61578;
  _this setPos [5629.6938, 5047.5347, -0.28514138];
};

_vehicle_82 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5633.3926, 5046.6572, -0.55039978], [], 0, "CAN_COLLIDE"];
  _vehicle_82 = _this;
  _this setDir 43.172794;
  _this setPos [5633.3926, 5046.6572, -0.55039978];
};

_unit_125 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["BAF_Soldier_AMG_W", [5633.9551, 5047.2637, -0.79090881], [], 0, "CAN_COLLIDE"];
  _unit_125 = _this;
  _this setDir 156.74988;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_87 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [5633.8457, 5046.1138, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_87 = _this;
  _this setDir -11.691458;
  _this setPos [5633.8457, 5046.1138, 1.5258789e-005];
  _this setVehicleInit "this allowDammage false; this enableSimulation false;";
};

_vehicle_89 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_EP1", [4419.5322, 1631.51, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_89 = _this;
  _this setDir 46.275173;
  _this setPos [4419.5322, 1631.51, 1.9073486e-006];
};

_vehicle_90 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [4427.7837, 1628.4592, -5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_90 = _this;
  _this setDir 23.986969;
  _this setPos [4427.7837, 1628.4592, -5.7220459e-006];
};

_vehicle_91 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_Backpackheap_EP1", [4422.3594, 1630.8168, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_91 = _this;
  _this setDir 64.795776;
  _this setPos [4422.3594, 1630.8168, -7.6293945e-006];
};

_unit_133 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Citizen2_EP1", [4425.9014, 1629.2626, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _unit_133 = _this;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_134 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["RU_Farmwife1", [4421.1494, 1631.6565], [], 0, "CAN_COLLIDE"];
  _unit_134 = _this;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_93 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [4426.2944, 1629.8995, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_93 = _this;
  _this setDir 21.153505;
  _this setPos [4426.2944, 1629.8995, 1.1444092e-005];
  _this setVehicleInit "this allowDammage false; this enableSimulation false;";
};

_vehicle_95 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [4421.3999, 1632.3695, 1.7166138e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_95 = _this;
  _this setDir 21.153505;
  _this setPos [4421.3999, 1632.3695, 1.7166138e-005];
  _this setVehicleInit "this allowDammage false; this enableSimulation false;";
};

_vehicle_100 = objNull;
if (true) then
{
  _this = createVehicle ["TK_WarfareBLightFactory_EP1", [7944.4624, 4807.0933, -0.31774208], [], 0, "CAN_COLLIDE"];
  _vehicle_100 = _this;
  _this setDir -180.23752;
  _this setPos [7944.4624, 4807.0933, -0.31774208];
};

_vehicle_101 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [7973.8721, 4823.9058, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_101 = _this;
  _this setPos [7973.8721, 4823.9058, 1.5258789e-005];
};

_unit_138 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Soldier_3", [7942.6382, 4805.4185, 8.1062317e-006], [], 0, "CAN_COLLIDE"];
  _unit_138 = _this;
  _this setDir 27.865156;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_103 = objNull;
if (true) then
{
  _this = createVehicle ["US_WarfareBLightFactory_base_EP1", [2915.4509, 3326.8347, -0.29626316], [], 0, "CAN_COLLIDE"];
  _vehicle_103 = _this;
  _this setDir 100.41417;
  _this setPos [2915.4509, 3326.8347, -0.29626316];
};

_unit_142 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["CZ_Special_Forces_MG_DES_EP1", [2917.9412, 3327.5701, -3.3378601e-006], [], 0, "CAN_COLLIDE"];
  _unit_142 = _this;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_105 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [2923.4763, 3357.9795, -1.8596649e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_105 = _this;
  _this setPos [2923.4763, 3357.9795, -1.8596649e-005];
};

_unit_143 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["US_Soldier_Medic_EP1", [2913.1702, 3328.3713, 2.5272369e-005], [], 0, "CAN_COLLIDE"];
  _unit_143 = _this;
  _this setDir -26.258764;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_146 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Soldier_Medic", [3981.9768, 6143.9092, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _unit_146 = _this;
  _this setDir 93.519081;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_150 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["BAF_Soldier_AAA_DDPM", [5633.1147, 5046.8662, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _unit_150 = _this;
  _this setDir 155.8688;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_159 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Soldier_1", [8947.5498, 4749.1328, 1.7938112], [], 0, "CAN_COLLIDE"];
  _unit_159 = _this;
  _this setDir -33.86211;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

processInitCommands;