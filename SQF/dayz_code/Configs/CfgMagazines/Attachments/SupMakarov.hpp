class Attachment_SupMakarov : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";	
	displayName = $STR_DZ_ATT_SUP9PM_NAME;
	descriptionShort = $STR_DZ_ATT_SUP9PM_DESC;
	
	class ItemActions
	{
		class AttachToSecondary
		{
			text = $STR_DZ_ATT_ACT_TO_SECONDARY;
			script = "; [_id,0] call player_attachAttachment";
		};
	};
};