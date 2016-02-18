class Makarov_DZ : Makarov
{
	magazines[] =
	{
		8Rnd_9x18_Makarov,
		8Rnd_9x18_MakarovSD
	};
	
	class Attachments
	{
		Attachment_SupMakarov = "Makarov_SD_DZ";
	};
};

class Makarov_SD_DZ : MakarovSD
{
	magazines[] =
	{
		8Rnd_9x18_MakarovSD,
		8Rnd_9x18_Makarov
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_DZ_ATT_SUP545_RMVE;
			script = "; ['Attachment_SupMakarov',_id,'Makarov_DZ'] call player_removeAttachment";
		};
	};
};