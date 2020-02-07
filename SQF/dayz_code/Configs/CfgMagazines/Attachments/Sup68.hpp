class Attachment_Sup68 : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityweapons\attachments\suppressor556\suppressor556.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\suppressor556\data\m_suppressor556_ca.paa";
	
	displayName = $STR_DZ_ATT_SUP68_NAME;
	descriptionShort = $STR_DZ_ATT_SUP68_DESC;
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};