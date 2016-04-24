class Attachment_PSO1 : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityweapons\attachments\pso\pso.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\pso\data\m_pso_ca.paa";
	
	displayName = $STR_DZ_ATT_PSO1_NAME;
	descriptionShort = $STR_DZ_ATT_PSO1_DESC;
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};