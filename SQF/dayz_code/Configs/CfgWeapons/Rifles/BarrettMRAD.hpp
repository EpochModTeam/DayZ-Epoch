class Barrett_MRAD_Iron_DZ: m107
{
	scope = 2;
	type = 1;
	canlock	= 0;
	autoFire = 0;
	displayname = $STR_DZ_WPN_BARETT_MRAD_IRON_NAME;
	descriptionShort = $STR_DZ_WPN_BARETT_MRAD_DESC;
	model = "\z\addons\dayz_epoch_w\mrad\h4_mrad.p3d";
	picture = "\z\addons\dayz_epoch_w\mrad\data\W_mrad_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\M107b.rtm"};
	magazines[] = {10Rnd_86x70_MRAD};
	modelOptics = "-";
	optics = false;
	
	class OpticsModes
	{
		class Ironsights
		{
			opticsID = 1;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[] = {};
			cameraDir = "";
		};
	};
	class Attachments
	{
		Attachment_CCO = "Barrett_MRAD_CCO_DZ";
	};
};
class Barrett_MRAD_CCO_DZ: Barrett_MRAD_Iron_DZ
{
	displayname = $STR_DZ_WPN_BARETT_MRAD_CCO_NAME;
	model = "\z\addons\dayz_epoch_w\mrad\h4_mrad_aim.p3d";
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Barrett_MRAD_Iron_DZ'] call player_removeAttachment";
		};
	};
};	

class Barrett_MRAD_Sniper_DZ: m107
{	
	scope = 2;
	type = 1;
	canlock	= 0;
	autoFire = 0;
	magazines[] = {10Rnd_86x70_MRAD};
	displayname = $STR_DZ_WPN_BARETT_MRAD_SNIPER_NAME;
	descriptionShort = $STR_DZ_WPN_BARETT_MRAD_DESC;
	model = "\z\addons\dayz_epoch_w\mrad\h4_mrad.p3d";
	picture = "\z\addons\dayz_epoch_w\mrad\data\W_mrad_CA.paa";
};