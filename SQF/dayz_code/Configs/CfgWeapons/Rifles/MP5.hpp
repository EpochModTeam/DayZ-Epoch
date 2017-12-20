class MP5_DZ : MP5A5
{
	picture = "\z\addons\dayz_communityweapons\mp5\data\w_mp5_ca.paa";
	displayName = $STR_DZ_WPN_MP5_NAME;
	
	magazines[] =
	{
		30Rnd_9x19_MP5,
		30Rnd_9x19_MP5SD,
		30Rnd_9x19_UZI,
		30Rnd_9x19_UZI_SD,
		15Rnd_9x19_M9,
		15Rnd_9x19_M9SD,
		17Rnd_9x19_glock17,
		17Rnd_9x19_glock17SD //not an A2 mag
	};
	
	class Attachments
	{
		Attachment_Sup9 = "MP5_SD_DZ";
	};
};

class MP5_SD_DZ : MP5SD
{
	model = "z\addons\dayz_communityweapons\mp5\mp5_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\mp5\data\w_mp5_sd_ca.paa";
	
	displayName = $STR_DZ_WPN_MP5_SD_NAME;
	
	magazines[] =
	{
		30Rnd_9x19_MP5SD,
		30Rnd_9x19_MP5, //Allow both SD and non-SD
		30Rnd_9x19_UZI_SD,
		30Rnd_9x19_UZI,
		15Rnd_9x19_M9SD,
		15Rnd_9x19_M9,
		17Rnd_9x19_glock17SD,
		17Rnd_9x19_glock17
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP5_DZ'] call player_removeAttachment";
		};
	};
};