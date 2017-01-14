class Attachment_MFL : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityweapons\attachments\flashlight_rifle\flashlight_rifle.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\flashlight_rifle\data\m_flashlight_rifle_ca.paa";
	
	displayName = $STR_DZ_ATT_MFL_RFL_NAME;
	descriptionShort = $STR_DZ_ATT_MFL_RFL_DESC;
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};
