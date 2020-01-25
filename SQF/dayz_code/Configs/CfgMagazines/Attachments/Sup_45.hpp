class Attachment_Sup_45 : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	model = "\z\addons\dayz_communityweapons\attachments\suppressor9\suppressor9.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\suppressor9\data\m_suppressor9_ca.paa";
	
	displayName = $STR_DZE_ATTACHMENT_45SUP_NAME;
	descriptionShort = $STR_DZE_ATTACHMENT_45SUP_DESC;
	
	class ItemActions
	{
		class AttachToSecondary
		{
			text = $STR_DZ_ATT_ACT_TO_SECONDARY;
			script = "; [_id,0] call player_attachAttachment";
		};
	};
};