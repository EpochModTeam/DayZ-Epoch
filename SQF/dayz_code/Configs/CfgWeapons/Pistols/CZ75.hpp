class CZ_75_P_07_DUTY;
class CZ75P_DZ: CZ_75_P_07_DUTY {
	displayName = $STR_DZ_WPN_CZ75P_NAME;
	descriptionShort = $STR_DZ_WPN_CZ75_DESC;
	magazines[] = {"18Rnd_9x19_Phantom"};
};

class CZ_75_D_COMPACT;
class CZ75D_DZ: CZ_75_D_COMPACT {
	displayName = $STR_DZ_WPN_CZ75D_NAME;
	descriptionShort = $STR_DZ_WPN_CZ75_DESC;
	magazines[] = {"18Rnd_9x19_Phantom"};
};

class CZ_75_SP_01_PHANTOM;
class CZ75SP_DZ: CZ_75_SP_01_PHANTOM {
	displayName = $STR_DZ_WPN_CZ75SP_NAME;
	descriptionShort = $STR_DZ_WPN_CZ75_DESC;
	magazines[] = {"18Rnd_9x19_Phantom"};
	
	class Attachments
	{
		Attachment_Sup9 = "CZ75SP_SD_DZ";
	};	
};

class CZ_75_SP_01_PHANTOM_SD;
class CZ75SP_SD_DZ: CZ_75_SP_01_PHANTOM_SD {
	displayName = $STR_DZ_WPN_CZ75SP_SD_NAME;
	descriptionShort = $STR_DZ_WPN_CZ75_DESC;
	magazines[] = {"18Rnd_9x19_PhantomSD"};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'CZ75SP_DZ'] call player_removeAttachment";
		};
	};	
};