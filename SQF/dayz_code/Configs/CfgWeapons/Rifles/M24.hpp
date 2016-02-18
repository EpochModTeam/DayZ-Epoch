class M24_DZ : M24
{
	model = "ca\weapons\m24_green.p3d";
	displayName = $STR_DZ_WPN_M24_NAME;
	
	magazines[] = {5Rnd_762x51_M24};
	
	class Attachments
	{
		Attachment_Ghillie = "M24_Gh_DZ";
	};
};

class M24_Gh_DZ : M24_DZ
{
	model = "z\addons\dayz_communityweapons\m24\m24_ghillie.p3d";
	picture = "\ca\weapons\data\equip\w_m24_camo_ca.paa";
	
	displayName = $STR_DZ_WPN_M24_GH_NAME;
	
	memoryPointCamera = "opticView";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'M24_DZ'] call player_removeAttachment";
		};
	};
};