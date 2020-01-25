class Attachment_Sup762 : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	model = "\z\addons\dayz_communityweapons\attachments\suppressor556\suppressor556.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\suppressor556\data\m_suppressor556_ca.paa";
	displayName = $STR_DZE_ATTACHMENT_762SUP_NAME;
	descriptionShort = $STR_DZE_ATTACHMENT_762SUP_DESC;
	class ItemActions
	{		
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};