class DMR_DZ : DMR // Works with NVG
{
	displayName = $STR_DZ_WPN_DMR_NAME;
	
	//A2OA DMR does not allow NVG after 2018-04-05 CorePatch
	visionMode[] = {};
	
	class Attachments
	{
		Attachment_Ghillie = "DMR_Gh_DZ";
	};
};

class DMR_SKN : DMR_DZ {};

class DMR_Gh_DZ : DMR_DZ
{
	model = "z\addons\dayz_communityweapons\dmr\dmr_ghillie.p3d";
	picture = "\z\addons\dayz_communityweapons\dmr\data\w_dmr_ghillie_ca.paa";
	displayName = $STR_DZ_WPN_DMR_GH_NAME;
	
	memoryPointCamera = "opticView";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'DMR_DZ'] call player_removeAttachment";
		};
	};
};

//DMR without NVG support

class DMR_DZE : DMR_DZ
{		
	visionMode[] = {"Normal"};
	
	class Attachments
	{
		Attachment_Ghillie = "DMR_Gh_DZE";
	};
};

class DMR_Gh_DZE : DMR_Gh_DZ
{
	visionMode[] = {"Normal"};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'DMR_DZE'] call player_removeAttachment";
		};
	};
};