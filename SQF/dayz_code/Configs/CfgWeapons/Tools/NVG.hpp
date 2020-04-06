class NVGoggles;
class NVGoggles_DZE: NVGoggles
{
	displayName = "NVG (Full Screen)";
	modelOptics = "";
	descriptionShort = "Full Screen Night Vision Goggles";
};

class ItemNVGBroken_DZE : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_BROKEN_NV;
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemNVGBroken.paa";
	descriptionShort = $STR_EQUIP_BROKEN_NV_DESC;
};