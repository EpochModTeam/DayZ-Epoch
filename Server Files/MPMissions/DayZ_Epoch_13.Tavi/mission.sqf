_vehicle_2 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_Ind_long", [16587.227, 10228.682, 3.3378601e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_2 = _this;
  _this setDir 355.27969;
  _this setPos [16587.227, 10228.682, 3.3378601e-005];
};

_vehicle_4 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [16595.23, 10219.062, -0.15543438], [], 0, "CAN_COLLIDE"];
  _vehicle_4 = _this;
  _this setDir 261.77072;
  _this setPos [16595.23, 10219.062, -0.15543438];
};

_vehicle_6 = objNull;
if (true) then
{
  _this = createVehicle ["Mi8Wreck", [16593.014, 10232.304, 0.00062561035], [], 0, "CAN_COLLIDE"];
  _vehicle_6 = _this;
  _this setDir -57.151047;
  _this setPos [16593.014, 10232.304, 0.00062561035];
};

_vehicle_7 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [16542.299, 10071.404, 0.0011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_7 = _this;
  _this setPos [16542.299, 10071.404, 0.0011444092];
};

_vehicle_8 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [16588.529, 10224.104, -4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_8 = _this;
  _this setDir -6.6904197;
  _this setPos [16588.529, 10224.104, -4.7683716e-006];
};

_vehicle_10 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [16586.576, 10227.501, -3.9100647e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_10 = _this;
  _this setDir 85.507637;
  _this setPos [16586.576, 10227.501, -3.9100647e-005];
};

_vehicle_12 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [16586.775, 10225.424, 4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_12 = _this;
  _this setDir 85.739128;
  _this setPos [16586.775, 10225.424, 4.196167e-005];
};

_vehicle_14 = objNull;
if (true) then
{
  _this = createVehicle ["Laptop_EP1", [16586.496, 10227.76, 0.78802979], [], 0, "CAN_COLLIDE"];
  _vehicle_14 = _this;
  _this setDir -59.405155;
  _this setPos [16586.496, 10227.76, 0.78802979];
};

_vehicle_17 = objNull;
if (true) then
{
  _this = createVehicle ["PowGen_Big", [16598.924, 10218.652, 4.3869019e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_17 = _this;
  _this setDir 352.07452;
  _this setPos [16598.924, 10218.652, 4.3869019e-005];
};

_vehicle_21 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [16587.244, 10222.055, 5.0544739e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_21 = _this;
  _this setDir 73.816589;
  _this setPos [16587.244, 10222.055, 5.0544739e-005];
};

_vehicle_22 = objNull;
if (true) then
{
  _this = createVehicle ["Barrels", [16593.957, 10219.448, 0.00015068054], [], 0, "CAN_COLLIDE"];
  _vehicle_22 = _this;
  _this setDir 86.168083;
  _this setPos [16593.957, 10219.448, 0.00015068054];
};

_vehicle_23 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Garb_Heap_EP1", [16590.371, 10234.627, -0.2186026], [], 0, "CAN_COLLIDE"];
  _vehicle_23 = _this;
  _this setDir 36.555038;
  _this setPos [16590.371, 10234.627, -0.2186026];
};

_vehicle_32 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [16593.609, 10216.898, -0.12592182], [], 0, "CAN_COLLIDE"];
  _vehicle_32 = _this;
  _this setDir -6.7426214;
  _this setPos [16593.609, 10216.898, -0.12592182];
};

_vehicle_34 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [16589.664, 10216.582, -0.11468034], [], 0, "CAN_COLLIDE"];
  _vehicle_34 = _this;
  _this setDir -2.7263384;
  _this setPos [16589.664, 10216.582, -0.11468034];
};

_vehicle_38 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [16586.205, 10222.594, -0.11499273], [], 0, "CAN_COLLIDE"];
  _vehicle_38 = _this;
  _this setDir 83.292992;
  _this setPos [16586.205, 10222.594, -0.11499273];
};

_vehicle_39 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [16585.912, 10226.536, -0.10959841], [], 0, "CAN_COLLIDE"];
  _vehicle_39 = _this;
  _this setDir 87.309273;
  _this setPos [16585.912, 10226.536, -0.10959841];
};

_this = createCenter resistance;
_center_1 = _this;

_group_1 = createGroup _center_1;

_unit_3 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["GUE_Worker2", [16588.43, 10225.23, -0.00011348724], [], 0, "CAN_COLLIDE"];
  _unit_3 = _this;
  _this setDir -150.14262;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_42 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [16590.883, 10223.438, -6.3896179e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_42 = _this;
  _this setDir 83.508461;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [16590.883, 10223.438, -6.3896179e-005];
};

_vehicle_43 = objNull;
if (true) then
{
  _this = createVehicle ["Land_radar", [16600.078, 10249.813, 5.531311e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_43 = _this;
  _this setDir 177.84444;
  _this setPos [16600.078, 10249.813, 5.531311e-005];
};

_vehicle_44 = objNull;
if (true) then
{
  _this = createVehicle ["Satelit", [16592.072, 10217.824, 0.00012493134], [], 0, "CAN_COLLIDE"];
  _vehicle_44 = _this;
  _this setDir 93.014427;
  _this setPos [16592.072, 10217.824, 0.00012493134];
};

_vehicle_51 = objNull;
if (true) then
{
  _this = createVehicle ["C130J_wreck_EP1", [10171.303, 18732.902, -0.67498469], [], 0, "CAN_COLLIDE"];
  _vehicle_51 = _this;
  _this setDir -29.436199;
  _this setPos [10171.303, 18732.902, -0.67498469];
};

_unit_8 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["GUE_Soldier_Pilot", [10158.589, 18714.078, 9.1158972], [], 0, "CAN_COLLIDE"];
  _unit_8 = _this;
  _this setDir 113.89225;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_52 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Crates_EP1", [10158.894, 18712.264, 9.1623211], [], 0, "CAN_COLLIDE"];
  _vehicle_52 = _this;
  _this setDir 60.646255;
  _this setPos [10158.894, 18712.264, 9.1623211];
};

_vehicle_55 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Hangar_2", [10215.602, 18657.004, 0.037370086], [], 0, "CAN_COLLIDE"];
  _vehicle_55 = _this;
  _this setDir 64.087624;
  _this setPos [10215.602, 18657.004, 0.037370086];
};

_vehicle_56 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish4", [10194.401, 18655.404, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_56 = _this;
  _this setPos [10194.401, 18655.404, 6.1035156e-005];
};

_vehicle_57 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish5", [10231.302, 18649.6], [], 0, "CAN_COLLIDE"];
  _vehicle_57 = _this;
  _this setDir -31.859221;
  _this setPos [10231.302, 18649.6];
};

_vehicle_58 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish1", [10204.436, 18652.381, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_58 = _this;
  _this setDir 65.055496;
  _this setPos [10204.436, 18652.381, -3.8146973e-005];
};

_vehicle_60 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish3", [10205.686, 18637.123, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_60 = _this;
  _this setPos [10205.686, 18637.123, 7.6293945e-006];
};

_vehicle_62 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish3", [10195.894, 18672.51, -0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_62 = _this;
  _this setPos [10195.894, 18672.51, -0.00011444092];
};

_vehicle_64 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish3", [10211.246, 18681.488, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_64 = _this;
  _this setPos [10211.246, 18681.488, 4.5776367e-005];
};

_vehicle_66 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish3", [10196.989, 18683.602, 0.00012969971], [], 0, "CAN_COLLIDE"];
  _vehicle_66 = _this;
  _this setPos [10196.989, 18683.602, 0.00012969971];
};

_vehicle_68 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish3", [10201.532, 18676.672, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_68 = _this;
  _this setPos [10201.532, 18676.672, 6.8664551e-005];
};

_vehicle_72 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish4", [10202.58, 18672.014, -6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_72 = _this;
  _this setPos [10202.58, 18672.014, -6.8664551e-005];
};

_vehicle_74 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish4", [10207.561, 18680.818, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_74 = _this;
  _this setPos [10207.561, 18680.818, 3.8146973e-005];
};

_vehicle_76 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish4", [10194.656, 18677.117, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_76 = _this;
  _this setPos [10194.656, 18677.117, -7.6293945e-006];
};

_vehicle_78 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish4", [10197.602, 18659.648, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_78 = _this;
  _this setPos [10197.602, 18659.648, 6.1035156e-005];
};

_vehicle_80 = objNull;
if (true) then
{
  _this = createVehicle ["Rubbish4", [10205.526, 18635.152], [], 0, "CAN_COLLIDE"];
  _vehicle_80 = _this;
  _this setPos [10205.526, 18635.152];
};

_vehicle_85 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [10217.686, 18664.662, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_85 = _this;
  _this setDir 63.728615;
  _this setPos [10217.686, 18664.662, 4.5776367e-005];
};

_unit_13 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["GUE_Woodlander3", [10218.57, 18665.098, 0.066625834], [], 0, "CAN_COLLIDE"];
  _unit_13 = _this;
  _this setDir -113.04073;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_88 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [10168.018, 18715.523, 0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_88 = _this;
  _this setDir 249.40405;
  _this setPos [10168.018, 18715.523, 0.00011444092];
};

_vehicle_89 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_BoardsPack1", [10218.477, 18673.863, 0.058212455], [], 0, "CAN_COLLIDE"];
  _vehicle_89 = _this;
  _this setDir 62.615311;
  _this setPos [10218.477, 18673.863, 0.058212455];
};

_vehicle_90 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Coil_EP1", [10224.927, 18659.184, 0.067822412], [], 0, "CAN_COLLIDE"];
  _vehicle_90 = _this;
  _this setPos [10224.927, 18659.184, 0.067822412];
};

_vehicle_91 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [10185.123, 18719.795, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_91 = _this;
  _this setDir 58.539715;
  _this setPos [10185.123, 18719.795, -2.2888184e-005];
};

_vehicle_92 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierWhite_EP1", [10156.729, 18703.27, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_92 = _this;
  _this setDir 158.5417;
  _this setPos [10156.729, 18703.27, 4.5776367e-005];
};

_vehicle_93 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_palletsfoiled_heap", [10221.892, 18667.508, 0.07247524], [], 0, "CAN_COLLIDE"];
  _vehicle_93 = _this;
  _this setDir 153.31073;
  _this setPos [10221.892, 18667.508, 0.07247524];
};

_vehicle_94 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_IronPipes_EP1", [10224.627, 18651.432, 0.05036784], [], 0, "CAN_COLLIDE"];
  _vehicle_94 = _this;
  _this setDir -77.199394;
  _this setPos [10224.627, 18651.432, 0.05036784];
};

_vehicle_95 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Hlidac_Budka_EP1", [10133.221, 18729.518], [], 0, "CAN_COLLIDE"];
  _vehicle_95 = _this;
  _this setDir 74.736397;
  _this setPos [10133.221, 18729.518];
};

_vehicle_96 = objNull;
if (true) then
{
  _this = createVehicle ["ZavoraAnim", [10134.719, 18734.588, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_96 = _this;
  _this setDir 162.15529;
  _this setPos [10134.719, 18734.588, 4.5776367e-005];
};

_vehicle_101 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Nav_Boathouse_PierL", [14623.005, 18862.242, -1.0889961], [], 0, "CAN_COLLIDE"];
  _vehicle_101 = _this;
  _this setDir 128.90364;
  _this setPos [14623.005, 18862.242, -1.0889961];
};

_unit_33 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Reynolds_PMC", [14977.239, 18409.836, 14.009955], [], 0, "CAN_COLLIDE"];
  _unit_33 = _this;
  _this setDir 176.94569;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_104 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net2", [14974.43, 18411.066, 13.962642], [], 0, "CAN_COLLIDE"];
  _vehicle_104 = _this;
  _this setPos [14974.43, 18411.066, 13.962642];
};

_vehicle_107 = objNull;
if (true) then
{
  _this = createVehicle ["hiluxWreck", [15096.71, 14806.335, 0.2840037], [], 0, "CAN_COLLIDE"];
  _vehicle_107 = _this;
  _this setPos [15096.71, 14806.335, 0.2840037];
};

_vehicle_108 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [15097.956, 14811.35, 0.31909722], [], 0, "CAN_COLLIDE"];
  _vehicle_108 = _this;
  _this setDir -0.032008778;
  _this setPos [15097.956, 14811.35, 0.31909722];
};

_vehicle_110 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [15099.956, 14809.278, 0.31405464], [], 0, "CAN_COLLIDE"];
  _vehicle_110 = _this;
  _this setDir 87.569824;
  _this setPos [15099.956, 14809.278, 0.31405464];
};

_vehicle_112 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [15074.824, 14801.147, 0.010421977], [], 0, "CAN_COLLIDE"];
  _vehicle_112 = _this;
  _this setPos [15074.824, 14801.147, 0.010421977];
};

_unit_39 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["GUE_Soldier_3", [15098.315, 14810.109, 0.31398135], [], 0, "CAN_COLLIDE"];
  _unit_39 = _this;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_113 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [15085.189, 14791.073, -0.26358023], [], 0, "CAN_COLLIDE"];
  _vehicle_113 = _this;
  _this setPos [15085.189, 14791.073, -0.26358023];
};

_vehicle_115 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [15081.192, 14791.057, -0.26355734], [], 0, "CAN_COLLIDE"];
  _vehicle_115 = _this;
  _this setPos [15081.192, 14791.057, -0.26355734];
};

_vehicle_120 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [15073.246, 14790.968, -0.26347342], [], 0, "CAN_COLLIDE"];
  _vehicle_120 = _this;
  _this setPos [15073.246, 14790.968, -0.26347342];
};

_vehicle_121 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [15077.246, 14790.983, -0.26349631], [], 0, "CAN_COLLIDE"];
  _vehicle_121 = _this;
  _this setPos [15077.246, 14790.983, -0.26349631];
};

_vehicle_124 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [15065.292, 14790.929, -0.26355353], [], 0, "CAN_COLLIDE"];
  _vehicle_124 = _this;
  _this setPos [15065.292, 14790.929, -0.26355353];
};

_vehicle_125 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [15069.285, 14790.949, -0.26354209], [], 0, "CAN_COLLIDE"];
  _vehicle_125 = _this;
  _this setPos [15069.285, 14790.949, -0.26354209];
};

_vehicle_132 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [15062.293, 14804.798, -0.26359931], [], 0, "CAN_COLLIDE"];
  _vehicle_132 = _this;
  _this setDir 85.91172;
  _this setPos [15062.293, 14804.798, -0.26359931];
};

_vehicle_133 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [15062.599, 14800.81, -0.26358023], [], 0, "CAN_COLLIDE"];
  _vehicle_133 = _this;
  _this setDir 85.91172;
  _this setPos [15062.599, 14800.81, -0.26358023];
};

_vehicle_134 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [15062.9, 14796.873, -0.2635459], [], 0, "CAN_COLLIDE"];
  _vehicle_134 = _this;
  _this setDir 85.91172;
  _this setPos [15062.9, 14796.873, -0.2635459];
};

_vehicle_135 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [15063.194, 14792.873, -0.26353446], [], 0, "CAN_COLLIDE"];
  _vehicle_135 = _this;
  _this setDir 85.91172;
  _this setPos [15063.194, 14792.873, -0.26353446];
};

_vehicle_140 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [15083.005, 14794.495, -8.0108643e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_140 = _this;
  _this setPos [15083.005, 14794.495, -8.0108643e-005];
};

_vehicle_142 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [15074.14, 14803.972, -6.4849854e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_142 = _this;
  _this setPos [15074.14, 14803.972, -6.4849854e-005];
};

_vehicle_144 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [15064.532, 14809.109, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_144 = _this;
  _this setPos [15064.532, 14809.109, -3.8146973e-005];
};

_vehicle_146 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15052.903, 14810.142, -4.9591064e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_146 = _this;
  _this setPos [15052.903, 14810.142, -4.9591064e-005];
};

_vehicle_148 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15051.293, 14811.812, -5.7220459e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_148 = _this;
  _this setPos [15051.293, 14811.812, -5.7220459e-005];
};

_vehicle_150 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15049.992, 14809.556, -2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_150 = _this;
  _this setPos [15049.992, 14809.556, -2.6702881e-005];
};

_vehicle_152 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15048.72, 14811.794, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_152 = _this;
  _this setPos [15048.72, 14811.794, 3.8146973e-006];
};

_vehicle_154 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15046.635, 14809.836, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_154 = _this;
  _this setPos [15046.635, 14809.836, 1.9073486e-005];
};

_vehicle_156 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15044.854, 14811.929, 7.2479248e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_156 = _this;
  _this setPos [15044.854, 14811.929, 7.2479248e-005];
};

_vehicle_158 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15042.395, 14810.647, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_158 = _this;
  _this setPos [15042.395, 14810.647, 9.1552734e-005];
};

_vehicle_160 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15040.605, 14811.598, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_160 = _this;
  _this setPos [15040.605, 14811.598, 6.1035156e-005];
};

_vehicle_162 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15039.698, 14812.96, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_162 = _this;
  _this setPos [15039.698, 14812.96, 3.8146973e-006];
};

_vehicle_164 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15040.6, 14815.481, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_164 = _this;
  _this setPos [15040.6, 14815.481, 1.1444092e-005];
};

_vehicle_166 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15042.86, 14814.34, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_166 = _this;
  _this setPos [15042.86, 14814.34, -1.5258789e-005];
};

_vehicle_168 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15037.792, 14815.049, 6.4849854e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_168 = _this;
  _this setPos [15037.792, 14815.049, 6.4849854e-005];
};

_vehicle_170 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15039.398, 14818.124, -5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_170 = _this;
  _this setPos [15039.398, 14818.124, -5.3405762e-005];
};

_vehicle_172 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15041.924, 14817.734, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_172 = _this;
  _this setPos [15041.924, 14817.734, 3.4332275e-005];
};

_vehicle_174 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15041.412, 14820.744, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_174 = _this;
  _this setPos [15041.412, 14820.744, 1.1444092e-005];
};

_vehicle_176 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15039.903, 14821.341, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_176 = _this;
  _this setPos [15039.903, 14821.341, 2.2888184e-005];
};

_vehicle_178 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15037.172, 14818.696, -5.7220459e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_178 = _this;
  _this setPos [15037.172, 14818.696, -5.7220459e-005];
};

_vehicle_180 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15048.66, 14812.063, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_180 = _this;
  _this setPos [15048.66, 14812.063, -3.8146973e-006];
};

_vehicle_182 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15054.084, 14812.642, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_182 = _this;
  _this setPos [15054.084, 14812.642, -1.1444092e-005];
};

_vehicle_184 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15056.078, 14807.456, 6.4849854e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_184 = _this;
  _this setPos [15056.078, 14807.456, 6.4849854e-005];
};

_vehicle_186 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15051.42, 14807.914, 9.5367432e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_186 = _this;
  _this setPos [15051.42, 14807.914, 9.5367432e-005];
};

_vehicle_188 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15046.931, 14807.954, 8.0108643e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_188 = _this;
  _this setPos [15046.931, 14807.954, 8.0108643e-005];
};

_vehicle_190 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15043.023, 14807.768, -2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_190 = _this;
  _this setPos [15043.023, 14807.768, -2.6702881e-005];
};

_vehicle_192 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15038.655, 14822.62, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_192 = _this;
  _this setPos [15038.655, 14822.62, 7.6293945e-006];
};

_vehicle_194 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15039.761, 14825.907, 0.00010681152], [], 0, "CAN_COLLIDE"];
  _vehicle_194 = _this;
  _this setPos [15039.761, 14825.907, 0.00010681152];
};

_vehicle_196 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15036.431, 14829.622, 4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_196 = _this;
  _this setPos [15036.431, 14829.622, 4.196167e-005];
};

_vehicle_198 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15040.85, 14803.302, 0.00017166138], [], 0, "CAN_COLLIDE"];
  _vehicle_198 = _this;
  _this setPos [15040.85, 14803.302, 0.00017166138];
};

_vehicle_200 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15038.927, 14800.23, -0.00015640259], [], 0, "CAN_COLLIDE"];
  _vehicle_200 = _this;
  _this setPos [15038.927, 14800.23, -0.00015640259];
};

_vehicle_202 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15037.532, 14799.007, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_202 = _this;
  _this setPos [15037.532, 14799.007, 3.4332275e-005];
};

_vehicle_204 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15034.187, 14796.517, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_204 = _this;
  _this setPos [15034.187, 14796.517, -3.8146973e-006];
};

_vehicle_206 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15032.823, 14794.368, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_206 = _this;
  _this setPos [15032.823, 14794.368, 1.1444092e-005];
};

_vehicle_208 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15036.908, 14795.854, 8.0108643e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_208 = _this;
  _this setPos [15036.908, 14795.854, 8.0108643e-005];
};

_vehicle_210 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15031.802, 14791.563, -0.00021362305], [], 0, "CAN_COLLIDE"];
  _vehicle_210 = _this;
  _this setPos [15031.802, 14791.563, -0.00021362305];
};

_vehicle_212 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15028.636, 14789.479, -5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_212 = _this;
  _this setPos [15028.636, 14789.479, -5.3405762e-005];
};

_vehicle_214 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15025.917, 14786.41, -0.00022125244], [], 0, "CAN_COLLIDE"];
  _vehicle_214 = _this;
  _this setPos [15025.917, 14786.41, -0.00022125244];
};

_vehicle_216 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15025.04, 14783.406, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_216 = _this;
  _this setPos [15025.04, 14783.406, -3.8146973e-006];
};

_vehicle_218 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15021.041, 14781.054, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_218 = _this;
  _this setPos [15021.041, 14781.054, 0];
};

_vehicle_220 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15017.174, 14778.523, 0.0001335144], [], 0, "CAN_COLLIDE"];
  _vehicle_220 = _this;
  _this setPos [15017.174, 14778.523, 0.0001335144];
};

_vehicle_222 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15012.83, 14774.01, -6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_222 = _this;
  _this setPos [15012.83, 14774.01, -6.8664551e-005];
};

_vehicle_224 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15012.266, 14768.3, 7.4386597e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_224 = _this;
  _this setPos [15012.266, 14768.3, 7.4386597e-005];
};

_vehicle_226 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15005.649, 14766.94, 7.0571899e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_226 = _this;
  _this setPos [15005.649, 14766.94, 7.0571899e-005];
};

_vehicle_228 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [14997.024, 14759.158, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_228 = _this;
  _this setPos [14997.024, 14759.158, 5.3405762e-005];
};

_vehicle_230 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15047.643, 14806.504, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_230 = _this;
  _this setPos [15047.643, 14806.504, 3.8146973e-006];
};

_vehicle_232 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15044.939, 14805.051, 0.0001411438], [], 0, "CAN_COLLIDE"];
  _vehicle_232 = _this;
  _this setPos [15044.939, 14805.051, 0.0001411438];
};

_vehicle_234 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15043.826, 14803.637, 0.0001449585], [], 0, "CAN_COLLIDE"];
  _vehicle_234 = _this;
  _this setPos [15043.826, 14803.637, 0.0001449585];
};

_vehicle_236 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15041.83, 14802.048, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_236 = _this;
  _this setPos [15041.83, 14802.048, -3.8146973e-005];
};

_vehicle_238 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15033.839, 14793.203, 4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_238 = _this;
  _this setPos [15033.839, 14793.203, 4.196167e-005];
};

_vehicle_240 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15029.647, 14793.485, 0.00019454956], [], 0, "CAN_COLLIDE"];
  _vehicle_240 = _this;
  _this setPos [15029.647, 14793.485, 0.00019454956];
};

_unit_45 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Soldier_Sniper_PMC", [10162.647, 18715.035, 10.77233], [], 0, "CAN_COLLIDE"];
  _unit_45 = _this;
  _this setDir 208.51019;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_249 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [15293.179, 9381.8896, 0.00015068054], [], 0, "CAN_COLLIDE"];
  _vehicle_249 = _this;
  _this setPos [15293.179, 9381.8896, 0.00015068054];
};

_vehicle_250 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [15310.592, 9371.6113, 1.0490417e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_250 = _this;
  _this setPos [15310.592, 9371.6113, 1.0490417e-005];
};

_vehicle_252 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15310.071, 9360.584, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_252 = _this;
  _this setPos [15310.071, 9360.584, 3.4332275e-005];
};

_vehicle_254 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15312.797, 9361.0879, 2.3841858e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_254 = _this;
  _this setPos [15312.797, 9361.0879, 2.3841858e-005];
};

_vehicle_256 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15311.959, 9358.8877, 3.1471252e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_256 = _this;
  _this setPos [15311.959, 9358.8877, 3.1471252e-005];
};

_vehicle_258 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15307.872, 9361.4248, 4.3869019e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_258 = _this;
  _this setPos [15307.872, 9361.4248, 4.3869019e-005];
};

_vehicle_260 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15300.565, 9368.4805, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_260 = _this;
  _this setPos [15300.565, 9368.4805, -1.9073486e-006];
};

_vehicle_262 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15297.846, 9371.5859, 0.00010681152], [], 0, "CAN_COLLIDE"];
  _vehicle_262 = _this;
  _this setPos [15297.846, 9371.5859, 0.00010681152];
};

_vehicle_264 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15297.221, 9372.8652, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_264 = _this;
  _this setPos [15297.221, 9372.8652, 5.7220459e-006];
};

_vehicle_266 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15296.357, 9374.4287, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_266 = _this;
  _this setPos [15296.357, 9374.4287, 7.6293945e-005];
};

_vehicle_268 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15295.417, 9376.0469, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_268 = _this;
  _this setPos [15295.417, 9376.0469, -1.1444092e-005];
};

_vehicle_270 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15294.696, 9377.498, 0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_270 = _this;
  _this setPos [15294.696, 9377.498, 0.00011444092];
};

_vehicle_272 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15294.003, 9378.9219, 0.00015830994], [], 0, "CAN_COLLIDE"];
  _vehicle_272 = _this;
  _this setPos [15294.003, 9378.9219, 0.00015830994];
};

_vehicle_274 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15293.226, 9381.2666, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_274 = _this;
  _this setPos [15293.226, 9381.2666, 2.2888184e-005];
};

_vehicle_276 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15293.206, 9383.0391, 4.9591064e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_276 = _this;
  _this setPos [15293.206, 9383.0391, 4.9591064e-005];
};

_vehicle_278 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15293.642, 9384.623, 7.0571899e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_278 = _this;
  _this setPos [15293.642, 9384.623, 7.0571899e-005];
};

_vehicle_280 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15294.396, 9384.833, 7.4386597e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_280 = _this;
  _this setPos [15294.396, 9384.833, 7.4386597e-005];
};

_vehicle_282 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15295.15, 9384.9805, 5.531311e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_282 = _this;
  _this setPos [15295.15, 9384.9805, 5.531311e-005];
};

_vehicle_284 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15295.865, 9386.4775, 8.392334e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_284 = _this;
  _this setPos [15295.865, 9386.4775, 8.392334e-005];
};

_vehicle_286 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15295.116, 9387.0195, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_286 = _this;
  _this setPos [15295.116, 9387.0195, 7.6293945e-005];
};

_vehicle_288 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15293.786, 9387.8682, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_288 = _this;
  _this setPos [15293.786, 9387.8682, 7.6293945e-005];
};

_vehicle_290 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15292.187, 9388.6084, 8.0108643e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_290 = _this;
  _this setPos [15292.187, 9388.6084, 8.0108643e-005];
};

_vehicle_292 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15291.677, 9388.3789, 7.2479248e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_292 = _this;
  _this setPos [15291.677, 9388.3789, 7.2479248e-005];
};

_vehicle_294 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15291.072, 9387.8398, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_294 = _this;
  _this setPos [15291.072, 9387.8398, 7.6293945e-005];
};

_vehicle_296 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15290.442, 9386.3789, 6.6757202e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_296 = _this;
  _this setPos [15290.442, 9386.3789, 6.6757202e-005];
};

_vehicle_298 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15288.709, 9385.5293, -1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_298 = _this;
  _this setPos [15288.709, 9385.5293, -1.9073486e-005];
};

_vehicle_300 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15289.618, 9384.3799, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_300 = _this;
  _this setPos [15289.618, 9384.3799, 9.1552734e-005];
};

_vehicle_302 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15287.728, 9383.5498, 6.2942505e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_302 = _this;
  _this setPos [15287.728, 9383.5498, 6.2942505e-005];
};

_vehicle_304 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15287.878, 9381.2598, 0.00019264221], [], 0, "CAN_COLLIDE"];
  _vehicle_304 = _this;
  _this setPos [15287.878, 9381.2598, 0.00019264221];
};

_vehicle_306 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15289.493, 9379.3955, 0.00011825562], [], 0, "CAN_COLLIDE"];
  _vehicle_306 = _this;
  _this setPos [15289.493, 9379.3955, 0.00011825562];
};

_vehicle_308 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15290.604, 9376.9893, 4.9591064e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_308 = _this;
  _this setPos [15290.604, 9376.9893, 4.9591064e-005];
};

_vehicle_310 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15291.909, 9375.5322, 7.0571899e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_310 = _this;
  _this setPos [15291.909, 9375.5322, 7.0571899e-005];
};

_vehicle_312 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15293.709, 9373.7305, 0.00010108948], [], 0, "CAN_COLLIDE"];
  _vehicle_312 = _this;
  _this setPos [15293.709, 9373.7305, 0.00010108948];
};

_vehicle_314 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15293.571, 9375.7383, 6.4849854e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_314 = _this;
  _this setPos [15293.571, 9375.7383, 6.4849854e-005];
};

_vehicle_316 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15297.298, 9371.3955, 0.00012969971], [], 0, "CAN_COLLIDE"];
  _vehicle_316 = _this;
  _this setPos [15297.298, 9371.3955, 0.00012969971];
};

_vehicle_318 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15301.56, 9367.708, -1.335144e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_318 = _this;
  _this setPos [15301.56, 9367.708, -1.335144e-005];
};

_vehicle_320 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15303.951, 9364.6963, -1.4305115e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_320 = _this;
  _this setPos [15303.951, 9364.6963, -1.4305115e-005];
};

_vehicle_322 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15307.771, 9360.5088, 6.2942505e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_322 = _this;
  _this setPos [15307.771, 9360.5088, 6.2942505e-005];
};

_vehicle_324 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15313.907, 9355.083, 6.9618225e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_324 = _this;
  _this setPos [15313.907, 9355.083, 6.9618225e-005];
};

_vehicle_326 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15316.642, 9353.7461, 0.00011825562], [], 0, "CAN_COLLIDE"];
  _vehicle_326 = _this;
  _this setPos [15316.642, 9353.7461, 0.00011825562];
};

_vehicle_328 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15319.296, 9353.5586, 4.6730042e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_328 = _this;
  _this setPos [15319.296, 9353.5586, 4.6730042e-005];
};

_vehicle_330 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15321.155, 9353.2637, -2.7656555e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_330 = _this;
  _this setPos [15321.155, 9353.2637, -2.7656555e-005];
};

_vehicle_332 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15323.954, 9352.3662, 0.00010299683], [], 0, "CAN_COLLIDE"];
  _vehicle_332 = _this;
  _this setPos [15323.954, 9352.3662, 0.00010299683];
};

_vehicle_334 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15326.44, 9351.6465, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_334 = _this;
  _this setPos [15326.44, 9351.6465, 7.6293945e-005];
};

_vehicle_336 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15328.937, 9351.5967, 0.00012111664], [], 0, "CAN_COLLIDE"];
  _vehicle_336 = _this;
  _this setPos [15328.937, 9351.5967, 0.00012111664];
};

_vehicle_338 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15331.555, 9352.1475, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_338 = _this;
  _this setPos [15331.555, 9352.1475, -1.9073486e-006];
};

_vehicle_340 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15333.643, 9352.0107, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_340 = _this;
  _this setPos [15333.643, 9352.0107, 6.8664551e-005];
};

_vehicle_342 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15301.449, 9366.0439, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_342 = _this;
  _this setPos [15301.449, 9366.0439, -3.8146973e-006];
};

_vehicle_344 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15302.881, 9362.7217, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_344 = _this;
  _this setPos [15302.881, 9362.7217, 0];
};

_vehicle_346 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15304.47, 9361.2617, 1.8119812e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_346 = _this;
  _this setPos [15304.47, 9361.2617, 1.8119812e-005];
};

_vehicle_348 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15307.897, 9357.8994, 2.0027161e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_348 = _this;
  _this setPos [15307.897, 9357.8994, 2.0027161e-005];
};

_vehicle_350 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15310.604, 9356.4248, -2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_350 = _this;
  _this setPos [15310.604, 9356.4248, -2.6702881e-005];
};

_vehicle_352 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15315.654, 9359.7881, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_352 = _this;
  _this setPos [15315.654, 9359.7881, -1.5258789e-005];
};

_vehicle_354 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15319.658, 9357.1299, 3.6239624e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_354 = _this;
  _this setPos [15319.658, 9357.1299, 3.6239624e-005];
};

_vehicle_356 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15323.827, 9355.75, 3.3378601e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_356 = _this;
  _this setPos [15323.827, 9355.75, 3.3378601e-005];
};

_vehicle_358 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15331.142, 9355.0547, 4.3869019e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_358 = _this;
  _this setPos [15331.142, 9355.0547, 4.3869019e-005];
};

_vehicle_360 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15327.518, 9354.8682, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_360 = _this;
  _this setPos [15327.518, 9354.8682, 3.4332275e-005];
};

_vehicle_362 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15339.474, 9352.1025, 3.528595e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_362 = _this;
  _this setPos [15339.474, 9352.1025, 3.528595e-005];
};

_vehicle_364 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15346.516, 9351.6719, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_364 = _this;
  _this setPos [15346.516, 9351.6719, 3.8146973e-005];
};

_vehicle_366 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15337.315, 9352.25, 5.8174133e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_366 = _this;
  _this setPos [15337.315, 9352.25, 5.8174133e-005];
};

_vehicle_368 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15343.615, 9351.7988, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_368 = _this;
  _this setPos [15343.615, 9351.7988, 2.6702881e-005];
};

_vehicle_370 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15339.408, 9350.4463, 1.0490417e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_370 = _this;
  _this setPos [15339.408, 9350.4463, 1.0490417e-005];
};

_vehicle_372 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15334.575, 9350.3672, -0.00012969971], [], 0, "CAN_COLLIDE"];
  _vehicle_372 = _this;
  _this setPos [15334.575, 9350.3672, -0.00012969971];
};

_vehicle_374 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15340.84, 9353.4229, 2.4795532e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_374 = _this;
  _this setPos [15340.84, 9353.4229, 2.4795532e-005];
};

_vehicle_376 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15336.133, 9353.4541, 2.5749207e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_376 = _this;
  _this setPos [15336.133, 9353.4541, 2.5749207e-005];
};

_vehicle_378 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15315.263, 9357.2783, 5.0544739e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_378 = _this;
  _this setPos [15315.263, 9357.2783, 5.0544739e-005];
};

_vehicle_380 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15321.214, 9355.8594, 3.6239624e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_380 = _this;
  _this setPos [15321.214, 9355.8594, 3.6239624e-005];
};

_vehicle_382 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15317.573, 9355.6855, 3.9100647e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_382 = _this;
  _this setPos [15317.573, 9355.6855, 3.9100647e-005];
};

_vehicle_384 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15302.129, 9370.9883, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_384 = _this;
  _this setPos [15302.129, 9370.9883, -1.9073486e-006];
};

_vehicle_386 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15299.095, 9373.1191, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_386 = _this;
  _this setPos [15299.095, 9373.1191, 2.8610229e-006];
};

_vehicle_388 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15299.941, 9376.4766, 1.6212463e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_388 = _this;
  _this setPos [15299.941, 9376.4766, 1.6212463e-005];
};

_vehicle_390 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15299.763, 9371.2773, 2.4795532e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_390 = _this;
  _this setPos [15299.763, 9371.2773, 2.4795532e-005];
};

_vehicle_392 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15298.649, 9367.749, 8.5830688e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_392 = _this;
  _this setPos [15298.649, 9367.749, 8.5830688e-006];
};

_vehicle_394 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15295.227, 9372.2383, 6.1988831e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_394 = _this;
  _this setPos [15295.227, 9372.2383, 6.1988831e-005];
};

_vehicle_396 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15313.266, 9380.9111, 2.7656555e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_396 = _this;
  _this setPos [15313.266, 9380.9111, 2.7656555e-005];
};

_vehicle_398 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15313.744, 9383.0879, 3.1471252e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_398 = _this;
  _this setPos [15313.744, 9383.0879, 3.1471252e-005];
};

_vehicle_400 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15313.823, 9385.0771, 3.2424927e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_400 = _this;
  _this setPos [15313.823, 9385.0771, 3.2424927e-005];
};

_vehicle_402 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15313.698, 9387.2002, 3.3378601e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_402 = _this;
  _this setPos [15313.698, 9387.2002, 3.3378601e-005];
};

_vehicle_404 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15313.195, 9387.8213, 3.1471252e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_404 = _this;
  _this setPos [15313.195, 9387.8213, 3.1471252e-005];
};

_vehicle_406 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15310.423, 9387.9365, 2.5749207e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_406 = _this;
  _this setPos [15310.423, 9387.9365, 2.5749207e-005];
};

_vehicle_408 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15310.245, 9385.4111, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_408 = _this;
  _this setPos [15310.245, 9385.4111, 2.0980835e-005];
};

_vehicle_410 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15310.508, 9383.1182, 2.5749207e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_410 = _this;
  _this setPos [15310.508, 9383.1182, 2.5749207e-005];
};

_vehicle_412 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15309.967, 9381.5078, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_412 = _this;
  _this setPos [15309.967, 9381.5078, 3.8146973e-006];
};

_vehicle_414 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15314.046, 9389.6055, 8.2969666e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_414 = _this;
  _this setPos [15314.046, 9389.6055, 8.2969666e-005];
};

_vehicle_416 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15316.501, 9378.8203, 0.00010681152], [], 0, "CAN_COLLIDE"];
  _vehicle_416 = _this;
  _this setPos [15316.501, 9378.8203, 0.00010681152];
};

_vehicle_418 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15318.862, 9378.5215, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_418 = _this;
  _this setPos [15318.862, 9378.5215, 2.0980835e-005];
};

_vehicle_420 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15320.668, 9378.5381, 6.6757202e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_420 = _this;
  _this setPos [15320.668, 9378.5381, 6.6757202e-006];
};

_vehicle_422 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15322.919, 9378.5547, 8.5830688e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_422 = _this;
  _this setPos [15322.919, 9378.5547, 8.5830688e-006];
};

_vehicle_424 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15324.988, 9378.5469, 7.0571899e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_424 = _this;
  _this setPos [15324.988, 9378.5469, 7.0571899e-005];
};

_vehicle_426 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15327.188, 9378.7334, 5.2452087e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_426 = _this;
  _this setPos [15327.188, 9378.7334, 5.2452087e-005];
};

_vehicle_428 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15328.972, 9378.7441, 5.6266785e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_428 = _this;
  _this setPos [15328.972, 9378.7441, 5.6266785e-005];
};

_vehicle_430 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15331.033, 9378.9063, 5.4359436e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_430 = _this;
  _this setPos [15331.033, 9378.9063, 5.4359436e-005];
};

_vehicle_432 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15333.432, 9379.166, 5.1498413e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_432 = _this;
  _this setPos [15333.432, 9379.166, 5.1498413e-005];
};

_vehicle_434 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15336.653, 9379.3477, 4.863739e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_434 = _this;
  _this setPos [15336.653, 9379.3477, 4.863739e-005];
};

_vehicle_436 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15317.917, 9361.4961, 9.5367432e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_436 = _this;
  _this setPos [15317.917, 9361.4961, 9.5367432e-005];
};

_vehicle_438 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15320.917, 9361.748, 8.0108643e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_438 = _this;
  _this setPos [15320.917, 9361.748, 8.0108643e-005];
};

_vehicle_440 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15322.999, 9361.9082, 4.7683716e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_440 = _this;
  _this setPos [15322.999, 9361.9082, 4.7683716e-005];
};

_vehicle_442 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15326.207, 9362.9629, 0.0001001358], [], 0, "CAN_COLLIDE"];
  _vehicle_442 = _this;
  _this setPos [15326.207, 9362.9629, 0.0001001358];
};

_vehicle_444 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15327.43, 9364.5264, 0.00011730194], [], 0, "CAN_COLLIDE"];
  _vehicle_444 = _this;
  _this setPos [15327.43, 9364.5264, 0.00011730194];
};

_vehicle_446 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15329.654, 9367.8271, 8.6784363e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_446 = _this;
  _this setPos [15329.654, 9367.8271, 8.6784363e-005];
};

_vehicle_448 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15331.561, 9370.6152, 7.2479248e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_448 = _this;
  _this setPos [15331.561, 9370.6152, 7.2479248e-005];
};

_vehicle_450 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15333.618, 9373.8252, 0.00010204315], [], 0, "CAN_COLLIDE"];
  _vehicle_450 = _this;
  _this setPos [15333.618, 9373.8252, 0.00010204315];
};

_vehicle_452 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [15334.96, 9376.1396, 8.7738037e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_452 = _this;
  _this setPos [15334.96, 9376.1396, 8.7738037e-005];
};

_vehicle_454 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Market_shelter_EP1", [15311.653, 9382.3389, 4.6730042e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_454 = _this;
  _this setDir 271.23416;
  _this setPos [15311.653, 9382.3389, 4.6730042e-005];
};

_vehicle_455 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net2", [15311.32, 9390.1729, 8.4877014e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_455 = _this;
  _this setDir 20.866745;
  _this setPos [15311.32, 9390.1729, 8.4877014e-005];
};

_vehicle_456 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [15312.457, 9385.8018, 5.8174133e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_456 = _this;
  _this setPos [15312.457, 9385.8018, 5.8174133e-005];
};

_vehicle_457 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Chair_EP1", [15313.208, 9387.9785, 6.5803528e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_457 = _this;
  _this setDir 119.01271;
  _this setPos [15313.208, 9387.9785, 6.5803528e-005];
};

_vehicle_462 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [15312.162, 9379.0234, 6.3896179e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_462 = _this;
  _this setDir 91.651878;
  _this setPos [15312.162, 9379.0234, 6.3896179e-005];
};

_vehicle_464 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [15310.216, 9374.9287, 2.8610229e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_464 = _this;
  _this setDir 90.512024;
  _this setPos [15310.216, 9374.9287, 2.8610229e-005];
};

_this = createCenter civilian;
_center_2 = _this;

_group_2 = createGroup _center_2;

_unit_62 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["RU_Woodlander4", [15311.054, 9374.9844, 2.3841858e-005], [], 0, "CAN_COLLIDE"];
  _unit_62 = _this;
  _this setDir -92.519264;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_466 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [15314.667, 9389.5166, -2.1934509e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_466 = _this;
  _this setDir 191.98586;
  _this setPos [15314.667, 9389.5166, -2.1934509e-005];
};

_vehicle_468 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Chair_EP1", [15311.717, 9374.376, 4.3869019e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_468 = _this;
  _this setDir 211.42487;
  _this setPos [15311.717, 9374.376, 4.3869019e-005];
};

_vehicle_470 = objNull;
if (true) then
{
  _this = createVehicle ["BMP2Wreck", [13394.384, 8672.0938, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_470 = _this;
  _this setDir -71.100769;
  _this setPos [13394.384, 8672.0938, 3.0517578e-005];
};

_vehicle_471 = objNull;
if (true) then
{
  _this = createVehicle ["BRDMWreck", [13384.406, 8676.042, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_471 = _this;
  _this setDir 14.071495;
  _this setPos [13384.406, 8676.042, 3.0517578e-005];
};

_vehicle_472 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [13433.635, 8639.6748, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_472 = _this;
  _this setDir -197.71791;
  _this setPos [13433.635, 8639.6748, -3.0517578e-005];
};

_vehicle_473 = objNull;
if (true) then
{
  _this = createVehicle ["HMMWVWreck", [13381.229, 8648.7119, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_473 = _this;
  _this setDir -49.658279;
  _this setPos [13381.229, 8648.7119, 1.5258789e-005];
};

_vehicle_474 = objNull;
if (true) then
{
  _this = createVehicle ["Mi8Wreck", [13420.576, 8640.2412, 7.0127225], [], 0, "CAN_COLLIDE"];
  _vehicle_474 = _this;
  _this setDir 9.1888771;
  _this setPos [13420.576, 8640.2412, 7.0127225];
};

_vehicle_475 = objNull;
if (true) then
{
  _this = createVehicle ["hiluxWreck", [13422.981, 8635.7617, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_475 = _this;
  _this setDir 111.38464;
  _this setPos [13422.981, 8635.7617, 3.0517578e-005];
};

_vehicle_476 = objNull;
if (true) then
{
  _this = createVehicle ["datsun01Wreck", [13425.779, 8624.6299, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_476 = _this;
  _this setPos [13425.779, 8624.6299, 7.6293945e-005];
};

_vehicle_477 = objNull;
if (true) then
{
  _this = createVehicle ["datsun02Wreck", [13429.175, 8645.5625, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_477 = _this;
  _this setDir 166.3302;
  _this setPos [13429.175, 8645.5625, -1.5258789e-005];
};

_vehicle_478 = objNull;
if (true) then
{
  _this = createVehicle ["SKODAWreck", [13429.627, 8628.1201, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_478 = _this;
  _this setDir 117.67023;
  _this setPos [13429.627, 8628.1201, -3.0517578e-005];
};

_vehicle_479 = objNull;
if (true) then
{
  _this = createVehicle ["T72Wreck", [13396.479, 8689.4111, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_479 = _this;
  _this setPos [13396.479, 8689.4111, -3.0517578e-005];
};

_vehicle_480 = objNull;
if (true) then
{
  _this = createVehicle ["T72WreckTurret", [13343.969, 8668.5283, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_480 = _this;
  _this setPos [13343.969, 8668.5283, 6.1035156e-005];
};

_vehicle_481 = objNull;
if (true) then
{
  _this = createVehicle ["UAZWreck", [13437.465, 8631.6406, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_481 = _this;
  _this setPos [13437.465, 8631.6406, 7.6293945e-005];
};

_vehicle_483 = objNull;
if (true) then
{
  _this = createVehicle ["UAZWreck", [13414.274, 8627.6016, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_483 = _this;
  _this setDir 101.5181;
  _this setPos [13414.274, 8627.6016, 4.5776367e-005];
};

_vehicle_486 = objNull;
if (true) then
{
  _this = createVehicle ["SKODAWreck", [13427.752, 8608.2275, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_486 = _this;
  _this setDir 289.34198;
  _this setPos [13427.752, 8608.2275, 3.0517578e-005];
};

_vehicle_488 = objNull;
if (true) then
{
  _this = createVehicle ["UralWreck", [13450.205, 8628.3223, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_488 = _this;
  _this setDir 155.68875;
  _this setPos [13450.205, 8628.3223, -1.5258789e-005];
};

_vehicle_491 = objNull;
if (true) then
{
  _this = createVehicle ["UralWreck", [13422.222, 8617.2783, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_491 = _this;
  _this setDir 8.2954712;
  _this setPos [13422.222, 8617.2783, 4.5776367e-005];
};

_vehicle_505 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_EP1", [13339.097, 8613.1406, 0.4224714], [], 0, "CAN_COLLIDE"];
  _vehicle_505 = _this;
  _this setDir 416.03778;
  _this setPos [13339.097, 8613.1406, 0.4224714];
};

_vehicle_506 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [13337.047, 8616.1016, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_506 = _this;
  _this setDir 203.78563;
  _this setPos [13337.047, 8616.1016, -1.5258789e-005];
};

_vehicle_507 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CncBlock", [13344.938, 8614.8945, 0.083856083], [], 0, "CAN_COLLIDE"];
  _vehicle_507 = _this;
  _this setDir 45.190353;
  _this setPos [13344.938, 8614.8945, 0.083856083];
};

_vehicle_508 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barrel_water", [13345.593, 8610.625, 0.45127127], [], 0, "CAN_COLLIDE"];
  _vehicle_508 = _this;
  _this setPos [13345.593, 8610.625, 0.45127127];
};

_unit_68 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["Citizen3", [13340.611, 8614.4346, 0.47113389], [], 0, "CAN_COLLIDE"];
  _unit_68 = _this;
  _this setDir 123.30173;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_510 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5561.5474, 8756.9678, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_510 = _this;
  _this setPos [5561.5474, 8756.9678, 2.6702881e-005];
};

_vehicle_511 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrate_NoInteractive_", [5570.1841, 8755.2178, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_511 = _this;
  _this setDir -58.63789;
  _this setPos [5570.1841, 8755.2178, -3.0517578e-005];
};

_vehicle_512 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Large", [5571.0059, 8756.4678, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_512 = _this;
  _this setDir -60.130199;
  _this setPos [5571.0059, 8756.4678, -3.8146973e-006];
};

_vehicle_513 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Medium", [5568.2129, 8751.5322, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_513 = _this;
  _this setDir 209.60027;
  _this setPos [5568.2129, 8751.5322, -3.8146973e-006];
};

_vehicle_514 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Small", [5567.124, 8750.4375, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_514 = _this;
  _this setDir 308.686;
  _this setPos [5567.124, 8750.4375, 2.6702881e-005];
};

_vehicle_515 = objNull;
if (true) then
{
  _this = createVehicle ["Land_fort_bagfence_long", [5555.2192, 8759.6289, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_515 = _this;
  _this setDir -56.422718;
  _this setPos [5555.2192, 8759.6289, -2.2888184e-005];
};

_vehicle_517 = objNull;
if (true) then
{
  _this = createVehicle ["Land_fort_bagfence_long", [5560.2949, 8763.3252, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_517 = _this;
  _this setDir -17.947859;
  _this setPos [5560.2949, 8763.3252, 3.8146973e-006];
};

_vehicle_519 = objNull;
if (true) then
{
  _this = createVehicle ["Land_fort_bagfence_long", [5553.6431, 8753.4414, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_519 = _this;
  _this setDir -95.396309;
  _this setPos [5553.6431, 8753.4414, 3.0517578e-005];
};

_vehicle_521 = objNull;
if (true) then
{
  _this = createVehicle ["Land_fort_bagfence_corner", [5565.3521, 8745.5195, -0.097737566], [], 0, "CAN_COLLIDE"];
  _vehicle_521 = _this;
  _this setDir -58.779644;
  _this setPos [5565.3521, 8745.5195, -0.097737566];
};

_vehicle_523 = objNull;
if (true) then
{
  _this = createVehicle ["Land_fort_bagfence_corner", [5571.4766, 8757.4902, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_523 = _this;
  _this setDir -150.226;
  _this setPos [5571.4766, 8757.4902, 3.4332275e-005];
};

_vehicle_526 = objNull;
if (true) then
{
  _this = createVehicle ["Land_fort_bagfence_long", [5570.7104, 8753.626, -0.078365929], [], 0, "CAN_COLLIDE"];
  _vehicle_526 = _this;
  _this setDir -60.276348;
  _this setPos [5570.7104, 8753.626, -0.078365929];
};

_vehicle_529 = objNull;
if (true) then
{
  _this = createVehicle ["Land_fort_bagfence_long", [5569.1304, 8750.915, -0.10218555], [], 0, "CAN_COLLIDE"];
  _vehicle_529 = _this;
  _this setDir -60.276348;
  _this setPos [5569.1304, 8750.915, -0.10218555];
};

_vehicle_531 = objNull;
if (true) then
{
  _this = createVehicle ["Land_fort_bagfence_long", [5567.646, 8748.0596, -0.080493718], [], 0, "CAN_COLLIDE"];
  _vehicle_531 = _this;
  _this setDir -60.276348;
  _this setPos [5567.646, 8748.0596, -0.080493718];
};

_vehicle_533 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CamoNetVar_EAST", [5567.0239, 8752.0225], [], 0, "CAN_COLLIDE"];
  _vehicle_533 = _this;
  _this setDir -51.80595;
  _this setPos [5567.0239, 8752.0225];
};

_vehicle_534 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net2", [5563.271, 8747.8018, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_534 = _this;
  _this setDir 27.957176;
  _this setPos [5563.271, 8747.8018, 3.8146973e-006];
};

_vehicle_535 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [5565.166, 8764.1465, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_535 = _this;
  _this setDir 113.43301;
  _this setPos [5565.166, 8764.1465, 1.5258789e-005];
};

_vehicle_536 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [5564.0928, 8752.6406], [], 0, "CAN_COLLIDE"];
  _vehicle_536 = _this;
  _this setDir -57.253178;
  _this setPos [5564.0928, 8752.6406];
};

_vehicle_538 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [5566.4536, 8756.4326, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_538 = _this;
  _this setDir -56.451992;
  _this setPos [5566.4536, 8756.4326, -1.5258789e-005];
};

_vehicle_541 = objNull;
if (true) then
{
  _this = createVehicle ["Land_fort_bagfence_long", [5568.2314, 8752.8145, -0.28804252], [], 0, "CAN_COLLIDE"];
  _vehicle_541 = _this;
  _this setDir 33.70816;
  _this setPos [5568.2314, 8752.8145, -0.28804252];
};

_unit_79 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["GUE_Soldier_CO", [5567.3667, 8755.9063, -1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _unit_79 = _this;
  _this setDir -81.309258;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_85 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["GUE_Commander", [5564.9346, 8752.2197, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _unit_85 = _this;
  _this setDir -63.655689;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_548 = objNull;
if (true) then
{
  _this = createVehicle ["HMMWVWreck", [13408.699, 8657.0977, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_548 = _this;
  _this setDir -49.658279;
  _this setPos [13408.699, 8657.0977, 3.0517578e-005];
};

_vehicle_550 = objNull;
if (true) then
{
  _this = createVehicle ["HMMWVWreck", [13391.407, 8636.3643, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_550 = _this;
  _this setDir -49.658279;
  _this setPos [13391.407, 8636.3643, -4.5776367e-005];
};

_vehicle_561 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [16454.463, 11480.874, 8.9654503], [], 0, "CAN_COLLIDE"];
  _vehicle_561 = _this;
  _this setDir -89.135101;
  _this setPos [16454.463, 11480.874, 8.9654503];
};

_vehicle_563 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [16454.531, 11483.791, 8.87887], [], 0, "CAN_COLLIDE"];
  _vehicle_563 = _this;
  _this setDir -89.135101;
  _this setPos [16454.531, 11483.791, 8.87887];
};

_vehicle_565 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [16454.523, 11486.607, 8.8265753], [], 0, "CAN_COLLIDE"];
  _vehicle_565 = _this;
  _this setDir 89.985847;
  _this setPos [16454.523, 11486.607, 8.8265753];
};

_vehicle_567 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [16453.736, 11489.327, 9.0072145], [], 0, "CAN_COLLIDE"];
  _vehicle_567 = _this;
  _this setDir -122.0182;
  _this setPos [16453.736, 11489.327, 9.0072145];
};

_unit_107 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["UN_CDF_Soldier_Pilot_EP1", [16452.006, 11482.037, 9.2772989], [], 0, "CAN_COLLIDE"];
  _unit_107 = _this;
  _this setDir -64.708405;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_570 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [16492.998, 11470.192, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_570 = _this;
  _this setPos [16492.998, 11470.192, 6.8664551e-005];
};

_vehicle_574 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierWhite_EP1", [16453.445, 11479.016, 9.1442633], [], 0, "CAN_COLLIDE"];
  _vehicle_574 = _this;
  _this setDir 271.3063;
  _this setPos [16453.445, 11479.016, 9.1442633];
};

_unit_110 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["Doctor", [16148.919, 13593.755, 0.099877179], [], 0, "CAN_COLLIDE"];
  _unit_110 = _this;
  _this setDir 184.15884;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_117 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Soldier_MG_PMC", [16147.882, 13579.686, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _unit_117 = _this;
  _this setDir 79.300804;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_575 = objNull;
if (true) then
{
  _this = createVehicle ["Desk", [16148.84, 13579.781], [], 0, "CAN_COLLIDE"];
  _vehicle_575 = _this;
  _this setDir 270.07288;
  _this setPos [16148.84, 13579.781];
};

_vehicle_576 = objNull;
if (true) then
{
  _this = createVehicle ["WoodChair", [16147.276, 13579.221, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_576 = _this;
  _this setDir -124.62439;
  _this setPos [16147.276, 13579.221, 3.8146973e-006];
};

_vehicle_577 = objNull;
if (true) then
{
  _this = createVehicle ["VaultStorageLocked", [16145.936, 13583.003], [], 0, "CAN_COLLIDE"];
  _vehicle_577 = _this;
  _this setDir -0.78987855;
  _this setVehicleLock "LOCKED";
  _this setPos [16145.936, 13583.003];
};

_vehicle_578 = objNull;
if (true) then
{
  _this = createVehicle ["EvDogTags", [16148.667, 13579.492, 0.82527864], [], 0, "CAN_COLLIDE"];
  _vehicle_578 = _this;
  _this setPos [16148.667, 13579.492, 0.82527864];
};

_vehicle_579 = objNull;
if (true) then
{
  _this = createVehicle ["EvMoscow", [16148.907, 13579.951, 0.82311404], [], 0, "CAN_COLLIDE"];
  _vehicle_579 = _this;
  _this setDir 113.77685;
  _this setPos [16148.907, 13579.951, 0.82311404];
};

_vehicle_580 = objNull;
if (true) then
{
  _this = createVehicle ["EvKobalt", [16148.667, 13579.717, 0.82031703], [], 0, "CAN_COLLIDE"];
  _vehicle_580 = _this;
  _this setDir 87.472626;
  _this setPos [16148.667, 13579.717, 0.82031703];
};

_vehicle_581 = objNull;
if (true) then
{
  _this = createVehicle ["EvMap", [16149.064, 13580.295, 0.82853109], [], 0, "CAN_COLLIDE"];
  _vehicle_581 = _this;
  _this setPos [16149.064, 13580.295, 0.82853109];
};

_vehicle_583 = objNull;
if (true) then
{
  _this = createVehicle ["EvPhoto", [16145.878, 13583.021, 1.1953301], [], 0, "CAN_COLLIDE"];
  _vehicle_583 = _this;
  _this setDir 105.46539;
  _this setPos [16145.878, 13583.021, 1.1953301];
};

_vehicle_584 = objNull;
if (true) then
{
  _this = createVehicle ["Laptop_EP1", [16148.98, 13579.375, 0.80950612], [], 0, "CAN_COLLIDE"];
  _vehicle_584 = _this;
  _this setDir 122.66376;
  _this setPos [16148.98, 13579.375, 0.80950612];
};

_vehicle_585 = objNull;
if (true) then
{
  _this = createVehicle ["SatPhone", [16148.742, 13580.322, 0.82459509], [], 0, "CAN_COLLIDE"];
  _vehicle_585 = _this;
  _this setDir 3.1011775;
  _this setPos [16148.742, 13580.322, 0.82459509];
};

_vehicle_588 = objNull;
if (true) then
{
  _this = createVehicle ["BRDMWreck", [9992.0469, 7552.9097, 0.15796326], [], 0, "CAN_COLLIDE"];
  _vehicle_588 = _this;
  _this setDir 80.769066;
  _this setPos [9992.0469, 7552.9097, 0.15796326];
};

_vehicle_589 = objNull;
if (true) then
{
  _this = createVehicle ["BMP2Wreck", [9986.8359, 7542.2573, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_589 = _this;
  _this setDir 31.552946;
  _this setPos [9986.8359, 7542.2573, 3.0517578e-005];
};

_vehicle_590 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [9976.541, 7549.3472, 0.056697678], [], 0, "CAN_COLLIDE"];
  _vehicle_590 = _this;
  _this setPos [9976.541, 7549.3472, 0.056697678];
};

_vehicle_592 = objNull;
if (true) then
{
  _this = createVehicle ["Body2", [9964.5303, 7548.3174, 0.076668195], [], 0, "CAN_COLLIDE"];
  _vehicle_592 = _this;
  _this setPos [9964.5303, 7548.3174, 0.076668195];
};

_vehicle_594 = objNull;
if (true) then
{
  _this = createVehicle ["HMMWVWreck", [9959.665, 7547.9697, 0.034252457], [], 0, "CAN_COLLIDE"];
  _vehicle_594 = _this;
  _this setDir 5.9879937;
  _this setPos [9959.665, 7547.9697, 0.034252457];
};

_vehicle_595 = objNull;
if (true) then
{
  _this = createVehicle ["hiluxWreck", [9964.9014, 7539.0244, 0.089422137], [], 0, "CAN_COLLIDE"];
  _vehicle_595 = _this;
  _this setDir -75.272896;
  _this setPos [9964.9014, 7539.0244, 0.089422137];
};

_vehicle_596 = objNull;
if (true) then
{
  _this = createVehicle ["datsun01Wreck", [9998.5137, 7560.6641, 0.015679795], [], 0, "CAN_COLLIDE"];
  _vehicle_596 = _this;
  _this setDir -295.70981;
  _this setPos [9998.5137, 7560.6641, 0.015679795];
};

_vehicle_597 = objNull;
if (true) then
{
  _this = createVehicle ["datsun02Wreck", [9939.043, 7523.4902, 0.51917791], [], 0, "CAN_COLLIDE"];
  _vehicle_597 = _this;
  _this setDir 203.20155;
  _this setPos [9939.043, 7523.4902, 0.51917791];
};

_vehicle_598 = objNull;
if (true) then
{
  _this = createVehicle ["SKODAWreck", [9922.9502, 7527.1807, 0.5183745], [], 0, "CAN_COLLIDE"];
  _vehicle_598 = _this;
  _this setPos [9922.9502, 7527.1807, 0.5183745];
};

_vehicle_599 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier5", [9895.3271, 7523.9063, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_599 = _this;
  _this setDir 69.935646;
  _this setPos [9895.3271, 7523.9063, 1.5258789e-005];
};

_vehicle_602 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier5", [9899.5088, 7512.3008], [], 0, "CAN_COLLIDE"];
  _vehicle_602 = _this;
  _this setDir 73.495972;
  _this setPos [9899.5088, 7512.3008];
};

_vehicle_604 = objNull;
if (true) then
{
  _this = createVehicle ["ZavoraAnim", [9898.4531, 7511.8984, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_604 = _this;
  _this setDir 69.252884;
  _this setPos [9898.4531, 7511.8984, 3.0517578e-005];
};

_vehicle_606 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier5", [9891.6992, 7527.6626, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_606 = _this;
  _this setDir 45.742447;
  _this setPos [9891.6992, 7527.6626, 4.5776367e-005];
};

_vehicle_609 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier5", [9901.1113, 7507.4292, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_609 = _this;
  _this setDir 98.486237;
  _this setPos [9901.1113, 7507.4292, -1.5258789e-005];
};

_vehicle_615 = objNull;
if (true) then
{
  _this = createVehicle ["TK_WarfareBAntiAirRadar_Base_EP1", [9900.4814, 7458.0957, -0.35948277], [], 0, "CAN_COLLIDE"];
  _vehicle_615 = _this;
  _this setDir 241.01675;
  _this setPos [9900.4814, 7458.0957, -0.35948277];
};

_vehicle_617 = objNull;
if (true) then
{
  _this = createVehicle ["BRDM2_HQ_TK_GUE_unfolded_Base_EP1", [9904.0654, 7477.7129, -0.33301964], [], 0, "CAN_COLLIDE"];
  _vehicle_617 = _this;
  _this setDir -17.604601;
  _this setPos [9904.0654, 7477.7129, -0.33301964];
};

_vehicle_619 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9889.3213, 7499.6587, -0.16070792], [], 0, "CAN_COLLIDE"];
  _vehicle_619 = _this;
  _this setDir -15.029494;
  _this setPos [9889.3213, 7499.6587, -0.16070792];
};

_vehicle_621 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9897.373, 7501.9707, -0.14794317], [], 0, "CAN_COLLIDE"];
  _vehicle_621 = _this;
  _this setDir -13.568985;
  _this setPos [9897.373, 7501.9707, -0.14794317];
};

_vehicle_624 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9888.0625, 7493.79, -0.15291819], [], 0, "CAN_COLLIDE"];
  _vehicle_624 = _this;
  _this setDir 73.309837;
  _this setPos [9888.0625, 7493.79, -0.15291819];
};

_vehicle_627 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9890.7012, 7485.9609, -0.25876793], [], 0, "CAN_COLLIDE"];
  _vehicle_627 = _this;
  _this setDir 73.309837;
  _this setPos [9890.7012, 7485.9609, -0.25876793];
};

_vehicle_631 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9904.5195, 7486.7524, -0.13789912], [], 0, "CAN_COLLIDE"];
  _vehicle_631 = _this;
  _this setDir -13.568985;
  _this setPos [9904.5195, 7486.7524, -0.13789912];
};

_vehicle_632 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9896.4678, 7484.4404, -0.12120599], [], 0, "CAN_COLLIDE"];
  _vehicle_632 = _this;
  _this setDir -15.029494;
  _this setPos [9896.4678, 7484.4404, -0.12120599];
};

_vehicle_637 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9910.8438, 7485.2026, -0.30850756], [], 0, "CAN_COLLIDE"];
  _vehicle_637 = _this;
  _this setDir 76.352348;
  _this setPos [9910.8438, 7485.2026, -0.30850756];
};

_vehicle_638 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9912.6709, 7477.0869, -0.40965807], [], 0, "CAN_COLLIDE"];
  _vehicle_638 = _this;
  _this setDir 82.568298;
  _this setPos [9912.6709, 7477.0869, -0.40965807];
};

_vehicle_642 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9914.0029, 7468.6719, -0.32283795], [], 0, "CAN_COLLIDE"];
  _vehicle_642 = _this;
  _this setDir 82.568298;
  _this setPos [9914.0029, 7468.6719, -0.32283795];
};

_vehicle_645 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9916.1123, 7460.7612, -0.30871636], [], 0, "CAN_COLLIDE"];
  _vehicle_645 = _this;
  _this setDir 71.922089;
  _this setPos [9916.1123, 7460.7612, -0.30871636];
};

_vehicle_648 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9918.9912, 7452.9004, -0.29446027], [], 0, "CAN_COLLIDE"];
  _vehicle_648 = _this;
  _this setDir 71.922089;
  _this setPos [9918.9912, 7452.9004, -0.29446027];
};

_vehicle_651 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9915.2461, 7447.9546, -0.1930815], [], 0, "CAN_COLLIDE"];
  _vehicle_651 = _this;
  _this setDir 157.85858;
  _this setPos [9915.2461, 7447.9546, -0.1930815];
};

_vehicle_654 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9907.5889, 7444.8984, -0.10744348], [], 0, "CAN_COLLIDE"];
  _vehicle_654 = _this;
  _this setDir 161.87682;
  _this setPos [9907.5889, 7444.8984, -0.10744348];
};

_vehicle_657 = objNull;
if (true) then
{
  _this = createVehicle ["HMMWVWreck", [9885.0801, 7523.7568, -0.0093534533], [], 0, "CAN_COLLIDE"];
  _vehicle_657 = _this;
  _this setDir -119.07002;
  _this setPos [9885.0801, 7523.7568, -0.0093534533];
};

_vehicle_660 = objNull;
if (true) then
{
  _this = createVehicle ["HMMWVWreck", [9897.3506, 7506.6475, -0.011279175], [], 0, "CAN_COLLIDE"];
  _vehicle_660 = _this;
  _this setDir -199.22888;
  _this setPos [9897.3506, 7506.6475, -0.011279175];
};

_vehicle_663 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9899.9502, 7442.938, -0.5532831], [], 0, "CAN_COLLIDE"];
  _vehicle_663 = _this;
  _this setDir 173.58299;
  _this setPos [9899.9502, 7442.938, -0.5532831];
};

_vehicle_665 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9892.0488, 7443.0586, -0.19897333], [], 0, "CAN_COLLIDE"];
  _vehicle_665 = _this;
  _this setDir 191.22971;
  _this setPos [9892.0488, 7443.0586, -0.19897333];
};

_vehicle_668 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9884.0029, 7445.208, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_668 = _this;
  _this setDir 204.57547;
  _this setPos [9884.0029, 7445.208, 6.1035156e-005];
};

_vehicle_671 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9876.8457, 7448.9819, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_671 = _this;
  _this setDir 213.8405;
  _this setPos [9876.8457, 7448.9819, 1.5258789e-005];
};

_vehicle_674 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9869.6523, 7453.0703], [], 0, "CAN_COLLIDE"];
  _vehicle_674 = _this;
  _this setDir 209.29362;
  _this setPos [9869.6523, 7453.0703];
};

_vehicle_677 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9863.2139, 7457.98, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_677 = _this;
  _this setDir 233.12842;
  _this setPos [9863.2139, 7457.98, 4.5776367e-005];
};

_vehicle_680 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9858.1533, 7464.3838, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_680 = _this;
  _this setDir 233.12842;
  _this setPos [9858.1533, 7464.3838, 3.0517578e-005];
};

_vehicle_682 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9853.3184, 7471.186, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_682 = _this;
  _this setDir 239.86583;
  _this setPos [9853.3184, 7471.186, 3.0517578e-005];
};

_vehicle_684 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9849.6426, 7478.4033], [], 0, "CAN_COLLIDE"];
  _vehicle_684 = _this;
  _this setDir 248.83276;
  _this setPos [9849.6426, 7478.4033];
};

_vehicle_686 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9846.3008, 7485.8569, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_686 = _this;
  _this setDir 247.74484;
  _this setPos [9846.3008, 7485.8569, 7.6293945e-005];
};

_vehicle_689 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier5", [9854.5713, 7501.2153], [], 0, "CAN_COLLIDE"];
  _vehicle_689 = _this;
  _this setDir 69.935646;
  _this setPos [9854.5713, 7501.2153];
};

_vehicle_692 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9839.4922, 7502.6211, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_692 = _this;
  _this setDir 248.06537;
  _this setPos [9839.4922, 7502.6211, 6.1035156e-005];
};

_vehicle_695 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9838.9912, 7509.8843, -0.30632156], [], 0, "CAN_COLLIDE"];
  _vehicle_695 = _this;
  _this setDir 286.93411;
  _this setPos [9838.9912, 7509.8843, -0.30632156];
};

_vehicle_699 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9843.75, 7515.7173, -0.10946061], [], 0, "CAN_COLLIDE"];
  _vehicle_699 = _this;
  _this setDir 332.35016;
  _this setPos [9843.75, 7515.7173, -0.10946061];
};

_vehicle_702 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9851.2363, 7519.2764, -0.12743405], [], 0, "CAN_COLLIDE"];
  _vehicle_702 = _this;
  _this setDir 342.52365;
  _this setPos [9851.2363, 7519.2764, -0.12743405];
};

_vehicle_705 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9858.9766, 7522.4868, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_705 = _this;
  _this setDir 339.32474;
  _this setPos [9858.9766, 7522.4868, 1.5258789e-005];
};

_vehicle_708 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9866.625, 7525.6387], [], 0, "CAN_COLLIDE"];
  _vehicle_708 = _this;
  _this setDir 339.32474;
  _this setPos [9866.625, 7525.6387];
};

_vehicle_711 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9874.3877, 7529.02, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_711 = _this;
  _this setDir 339.32474;
  _this setPos [9874.3877, 7529.02, 6.1035156e-005];
};

_vehicle_713 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9882.0859, 7532.0972, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_713 = _this;
  _this setDir 339.32474;
  _this setPos [9882.0859, 7532.0972, 6.1035156e-005];
};

_vehicle_715 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier_large", [9888.1865, 7530.9995, -0.17062132], [], 0, "CAN_COLLIDE"];
  _vehicle_715 = _this;
  _this setDir 405.13196;
  _this setPos [9888.1865, 7530.9995, -0.17062132];
};

_vehicle_719 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9901.6641, 7512.897, 0.057657216], [], 0, "CAN_COLLIDE"];
  _vehicle_719 = _this;
  _this setPos [9901.6641, 7512.897, 0.057657216];
};

_vehicle_721 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9899.0674, 7520.8037, 0.011252407], [], 0, "CAN_COLLIDE"];
  _vehicle_721 = _this;
  _this setPos [9899.0674, 7520.8037, 0.011252407];
};

_vehicle_723 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9913.2188, 7519.8188, 0.034564406], [], 0, "CAN_COLLIDE"];
  _vehicle_723 = _this;
  _this setPos [9913.2188, 7519.8188, 0.034564406];
};

_vehicle_725 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9930.0586, 7531.1294, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_725 = _this;
  _this setPos [9930.0586, 7531.1294, 0];
};

_vehicle_727 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9842.8037, 7491.667, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_727 = _this;
  _this setPos [9842.8037, 7491.667, -1.5258789e-005];
};

_vehicle_729 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9885.5781, 7500.6416, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_729 = _this;
  _this setPos [9885.5781, 7500.6416, 1.5258789e-005];
};

_vehicle_731 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9892.9502, 7530.0718, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_731 = _this;
  _this setPos [9892.9502, 7530.0718, -1.5258789e-005];
};

_vehicle_733 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9894.4727, 7530.7944, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_733 = _this;
  _this setPos [9894.4727, 7530.7944, -1.5258789e-005];
};

_vehicle_735 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9902.9023, 7503.9683, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_735 = _this;
  _this setPos [9902.9023, 7503.9683, 4.5776367e-005];
};

_vehicle_741 = objNull;
if (true) then
{
  _this = createVehicle ["TK_WarfareBHeavyFactory_Base_EP1", [9870.46, 7477.7388, -0.40719953], [], 0, "CAN_COLLIDE"];
  _vehicle_741 = _this;
  _this setDir 147.44484;
  _this setPos [9870.46, 7477.7388, -0.40719953];
};

_vehicle_742 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [9852.6143, 7517.4019], [], 0, "CAN_COLLIDE"];
  _vehicle_742 = _this;
  _this setDir -19.924896;
  _this setPos [9852.6143, 7517.4019];
};

_vehicle_744 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [9853.8203, 7517.8501, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_744 = _this;
  _this setDir -19.924896;
  _this setPos [9853.8203, 7517.8501, -1.5258789e-005];
};

_vehicle_746 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [9855.1543, 7518.3442], [], 0, "CAN_COLLIDE"];
  _vehicle_746 = _this;
  _this setDir -19.924896;
  _this setPos [9855.1543, 7518.3442];
};

_vehicle_752 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9827.1621, 7488.064, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_752 = _this;
  _this setPos [9827.1621, 7488.064, -1.5258789e-005];
};

_unit_136 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["GUE_Soldier_2", [8815.5273, 2343.7002, 14.264673], [], 0, "CAN_COLLIDE"];
  _unit_136 = _this;
  _this setDir 173.20691;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_754 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_cargo_cont_net2", [8813.8877, 2345.4338, 14.166578], [], 0, "CAN_COLLIDE"];
  _vehicle_754 = _this;
  _this setDir -24.785517;
  _this setPos [8813.8877, 2345.4338, 14.166578];
};

_vehicle_758 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierOPFOR_EP1", [15315.811, 9360.8252, 5.7220459e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_758 = _this;
  _this setDir 192.50055;
  _this setPos [15315.811, 9360.8252, 5.7220459e-005];
};

_vehicle_759 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_EP1", [16445.469, 8334.6826], [], 0, "CAN_COLLIDE"];
  _vehicle_759 = _this;
  _this setDir 25.275831;
  _this setPos [16445.469, 8334.6826];
};

_vehicle_760 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [16441.723, 8329.1504, 0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_760 = _this;
  _this setDir 0.9357031;
  _this setPos [16441.723, 8329.1504, 0.00012207031];
};

_vehicle_761 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Garb_Heap_EP1", [16436.768, 8322.5781, -0.12356042], [], 0, "CAN_COLLIDE"];
  _vehicle_761 = _this;
  _this setPos [16436.768, 8322.5781, -0.12356042];
};

_vehicle_762 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_can", [16435.963, 8324.9355], [], 0, "CAN_COLLIDE"];
  _vehicle_762 = _this;
  _this setDir 149.46693;
  _this setPos [16435.963, 8324.9355];
};

_vehicle_764 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_can", [16443.037, 8331.5703], [], 0, "CAN_COLLIDE"];
  _vehicle_764 = _this;
  _this setDir 38.915462;
  _this setPos [16443.037, 8331.5703];
};

_vehicle_766 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_can", [16443.018, 8330.748], [], 0, "CAN_COLLIDE"];
  _vehicle_766 = _this;
  _this setDir 44.554695;
  _this setPos [16443.018, 8330.748];
};

_vehicle_769 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [16446.93, 8326.2715, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_769 = _this;
  _this setPos [16446.93, 8326.2715, 9.1552734e-005];
};

_vehicle_770 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_stack_EP1", [16446.779, 8334.7324], [], 0, "CAN_COLLIDE"];
  _vehicle_770 = _this;
  _this setDir 95.761345;
  _this setPos [16446.779, 8334.7324];
};

_vehicle_771 = objNull;
if (true) then
{
  _this = createVehicle ["Paleta1", [16436.125, 8328.458], [], 0, "CAN_COLLIDE"];
  _vehicle_771 = _this;
  _this setDir 16.170752;
  _this setPos [16436.125, 8328.458];
};

_vehicle_772 = objNull;
if (true) then
{
  _this = createVehicle ["Paleta2", [16436.047, 8326.2607], [], 0, "CAN_COLLIDE"];
  _vehicle_772 = _this;
  _this setDir 58.149883;
  _this setPos [16436.047, 8326.2607];
};

_vehicle_773 = objNull;
if (true) then
{
  _this = createVehicle ["Pile_of_wood", [16442.756, 8334.8721], [], 0, "CAN_COLLIDE"];
  _vehicle_773 = _this;
  _this setDir -0.14435722;
  _this setPos [16442.756, 8334.8721];
};

_vehicle_774 = objNull;
if (true) then
{
  _this = createVehicle ["Land_cages_EP1", [16449.859, 8338.8975], [], 0, "CAN_COLLIDE"];
  _vehicle_774 = _this;
  _this setDir -88.418304;
  _this setPos [16449.859, 8338.8975];
};

_vehicle_776 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_TankSmall", [16809.813, 8162.4888], [], 0, "CAN_COLLIDE"];
  _vehicle_776 = _this;
  _this setDir 92.608665;
  _this setPos [16809.813, 8162.4888];
};

_unit_152 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["RU_Damsel5", [16445.578, 8332.1963, 0.068730704], [], 0, "CAN_COLLIDE"];
  _unit_152 = _this;
  _this setDir 91.658318;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_777 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierRedCross_EP1", [17583.459, 6386.6704, -0.00015258789], [], 0, "CAN_COLLIDE"];
  _vehicle_777 = _this;
  _this setDir 115.53911;
  _this setPos [17583.459, 6386.6704, -0.00015258789];
};

_vehicle_778 = objNull;
if (true) then
{
  _this = createVehicle ["Body", [17585.844, 6407.7036, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_778 = _this;
  _this setDir 183.25006;
  _this setPos [17585.844, 6407.7036, -6.1035156e-005];
};

_vehicle_780 = objNull;
if (true) then
{
  _this = createVehicle ["Body", [17584.979, 6407.6118, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_780 = _this;
  _this setDir 187.20488;
  _this setPos [17584.979, 6407.6118, 1.5258789e-005];
};

_vehicle_782 = objNull;
if (true) then
{
  _this = createVehicle ["Body", [17584.025, 6407.6841], [], 0, "CAN_COLLIDE"];
  _vehicle_782 = _this;
  _this setDir 181.53278;
  _this setPos [17584.025, 6407.6841];
};

_vehicle_787 = objNull;
if (true) then
{
  _this = createVehicle ["Body", [17588.369, 6407.5571, -0.04578948], [], 0, "CAN_COLLIDE"];
  _vehicle_787 = _this;
  _this setDir 183.25006;
  _this setPos [17588.369, 6407.5571, -0.04578948];
};

_vehicle_788 = objNull;
if (true) then
{
  _this = createVehicle ["Body", [17587.545, 6407.5156, -0.045713186], [], 0, "CAN_COLLIDE"];
  _vehicle_788 = _this;
  _this setDir 187.20488;
  _this setPos [17587.545, 6407.5156, -0.045713186];
};

_vehicle_789 = objNull;
if (true) then
{
  _this = createVehicle ["Body", [17586.592, 6407.5879, -0.04578948], [], 0, "CAN_COLLIDE"];
  _vehicle_789 = _this;
  _this setDir 181.53278;
  _this setPos [17586.592, 6407.5879, -0.04578948];
};

_vehicle_793 = objNull;
if (true) then
{
  _this = createVehicle ["GraveCrossHelmet", [17582.947, 6408.6626, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_793 = _this;
  _this setPos [17582.947, 6408.6626, 9.1552734e-005];
};

_vehicle_794 = objNull;
if (true) then
{
  _this = createVehicle ["GraveCrossHelmet_EP1", [17581.412, 6408.6934, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_794 = _this;
  _this setPos [17581.412, 6408.6934, 1.5258789e-005];
};

_vehicle_795 = objNull;
if (true) then
{
  _this = createVehicle ["GraveCross1", [17582.24, 6408.6362], [], 0, "CAN_COLLIDE"];
  _vehicle_795 = _this;
  _this setPos [17582.24, 6408.6362];
};

_vehicle_796 = objNull;
if (true) then
{
  _this = createVehicle ["Grave", [17583.031, 6407.8394, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_796 = _this;
  _this setPos [17583.031, 6407.8394, 6.1035156e-005];
};

_vehicle_798 = objNull;
if (true) then
{
  _this = createVehicle ["Grave", [17582.219, 6407.8901, -0.031421643], [], 0, "CAN_COLLIDE"];
  _vehicle_798 = _this;
  _this setPos [17582.219, 6407.8901, -0.031421643];
};

_vehicle_800 = objNull;
if (true) then
{
  _this = createVehicle ["Grave", [17581.42, 6407.9512, -0.056500778], [], 0, "CAN_COLLIDE"];
  _vehicle_800 = _this;
  _this setPos [17581.42, 6407.9512, -0.056500778];
};

_vehicle_802 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Church_tomb_1", [17585.281, 6413.3633, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_802 = _this;
  _this setPos [17585.281, 6413.3633, 3.0517578e-005];
};

_vehicle_803 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Church_tomb_2", [17584.037, 6413.3198, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_803 = _this;
  _this setPos [17584.037, 6413.3198, 6.1035156e-005];
};

_vehicle_804 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Church_tomb_3", [17586.738, 6413.3667, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_804 = _this;
  _this setPos [17586.738, 6413.3667, 4.5776367e-005];
};

_vehicle_805 = objNull;
if (true) then
{
  _this = createVehicle ["Mass_grave", [17592.096, 6406.9756, -0.11378808], [], 0, "CAN_COLLIDE"];
  _vehicle_805 = _this;
  _this setPos [17592.096, 6406.9756, -0.11378808];
};

_unit_157 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Soldier_Sniper_KSVK_PMC", [8141.2407, 21318.662, 13.790574], [], 0, "CAN_COLLIDE"];
  _unit_157 = _this;
  _this setDir 128.78096;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_165 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["Soldier_GL_PMC", [8140.3301, 21317.041, 13.899791], [], 0, "CAN_COLLIDE"];
  _unit_165 = _this;
  _this setDir 96.361519;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_806 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrate_NoInteractive_", [8141.9038, 21319.283, 13.88026], [], 0, "CAN_COLLIDE"];
  _vehicle_806 = _this;
  _this setDir -12.48529;
  _this setPos [8141.9038, 21319.283, 13.88026];
};

_vehicle_807 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Large", [8139.8335, 21318.414, 13.936816], [], 0, "CAN_COLLIDE"];
  _vehicle_807 = _this;
  _this setDir 168.72594;
  _this setPos [8139.8335, 21318.414, 13.936816];
};

_vehicle_808 = objNull;
if (true) then
{
  _this = createVehicle ["AmmoCrates_NoInteractive_Small", [8140.4263, 21315.637, 13.706378], [], 0, "CAN_COLLIDE"];
  _vehicle_808 = _this;
  _this setDir 77.576622;
  _this setPos [8140.4263, 21315.637, 13.706378];
};

_vehicle_809 = objNull;
if (true) then
{
  _this = createVehicle ["FlagCarrierTFKnight_EP1", [8146.1646, 21311.803, 21.452158], [], 0, "CAN_COLLIDE"];
  _vehicle_809 = _this;
  _this setDir -100.05995;
  _this setPos [8146.1646, 21311.803, 21.452158];
};

_vehicle_812 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6982.1475, 8287.0146], [], 0, "CAN_COLLIDE"];
  _vehicle_812 = _this;
  _this setDir 128.59329;
  _this setPos [6982.1475, 8287.0146];
};

_vehicle_814 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6982.4526, 8284.2314, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_814 = _this;
  _this setDir 38.972584;
  _this setPos [6982.4526, 8284.2314, 5.3405762e-005];
};

_vehicle_818 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6985.5811, 8281.752, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_818 = _this;
  _this setDir 37.665684;
  _this setPos [6985.5811, 8281.752, 3.0517578e-005];
};

_vehicle_819 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6988.6299, 8279.3213, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_819 = _this;
  _this setDir 37.665684;
  _this setPos [6988.6299, 8279.3213, 7.6293945e-005];
};

_vehicle_822 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6991.7974, 8276.9287], [], 0, "CAN_COLLIDE"];
  _vehicle_822 = _this;
  _this setDir 37.476578;
  _this setPos [6991.7974, 8276.9287];
};

_vehicle_823 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6995.3511, 8275.6426, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_823 = _this;
  _this setDir 2.0526967;
  _this setPos [6995.3511, 8275.6426, 4.5776367e-005];
};

_vehicle_827 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6998.5356, 8277.1357], [], 0, "CAN_COLLIDE"];
  _vehicle_827 = _this;
  _this setDir 307.93887;
  _this setPos [6998.5356, 8277.1357];
};

_vehicle_830 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [7000.9409, 8280.2715, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_830 = _this;
  _this setDir 307.93887;
  _this setPos [7000.9409, 8280.2715, 6.8664551e-005];
};

_vehicle_834 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [7005.7642, 8286.4785, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_834 = _this;
  _this setDir 307.93887;
  _this setPos [7005.7642, 8286.4785, 3.8146973e-005];
};

_vehicle_835 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [7003.3589, 8283.3428, -0.0034484863], [], 0, "CAN_COLLIDE"];
  _vehicle_835 = _this;
  _this setDir 307.93887;
  _this setPos [7003.3589, 8283.3428, -0.0034484863];
};

_vehicle_839 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [7006.3838, 8289.9209, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_839 = _this;
  _this setDir 252.78752;
  _this setPos [7006.3838, 8289.9209, 4.5776367e-005];
};

_vehicle_842 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [7004.1699, 8292.9014, 0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_842 = _this;
  _this setDir 215.86589;
  _this setPos [7004.1699, 8292.9014, 0.00011444092];
};

_vehicle_845 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [7000.9761, 8295.2598, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_845 = _this;
  _this setDir 216.39427;
  _this setPos [7000.9761, 8295.2598, 2.2888184e-005];
};

_vehicle_847 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_container", [6983.3726, 8286.2354, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_847 = _this;
  _this setDir 35.865242;
  _this setPos [6983.3726, 8286.2354, -7.6293945e-006];
};

_vehicle_848 = objNull;
if (true) then
{
  _this = createVehicle ["Paleta2", [6981.6851, 8286.0391, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_848 = _this;
  _this setDir 106.45931;
  _this setPos [6981.6851, 8286.0391, -7.6293945e-006];
};

_vehicle_849 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_TankSmall", [6964.1558, 8319.873], [], 0, "CAN_COLLIDE"];
  _vehicle_849 = _this;
  _this setDir 127.53294;
  _this setPos [6964.1558, 8319.873];
};

_vehicle_851 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [6990.5537, 8281.7646], [], 0, "CAN_COLLIDE"];
  _vehicle_851 = _this;
  _this setDir 38.579826;
  _this setPos [6990.5537, 8281.7646];
};

_vehicle_860 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6990.853, 8309.0107], [], 0, "CAN_COLLIDE"];
  _vehicle_860 = _this;
  _this setDir -87.18351;
  _this setPos [6990.853, 8309.0107];
};

_vehicle_861 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6989.4023, 8312.2227, -0.015853882], [], 0, "CAN_COLLIDE"];
  _vehicle_861 = _this;
  _this setDir 218.70264;
  _this setPos [6989.4023, 8312.2227, -0.015853882];
};

_vehicle_862 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6986.2988, 8314.6611, -0.034576416], [], 0, "CAN_COLLIDE"];
  _vehicle_862 = _this;
  _this setDir 218.70264;
  _this setPos [6986.2988, 8314.6611, -0.034576416];
};

_vehicle_863 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6980.1572, 8319.5693, -0.078941345], [], 0, "CAN_COLLIDE"];
  _vehicle_863 = _this;
  _this setDir 218.70264;
  _this setPos [6980.1572, 8319.5693, -0.078941345];
};

_vehicle_864 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6983.2607, 8317.123, -0.060218811], [], 0, "CAN_COLLIDE"];
  _vehicle_864 = _this;
  _this setDir 218.70264;
  _this setPos [6983.2607, 8317.123, -0.060218811];
};

_vehicle_865 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6976.7197, 8320.2383, -0.090774536], [], 0, "CAN_COLLIDE"];
  _vehicle_865 = _this;
  _this setDir 163.55121;
  _this setPos [6976.7197, 8320.2383, -0.090774536];
};

_vehicle_866 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6973.7163, 8318.0596, -0.083900452], [], 0, "CAN_COLLIDE"];
  _vehicle_866 = _this;
  _this setDir 126.62968;
  _this setPos [6973.7163, 8318.0596, -0.083900452];
};

_vehicle_874 = objNull;
if (true) then
{
  _this = createVehicle ["Mi8Wreck", [6984.2109, 8311.2715, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_874 = _this;
  _this setDir -55.314327;
  _this setPos [6984.2109, 8311.2715, 4.5776367e-005];
};

_vehicle_883 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [6984.8472, 8298.833], [], 0, "CAN_COLLIDE"];
  _vehicle_883 = _this;
  _this setDir 43.58902;
  _this setPos [6984.8472, 8298.833];
};

_vehicle_884 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [6983.9541, 8297.6064], [], 0, "CAN_COLLIDE"];
  _vehicle_884 = _this;
  _this setDir 129.84621;
  _this setPos [6983.9541, 8297.6064];
};

_vehicle_886 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [6988.8115, 8295.5947, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_886 = _this;
  _this setDir 218.2144;
  _this setPos [6988.8115, 8295.5947, 2.2888184e-005];
};

_vehicle_889 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [6985.9888, 8297.7578], [], 0, "CAN_COLLIDE"];
  _vehicle_889 = _this;
  _this setDir 218.8764;
  _this setPos [6985.9888, 8297.7578];
};

_vehicle_895 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [6987.0698, 8301.8203, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_895 = _this;
  _this setDir 192.46469;
  _this setPos [6987.0698, 8301.8203, 3.0517578e-005];
};

_unit_172 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["RU_Worker1", [6985.5972, 8297.3369], [], 0, "CAN_COLLIDE"];
  _unit_172 = _this;
  _this setDir 46.824566;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_173 = objNull;
if (true) then
{
  _this = _group_1 createUnit ["GUE_Woodlander1", [6988.2998, 8295.0664, -0.68591523], [], 0, "CAN_COLLIDE"];
  _unit_173 = _this;
  _this setDir 26.874998;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_175 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["RU_Worker4", [15312.594, 9386.8281, 1.4305115e-005], [], 0, "CAN_COLLIDE"];
  _unit_175 = _this;
  _this setDir 187.10107;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_176 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["Dr_Hladik_EP1", [17577.842, 6392.6772, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _unit_176 = _this;
  _this setDir 217.41821;
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_898 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [16452.031, 8327.0137, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_898 = _this;
  _this setDir 88.316002;
  _this setPos [16452.031, 8327.0137, 1.5258789e-005];
};

_vehicle_899 = objNull;
if (true) then
{
  _this = createVehicle ["T72WreckTurret", [15099.093, 14805.037, 0.093773738], [], 0, "CAN_COLLIDE"];
  _vehicle_899 = _this;
  _this setDir 53.079697;
  _this setPos [15099.093, 14805.037, 0.093773738];
};

_vehicle_902 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_TankSmall", [14657.05, 18738.193, -0.044274546], [], 0, "CAN_COLLIDE"];
  _vehicle_902 = _this;
  _this setDir 50.765594;
  _this setPos [14657.05, 18738.193, -0.044274546];
};

_vehicle_904 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_TankSmall", [8562.3555, 20489.939, 0.00030517578], [], 0, "CAN_COLLIDE"];
  _vehicle_904 = _this;
  _this setDir -73.044891;
  _this setPos [8562.3555, 20489.939, 0.00030517578];
};

_vehicle_907 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Barricade_EP1", [3256.7996, 8156.6714, 4.437521], [], 0, "CAN_COLLIDE"];
  _vehicle_907 = _this;
  _this setDir -4.3810658;
  _this setPos [3256.7996, 8156.6714, 4.437521];
};

_vehicle_909 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Barricade_EP1", [3279.0225, 8157.3599, 4.3536229], [], 0, "CAN_COLLIDE"];
  _vehicle_909 = _this;
  _this setDir 174.37032;
  _this setPos [3279.0225, 8157.3599, 4.3536229];
};

_vehicle_913 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo1E_EP1", [3255.7412, 8170.188, 4.5739789], [], 0, "CAN_COLLIDE"];
  _vehicle_913 = _this;
  _this setDir 91.538193;
  _this setPos [3255.7412, 8170.188, 4.5739789];
};

_vehicle_915 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo1E_EP1", [3264.8354, 8170.4922, 4.7285404], [], 0, "CAN_COLLIDE"];
  _vehicle_915 = _this;
  _this setDir 85.521416;
  _this setPos [3264.8354, 8170.4922, 4.7285404];
};

_vehicle_917 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_Cargo1B_military", [3256.3066, 8178.2397, 4.7040644], [], 0, "CAN_COLLIDE"];
  _vehicle_917 = _this;
  _this setPos [3256.3066, 8178.2397, 4.7040644];
};

_unit_187 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["Profiteer2_EP1", [3253.1162, 8176.4282, 3.133173], [], 0, "CAN_COLLIDE"];
  _unit_187 = _this;
  _this setDir -85.271355;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_918 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [3238.9421, 8175.5332, -0.22166258], [], 0, "CAN_COLLIDE"];
  _vehicle_918 = _this;
  _this setPos [3238.9421, 8175.5332, -0.22166258];
};

_vehicle_920 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [3211.3542, 7560.0513, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_920 = _this;
  _this setPos [3211.3542, 7560.0513, 2.2888184e-005];
};

_vehicle_921 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3218.6033, 7568.936, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_921 = _this;
  _this setPos [3218.6033, 7568.936, 3.8146973e-006];
};

_vehicle_923 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3220.3318, 7567.2476, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_923 = _this;
  _this setPos [3220.3318, 7567.2476, 7.6293945e-006];
};

_vehicle_925 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3221.8882, 7570.0933, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_925 = _this;
  _this setPos [3221.8882, 7570.0933, 7.6293945e-006];
};

_vehicle_927 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3223.1394, 7568.4624, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_927 = _this;
  _this setPos [3223.1394, 7568.4624, 0];
};

_vehicle_929 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3208.0388, 7550.0435, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_929 = _this;
  _this setPos [3208.0388, 7550.0435, 3.0517578e-005];
};

_vehicle_931 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3205.1973, 7547.9326, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_931 = _this;
  _this setPos [3205.1973, 7547.9326, -7.6293945e-006];
};

_vehicle_933 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3206.2798, 7550.8125, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_933 = _this;
  _this setPos [3206.2798, 7550.8125, -7.6293945e-006];
};

_vehicle_935 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3219.625, 7552.1514, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_935 = _this;
  _this setPos [3219.625, 7552.1514, 0];
};

_vehicle_937 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3220.9111, 7550.1338, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_937 = _this;
  _this setPos [3220.9111, 7550.1338, 0];
};

_vehicle_939 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3222.0249, 7548.0205, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_939 = _this;
  _this setPos [3222.0249, 7548.0205, 3.8146973e-006];
};

_vehicle_941 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3223.6406, 7545.8003, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_941 = _this;
  _this setPos [3223.6406, 7545.8003, 7.6293945e-006];
};

_vehicle_943 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3224.8379, 7548.79, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_943 = _this;
  _this setPos [3224.8379, 7548.79, 3.0517578e-005];
};

_vehicle_945 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3224.4587, 7550.9063, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_945 = _this;
  _this setPos [3224.4587, 7550.9063, 3.8146973e-006];
};

_vehicle_947 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3224.5676, 7553.0718, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_947 = _this;
  _this setPos [3224.5676, 7553.0718, 3.8146973e-006];
};

_vehicle_949 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3225.218, 7554.8774, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_949 = _this;
  _this setPos [3225.218, 7554.8774, 1.1444092e-005];
};

_vehicle_951 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_EP1", [3225.8167, 7557.1606, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_951 = _this;
  _this setPos [3225.8167, 7557.1606, 1.1444092e-005];
};

_vehicle_953 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_2_EP1", [3224.2275, 7559.7603, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_953 = _this;
  _this setPos [3224.2275, 7559.7603, 3.4332275e-005];
};

_vehicle_956 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_2_EP1", [3223.2493, 7561.1494, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_956 = _this;
  _this setPos [3223.2493, 7561.1494, 5.3405762e-005];
};

_vehicle_958 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_2_EP1", [3222.7515, 7562.2695, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_958 = _this;
  _this setPos [3222.7515, 7562.2695, 3.0517578e-005];
};

_vehicle_960 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_2_EP1", [3222.0935, 7563.2886, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_960 = _this;
  _this setPos [3222.0935, 7563.2886, 3.0517578e-005];
};

_vehicle_962 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_small_2_EP1", [3221.345, 7565.022, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_962 = _this;
  _this setPos [3221.345, 7565.022, 3.4332275e-005];
};

_vehicle_964 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Campfire", [3209.4819, 7565.7827, 0.0012171611], [], 0, "CAN_COLLIDE"];
  _vehicle_964 = _this;
  _this setPos [3209.4819, 7565.7827, 0.0012171611];
};

_vehicle_966 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Market_shelter_EP1", [3205.4612, 7550.687, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_966 = _this;
  _this setDir -26.005196;
  _this setPos [3205.4612, 7550.687, 3.0517578e-005];
};

_vehicle_967 = objNull;
if (true) then
{
  _this = createVehicle ["ACamp_EP1", [3192.6404, 7559.2119], [], 0, "CAN_COLLIDE"];
  _vehicle_967 = _this;
  _this setDir 148.11862;
  _this setPos [3192.6404, 7559.2119];
};

_vehicle_969 = objNull;
if (true) then
{
  _this = createVehicle ["ACamp_EP1", [3192.5845, 7565.5527], [], 0, "CAN_COLLIDE"];
  _vehicle_969 = _this;
  _this setDir 215.53056;
  _this setPos [3192.5845, 7565.5527];
};

_vehicle_971 = objNull;
if (true) then
{
  _this = createVehicle ["ACamp_EP1", [3200.157, 7562.0635, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_971 = _this;
  _this setDir 360.71652;
  _this setPos [3200.157, 7562.0635, -1.5258789e-005];
};

_vehicle_973 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Chair_EP1", [3207.5049, 7568.4536, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_973 = _this;
  _this setDir 50.773468;
  _this setPos [3207.5049, 7568.4536, 7.6293945e-006];
};

_vehicle_974 = objNull;
if (true) then
{
  _this = createVehicle ["WoodChair", [3205.9189, 7566.3057, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_974 = _this;
  _this setDir -72.091446;
  _this setPos [3205.9189, 7566.3057, -2.2888184e-005];
};

_vehicle_975 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [3209.7344, 7568.875], [], 0, "CAN_COLLIDE"];
  _vehicle_975 = _this;
  _this setDir 10.872818;
  _this setPos [3209.7344, 7568.875];
};

_vehicle_977 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [3212.0327, 7568.3564, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_977 = _this;
  _this setDir 31.98913;
  _this setPos [3212.0327, 7568.3564, -3.8146973e-006];
};

_vehicle_980 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CncBlock_D", [3224.9185, 7547.3589, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_980 = _this;
  _this setDir -25.344469;
  _this setPos [3224.9185, 7547.3589, -1.5258789e-005];
};

_vehicle_981 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [3223.845, 7583.7046, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_981 = _this;
  _this setDir 64.239838;
  _this setPos [3223.845, 7583.7046, -1.1444092e-005];
};

_vehicle_983 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [3225.0396, 7582.0371, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_983 = _this;
  _this setDir 65.998047;
  _this setPos [3225.0396, 7582.0371, 1.5258789e-005];
};

_vehicle_985 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_can", [3199.8284, 7544.8525, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_985 = _this;
  _this setPos [3199.8284, 7544.8525, -7.6293945e-006];
};

_vehicle_986 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_container", [3197.8474, 7545.1152, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_986 = _this;
  _this setDir -27.346643;
  _this setPos [3197.8474, 7545.1152, -1.5258789e-005];
};

_vehicle_987 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_stack_EP1", [3202.2334, 7546.335, -1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_987 = _this;
  _this setDir -17.291384;
  _this setPos [3202.2334, 7546.335, -1.9073486e-005];
};

_vehicle_988 = objNull;
if (true) then
{
  _this = createVehicle ["Paleta2", [3196.5288, 7547.0234, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_988 = _this;
  _this setPos [3196.5288, 7547.0234, 1.5258789e-005];
};

_vehicle_989 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_TankSmall", [3197.9919, 7537.7788, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_989 = _this;
  _this setDir 65.070694;
  _this setPos [3197.9919, 7537.7788, -3.8146973e-006];
};

_vehicle_990 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Crates_stack_EP1", [3200.3831, 7545.6133, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_990 = _this;
  _this setDir -23.773056;
  _this setPos [3200.3831, 7545.6133, 3.4332275e-005];
};

_vehicle_992 = objNull;
if (true) then
{
  _this = createVehicle ["Land_stand_meat_EP1", [3208.2769, 7551.8394, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_992 = _this;
  _this setDir -21.401228;
  _this setPos [3208.2769, 7551.8394, 3.8146973e-005];
};

_vehicle_993 = objNull;
if (true) then
{
  _this = createVehicle ["Land_stand_small_EP1", [3212.9824, 7552.0649, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_993 = _this;
  _this setDir 152.81427;
  _this setPos [3212.9824, 7552.0649, 3.8146973e-006];
};

_vehicle_995 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Wheel_cart_EP1", [3221.3621, 7571.5723], [], 0, "CAN_COLLIDE"];
  _vehicle_995 = _this;
  _this setDir 95.481369;
  _this setPos [3221.3621, 7571.5723];
};

_vehicle_996 = objNull;
if (true) then
{
  _this = createVehicle ["Land_transport_cart_EP1", [3205.571, 7550.8813], [], 0, "CAN_COLLIDE"];
  _vehicle_996 = _this;
  _this setDir -203.00793;
  _this setPos [3205.571, 7550.8813];
};

_vehicle_997 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [3209.4399, 7550.0244, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_997 = _this;
  _this setDir -26.32213;
  _this setPos [3209.4399, 7550.0244, -7.6293945e-006];
};

_vehicle_998 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Bag_EP1", [3214.1763, 7552.3066, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_998 = _this;
  _this setPos [3214.1763, 7552.3066, -1.5258789e-005];
};

_vehicle_999 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Basket_EP1", [3203.8374, 7547.479, 0.0040642722], [], 0, "CAN_COLLIDE"];
  _vehicle_999 = _this;
  _this setDir 189.26689;
  _this setPos [3203.8374, 7547.479, 0.0040642722];
};

_vehicle_1001 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Crates_EP1", [3210.7195, 7551.9673, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1001 = _this;
  _this setDir 155.26578;
  _this setPos [3210.7195, 7551.9673, 1.9073486e-005];
};

_vehicle_1003 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Crates_stack_EP1", [3211.1816, 7550.7124, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1003 = _this;
  _this setDir -23.773056;
  _this setPos [3211.1816, 7550.7124, 3.8146973e-006];
};

_vehicle_1005 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Chair_EP1", [3211.3994, 7553.1445, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1005 = _this;
  _this setDir -61.711315;
  _this setPos [3211.3994, 7553.1445, 7.6293945e-006];
};

_vehicle_1006 = objNull;
if (true) then
{
  _this = createVehicle ["Park_bench1", [3206.1272, 7563.4663, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1006 = _this;
  _this setDir 56.364391;
  _this setPos [3206.1272, 7563.4663, 7.6293945e-006];
};

_vehicle_1007 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [3213.2659, 7554.5122, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1007 = _this;
  _this setDir 62.828762;
  _this setPos [3213.2659, 7554.5122, 1.1444092e-005];
};

_unit_193 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["RU_Farmwife5", [3210.2573, 7553.5146, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _unit_193 = _this;
  _this setDir 3.3161948;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_195 = objNull;
if (true) then
{
  _this = _group_2 createUnit ["Worker4", [14625.043, 18864.609, 0.48237833], [], 0, "CAN_COLLIDE"];
  _unit_195 = _this;
  _this setDir -174.58798;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_vehicle_1010 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [10172.08, 18716.92, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1010 = _this;
  _this setDir -29.006971;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [10172.08, 18716.92, 3.8146973e-005];
};

_vehicle_1012 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [8125.7231, 21316.494, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1012 = _this;
  _this setDir -12.10274;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [8125.7231, 21316.494, 4.5776367e-005];
};

_vehicle_1014 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [8125.8867, 21313.502, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1014 = _this;
  _this setDir -70.006653;
  _this setPos [8125.8867, 21313.502, 1.5258789e-005];
};

_vehicle_1019 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [15095.085, 14813.726, -1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1019 = _this;
  _this setDir 196.95195;
  _this setPos [15095.085, 14813.726, -1.9073486e-005];
};

_vehicle_1021 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [16159.999, 13585.844, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1021 = _this;
  _this setDir -88.974411;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [16159.999, 13585.844, 7.6293945e-006];
};

_vehicle_1023 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [16159.415, 13590.932, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1023 = _this;
  _this setDir 308.39713;
  _this setPos [16159.415, 13590.932, 3.8146973e-006];
};

_vehicle_1025 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [16438.418, 11485.899, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1025 = _this;
  _this setDir 184.43353;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [16438.418, 11485.899, 3.8146973e-006];
};

_vehicle_1027 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [16442.42, 11485.704, 4.9591064e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1027 = _this;
  _this setDir 152.54228;
  _this setPos [16442.42, 11485.704, 4.9591064e-005];
};

_vehicle_1028 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [15314.632, 9367.6123, 2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1028 = _this;
  _this setDir 92.250443;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [15314.632, 9367.6123, 2.0980835e-005];
};

_vehicle_1030 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [15314.35, 9382.0264, -3.3378601e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1030 = _this;
  _this setDir 7.8190179;
  _this setPos [15314.35, 9382.0264, -3.3378601e-005];
};

_vehicle_1031 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [16449.633, 8330.2139, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1031 = _this;
  _this setDir -0.3754791;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [16449.633, 8330.2139, -1.5258789e-005];
};

_vehicle_1033 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [17575.111, 6394.4463, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1033 = _this;
  _this setDir 307.46664;
  _this setPos [17575.111, 6394.4463, -1.5258789e-005];
};

_vehicle_1034 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [6995.0059, 8294.9717], [], 0, "CAN_COLLIDE"];
  _vehicle_1034 = _this;
  _this setDir 219.52061;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [6995.0059, 8294.9717];
};

_vehicle_1036 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [5556.7646, 8750.1543], [], 0, "CAN_COLLIDE"];
  _vehicle_1036 = _this;
  _this setDir 217.35687;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [5556.7646, 8750.1543];
};

_vehicle_1038 = objNull;
if (true) then
{
  _this = createVehicle ["Info_Board_EP1", [3223.3574, 7563.1914, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1038 = _this;
  _this setDir 64.711594;
  _this setVehicleInit "this allowDammage false;";
  _this setPos [3223.3574, 7563.1914, 3.8146973e-006];
};

_vehicle_1040 = objNull;
if (true) then
{
  _this = createVehicle ["RU_WarfareBUAVterminal", [16592.609, 10224.393, -0.0001449585], [], 0, "CAN_COLLIDE"];
  _vehicle_1040 = _this;
  _this setDir 0.58673584;
  _this setPos [16592.609, 10224.393, -0.0001449585];
};

_vehicle_1041 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Bag_EP1", [17576.686, 6394.0933, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1041 = _this;
  _this setDir -32.86132;
  _this setPos [17576.686, 6394.0933, 1.5258789e-005];
};

_vehicle_1043 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Bucket_EP1", [17576.178, 6393.7944], [], 0, "CAN_COLLIDE"];
  _vehicle_1043 = _this;
  _this setPos [17576.178, 6393.7944];
};

_vehicle_1045 = objNull;
if (true) then
{
  _this = createVehicle ["Desk", [17577.416, 6391.9292, 0.0025430643], [], 0, "CAN_COLLIDE"];
  _vehicle_1045 = _this;
  _this setDir 26.466864;
  _this setPos [17577.416, 6391.9292, 0.0025430643];
};

_vehicle_1046 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Rack_EP1", [17578.811, 6393.3843, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1046 = _this;
  _this setDir 115.84117;
  _this setPos [17578.811, 6393.3843, 1.5258789e-005];
};

_vehicle_1047 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Water_pipe_EP1", [17579.109, 6392.5566, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1047 = _this;
  _this setPos [17579.109, 6392.5566, -1.5258789e-005];
};

_vehicle_1048 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [17580.777, 6392.001, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1048 = _this;
  _this setDir 65.059326;
  _this setPos [17580.777, 6392.001, 3.0517578e-005];
};

_vehicle_1049 = objNull;
if (true) then
{
  _this = createVehicle ["WoodChair", [17579.215, 6391.3208], [], 0, "CAN_COLLIDE"];
  _vehicle_1049 = _this;
  _this setDir -138.67061;
  _this setPos [17579.215, 6391.3208];
};

_vehicle_1050 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Water_pipe_EP1", [16148.321, 13594.316, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1050 = _this;
  _this setDir 231.11668;
  _this setPos [16148.321, 13594.316, -7.6293945e-006];
};

_vehicle_1051 = objNull;
if (true) then
{
  _this = createVehicle ["Body1", [16153.363, 13599.801, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1051 = _this;
  _this setPos [16153.363, 13599.801, -7.6293945e-006];
};

_vehicle_1053 = objNull;
if (true) then
{
  _this = createVehicle ["Body2", [16149.685, 13600.206, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1053 = _this;
  _this setPos [16149.685, 13600.206, 3.8146973e-006];
};

_vehicle_1054 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [10139.301, 18661.178, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1054 = _this;
  _this setPos [10139.301, 18661.178, 0];
};

_vehicle_1055 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [7017.2959, 8315.5684, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1055 = _this;
  _this setPos [7017.2959, 8315.5684, 0];
};

_vehicle_1061 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [6989.2202, 8298.4609, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1061 = _this;
  _this setDir 217.99072;
  _this setPos [6989.2202, 8298.4609, 7.6293945e-006];
};

_vehicle_1065 = objNull;
if (true) then
{
  _this = createVehicle ["Land_fort_bagfence_long", [6989.6519, 8298.6865, -0.16800582], [], 0, "CAN_COLLIDE"];
  _vehicle_1065 = _this;
  _this setDir 39.061768;
  _this setPos [6989.6519, 8298.6865, -0.16800582];
};

_vehicle_1066 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [10154.933, 18713.951, 8.7631531], [], 0, "CAN_COLLIDE"];
  _vehicle_1066 = _this;
  _this setDir 60.046837;
  _this setPos [10154.933, 18713.951, 8.7631531];
};

_vehicle_1068 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [10156.313, 18711.492, 8.5777693], [], 0, "CAN_COLLIDE"];
  _vehicle_1068 = _this;
  _this setDir 62.530148;
  _this setPos [10156.313, 18711.492, 8.5777693];
};

_vehicle_1070 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [10157.831, 18708.844, 8.6152468], [], 0, "CAN_COLLIDE"];
  _vehicle_1070 = _this;
  _this setDir 61.794712;
  _this setPos [10157.831, 18708.844, 8.6152468];
};

_vehicle_1072 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [10159.052, 18706.336, 8.554574], [], 0, "CAN_COLLIDE"];
  _vehicle_1072 = _this;
  _this setDir 62.320854;
  _this setPos [10159.052, 18706.336, 8.554574];
};

_vehicle_1074 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [10156.98, 18716.322, 8.7909708], [], 0, "CAN_COLLIDE"];
  _vehicle_1074 = _this;
  _this setDir 150.68117;
  _this setPos [10156.98, 18716.322, 8.7909708];
};

_vehicle_1076 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [10161.719, 18719.064, 8.861125], [], 0, "CAN_COLLIDE"];
  _vehicle_1076 = _this;
  _this setDir 150.01561;
  _this setPos [10161.719, 18719.064, 8.861125];
};

_vehicle_1079 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [10167.394, 18710.223, 8.5116119], [], 0, "CAN_COLLIDE"];
  _vehicle_1079 = _this;
  _this setDir 150.68117;
  _this setPos [10167.394, 18710.223, 8.5116119];
};

_vehicle_1081 = objNull;
if (true) then
{
  _this = createVehicle ["Concrete_Wall_EP1", [10167.725, 18712.473, 9.0127821], [], 0, "CAN_COLLIDE"];
  _vehicle_1081 = _this;
  _this setDir 63.940327;
  _this setPos [10167.725, 18712.473, 9.0127821];
};

_vehicle_1085 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [16554.789, 10200.894, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1085 = _this;
  _this setPos [16554.789, 10200.894, 1.9073486e-005];
};

processInitCommands;
