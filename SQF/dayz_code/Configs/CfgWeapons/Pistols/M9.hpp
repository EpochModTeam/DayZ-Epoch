class M9_DZ : M9
{
	displayName = $STR_DZ_WPN_M9_NAME;

	magazines[] =
	{
		15Rnd_9x19_M9,
		15Rnd_9x19_M9SD
	};
	
	class Attachments
	{
		Attachment_Sup9 = "M9_SD_DZ";
	};
};

class M9_SD_DZ : M9SD
{
	//model = "z\addons\dayz_communityweapons\m9\m9_sd.p3d";
	displayName = $STR_DZ_WPN_M9_SD_NAME;
	
	magazines[] =
	{
		15Rnd_9x19_M9SD,
		15Rnd_9x19_M9
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'M9_DZ'] call player_removeAttachment";
		};
	};
};