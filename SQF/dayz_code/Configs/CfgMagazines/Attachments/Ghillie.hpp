class Attachment_Ghillie : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\z\addons\dayz_epoch_w\magazine\dze_camoroll_woodland.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\ghillie\data\m_ghillie_ca.paa";	
	displayName = $STR_DZ_ATT_GHIL_NAME;
	descriptionShort = $STR_DZ_ATT_GHIL_DESC;
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};
class Attachment_Ghillie_Desert : Attachment_Ghillie
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_camoroll_desert.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_netting_desert.paa";
	displayName = $STR_DZE_ATTACHMENT_GHIL_DES_NAME;
};
class Attachment_Ghillie_Snow : Attachment_Ghillie
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_camoroll_snow.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_netting_snow.paa";
	displayName = $STR_DZE_ATTACHMENT_GHIL_SNOW_NAME;
};
class Attachment_Ghillie_Urban : Attachment_Ghillie
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_camoroll_urban.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_netting_urban.paa";
	displayName = $STR_DZE_ATTACHMENT_GHIL_URB_NAME;
};