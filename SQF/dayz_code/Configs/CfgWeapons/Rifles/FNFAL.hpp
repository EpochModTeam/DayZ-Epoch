class FNFAL_DZ : FN_FAL
{
	model = "z\addons\dayz_communityweapons\fnfal\fnfal.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_ca.paa";
	displayName = $STR_DZ_WPN_FNFAL_NAME;
	
	magazines[] = {20Rnd_762x51_FNFAL};
	
	modes[] = {Single};
	
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	
	class Attachments
	{
		Attachment_CCO = "FNFAL_CCO_DZ";
		Attachment_Holo = "FNFAL_Holo_DZ";
	};
};

class FNFAL_CCO_DZ : FNFAL_DZ
{
	model = "z\addons\dayz_communityweapons\fnfal\fnfal_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_cco_ca.paa";
	displayName = $STR_DZ_WPN_FNFAL_CCO_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'FNFAL_DZ'] call player_removeAttachment";
		};
	};
};

class FNFAL_Holo_DZ : FNFAL_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\fnfal\fnfal_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_holo_ca.paa";
	displayName = $STR_DZ_WPN_FNFAL_HOLO_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'FNFAL_DZ'] call player_removeAttachment";
		};
	};
};

class FNFAL_ANPVS4_DZ : FN_FAL_ANPVS4
{
	modes[] = {Single};
};

class FN_FAL_ANPVS4_DZE:FN_FAL_ANPVS4 {
	visionMode[] = {"Normal", "NVG"};
};
