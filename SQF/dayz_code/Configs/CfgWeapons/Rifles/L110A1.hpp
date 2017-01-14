class L110A1_CCO_DZ : BAF_L110A1_Aim
{
	model = "z\addons\dayz_communityweapons\l110a1\l110a1_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\l110a1\data\w_l110a1_cco_ca.paa";
	displayName = $STR_DZ_WPN_L110A1_CCO_NAME;
	irDistance = 0;
	type = WeaponSlotPrimary;
	
	magazines[] =
	{
		200Rnd_556x45_M249,
		100Rnd_556x45_M249,
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'L110A1_DZ'] call player_removeAttachment";
		};
	};
};

class L110A1_Holo_DZ : L110A1_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\l110a1\l110a1_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\l110a1\data\w_l110a1_holo_ca.paa";
	displayName = $STR_DZ_WPN_L110A1_HOLO_NAME;

	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'L110A1_DZ'] call player_removeAttachment";
		};
	};
};

class L110A1_DZ : L110A1_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\l110a1\l110a1.p3d";
	picture = "\z\addons\dayz_communityweapons\l110a1\data\w_l110a1_ca.paa";
	displayName = $STR_DZ_WPN_L110A1_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_CCO = L110A1_CCO_DZ;
		Attachment_Holo = L110A1_Holo_DZ;
	};
	
	class ItemActions {};
};

class BAF_L110A1_Aim_DZE:BAF_L110A1_Aim { //Slightly different scope from L110A1_CCO_DZ, otherwise identical
	type = WeaponSlotPrimary;
};