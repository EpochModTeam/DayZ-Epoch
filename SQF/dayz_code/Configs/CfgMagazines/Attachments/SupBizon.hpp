class Attachment_SupBizon : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	
	displayName = $STR_ATTACHMENT_NAME_SILENCER_BIZON;
	descriptionShort = $STR_ATTACHMENT_DESC_SILENCER_BIZON;
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};