class Attachment_Tws : CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\z\addons\dayz_epoch_w\optic\dze_scope_tws.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_tws.paa";		
	displayName = $STR_DZE_ATTACHMENT_TWS_NAME;
	descriptionShort = $STR_DZE_ATTACHMENT_TWS_DESC;
	
	class ItemActions
	{		
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};