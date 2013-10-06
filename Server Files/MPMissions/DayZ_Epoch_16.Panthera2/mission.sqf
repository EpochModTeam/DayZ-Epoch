
_this = createCenter west;
_center_0 = _this;

_group_0 = createGroup _center_0;

_this = createCenter civilian;
_center_1 = _this;

_group_1 = createGroup _center_1;

_this = createCenter resistance;
_center_2 = _this;

_group_2 = createGroup _center_2;

_unit_63 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Soldier_Pilot", [4767.6304, 7481.7207, 0.0088642277], [], 0, "CAN_COLLIDE"];
  _unit_63 = _this;
  _this setDir -20.303209;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_unit_65 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["UN_CDF_Soldier_MG_EP1", [5227.6963, 8228.7188, 0.11357399], [], 0, "CAN_COLLIDE"];
  _unit_65 = _this;
  _this setDir -131.58987;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_25 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [5226.8516, 8228.6885, 0.15148999], [], 0, "CAN_COLLIDE"];
  _vehicle_25 = _this;
  _this setDir 76.292221;
  _this setPos [5226.8516, 8228.6885, 0.15148999];
};

_vehicle_28 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net1", [5229.543, 8226.9844, 0.072472528], [], 0, "CAN_COLLIDE"];
  _vehicle_28 = _this;
  _this setDir -43.586216;
  _this setPos [5229.543, 8226.9844, 0.072472528];
};

_unit_67 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Woodlander3", [8681.8027, 3145.0779, 2.8371811e-005], [], 0, "CAN_COLLIDE"];
  _unit_67 = _this;
  _this setDir 108.46211;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_32 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [8682.7588, 3144.9507, -2.3841858e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_32 = _this;
  _this setDir 93.772865;
  _this setPos [8682.7588, 3144.9507, -2.3841858e-007];
};

_vehicle_33 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [8681.4873, 3143.8115, 9.059906e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_33 = _this;
  _this setDir 183.30055;
  _this setPos [8681.4873, 3143.8115, 9.059906e-006];
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
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

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
  _this = createVehicle ["Misc_Backpackheap_EP1", [8681.4326, 3141.4419], [], 0, "CAN_COLLIDE"];
  _vehicle_39 = _this;
  _this setPos [8681.4326, 3141.4419];
};

_unit_78 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Soldier_Sab", [1909.8895, 3622.9905, 0.89042556], [], 0, "CAN_COLLIDE"];
  _unit_78 = _this;
  _this setDir -176.86101;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

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
  _this = _group_2 createUnit ["Tanny_PMC", [9050.6455, 4055.2571, 0.072279952], [], 0, "CAN_COLLIDE"];
  _unit_83 = _this;
  _this setDir 35.298309;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_unit_88 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Commander", [4431.647, 1623.0857, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _unit_88 = _this;
  _this setDir -78.908539;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_unit_91 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Woodlander1", [4430.9897, 1620.7772, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _unit_91 = _this;
  _this setDir -55.83704;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_43 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Large", [4432.4463, 1624.0919, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_43 = _this;
  _this setDir -72.744568;
  _this setPos [4432.4463, 1624.0919, 3.8146973e-006];
};

_vehicle_44 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Small", [4431.2207, 1619.2671, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_44 = _this;
  _this setDir -232.73204;
  _this setPos [4431.2207, 1619.2671, 5.3405762e-005];
};

_vehicle_45 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrate_NoInteractive_", [4431.8691, 1621.6033, -4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_45 = _this;
  _this setDir -154.5043;
  _this setPos [4431.8691, 1621.6033, -4.196167e-005];
};

_vehicle_46 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [4427.2227, 1634.8722, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_46 = _this;
  _this setDir -232.26501;
  _this setPos [4427.2227, 1634.8722, -2.2888184e-005];
};

_vehicle_49 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [4430.8945, 1623.502, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_49 = _this;
  _this setDir -68.312744;
  _this setPos [4430.8945, 1623.502, 3.0517578e-005];
};

_vehicle_51 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [4429.9204, 1621.2704, 8.7738037e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_51 = _this;
  _this setDir -64.814186;
  _this setPos [4429.9204, 1621.2704, 8.7738037e-005];
};

_vehicle_62 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [9052.8457, 4062.0542, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_62 = _this;
  _this setDir 12.14753;
  _this setPos [9052.8457, 4062.0542, 7.6293945e-006];
};

_unit_102 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["BAF_Pilot_MTP", [9046.2568, 4056.8503, 6.6757202e-006], [], 0, "CAN_COLLIDE"];
  _unit_102 = _this;
  _this setDir 53.729794;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_63 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [9047.3018, 4057.634, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_63 = _this;
  _this setDir 53.281307;
  _this setPos [9047.3018, 4057.634, -1.5258789e-005];
};

_vehicle_68 = objNull;
if (true) then
{
  _this = createVehicle ["TK_GUE_WarfareBAircraftFactory_EP1", [9047.7295, 4055.4709, -0.31283149], [], 0, "CAN_COLLIDE"];
  _vehicle_68 = _this;
  _this setDir 141.29843;
  _this setPos [9047.7295, 4055.4709, -0.31283149];
};

_unit_107 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["UN_CDF_Soldier_AAT_EP1", [7221.9956, 732.79102, -4.6730042e-005], [], 0, "CAN_COLLIDE"];
  _unit_107 = _this;
  _this setDir -51.914528;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_71 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net1", [7221.7441, 730.86621, -9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_71 = _this;
  _this setDir 41.511929;
  _this setPos [7221.7441, 730.86621, -9.5367432e-007];
};

_vehicle_81 = objNull;
if (true) then
{
  _this = createVehicle ["BMP2_HQ_TK_unfolded_EP1", [8676.0723, 3116.8787, -0.28514138], [], 0, "CAN_COLLIDE"];
  _vehicle_81 = _this;
  _this setDir 37.785954;
  _this setPos [8676.0723, 3116.8787, -0.28514138];
};

_vehicle_82 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [8674.9463, 3120.3784, -0.55039978], [], 0, "CAN_COLLIDE"];
  _vehicle_82 = _this;
  _this setDir -79.843803;
  _this setPos [8674.9463, 3120.3784, -0.55039978];
};

_unit_125 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["BAF_Soldier_AMG_W", [8674.4561, 3121.7769, -0.79090881], [], 0, "CAN_COLLIDE"];
  _unit_125 = _this;
  _this setDir 33.73344;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_87 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [8675.7383, 3121.7869, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_87 = _this;
  _this setDir -141.61942;
  _this setPos [8675.7383, 3121.7869, 1.5258789e-005];
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
  _this setDir 6.1045218;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_unit_134 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["RU_Farmwife1", [4421.1494, 1631.6565], [], 0, "CAN_COLLIDE"];
  _unit_134 = _this;
  _this setDir 11.297326;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_93 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [4426.2944, 1629.8995, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_93 = _this;
  _this setDir 21.153505;
  _this setPos [4426.2944, 1629.8995, 1.1444092e-005];
};

_vehicle_95 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [4421.3999, 1632.3695, 1.7166138e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_95 = _this;
  _this setDir 21.153505;
  _this setPos [4421.3999, 1632.3695, 1.7166138e-005];
};

_unit_142 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["CZ_Special_Forces_MG_DES_EP1", [8676.0801, 3126.2759, -3.3378601e-006], [], 0, "CAN_COLLIDE"];
  _unit_142 = _this;
  _this setDir -236.02379;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_105 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [8688.7881, 3110.0251, -1.8596649e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_105 = _this;
  _this setDir -177.43332;
  _this setPos [8688.7881, 3110.0251, -1.8596649e-005];
};

_unit_143 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["US_Soldier_Medic_EP1", [8690.042, 3130.854, 2.5272369e-005], [], 0, "CAN_COLLIDE"];
  _unit_143 = _this;
  _this setDir -121.9497;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_unit_146 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Soldier_Medic", [4430.7729, 1627.4163, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _unit_146 = _this;
  _this setDir -5.3829327;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_unit_150 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["BAF_Soldier_AAA_DDPM", [8675.6895, 3120.5398, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _unit_150 = _this;
  _this setDir 48.440151;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_106 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CamoNet_NATO_EP1", [5229.645, 8227.5029, 8.3446503e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_106 = _this;
  _this setDir 77.69368;
  _this setPos [5229.645, 8227.5029, 8.3446503e-006];
};

_vehicle_107 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [4765.8726, 7521.2554, -2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_107 = _this;
  _this setPos [4765.8726, 7521.2554, -2.8610229e-006];
};

_vehicle_108 = objNull;
if (true) then
{
  _this = createVehicle ["WarfareBAircraftFactory_Gue", [4764.0913, 7484.0728, -0.3627131], [], 0, "CAN_COLLIDE"];
  _vehicle_108 = _this;
  _this setDir 178.40135;
  _this setPos [4764.0913, 7484.0728, -0.3627131];
};

_vehicle_109 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CamoNetB_EAST", [4765.9585, 7478.8784, 0.14786454], [], 0, "CAN_COLLIDE"];
  _vehicle_109 = _this;
  _this setDir 198.70306;
  _this setPos [4765.9585, 7478.8784, 0.14786454];
};

_vehicle_111 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [4430.9263, 1628.2461], [], 0, "CAN_COLLIDE"];
  _vehicle_111 = _this;
  _this setDir 15.75791;
  _this setPos [4430.9263, 1628.2461];
};

_vehicle_113 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net1", [4433.3125, 1627.3583, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_113 = _this;
  _this setDir -9.4429188;
  _this setPos [4433.3125, 1627.3583, 1.1444092e-005];
};

_vehicle_114 = objNull;
if (true) then
{
  _this = createVehicle ["VaultStorageLocked", [4424.4766, 1628.9606, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_114 = _this;
  _this setDir 201.1546;
  _this setPos [4424.4766, 1628.9606, 1.9073486e-006];
};

_vehicle_115 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barrel_water", [8682.8906, 3137.7454, 4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_115 = _this;
  _this setPos [8682.8906, 3137.7454, 4.7683716e-006];
};

_vehicle_116 = objNull;
if (true) then
{
  _this = createVehicle ["Land_stand_meat_EP1", [8681.2266, 3135.7444, 5.4836273e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_116 = _this;
  _this setDir 6.1236033;
  _this setPos [8681.2266, 3135.7444, 5.4836273e-006];
};

_vehicle_117 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [8671.5859, 3114.8975, -0.0084248902], [], 0, "CAN_COLLIDE"];
  _vehicle_117 = _this;
  _this setDir 37.254837;
  _this setPos [8671.5859, 3114.8975, -0.0084248902];
};

_vehicle_119 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [4409.2534, 1645.9414, -9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_119 = _this;
  _this setPos [4409.2534, 1645.9414, -9.5367432e-006];
};

_vehicle_120 = objNull;
if (true) then
{
  _this = createVehicle ["RU_WarfareBAircraftFactory", [4402.6987, 1632.9819, -0.37194243], [], 0, "CAN_COLLIDE"];
  _vehicle_120 = _this;
  _this setDir 203.03345;
  _this setPos [4402.6987, 1632.9819, -0.37194243];
};

_unit_164 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Soldier_2", [4405.0391, 1629.9131, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _unit_164 = _this;
  _this setDir 11.333591;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_121 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [9107.6191, 4083.9895, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_121 = _this;
  _this setPos [9107.6191, 4083.9895, -7.6293945e-006];
};

_vehicle_123 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [8672.7363, 3126.4424, -8.9645386e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_123 = _this;
  _this setDir 126.78902;
  _this setPos [8672.7363, 3126.4424, -8.9645386e-005];
};

_vehicle_125 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [8685.5898, 3119.6416, 0.0001115799], [], 0, "CAN_COLLIDE"];
  _vehicle_125 = _this;
  _this setPos [8685.5898, 3119.6416, 0.0001115799];
};

_vehicle_128 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_F_postel_manz_kov", [8689.832, 3136.2014, 4.1007996e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_128 = _this;
  _this setDir 5.2232938;
  _this setPos [8689.832, 3136.2014, 4.1007996e-005];
};

_vehicle_129 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [8690.0186, 3138.6189], [], 0, "CAN_COLLIDE"];
  _vehicle_129 = _this;
  _this setDir -178.17664;
  _this setPos [8690.0186, 3138.6189];
};

_vehicle_131 = objNull;
if (true) then
{
  _this = createVehicle ["Body2", [8690.6748, 3136.9812, 0.59447074], [], 0, "CAN_COLLIDE"];
  _vehicle_131 = _this;
  _this setDir -28.435152;
  _this setPos [8690.6748, 3136.9812, 0.59447074];
};

_vehicle_133 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [8687.4131, 3133.345, -0.43549845], [], 0, "CAN_COLLIDE"];
  _vehicle_133 = _this;
  _this setDir -268.67715;
  _this setPos [8687.4131, 3133.345, -0.43549845];
};

_vehicle_135 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Water_pipe_EP1", [8689.7686, 3137.6489, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_135 = _this;
  _this setPos [8689.7686, 3137.6489, -3.0517578e-005];
};

_vehicle_137 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [8685.0371, 3128.3083, -0.51051772], [], 0, "CAN_COLLIDE"];
  _vehicle_137 = _this;
  _this setDir -355.95535;
  _this setPos [8685.0371, 3128.3083, -0.51051772];
};

_vehicle_139 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [8689.5391, 3146.7109, 1.0490417e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_139 = _this;
  _this setDir -177.30223;
  _this setPos [8689.5391, 3146.7109, 1.0490417e-005];
};

_vehicle_142 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Shelf_EP1", [8687.8262, 3133.0999, 0.0001013279], [], 0, "CAN_COLLIDE"];
  _vehicle_142 = _this;
  _this setDir 2.0808332;
  _this setPos [8687.8262, 3133.0999, 0.0001013279];
};

_vehicle_143 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Rack_EP1", [8691.6025, 3132.9502, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_143 = _this;
  _this setDir 183.17262;
  _this setPos [8691.6025, 3132.9502, 2.8610229e-006];
};

_vehicle_150 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Nav_Boathouse_Pier", [3350.269, 2297.6863, 0.10457127], [], 0, "CAN_COLLIDE"];
  _vehicle_150 = _this;
  _this setDir 1.1441104;
  _this setPos [3350.269, 2297.6863, 0.10457127];
};

_vehicle_151 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Nav_Boathouse", [3350.269, 2297.679, 0.049202066], [], 0, "CAN_COLLIDE"];
  _vehicle_151 = _this;
  _this setDir 1.1441104;
  _this setPos [3350.269, 2297.679, 0.049202066];
};

_unit_167 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["GUE_Soldier_1", [3357.1387, 2294.5918, 4.5130548], [], 0, "CAN_COLLIDE"];
  _unit_167 = _this;
  _this setDir 65.974861;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;  ";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;};

_vehicle_152 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [3364.219, 2289.1843, 0.14430273], [], 0, "CAN_COLLIDE"];
  _vehicle_152 = _this;
  _this setPos [3364.219, 2289.1843, 0.14430273];
};

_vehicle_154 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [1907.6559, 3623.7019, 8.5830688e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_154 = _this;
  _this setPos [1907.6559, 3623.7019, 8.5830688e-006];
};

_vehicle_156 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [8677.7559, 3128.3306, 9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_156 = _this;
  _this setDir 3.8828576;
  _this setVehicleInit "this allowDammage false;  ";
  _this setPos [8677.7559, 3128.3306, 9.5367432e-006];
};

_vehicle_158 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [9056.7588, 4056.3274, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_158 = _this;
  _this setDir 142.01888;
  _this setVehicleInit "this allowDammage false;  ";
  _this setPos [9056.7588, 4056.3274, 7.6293945e-006];
};

_vehicle_160 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [4772.5972, 7485.9268, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_160 = _this;
  _this setDir 92.707016;
  _this setVehicleInit "this allowDammage false;  ";
  _this setPos [4772.5972, 7485.9268, 2.8610229e-006];
};

_vehicle_162 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [4418.5303, 1632.2101, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_162 = _this;
  _this setDir 111.89083;
  _this setVehicleInit "this allowDammage false;  ";
  _this setPos [4418.5303, 1632.2101, 3.8146973e-006];
};

processInitCommands;
