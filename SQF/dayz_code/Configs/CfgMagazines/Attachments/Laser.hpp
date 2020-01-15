class Attachment_Laser : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	model = "\z\addons\dayz_communityweapons\attachments\flashlight_rifle\flashlight_rifle.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_laser.paa";		
	displayName = $STR_DZE_ATTACHMENT_LASER_NAME;
	descriptionShort = $STR_DZE_ATTACHMENT_LASER_DESC;
	class ItemActions
	{		
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};