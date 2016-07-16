class MP5_DZ : MP5A5
{
	picture = "\z\addons\dayz_communityweapons\mp5\data\w_mp5_ca.paa";
	displayName = $STR_DZ_WPN_MP5_NAME;
	
	magazines[] =
	{
		30Rnd_9x19_MP5,
		30Rnd_9x19_MP5SD
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
		30Rnd_9x19_MP5
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