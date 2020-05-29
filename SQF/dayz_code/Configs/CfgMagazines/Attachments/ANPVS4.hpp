class Attachment_ANPVS4 : CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	model = "\z\addons\dayz_epoch_w\optic\dze_scope_anpvs4.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_anpvs4.paa";		
	displayName = $STR_DZE_ATTACHMENT_ANPVS4_NAME;
	descriptionShort = $STR_DZE_ATTACHMENT_ANPVS4_DESC;
	
	class ItemActions
	{		
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};