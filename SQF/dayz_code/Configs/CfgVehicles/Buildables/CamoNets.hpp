class Land_CamoNet_EAST_EP1;
class DesertCamoNet_DZ: Land_CamoNet_EAST_EP1
{
	armor = 300;
	destrType = "DestructNo";
	scope = 2;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_DESERTCAMONET;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"desert_net_kit",1}};
};
class WinterCamoNet_DZ: Land_CamoNet_EAST_EP1
{
	armor = 300;
	destrType = "DestructNo";
	scope = 2;
	offset[] = {0,9,0};	
	model = "\z\addons\dayz_epoch_v\props\nets\CamoNet_EAST.p3d";
	displayName = $STR_EPOCH_WINTERCAMONET;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"winter_net_kit",1}};
};
class Land_CamoNet_EAST;
class ForestCamoNet_DZ: Land_CamoNet_EAST
{
	armor = 300;
	destrType = "DestructNo";
	scope = 2;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_FORESTCAMONET;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"forest_net_kit",1}};
};
class WinterLargeCamoNet_DZ: Land_CamoNet_EAST
{
	armor = 300;
	destrType = "DestructNo";
	scope = 2;
	offset[] = {0,9,0};
	model = "\z\addons\dayz_epoch_v\props\nets\CamoNetB_EAST.p3d";
	displayName = $STR_EPOCH_LARGEWINTERCAMONET;
	vehicleClass = "Fortifications";
	removeoutput[] = {{"winter_large_net_kit",1}};
};
class Land_CamoNetB_EAST_EP1;
class DesertLargeCamoNet_DZ: Land_CamoNetB_EAST_EP1
{
	armor = 300;
	destrType = "DestructNo";
	scope = 2;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_LARGEDESERTCAMONET;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"desert_large_net_kit",1}};
};
class Land_CamoNetB_EAST;
class ForestLargeCamoNet_DZ: Land_CamoNetB_EAST
{
	armor = 300;
	destrType = "DestructNo";
	scope = 2;
	offset[] = {0,9,0};
	displayName = $STR_EPOCH_LARGEFORESTCAMONET;
	vehicleClass = "DayZ Epoch Buildables";
	removeoutput[] = {{"forest_large_net_kit",1}};
};