class Attachment_Sup9 : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityweapons\attachments\suppressor9\suppressor9.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\suppressor9\data\m_suppressor9_ca.paa";
	
	displayName = $STR_DZ_ATT_SUP9_NAME;
	descriptionShort = $STR_DZ_ATT_SUP9_DESC;
	
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