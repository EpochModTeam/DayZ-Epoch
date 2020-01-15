class Attachment_NV : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	picture = "\dayz_epoch_c\icons\attachments\attachment_nv.paa";		
	displayName = $STR_DZE_ATTACHMENT_NV_NAME;
	descriptionShort = $STR_DZE_ATTACHMENT_NV_DESC;
	class ItemActions
	{		
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};