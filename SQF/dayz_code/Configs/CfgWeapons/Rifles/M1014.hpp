class M1014_DZ : M1014
{
	model = "z\addons\dayz_communityweapons\m1014\m1014.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_ca.paa";
	displayName = $STR_DZ_WPN_M1014_NAME;
	
	magazines[] =
	{
		8Rnd_12Gauge_Slug,
		8Rnd_12Gauge_Buck,
		2Rnd_12Gauge_Slug,
		2Rnd_12Gauge_Buck
	};
	
	class Single : Single
	{
		reloadTime = 0.27;
	};
	
	distanceZoomMin=50;
	distanceZoomMax=50;
	
	class Attachments
	{
		Attachment_CCO = "M1014_CCO_DZ";
		Attachment_Holo = "M1014_Holo_DZ";
	};
};

class M1014_CCO_DZ : M1014_DZ
{
	model = "z\addons\dayz_communityweapons\m1014\m1014_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_cco_ca.paa";
	displayName = $STR_DZ_WPN_M1014_CCO_NAME;
	
	distanceZoomMin=75;
	distanceZoomMax=75;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M1014_DZ'] call player_removeAttachment";
		};
	};
};

class M1014_Holo_DZ : M1014_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\m1014\m1014_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_holo_ca.paa";
	displayName = $STR_DZ_WPN_M1014_HOLO_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M1014_DZ'] call player_removeAttachment";
		};
	};
};