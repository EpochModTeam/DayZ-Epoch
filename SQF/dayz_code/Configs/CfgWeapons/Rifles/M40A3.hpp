class M40A3_Gh_DZ : M40A3
{
	picture = "\z\addons\dayz_communityweapons\m40a3\data\w_m40a3_ghillie_ca.paa";
	displayName = $STR_DZ_WPN_M40A3_GH_NAME;
	
	magazines[] = {5Rnd_762x51_M24};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'M40A3_DZ'] call player_removeAttachment";
		};
	};
};

class M40A3_DZ : M40A3_Gh_DZ
{
	model = "z\addons\dayz_communityweapons\m40a3\m40a3.p3d";
	picture = "\z\addons\dayz_communityweapons\m40a3\data\w_m40a3_ca.paa";
	displayName = $STR_DZ_WPN_M40A3_NAME;
	
	memoryPointCamera = "opticView";
	
	class Attachments
	{
		Attachment_Ghillie = "M40A3_Gh_DZ";
	};
	
	class ItemActions {};
};