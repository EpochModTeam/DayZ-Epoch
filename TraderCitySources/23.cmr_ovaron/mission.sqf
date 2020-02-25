activateAddons [ 
  "mbg_african_buildings"
];

activateAddons ["mbg_african_buildings"];
initAmbientLife;

_this = createCenter west;
_center_0 = _this;

_group_0 = createGroup _center_0;

_unit_0 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["BAF_Soldier_AA_MTP", [752.37463, 3141.2354, -5.6013789], [], 0, "CAN_COLLIDE"];
  _unit_0 = _this;
  _this setVehicleInit "execVM ""testkit\init.sqf""";
  _this setUnitAbility 0.60000002;
  if (true) then {_group_0 selectLeader _this;};
  if (true) then {selectPlayer _this;};
  if (true) then {setPlayable _this;};
};

_vehicle_0 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [735.58673, 3117.7097, 4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_0 = _this;
  _this setDir 31.267845;
  _this setPos [735.58673, 3117.7097, 4.7683716e-006];
};

_vehicle_1 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [735.46466, 3114.9807, 5.2452087e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1 = _this;
  _this setDir -174.39183;
  _this setPos [735.46466, 3114.9807, 5.2452087e-006];
};

_vehicle_2 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [739.45703, 3117.9385, -9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_2 = _this;
  _this setPos [739.45703, 3117.9385, -9.5367432e-006];
};

_vehicle_4 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [737.38617, 3121.1958, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_4 = _this;
  _this setPos [737.38617, 3121.1958, -1.1444092e-005];
};

_vehicle_6 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [733.49036, 3121.8142, -1.7642975e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_6 = _this;
  _this setPos [733.49036, 3121.8142, -1.7642975e-005];
};

_vehicle_9 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barrel_water", [736.78937, 3115.1135, -7.2479248e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_9 = _this;
  _this setPos [736.78937, 3115.1135, -7.2479248e-005];
};

_vehicle_11 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [724.84387, 3135.0049, -1.4066696e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_11 = _this;
  _this setPos [724.84387, 3135.0049, -1.4066696e-005];
};

_vehicle_13 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Misc_cargo_cont_net1", [733.45471, 3115.4812, -0.00012922287], [], 0, "CAN_COLLIDE"];
  _vehicle_13 = _this;
  _this setDir 7.6620564;
  _this setPos [733.45471, 3115.4812, -0.00012922287];
};

_vehicle_21 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [9504.2236, 7122.2832, -0.01987505], [], 0, "CAN_COLLIDE"];
  _vehicle_21 = _this;
  _this setDir 209.37263;
  _this setPos [9504.2236, 7122.2832, -0.01987505];
};

_vehicle_22 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [9504.2666, 7125.0146, -0.022453491], [], 0, "CAN_COLLIDE"];
  _vehicle_22 = _this;
  _this setDir 3.713099;
  _this setPos [9504.2666, 7125.0146, -0.022453491];
};

_vehicle_23 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9500.3701, 7121.9351, 0.15091133], [], 0, "CAN_COLLIDE"];
  _vehicle_23 = _this;
  _this setDir 178.10484;
  _this setPos [9500.3701, 7121.9351, 0.15091133];
};

_vehicle_24 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9502.5518, 7118.7412, 0.021976843], [], 0, "CAN_COLLIDE"];
  _vehicle_24 = _this;
  _this setDir 178.10484;
  _this setPos [9502.5518, 7118.7412, 0.021976843];
};

_vehicle_25 = objNull;
if (true) then
{
  _this = createVehicle ["Hedgehog", [9506.4648, 7118.2456, 0.035659052], [], 0, "CAN_COLLIDE"];
  _vehicle_25 = _this;
  _this setDir 178.10484;
  _this setPos [9506.4648, 7118.2456, 0.035659052];
};

_vehicle_26 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barrel_water", [9502.9326, 7124.8403, 0.051252887], [], 0, "CAN_COLLIDE"];
  _vehicle_26 = _this;
  _this setDir 178.10484;
  _this setPos [9502.9326, 7124.8403, 0.051252887];
};

_vehicle_27 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Misc_cargo_cont_net1", [9506.2793, 7124.584, -0.12275457], [], 0, "CAN_COLLIDE"];
  _vehicle_27 = _this;
  _this setDir 185.76689;
  _this setPos [9506.2793, 7124.584, -0.12275457];
};

_vehicle_36 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [9666.3447, 2661.3853, -5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_36 = _this;
  _this setPos [9666.3447, 2661.3853, -5.7220459e-006];
};

_vehicle_39 = objNull;
if (true) then
{
  _this = createVehicle ["TK_WarfareBAntiAirRadar_EP1", [9708.498, 2661.4192, -0.2572366], [], 0, "CAN_COLLIDE"];
  _vehicle_39 = _this;
  _this setPos [9708.498, 2661.4192, -0.2572366];
};

_vehicle_41 = objNull;
if (true) then
{
  _this = createVehicle ["Land_BagFenceRound", [9708.6113, 2664.3821, -0.016047146], [], 0, "CAN_COLLIDE"];
  _vehicle_41 = _this;
  _this setDir 153.52444;
  _this setPos [9708.6113, 2664.3821, -0.016047146];
};

_vehicle_42 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [573.6344, 6888.4546, -2.3841858e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_42 = _this;
  _this setPos [573.6344, 6888.4546, -2.3841858e-005];
};

_vehicle_44 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Barrack2", [546.34235, 6891.6738, -1.6212463e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_44 = _this;
  _this setDir -93.982407;
  _this setPos [546.34235, 6891.6738, -1.6212463e-005];
};

_unit_6 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["BAF_Soldier_AA_MTP", [544.3963, 6890.1528, 0.30468616], [], 0, "CAN_COLLIDE"];
  _unit_6 = _this;
  _this setDir 78.753487;
  _this setUnitAbility 0.60000002;
  if (false) then {_group_0 selectLeader _this;};
};

_vehicle_52 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Ind_TankSmall2", [4364.1572, 6677.9897, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_52 = _this;
  _this setDir 17.760201;
  _this setPos [4364.1572, 6677.9897, -1.5258789e-005];
};

_vehicle_53 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_garaz", [4370.4834, 6693.9448, -0.21446308], [], 0, "CAN_COLLIDE"];
  _vehicle_53 = _this;
  _this setDir -71.658279;
  _this setVehicleInit "setvectorup [0,0,1]";
  _this setPos [4370.4834, 6693.9448, -0.21446308];
};

_vehicle_54 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_garaz_mala", [4364.7236, 6676.5996, -0.15228917], [], 0, "CAN_COLLIDE"];
  _vehicle_54 = _this;
  _this setDir 287.17221;
  _this setVehicleInit "setVecctorUp [0,0,1]";
  _this setPos [4364.7236, 6676.5996, -0.15228917];
};

_vehicle_62 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Proxy_UsBasicAmmoBox", [4367.3604, 6717.8896], [], 0, "CAN_COLLIDE"];
  _vehicle_62 = _this;
  _this setDir -26.585472;
  _this setPos [4367.3604, 6717.8896];
};

_vehicle_63 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_RUBasicWeapons", [4365.8442, 6720.9043, -9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_63 = _this;
  _this setDir 115.11996;
  _this setPos [4365.8442, 6720.9043, -9.1552734e-005];
};

_vehicle_65 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_USBasicWeapons", [4366.8071, 6718.7964, -7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_65 = _this;
  _this setDir -23.882734;
  _this setPos [4366.8071, 6718.7964, -7.6293945e-005];
};

_vehicle_68 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_GuardShed", [4363.7808, 6687.1987, -0.22242086], [], 0, "CAN_COLLIDE"];
  _vehicle_68 = _this;
  _this setDir 468.82074;
  _this setPos [4363.7808, 6687.1987, -0.22242086];
};

_vehicle_74 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel", [4360.1958, 6681.5894, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_74 = _this;
  _this setPos [4360.1958, 6681.5894, -3.0517578e-005];
};

_vehicle_77 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo2E_EP1", [4354.2866, 6731.9229, -0.00019836426], [], 0, "CAN_COLLIDE"];
  _vehicle_77 = _this;
  _this setDir -89.353691;
  _this setPos [4354.2866, 6731.9229, -0.00019836426];
};

_vehicle_99 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Market_stalls_01_EP1", [4345.5215, 6725.1934, 0.12630561], [], 0, "CAN_COLLIDE"];
  _vehicle_99 = _this;
  _this setPos [4345.5215, 6725.1934, 0.12630561];
};

_vehicle_101 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo2E_EP1", [4348.1963, 6731.8604], [], 0, "CAN_COLLIDE"];
  _vehicle_101 = _this;
  _this setDir -89.131226;
  _this setPos [4348.1963, 6731.8604];
};

_vehicle_103 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo2E_EP1", [4342.1338, 6732.0303, -0.00010681152], [], 0, "CAN_COLLIDE"];
  _vehicle_103 = _this;
  _this setDir -89.567986;
  _this setPos [4342.1338, 6732.0303, -0.00010681152];
};

_vehicle_105 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo2E_EP1", [4335.896, 6731.98], [], 0, "CAN_COLLIDE"];
  _vehicle_105 = _this;
  _this setDir -88.944565;
  _this setPos [4335.896, 6731.98];
};

_vehicle_109 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHEmpty", [4351.5762, 6691.562, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_109 = _this;
  _this setPos [4351.5762, 6691.562, 1.5258789e-005];
};

_vehicle_112 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CncBlock", [4360.9731, 6688.0649], [], 0, "CAN_COLLIDE"];
  _vehicle_112 = _this;
  _this setDir 108.67822;
  _this setPos [4360.9731, 6688.0649];
};

_vehicle_114 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_pumpa", [4357.0762, 6724.7656, 0.020472022], [], 0, "CAN_COLLIDE"];
  _vehicle_114 = _this;
  _this setPos [4357.0762, 6724.7656, 0.020472022];
};

_vehicle_115 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Misc_cargo_cont_net2", [4359.2622, 6721.918], [], 0, "CAN_COLLIDE"];
  _vehicle_115 = _this;
  _this setDir 11.198732;
  _this setPos [4359.2622, 6721.918];
};

_vehicle_122 = objNull;
if (true) then
{
  _this = createVehicle ["Land_HBarrier1", [4363.0581, 6717.3306], [], 0, "CAN_COLLIDE"];
  _vehicle_122 = _this;
  _this setDir -121.2939;
  _this setPos [4363.0581, 6717.3306];
};

_vehicle_123 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Misc_Cargo1A", [3112.3694, 3764.3691, -3.862381e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_123 = _this;
  _this setDir -42.41888;
  _this setPos [3112.3694, 3764.3691, -3.862381e-005];
};

_vehicle_124 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Misc_Cargo1A", [3113.1724, 3758.0374, -0.11121041], [], 0, "CAN_COLLIDE"];
  _vehicle_124 = _this;
  _this setDir 29.427607;
  _this setPos [3113.1724, 3758.0374, -0.11121041];
};

_vehicle_128 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [3111.0874, 3762.6462, 3.194809e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_128 = _this;
  _this setDir 46.840923;
  _this setPos [3111.0874, 3762.6462, 3.194809e-005];
};

_vehicle_129 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [3111.1807, 3759.1362, -2.4318695e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_129 = _this;
  _this setDir 118.67246;
  _this setPos [3111.1807, 3759.1362, -2.4318695e-005];
};

_vehicle_130 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [3108.1016, 3760.6299, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_130 = _this;
  _this setDir 85.572998;
  _this setPos [3108.1016, 3760.6299, 1.9073486e-006];
};

_vehicle_132 = objNull;
if (true) then
{
  _this = createVehicle ["Land_covering_hut_EP1", [3107.7234, 3760.5737, -7.390976e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_132 = _this;
  _this setDir -95.157219;
  _this setPos [3107.7234, 3760.5737, -7.390976e-005];
};

_vehicle_134 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CncBlock", [3105.314, 3761.7805, -5.1498413e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_134 = _this;
  _this setDir 86.427307;
  _this setPos [3105.314, 3761.7805, -5.1498413e-005];
};

_vehicle_135 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CncBlock", [3105.4824, 3758.8838, -1.7642975e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_135 = _this;
  _this setDir 85.757599;
  _this setPos [3105.4824, 3758.8838, -1.7642975e-005];
};

_vehicle_144 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Misc_Cargo1A", [7128.5044, 6476.4131, -1.0490417e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_144 = _this;
  _this setDir -218.97054;
  _this setPos [7128.5044, 6476.4131, -1.0490417e-005];
};

_vehicle_145 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Misc_Cargo1A", [7128.793, 6482.7192, 0.25292903], [], 0, "CAN_COLLIDE"];
  _vehicle_145 = _this;
  _this setDir -147.12418;
  _this setPos [7128.793, 6482.7192, 0.25292903];
};

_vehicle_146 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [7129.9355, 6477.4941, 0.44268131], [], 0, "CAN_COLLIDE"];
  _vehicle_146 = _this;
  _this setDir -129.71095;
  _this setPos [7129.9355, 6477.4941, 0.44268131];
};

_vehicle_147 = objNull;
if (true) then
{
  _this = createVehicle ["FoldChair", [7129.9883, 6481.3833, 0.69024849], [], 0, "CAN_COLLIDE"];
  _vehicle_147 = _this;
  _this setDir -52.250916;
  _this setPos [7129.9883, 6481.3833, 0.69024849];
};

_vehicle_148 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [7133.561, 6479.8975, -0.019130915], [], 0, "CAN_COLLIDE"];
  _vehicle_148 = _this;
  _this setDir -87.536278;
  _this setPos [7133.561, 6479.8975, -0.019130915];
};

_vehicle_149 = objNull;
if (true) then
{
  _this = createVehicle ["Land_covering_hut_EP1", [7133.7983, 6479.8936, 0.55569804], [], 0, "CAN_COLLIDE"];
  _vehicle_149 = _this;
  _this setDir -268.68033;
  _this setPos [7133.7983, 6479.8936, 0.55569804];
};

_vehicle_150 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CncBlock", [7135.8501, 6478.4961, -0.056914255], [], 0, "CAN_COLLIDE"];
  _vehicle_150 = _this;
  _this setDir -89.031586;
  _this setPos [7135.8501, 6478.4961, -0.056914255];
};

_vehicle_151 = objNull;
if (true) then
{
  _this = createVehicle ["Land_CncBlock", [7135.9155, 6481.3911, 0.038112804], [], 0, "CAN_COLLIDE"];
  _vehicle_151 = _this;
  _this setDir -89.182358;
  _this setPos [7135.9155, 6481.3911, 0.038112804];
};

_vehicle_153 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_CamoNet_EAST", [4365.5054, 6719.1836, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_153 = _this;
  _this setDir 52.517075;
  _this setPos [4365.5054, 6719.1836, 1.5258789e-005];
};

_vehicle_155 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Misc_cargo_cont_net2", [4366.3594, 6713.7842, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_155 = _this;
  _this setDir 31.468664;
  _this setPos [4366.3594, 6713.7842, -6.1035156e-005];
};

_vehicle_156 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_PowGen_Big", [4371.8281, 6708.4282], [], 0, "CAN_COLLIDE"];
  _vehicle_156 = _this;
  _this setPos [4371.8281, 6708.4282];
};

_vehicle_159 = objNull;
if (true) then
{
  _this = createVehicle ["Land_BagFenceRound", [4367.7808, 6708.0269, -7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_159 = _this;
  _this setDir 81.726685;
  _this setPos [4367.7808, 6708.0269, -7.6293945e-005];
};

_vehicle_161 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4367.4395, 6725.5903, 0.12587348], [], 0, "CAN_COLLIDE"];
  _vehicle_161 = _this;
  _this setDir 34.142265;
  _this setPos [4367.4395, 6725.5903, 0.12587348];
};

_vehicle_162 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [4375.8452, 6713.3647, -0.00019836426], [], 0, "CAN_COLLIDE"];
  _vehicle_162 = _this;
  _this setDir 74.859642;
  _this setPos [4375.8452, 6713.3647, -0.00019836426];
};

_vehicle_163 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [4365.4473, 6718.6694, -0.00010681152], [], 0, "CAN_COLLIDE"];
  _vehicle_163 = _this;
  _this setPos [4365.4473, 6718.6694, -0.00010681152];
};

_vehicle_165 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_runwayold_40_main", [5868.9614, 3542.854, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_165 = _this;
  _this setDir -42.193874;
  _this setPos [5868.9614, 3542.854, -1.5258789e-005];
};

_vehicle_167 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5868.9961, 3522.9736, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_167 = _this;
  _this setPos [5868.9961, 3522.9736, 1.5258789e-005];
};

_vehicle_168 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5859.769, 3534.7749, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_168 = _this;
  _this setPos [5859.769, 3534.7749, 1.5258789e-005];
};

_vehicle_169 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5851.5103, 3546.9741, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_169 = _this;
  _this setPos [5851.5103, 3546.9741, -1.5258789e-005];
};

_vehicle_170 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5878.77, 3533.6377, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_170 = _this;
  _this setPos [5878.77, 3533.6377, -3.0517578e-005];
};

_vehicle_171 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5871.4565, 3548.1216, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_171 = _this;
  _this setPos [5871.4565, 3548.1216, -6.1035156e-005];
};

_vehicle_172 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5863.4482, 3559.1121, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_172 = _this;
  _this setPos [5863.4482, 3559.1121, -6.1035156e-005];
};

_vehicle_174 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5889.0967, 3543.3677, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_174 = _this;
  _this setPos [5889.0967, 3543.3677, -1.5258789e-005];
};

_vehicle_175 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5877.9492, 3555.6709, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_175 = _this;
  _this setPos [5877.9492, 3555.6709, -3.0517578e-005];
};

_vehicle_176 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [5869.2837, 3564.6372, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_176 = _this;
  _this setPos [5869.2837, 3564.6372, 1.5258789e-005];
};

_vehicle_177 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [5861.8403, 3519.7446], [], 0, "CAN_COLLIDE"];
  _vehicle_177 = _this;
  _this setDir 47.417313;
  _this setPos [5861.8403, 3519.7446];
};

_vehicle_179 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [5851.1914, 3531.179, -0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_179 = _this;
  _this setDir 47.417313;
  _this setPos [5851.1914, 3531.179, -0.00012207031];
};

_vehicle_181 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [5845.8208, 3548.7744, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_181 = _this;
  _this setDir 138.36096;
  _this setPos [5845.8208, 3548.7744, -4.5776367e-005];
};

_vehicle_183 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [5857.6177, 3559.0854, -0.00018310547], [], 0, "CAN_COLLIDE"];
  _vehicle_183 = _this;
  _this setDir 138.99632;
  _this setPos [5857.6177, 3559.0854, -0.00018310547];
};

_vehicle_185 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [5878.2246, 3524.7844, -0.1347049], [], 0, "CAN_COLLIDE"];
  _vehicle_185 = _this;
  _this setDir -41.185474;
  _this setPos [5878.2246, 3524.7844, -0.1347049];
};

_vehicle_187 = objNull;
if (true) then
{
  _this = createVehicle ["Land_GuardShed", [5868.0503, 3517.0198, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_187 = _this;
  _this setDir -133.38098;
  _this setPos [5868.0503, 3517.0198, -4.5776367e-005];
};

_vehicle_188 = objNull;
if (true) then
{
  _this = createVehicle ["HeliHCivil", [5875.1807, 3509.7292, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_188 = _this;
  _this setPos [5875.1807, 3509.7292, -1.5258789e-005];
};

_vehicle_191 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [5889.8613, 3535.1523, -0.18781422], [], 0, "CAN_COLLIDE"];
  _vehicle_191 = _this;
  _this setDir -41.754597;
  _this setPos [5889.8613, 3535.1523, -0.18781422];
};

_vehicle_193 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [5881.1851, 3558.0955, -0.40367326], [], 0, "CAN_COLLIDE"];
  _vehicle_193 = _this;
  _this setDir -132.16283;
  _this setPos [5881.1851, 3558.0955, -0.40367326];
};

_vehicle_195 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [5891.709, 3546.4915, -0.26790833], [], 0, "CAN_COLLIDE"];
  _vehicle_195 = _this;
  _this setDir -132.09708;
  _this setPos [5891.709, 3546.4915, -0.26790833];
};

_vehicle_197 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [5846.2954, 3538.2549, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_197 = _this;
  _this setDir -132.12987;
  _this setPos [5846.2954, 3538.2549, 7.6293945e-005];
};

_vehicle_200 = objNull;
if (true) then
{
  _this = createVehicle ["Barrels", [5858.1182, 3555.5886], [], 0, "CAN_COLLIDE"];
  _vehicle_200 = _this;
  _this setDir -42.376167;
  _this setPos [5858.1182, 3555.5886];
};

_vehicle_201 = objNull;
if (true) then
{
  _this = createVehicle ["Land_covering_hut_big_EP1", [5878.1919, 3530.146, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_201 = _this;
  _this setDir -221.51932;
  _this setPos [5878.1919, 3530.146, 3.0517578e-005];
};

_vehicle_202 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo2E_EP1", [5858.4897, 3528.8416, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_202 = _this;
  _this setDir -42.770206;
  _this setPos [5858.4897, 3528.8416, 1.5258789e-005];
};

_vehicle_203 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fire_barrel_burning", [5873.188, 3523.2595], [], 0, "CAN_COLLIDE"];
  _vehicle_203 = _this;
  _this setPos [5873.188, 3523.2595];
};

_vehicle_204 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_PowGen_Big", [5863.0513, 3523.7725, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_204 = _this;
  _this setDir -40.932598;
  _this setPos [5863.0513, 3523.7725, -1.5258789e-005];
};

_vehicle_207 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_GuardShed", [5856.1089, 3554.0745, -0.20648998], [], 0, "CAN_COLLIDE"];
  _vehicle_207 = _this;
  _this setDir -42.05323;
  _this setPos [5856.1089, 3554.0745, -0.20648998];
};

_vehicle_208 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_MASH", [5886.7437, 3541.6826], [], 0, "CAN_COLLIDE"];
  _vehicle_208 = _this;
  _this setDir -131.67879;
  _this setPos [5886.7437, 3541.6826];
};

_vehicle_210 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Stan_east", [5882.812, 3547.4028, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_210 = _this;
  _this setDir 48.320877;
  _this setPos [5882.812, 3547.4028, 1.5258789e-005];
};

_vehicle_212 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_tent_east", [5853.0273, 3544.3486, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_212 = _this;
  _this setDir -40.749115;
  _this setPos [5853.0273, 3544.3486, -1.5258789e-005];
};

_vehicle_213 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_EP1", [5878.6523, 3532.1016, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_213 = _this;
  _this setPos [5878.6523, 3532.1016, -1.5258789e-005];
};

_vehicle_216 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [5885.395, 3534.7324], [], 0, "CAN_COLLIDE"];
  _vehicle_216 = _this;
  _this setDir -221.90652;
  _this setPos [5885.395, 3534.7324];
};

_vehicle_217 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_can", [5880.519, 3530.9629, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_217 = _this;
  _this setPos [5880.519, 3530.9629, -3.0517578e-005];
};

_vehicle_219 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_stack_EP1", [5878.7651, 3529.3823], [], 0, "CAN_COLLIDE"];
  _vehicle_219 = _this;
  _this setDir -45.267433;
  _this setPos [5878.7651, 3529.3823];
};

_vehicle_221 = objNull;
if (true) then
{
  _this = createVehicle ["Pile_of_wood", [5861.4019, 3558.2947, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_221 = _this;
  _this setDir 49.456924;
  _this setPos [5861.4019, 3558.2947, 1.5258789e-005];
};

_vehicle_222 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barrel_water", [5876.2202, 3529.7041, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_222 = _this;
  _this setPos [5876.2202, 3529.7041, -1.5258789e-005];
};

_vehicle_223 = objNull;
if (true) then
{
  _this = createVehicle ["Land_cages_EP1", [5877, 3528.2039, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_223 = _this;
  _this setDir -133.24469;
  _this setPos [5877, 3528.2039, -1.5258789e-005];
};

_vehicle_224 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Wheel_cart_EP1", [5854.7485, 3551.5496, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_224 = _this;
  _this setPos [5854.7485, 3551.5496, -1.5258789e-005];
};

_vehicle_228 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [5884.5815, 3534.0115], [], 0, "CAN_COLLIDE"];
  _vehicle_228 = _this;
  _this setDir -222.08945;
  _this setPos [5884.5815, 3534.0115];
};

_vehicle_230 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [5883.7524, 3533.2778, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_230 = _this;
  _this setDir -222.2673;
  _this setPos [5883.7524, 3533.2778, 3.0517578e-005];
};

_vehicle_233 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Stan_east", [5878.5859, 3552.1577], [], 0, "CAN_COLLIDE"];
  _vehicle_233 = _this;
  _this setDir 48.320877;
  _this setPos [5878.5859, 3552.1577];
};

_vehicle_235 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo2E_EP1", [5854.3032, 3533.4583, -0.00015258789], [], 0, "CAN_COLLIDE"];
  _vehicle_235 = _this;
  _this setDir -42.770206;
  _this setPos [5854.3032, 3533.4583, -0.00015258789];
};

_vehicle_237 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7914.1196, 4458.3301, -0.13501881], [], 0, "CAN_COLLIDE"];
  _vehicle_237 = _this;
  _this setDir 10.874141;
  _this setPos [7914.1196, 4458.3301, -0.13501881];
};

_vehicle_238 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [7975.2393, 4745.7036, -5.7220459e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_238 = _this;
  _this setDir 11.332458;
  _this setPos [7975.2393, 4745.7036, -5.7220459e-005];
};

_vehicle_241 = objNull;
if (true) then
{
  _this = createVehicle ["WoodStairsSans_DZ", [9052.2422, 2083.9226, -1.6514561], [], 0, "CAN_COLLIDE"];
  _vehicle_241 = _this;
  _this setDir 63.067951;
  _this setPos [9052.2422, 2083.9226, -1.6514561];
};

_vehicle_243 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [6198.7578, 1298.4148, -0.10902898], [], 0, "CAN_COLLIDE"];
  _vehicle_243 = _this;
  _this setDir 85.70903;
  _this setPos [6198.7578, 1298.4148, -0.10902898];
};

_vehicle_244 = objNull;
if (true) then
{
  _this = createVehicle ["Base_WarfareBBarrier10xTall", [6267.1694, 1303.0712, -0.079432704], [], 0, "CAN_COLLIDE"];
  _vehicle_244 = _this;
  _this setDir 85.708252;
  _this setPos [6267.1694, 1303.0712, -0.079432704];
};

_vehicle_246 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_A_Castle_WallS_End_ruins", [3161.1282, 5619.9424, 0.28060487], [], 0, "CAN_COLLIDE"];
  _vehicle_246 = _this;
  _this setPos [3161.1282, 5619.9424, 0.28060487];
};

_vehicle_248 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_A_Castle_WallS_End_ruins", [7073.9321, 4619.2891, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_248 = _this;
  _this setDir -12.710298;
  _this setPos [7073.9321, 4619.2891, -1.5258789e-005];
};

_vehicle_258 = objNull;
if (true) then
{
  _this = createVehicle ["LAND_ASC_Wall_Lamp_New", [5903.0405, 3527.3379, 2.8773944], [], 0, "CAN_COLLIDE"];
  _vehicle_258 = _this;
  _this setDir 7.3981242;
  _this setPos [5903.0405, 3527.3379, 2.8773944];
};

_vehicle_262 = objNull;
if (true) then
{
  _this = createVehicle ["ASC_EU_LHVSidl1", [5844.5332, 3545.6711, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_262 = _this;
  _this setDir -165.70822;
  _this setVehicleInit "setVectorUp [0,0,1]";
  _this setPos [5844.5332, 3545.6711, -4.5776367e-005];
};

processInitCommands;
runInitScript;
finishMissionInit;
