class NVGoggles: Binocular 
{
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
};

class NVGoggles_DZE: NVGoggles
{
	displayName = "NVG (Full Screen)";
	modelOptics = "";
	descriptionShort = "Full Screen Night Vision Goggles";
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
};

class ItemNVGBroken_DZE : ItemCore 
{
	scope = 2;
	displayName = $STR_EQUIP_BROKEN_NV;
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemNightVisionBroken.paa";
	descriptionShort = $STR_EQUIP_BROKEN_NV_DESC;
};