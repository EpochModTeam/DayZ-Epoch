#define CROSSBOW_FLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	position = "fl_start";\
	direction = "fl_dir";\
	angle = 40;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
};



class Crossbow_Base : Rifle
{
	magazines[] =
	{
		12Rnd_Quiver_Wood,
		1Rnd_Arrow_Wood,
		1Rnd_Bolt_Explosive,
		1Rnd_Bolt_Tranquilizer
	};
	
	dexterity = 1.6;
	magazineReloadTime = 0;
	reloadMagazineSound[] = {"", 1, 1};
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Bizon.rtm"};
	distanceZoomMin = 20;
	distanceZoomMax = 20;
	fireLightDuration = 0;
	fireLightIntensity = 0;
	reloadTime = 2;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.00032,1,10};
	begin1[] = {"z\addons\community_crossbow\sound\crossbow.ogg", 0.177828, 1, 15};
	soundBegin[] = {"begin1",1};
	soundBullet[] = {"emptySound",1};
};



/*Iron sights*/

class Crossbow_DZ : Crossbow_Base
{
	scope = public;
	
	model = "z\addons\community_crossbow\models\crossbow.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_icon.paa";
	displayName = $STR_DZ_WPN_CROSSBOW_NAME;
	descriptionShort = $STR_WPN_DESC_4;
	
	class Attachments
	{
		Attachment_CCO = "Crossbow_CCO_DZ";
		Attachment_FL = "Crossbow_FL_DZ";
		Attachment_SCOPED = "Crossbow_Scope_DZ";
	};
};

class Crossbow_FL_DZ : Crossbow_DZ
{
	model = "z\addons\community_crossbow\models\crossbow_fl.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_fl.paa";
	displayName = $STR_DZ_WPN_CROSSBOW_FL_NAME;
	
	CROSSBOW_FLASHLIGHT
	
	class Attachments
	{
		Attachment_CCO = "Crossbow_CCO_FL_DZ";
		Attachment_SCOPED = "Crossbow_Scope_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'Crossbow_DZ'] call player_removeAttachment";
		};
	};
};



/*CCO*/

class Crossbow_CCO_DZ : Crossbow_DZ
{
	model = "z\addons\community_crossbow\models\crossbow_cco.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_cco.paa";
	displayName = $STR_DZ_WPN_CROSSBOW_CCO_NAME;
	
	class Attachments
	{
		Attachment_FL = "Crossbow_CCO_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Crossbow_DZ'] call player_removeAttachment";
		};
	};
};

class Crossbow_CCO_FL_DZ : Crossbow_CCO_DZ
{
	model = "z\addons\community_crossbow\models\crossbow_cco_fl.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_scoped.paa";
	displayName = $STR_DZ_WPN_CROSSBOW_CCO_FL_NAME;
	
	CROSSBOW_FLASHLIGHT
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Crossbow_FL_DZ'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'Crossbow_CCO_DZ'] call player_removeAttachment";
		};
	};
};



/*Scope*/

class Crossbow_Scope_DZ : Crossbow_DZ
{
	model = "z\addons\community_crossbow\models\crossbow_scoped.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_cco.paa";
	displayName = $STR_DZ_WPN_CROSSBOW_SCOPE_NAME;
	
	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsZoomInit = 0.071945;
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	distanceZoomMin = 110;
	distanceZoomMax = 110;
	
	class Attachments
	{
		Attachment_FL = "Crossbow_Scope_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'Crossbow_DZ'] call player_removeAttachment";
		};
	};
};

class Crossbow_Scope_FL_DZ : Crossbow_Scope_DZ
{
	model = "z\addons\community_crossbow\models\crossbow_scoped_fl.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_scoped_fl.paa";
	displayName = $STR_DZ_WPN_CROSSBOW_SCOPE_FL_NAME;
	
	CROSSBOW_FLASHLIGHT
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'Crossbow_FL_DZ'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'Crossbow_Scope_DZ'] call player_removeAttachment";
		};
	};
};

#undef CROSSBOW_FLASHLIGHT