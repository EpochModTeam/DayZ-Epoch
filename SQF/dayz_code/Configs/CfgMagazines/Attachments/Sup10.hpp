class Attachment_Sup10 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\z\addons\dayz_communityweapons\attachments\suppressor9\suppressor9.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\suppressor9\data\m_suppressor9_ca.paa";	
	displayName = $STR_DZ_ATT_SUP10_NAME;
	descriptionShort = $STR_DZ_ATT_SUP10_DESC;
	
	class ItemActions
	{
		class AttachToSecondary
		{
			text = $STR_DZ_ATT_ACT_TO_SECONDARY;
			script = "; [_id,0] call player_attachAttachment";
		};
		
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};