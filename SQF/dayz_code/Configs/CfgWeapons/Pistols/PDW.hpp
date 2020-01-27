class PDW_DZ : UZI_EP1
{
	class Attachments
	{
		Attachment_Sup9 = "PDW_SD_DZ";
	};
};

class PDW_SD_DZ : UZI_SD_EP1
{
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'PDW_DZ'] call player_removeAttachment";
		};
	};
};