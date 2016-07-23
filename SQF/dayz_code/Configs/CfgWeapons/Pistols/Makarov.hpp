class Makarov_DZ : Makarov
{
	displayName = $STR_DZ_WPN_PM_NAME;
	magazines[] =
	{
		8Rnd_9x18_Makarov,
		8Rnd_9x18_MakarovSD
	};
	
	class Attachments
	{
		Attachment_SupMakarov = "Makarov_SD_DZ"; //left to maintain old suppressor attachment
		Attachment_Sup9 = "Makarov_SD_DZ";
	};
};

class Makarov_SD_DZ : MakarovSD
{
	displayName = $STR_DZ_WPN_PM_SD_NAME;
	magazines[] =
	{
		8Rnd_9x18_MakarovSD,
		8Rnd_9x18_Makarov
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'Makarov_DZ'] call player_removeAttachment";
		};
	};
};