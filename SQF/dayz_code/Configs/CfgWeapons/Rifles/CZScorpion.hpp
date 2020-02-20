class Evo_ACR;
class Scorpion_Evo3_DZ: Evo_ACR {
	displayName = $STR_DZ_WPN_SC_EVO3_NAME;
	descriptionShort = $STR_DZ_WPN_SC_EVO3_DESC;
	magazines[] = {"30Rnd_9x19_MP5"};
};

class Evo_mrad_ACR;
class Scorpion_Evo3_CCO_DZ: Evo_mrad_ACR {
	displayName = $STR_DZ_WPN_SC_EVO3_CCO_NAME;
	descriptionShort = $STR_DZ_WPN_SC_EVO3_DESC;
	magazines[] = {"30Rnd_9x19_MP5"};
	
	class Attachments
	{
		Attachment_Sup9 = "Scorpion_Evo3_CCO_SD_DZ";
	};	
};

class evo_sd_ACR;
class Scorpion_Evo3_CCO_SD_DZ: evo_sd_ACR {
	displayName = $STR_DZ_WPN_SC_EVO3_CCO_SD_NAME;
	descriptionShort = $STR_DZ_WPN_SC_EVO3_SD_DESC;
	magazines[] = {"30Rnd_9x19_MP5SD"};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'Scorpion_Evo3_CCO_DZ'] call player_removeAttachment";
		};
	};	
};