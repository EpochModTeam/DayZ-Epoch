//This spawns in two wells in Elektro as well as a green house on lower sniper hill at the dirt road to Rog.
//Created by Nox 2017-02-01. Contact: DayZ Europa, Dayz mod discord
//Copyright by the DayZ Mod dev team.

_vehicle_28 = objNull;
if (true) then
{
  _this = "Land_houseV_2T2" createVehicle [10623.161, 2599.4487, 7.6293945e-005];
  _vehicle_28 = _this;
  _this setDir 88.551949;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [10623.161, 2599.4487, 7.6293945e-005];
};

_vehicle_32 = objNull;
if (true) then
{
  _this = "MAP_ChickenCoop" createVehicle [10611.418, 2582.3755, -8.2015991e-005];
  _vehicle_32 = _this;
  _this setDir 181.03934;
  _this setPos [10611.418, 2582.3755, -8.2015991e-005];
};

_vehicle_33 = objNull;
if (true) then
{
  _this = "MAP_Misc_Greenhouse" createVehicle [10623.472, 2585.0713, -3.8146973e-006];
  _vehicle_33 = _this;
  _this setPos [10623.472, 2585.0713, -3.8146973e-006];
};

_vehicle_34 = objNull;
if (true) then
{
  _this = "MAP_Misc_Hutch" createVehicle [10628.571, 2601.7544, -1.9073486e-005];
  _vehicle_34 = _this;
  _this setDir -91.914413;
  _this setPos [10628.571, 2601.7544, -1.9073486e-005];
};

_vehicle_35 = objNull;
if (true) then
{
  _this = "MAP_Misc_PostBox" createVehicle [10623.554, 2614.3904, 3.8146973e-005];
  _vehicle_35 = _this;
  _this setDir 114.68156;
  _this setPos [10623.554, 2614.3904, 3.8146973e-005];
};

_vehicle_40 = objNull;
if (true) then
{
  _this = "MAP_pumpa" createVehicle [10613.875, 2613.0627];
  _vehicle_40 = _this;
  _this setPos [10613.875, 2613.0627];
};

_vehicle_42 = objNull;
if (true) then
{
  _this = "MAP_pumpa" createVehicle [10096.161, 1894.1038, 3.0517578e-005];
  _vehicle_42 = _this;
  _this setPos [10096.161, 1894.1038, 3.0517578e-005];
};

_vehicle_62 = objNull;
if (true) then
{
  _this = "MAP_pumpkin2" createVehicle [10625.773, 2585.8005, -0.0001411438];
  _vehicle_62 = _this;
  _this setPos [10625.773, 2585.8005, -0.0001411438];
};

_vehicle_63 = objNull;
if (true) then
{
  _this = "MAP_pumpkin" createVehicle [10626.128, 2584.4221, 4.3869019e-005];
  _vehicle_63 = _this;
  _this setPos [10626.128, 2584.4221, 4.3869019e-005];
};

_vehicle_64 = objNull;
if (true) then
{
  _this = "MAP_p_urtica" createVehicle [10621.97, 2584.0815, 0.00018692017];
  _vehicle_64 = _this;
  _this setPos [10621.97, 2584.0815, 0.00018692017];
};

_vehicle_71 = objNull;
if (true) then
{
  _this = "MAP_b_corylus" createVehicle [10621.221, 2578.6157, 1.4305115e-005];
  _vehicle_71 = _this;
  _this setPos [10621.221, 2578.6157, 1.4305115e-005];
};

_vehicle_72 = objNull;
if (true) then
{
  _this = "MAP_b_corylus2s" createVehicle [10639.577, 2604.3735, 2.6226044e-005];
  _vehicle_72 = _this;
  _this setPos [10639.577, 2604.3735, 2.6226044e-005];
};

_vehicle_74 = objNull;
if (true) then
{
  _this = "MAP_b_craet1" createVehicle [10611.995, 2619.5449, 6.3896179e-005];
  _vehicle_74 = _this;
  _this setPos [10611.995, 2619.5449, 6.3896179e-005];
};

_vehicle_75 = objNull;
if (true) then
{
  _this = "MAP_b_craet2" createVehicle [10638.542, 2602.8594, 6.6757202e-006];
  _vehicle_75 = _this;
  _this setPos [10638.542, 2602.8594, 6.6757202e-006];
};

_vehicle_77 = objNull;
if (true) then
{
  _this = "MAP_b_prunus" createVehicle [10609.786, 2617.9163, 4.3869019e-005];
  _vehicle_77 = _this;
  _this setPos [10609.786, 2617.9163, 4.3869019e-005];
};

_vehicle_108 = objNull;
if (true) then
{
  _this = "MAP_t_malus1s" createVehicle [10615.173, 2583.8521, 0.00010728836];
  _vehicle_108 = _this;
  _this setPos [10615.173, 2583.8521, 0.00010728836];
};

_vehicle_147 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5" createVehicle [10627.102, 2612.0288, 7.2479248e-005];
  _vehicle_147 = _this;
  _this setDir -152.31969;
  _this setVehicleLock "UNLOCKED";
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10627.102, 2612.0288, 7.2479248e-005];
};

_vehicle_148 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_D" createVehicle [10616.794, 2617.1038, 0.15874402];
  _vehicle_148 = _this;
  _this setDir -154.8916;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10616.794, 2617.1038, 0.15874402];
};

_vehicle_149 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_END" createVehicle [10612.261, 2616.9626, 0.13919827];
  _vehicle_149 = _this;
  _this setDir -204.37849;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10612.261, 2616.9626, 0.13919827];
};

_vehicle_157 = objNull;
if (true) then
{
  _this = "MAP_plot_rust_brank_o" createVehicle [10624.267, 2613.5317, 0.0001411438];
  _vehicle_157 = _this;
  _this setDir 23.852444;
  _this setPos [10624.267, 2613.5317, 0.0001411438];
};

_vehicle_159 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5" createVehicle [10621.274, 2614.9568, 3.8146973e-005];
  _vehicle_159 = _this;
  _this setDir -154.14862;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10621.274, 2614.9568, 3.8146973e-005];
};

_vehicle_162 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5" createVehicle [10637.691, 2605.051, -0.2840547];
  _vehicle_162 = _this;
  _this setDir -82.714317;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10637.691, 2605.051, -0.2840547];
};

_vehicle_166 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5" createVehicle [10608.722, 2612.8354, 0.17076115];
  _vehicle_166 = _this;
  _this setDir -268.71268;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10608.722, 2612.8354, 0.17076115];
};

_vehicle_174 = objNull;
if (true) then
{
  _this = "MAP_Wall_VilVar2_4" createVehicle [10610.862, 2580.1392, -0.12244219];
  _vehicle_174 = _this;
  _this setDir 4.2444682;
  _this setPos [10610.862, 2580.1392, -0.12244219];
};

_vehicle_175 = objNull;
if (true) then
{
  _this = "MAP_Wall_VilVar2_4_2" createVehicle [10614.697, 2580.0076, 0.10482681];
  _vehicle_175 = _this;
  _this setPos [10614.697, 2580.0076, 0.10482681];
};

_vehicle_176 = objNull;
if (true) then
{
  _this = "MAP_Wall_VilVar2_4_D" createVehicle [10618.674, 2580.0256, 0.20608296];
  _vehicle_176 = _this;
  _this setPos [10618.674, 2580.0256, 0.20608296];
};

_vehicle_178 = objNull;
if (true) then
{
  _this = "MAP_Wall_VilVar2_4_2" createVehicle [10622.74, 2580.0322, 2.4795532e-005];
  _vehicle_178 = _this;
  _this setPos [10622.74, 2580.0322, 2.4795532e-005];
};

_vehicle_180 = objNull;
if (true) then
{
  _this = "MAP_Wall_VilVar2_4_2" createVehicle [10626.672, 2580.002, 9.1552734e-005];
  _vehicle_180 = _this;
  _this setPos [10626.672, 2580.002, 9.1552734e-005];
};

_vehicle_182 = objNull;
if (true) then
{
  _this = "MAP_Wall_VilVar2_4_END" createVehicle [10630.627, 2580.0046, 2.4795532e-005];
  _vehicle_182 = _this;
  _this setPos [10630.627, 2580.0046, 2.4795532e-005];
};

_vehicle_184 = objNull;
if (true) then
{
  _this = "MAP_Wall_VilVar2_4_2" createVehicle [10631.949, 2580.1582, 2.2888184e-005];
  _vehicle_184 = _this;
  _this setDir -2.9387438;
  _this setPos [10631.949, 2580.1582, 2.2888184e-005];
};

_vehicle_187 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_D" createVehicle [10608.803, 2597.8301, -3.2424927e-005];
  _vehicle_187 = _this;
  _this setDir -270.33511;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10608.803, 2597.8301, -3.2424927e-005];
};

_vehicle_190 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_D" createVehicle [10608.886, 2587.813, 4.9591064e-005];
  _vehicle_190 = _this;
  _this setDir -271.10385;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10608.886, 2587.813, 4.9591064e-005];
};

_vehicle_193 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5" createVehicle [10608.805, 2592.8108, 3.4332275e-005];
  _vehicle_193 = _this;
  _this setDir -271.07285;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10608.805, 2592.8108, 3.4332275e-005];
};

_vehicle_195 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5" createVehicle [10608.962, 2582.9158, 1.5258789e-005];
  _vehicle_195 = _this;
  _this setDir -272.92496;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10608.962, 2582.9158, 1.5258789e-005];
};

_vehicle_198 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5" createVehicle [10610.957, 2616.2783, 7.6293945e-006];
  _vehicle_198 = _this;
  _this setDir -205.88942;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10610.957, 2616.2783, 7.6293945e-006];
};

_vehicle_201 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_END" createVehicle [10608.737, 2607.8206, 0.0028371373];
  _vehicle_201 = _this;
  _this setDir -272.80386;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10608.737, 2607.8206, 0.0028371373];
};

_vehicle_207 = objNull;
if (true) then
{
  _this = "MAP_t_malus1s" createVehicle [10612.197, 2605.1479, 0.00015068054];
  _vehicle_207 = _this;
  _this setPos [10612.197, 2605.1479, 0.00015068054];
};

_vehicle_209 = objNull;
if (true) then
{
  _this = "MAP_t_malus1s" createVehicle [10630.905, 2584.8232, 0.00019836426];
  _vehicle_209 = _this;
  _this setPos [10630.905, 2584.8232, 0.00019836426];
};

_vehicle_215 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5" createVehicle [10637.614, 2582.8499, 4.0054321e-005];
  _vehicle_215 = _this;
  _this setDir -92.181931;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10637.614, 2582.8499, 4.0054321e-005];
};

_vehicle_222 = objNull;
if (true) then
{
  _this = "MAP_mud_10_50" createVehicle [10633.15, 2597.8958, 0.00027275085];
  _vehicle_222 = _this;
  _this setDir -1.3655125;
  _this setPos [10633.15, 2597.8958, 0.00027275085];
};

_vehicle_223 = objNull;
if (true) then
{
  _this = "MAP_mud_6konec" createVehicle [10634.544, 2612.615, -4.196167e-005];
  _vehicle_223 = _this;
  _this setDir 187.18793;
  _this setPos [10634.544, 2612.615, -4.196167e-005];
};

_vehicle_226 = objNull;
if (true) then
{
  _this = "MAP_mud_6konec" createVehicle [10633.253, 2591.9399, 0.0001335144];
  _vehicle_226 = _this;
  _this setDir -1.7983615;
  _this setPos [10633.253, 2591.9399, 0.0001335144];
};

_vehicle_230 = objNull;
if (true) then
{
  _this = "SKODAWreck" createVehicle [10633.292, 2602.2344, -1.5258789e-005];
  _vehicle_230 = _this;
  _this setDir 1.8125278;
  _this setPos [10633.292, 2602.2344, -1.5258789e-005];
};

_vehicle_231 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_END_2" createVehicle [10631.412, 2609.5383, -0.2017917];
  _vehicle_231 = _this;
  _this setDir -147.24841;
  _this setPos [10631.412, 2609.5383, -0.2017917];
};

_vehicle_233 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_D" createVehicle [10637.333, 2600.0483, -0.21907128];
  _vehicle_233 = _this;
  _this setDir -88.343475;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10637.333, 2600.0483, -0.21907128];
};

_vehicle_236 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_END" createVehicle [10637.128, 2596.2463, -0.059208341];
  _vehicle_236 = _this;
  _this setDir -458.0715;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10637.128, 2596.2463, -0.059208341];
};

_vehicle_239 = objNull;
if (true) then
{
  _this = "MAP_Wall_VilVar2_4_2" createVehicle [10635.851, 2580.3118, -0.25673333];
  _vehicle_239 = _this;
  _this setDir -2.9387438;
  _this setPos [10635.851, 2580.3118, -0.25673333];
};

_vehicle_242 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_D" createVehicle [10637.537, 2587.8948, 0.29516324];
  _vehicle_242 = _this;
  _this setDir -88.343475;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10637.537, 2587.8948, 0.29516324];
};

_vehicle_245 = objNull;
if (true) then
{
  _this = "MAP_path_10_50" createVehicle [10622.701, 2606.3606, 0.00028800964];
  _vehicle_245 = _this;
  _this setDir 6.8206773;
  _this setPos [10622.701, 2606.3606, 0.00028800964];
};

_vehicle_247 = objNull;
if (true) then
{
  _this = "MAP_garbage_paleta" createVehicle [10633.146, 2599.7441, -4.196167e-005];
  _vehicle_247 = _this;
  _this setPos [10633.146, 2599.7441, -4.196167e-005];
};

_vehicle_249 = objNull;
if (true) then
{
  _this = "ClutterCutter_small_2_EP1" createVehicle [10624.311, 2613.4404, 1.9073486e-005];
  _vehicle_249 = _this;
  _this setPos [10624.311, 2613.4404, 1.9073486e-005];
};

_vehicle_251 = objNull;
if (true) then
{
  _this = "ClutterCutter_small_2_EP1" createVehicle [10623.67, 2611.5811, 7.6293945e-006];
  _vehicle_251 = _this;
  _this setPos [10623.67, 2611.5811, 7.6293945e-006];
};

_vehicle_253 = objNull;
if (true) then
{
  _this = "ClutterCutter_small_2_EP1" createVehicle [10623.404, 2610.2563, -7.6293945e-006];
  _vehicle_253 = _this;
  _this setPos [10623.404, 2610.2563, -7.6293945e-006];
};

_vehicle_255 = objNull;
if (true) then
{
  _this = "ClutterCutter_small_2_EP1" createVehicle [10623.17, 2608.6758, 3.8146973e-006];
  _vehicle_255 = _this;
  _this setPos [10623.17, 2608.6758, 3.8146973e-006];
};

_vehicle_258 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_END" createVehicle [10635.729, 2608.0613, 2.0980835e-005];
  _vehicle_258 = _this;
  _this setDir -167.42299;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10635.729, 2608.0613, 2.0980835e-005];
};

_vehicle_261 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_END" createVehicle [10628.599, 2610.9375, 9.727478e-005];
  _vehicle_261 = _this;
  _this setDir -162.57193;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10628.599, 2610.9375, 9.727478e-005];
};

_vehicle_264 = objNull;
if (true) then
{
  _this = "MAP_Wall_Wood2_5_END" createVehicle [10608.827, 2603.1001, 1.1444092e-005];
  _vehicle_264 = _this;
  _this setDir -272.80386;
  _this setVehicleInit "this setVectorUp surfaceNormal position this;";
  _this setPos [10608.827, 2603.1001, 1.1444092e-005];
};

_vehicle_267 = objNull;
if (true) then
{
  _this = "MAP_b_corylus2s" createVehicle [10638.902, 2592.4941, -5.7220459e-005];
  _vehicle_267 = _this;
  _this setPos [10638.902, 2592.4941, -5.7220459e-005];
};

_vehicle_270 = objNull;
if (true) then
{
  _this = "MAP_b_prunus" createVehicle [10611.734, 2578.6746, -2.2888184e-005];
  _vehicle_270 = _this;
  _this setPos [10611.734, 2578.6746, -2.2888184e-005];
};

_vehicle_272 = objNull;
if (true) then
{
  _this = "MAP_b_prunus" createVehicle [10637.703, 2579.2161, 2.0980835e-005];
  _vehicle_272 = _this;
  _this setPos [10637.703, 2579.2161, 2.0980835e-005];
};