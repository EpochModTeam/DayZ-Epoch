// Weapons are organized in matching groups US,RU,CZ,EU, and Residential.
// Pistols also spawn in small groups so they are given smaller weights here.

weaponsRU[] =
{
	// Pistols
	{Loot_WEAPON,		2,		Tokarew_TT33_DZ},
	{Loot_WEAPON,		2,		Makarov_DZ},
	{Loot_WEAPON,		1,		Makarov_SD_DZ},
	{Loot_WEAPON,		2,		APS_DZ},
	{Loot_WEAPON,		1,		APS_SD_DZ},	
	{Loot_WEAPON,		2,		P99_Silver_DZ},
	{Loot_WEAPON,		1,		P99_Silver_SD_DZ},			
	
	// Bolt action rifles and shotguns
	{Loot_WEAPON,		5,		Saiga12K},
	{Loot_WEAPON,		5,		Mosin_PU_DZ},
	
	// Sniper Rifles
	{Loot_WEAPON,		4,		SVU_PSO1_DZ},
	{Loot_WEAPON,		1,		SVD_Gold_DZ},
	{Loot_WEAPON,		4,		SVD_DZ},
	{Loot_WEAPON,		4,		VSS_vintorez_DZE},
	{Loot_WEAPON,		4,		Groza9_Sniper_DZ},
	{Loot_WEAPON,		1,		Groza9_Sniper_SD_DZ},
	{Loot_WEAPON,		4,		Groza1_Sniper_DZ},
	{Loot_WEAPON,		1,		Groza1_Sniper_SD_DZ},	
	{Loot_WEAPON,		1,		KSVK_DZE}, // High value weapon, low spawn chance.
	{Loot_WEAPON,		1,		Anzio_20_DZ}, // High value weapon, low spawn chance.
	
	// Submachine Guns
	{Loot_WEAPON,		7,		Bizon_DZ},
	{Loot_WEAPON,		7,		Bizon_SD_DZ},
	
	// Assault Rifles
	{Loot_WEAPON,		6,		AKS74U_DZ},
	{Loot_WEAPON,		1,		AKS_Gold_DZ},
	{Loot_WEAPON,		1,		AKS_Silver_DZ},
	{Loot_WEAPON,		6,		AKM_DZ},
	{Loot_WEAPON,		6,		AK107_DZ}, // Attachment support added to AK-107 in 1.0.7
	{Loot_WEAPON,		6,		AK74_DZ},
	{Loot_WEAPON,		6,		AN94_DZ},
	{Loot_WEAPON,		6,		RK95_DZ},
	{Loot_WEAPON,		6,		Groza9_DZ},
	{Loot_WEAPON,		6,		Groza1_DZ},
	{Loot_WEAPON,		6,		VAL_DZ},
	
	// Machine Guns
	{Loot_WEAPON,		3,		RPK74_DZ},
	{Loot_WEAPON,		2,		Pecheneg_DZ},
	{Loot_WEAPON,		3,		RPK_DZ},
	{Loot_WEAPON,		3,		PKM_DZ}
};

weaponsUS[] =
{
	// Pistols
	{Loot_WEAPON,		1,		MK22_DZ},
	{Loot_WEAPON,		1,		MK22_SD_DZ},
	{Loot_WEAPON,		1,		MK22_2_DZ},
	{Loot_WEAPON,		1,		MK22_2_SD_DZ},	
	{Loot_WEAPON,		2,		M9_DZ},
	{Loot_WEAPON,		1,		M9_SD_DZ},
	{Loot_WEAPON,		2,		M9_Camo_DZ},
	{Loot_WEAPON,		1,		M9_Camo_SD_DZ},	
	{Loot_WEAPON,		2,		P99_Green_DZ},
	{Loot_WEAPON,		1,		P99_Green_SD_DZ},	
	{Loot_WEAPON,		2,		Kimber_M1911_DZ},
	{Loot_WEAPON,		1,		Kimber_M1911_SD_DZ},	
	
	// Bolt action rifles and shotguns
	{Loot_WEAPON,		5,		Remington870_DZ},
	{Loot_WEAPON,		5,		AA12_PMC},
	
	// Sniper Rifles
	{Loot_WEAPON,		5,		M4SPR_DZE},
	{Loot_WEAPON,		4,		M40A3_DZ},
	{Loot_WEAPON,		4,		M24_des_EP1},
	{Loot_WEAPON,		4,		M24_DZ},	
	{Loot_WEAPON,		3,		DMR_DZ},
	{Loot_WEAPON,		3,		MK14_Sniper_DZ},
	{Loot_WEAPON,		3,		M21A5_DZ},
	{Loot_WEAPON,		1,		M107_DZ}, // High value weapon, low spawn chance.
	{Loot_WEAPON,		1,		MSR_DZ}, // High value weapon, low spawn chance.	
	
	// Submachine Guns
	{Loot_WEAPON,		3,		PDW_DZ},
	{Loot_WEAPON,		3,		PDW_SD_DZ},
	{Loot_WEAPON,		3,		Kriss_DZ},
	{Loot_WEAPON,		3,		Kriss_SD_DZ},
	{Loot_WEAPON,		3,		Mac10_DZ},
	
	// Assault Rifles
	{Loot_WEAPON,		6,		M14_DZ},
	{Loot_WEAPON,		6,		MK14_DZ},
	{Loot_WEAPON,		6,		Masada_DZ},
	{Loot_WEAPON,		6,		Masada_BL_DZ},
	{Loot_WEAPON,		6,		CTAR21_DZ},
	{Loot_WEAPON,		6,		KAC_PDW_DZ},
	{Loot_WEAPON,		6,		M16A2_DZ},
	{Loot_WEAPON,		6,		M16A4_ACOG_DZ},
	{Loot_WEAPON,		6,		M4A1_DZ},
	{Loot_WEAPON,		6,		M4A1_Camo_CCO_DZ},
	{Loot_WEAPON,		6,		M4A1_Camo_Holo_GL_DZ},
	{Loot_WEAPON,		6,		M4A3_DES_CCO_DZ},
	{Loot_WEAPON,		6,		PDR_DZ},
	{Loot_WEAPON,		6,		ACR_WDL_DZ},
	{Loot_WEAPON,		6,		ACR_BL_DZ},
	
	// Machine Guns
	{Loot_WEAPON,		3,		M60A4_EP1_DZE},
	{Loot_WEAPON,		3,		Mk43_DZ},
	{Loot_WEAPON,		3,		MK43_M145_DZ},
	{Loot_WEAPON,		5,		M249_m145_EP1_DZE},
	{Loot_WEAPON,		3,		m240_scoped_EP1_DZE},
	{Loot_WEAPON,		3,		M240_DZ},
	{Loot_WEAPON,		5,		M249_DZ},
	{Loot_WEAPON,		5,		M249_EP1_DZ}	
};

weaponsEU[] =
{
	// Pistols
	{Loot_WEAPON,		2,		M93R_DZ},
	{Loot_WEAPON,		2,		G18_DZ},
	{Loot_WEAPON,		2,		P226_DZ},
	{Loot_WEAPON,		2,		P226_Silver_DZ},
	{Loot_WEAPON,		2,		PPK_DZ},
	{Loot_WEAPON,		2,		P38_DZ},
	{Loot_WEAPON,		2,		G17_DZ},
	{Loot_WEAPON,		1,		G17_SD_DZ},
	{Loot_WEAPON,		2,		P99_Black_DZ},
	{Loot_WEAPON,		1,		P99_Black_SD_DZ},
	{Loot_WEAPON,		2,		USP_DZ},
	{Loot_WEAPON,		1,		USP_SD_DZ},		
	
	// Bolt action rifles and shotguns
	{Loot_WEAPON,		5,		LeeEnfield_DZ},
	{Loot_WEAPON,		5,		M1014_DZ},
	
	// Sniper Rifles
	{Loot_WEAPON,		1,		L115A3_DZ}, // Tan Lapua
	{Loot_WEAPON,		1,		L115A3_2_DZ}, // Green Lapua
	{Loot_WEAPON,		4,		MK17_Sniper_SD_DZ},
	{Loot_WEAPON,		4,		MK17_Sniper_DZ},	
	{Loot_WEAPON,		2,		HK417_Sniper_SD_DZ},
	{Loot_WEAPON,		2,		HK417_Sniper_DZ},
	{Loot_WEAPON,		1,		RSASS_DZ},		
	{Loot_WEAPON,		4,		FNFAL_DZ},
	{Loot_WEAPON,		3,		FN_FAL_ANPVS4_DZE}, //FNFAL_ANPVS4_DZ is NV only _DZE is toggleable with attachment support
	{Loot_WEAPON,		1,		BAF_AS50_scoped_DZ}, // High value weapon, low spawn chance.
	
	// Submachine Guns
	{Loot_WEAPON,		7,		MP5_DZ},
	{Loot_WEAPON,		7,		MP5_SD_DZ},
	{Loot_WEAPON,		7,		MP7_DZ},
	{Loot_WEAPON,		7,		MP7_SD_DZ},	
	{Loot_WEAPON,		7,		TMP_DZ},	
	{Loot_WEAPON,		7,		TMP_SD_DZ},	
	{Loot_WEAPON,		7,		UMP_DZ},
	{Loot_WEAPON,		7,		UMP_SD_DZ},
	{Loot_WEAPON,		7,		P90_DZ},
	{Loot_WEAPON,		7,		P90_SD_DZ},	
	
	// Assault Rifles
	{Loot_WEAPON,		5,		G36A_Camo_DZ},
	{Loot_WEAPON,		5,		G36C_DZ},
	{Loot_WEAPON,		5,		G36C_Camo_DZ},
	{Loot_WEAPON,		5,		G36K_Camo_DZ},
	{Loot_WEAPON,		5,		G36C_Camo_Holo_SD_DZ},
	{Loot_WEAPON,		5,		XM8_Compact_DZ},
	{Loot_WEAPON,		5,		XM8_Sharpsh_DZ},
	{Loot_WEAPON,		5,		XM8_SD_DZ},
	{Loot_WEAPON,		5,		XM8_DZ},
	{Loot_WEAPON,		5,		XM8_GL_DZ},
	{Loot_WEAPON,		5,		L85A2_DZ},
	{Loot_WEAPON,		5,		HK53A3_DZ},
	{Loot_WEAPON,		5,		Famas_DZ},
	{Loot_WEAPON,		5,		HK416_DZ},
	{Loot_WEAPON,		5,		HK416C_DZ},	
	{Loot_WEAPON,		5,		HK417_DZ},
	{Loot_WEAPON,		5,		HK417C_DZ},
	{Loot_WEAPON,		5,		MK16_DZ},	
	{Loot_WEAPON,		5,		MK16_CCO_SD_DZ},
	{Loot_WEAPON,		5,		MK16_Holo_SD_DZ},
	{Loot_WEAPON,		5,		MK16_ACOG_SD_DZ},
	{Loot_WEAPON,		3,		MK17_DZ},
	{Loot_WEAPON,		3,		MK17_CCO_SD_DZ},
	{Loot_WEAPON,		3,		MK17_Holo_SD_DZ},
	{Loot_WEAPON,		3,		MK17_ACOG_SD_DZ},
	{Loot_WEAPON,		3,		SteyrAug_A3_Green_DZ},
	{Loot_WEAPON,		3,		SteyrAug_A3_ACOG_Green_DZ},
	{Loot_WEAPON,		3,		SteyrAug_A3_Holo_Green_DZ},	
	
	// Machine Guns
	{Loot_WEAPON,		6,		XM8_SAW_DZ},
	{Loot_WEAPON,		4,		L110A1_DZ},
	{Loot_WEAPON,		4,		MG36_Camo_DZ},
	{Loot_WEAPON,		4,		MG36_DZ},
	{Loot_WEAPON,		3,		Mk48_DZ},
	{Loot_WEAPON,		3,		Mk48_DES_CCO_DZ},
	{Loot_WEAPON,		5,		L86A2_LSW_DZ}
};

weaponsCZ[] = 
{
	// Pistols
	{Loot_WEAPON,		2,		BrowningHP_DZ},	
	{Loot_WEAPON,		2,		CZ75P_DZ},
	{Loot_WEAPON,		2,		CZ75D_DZ},
	{Loot_WEAPON,		2,		CZ75SP_DZ},
	{Loot_WEAPON,		1,		CZ75SP_SD_DZ},
	
	// Sniper Rifles
	{Loot_WEAPON,		3,		CZ750_DZ},
	{Loot_WEAPON,		3,		M110_NV_DZ}, // Technically a US rifle, but the CZ group does not have a DMR type rifle.
	{Loot_WEAPON,		1,		XM2010_DZ}, // High value weapon, low spawn chance.
	
	// Submachine Guns
	{Loot_WEAPON,		7,		Scorpion_Evo3_DZ},
	{Loot_WEAPON,		7,		Scorpion_Evo3_CCO_DZ},
	{Loot_WEAPON,		5,		Scorpion_Evo3_CCO_SD_DZ},
	
	// Assault Rifles
	{Loot_WEAPON,		6,		SA58_DZ},
	{Loot_WEAPON,		6,		Sa58V_CCO_EP1},
	{Loot_WEAPON,		6,		Sa58V_RCO_EP1},
	{Loot_WEAPON,		6,		SA58_RIS_DZ},
	{Loot_WEAPON,		6,		CZ805_A1_DZ},
	{Loot_WEAPON,		6,		CZ805_A1_GL_DZ},
	{Loot_WEAPON,		6,		CZ805_A2_DZ},
	{Loot_WEAPON,		6,		CZ805_A2_SD_DZ},
	{Loot_WEAPON,		3,		CZ805_B_GL_DZ}, // 7.62x51, uses SCAR mags.
	
	// Machine Gun
	{Loot_WEAPON,		6,		UK59_DZ}
	
	
};

pistols[] = { // Residential spawns
	{Loot_WEAPON,		9,		Makarov_DZ},
	{Loot_WEAPON,		7,		M1911_DZ},
	{Loot_WEAPON,		7,		M1911_2_DZ},
	{Loot_WEAPON,		5,		Revolver_DZ},	
	{Loot_WEAPON,		1,		revolver_gold_EP1},
	{Loot_WEAPON,		2,		Colt_Anaconda_DZ},	
	{Loot_WEAPON,		1,		Colt_Anaconda_Gold_DZ},	
	{Loot_WEAPON,		2,		Colt_Bull_DZ},	
	{Loot_WEAPON,		1,		Colt_Python_DZ}
};


shotgunsingleshot[] = { // Residential Spawns
	{Loot_WEAPON,		2,		Winchester1866_DZ},
	{Loot_WEAPON,		2,		Remington870_DZ},
	{Loot_WEAPON,		2,		LeeEnfield_DZ},
	{Loot_WEAPON,		3,		MR43_DZ},
	{Loot_WEAPON,		3,		Crossbow_DZ},
	{Loot_WEAPON,		3,		RedRyder},
	{Loot_WEAPON,		1,		CZ550_DZ},
	{Loot_WEAPON,		1,		Mosin_DZ}
};

Chainsaws[] = {
	{Loot_WEAPON,		1,		ChainSaw},
	{Loot_WEAPON,		1,		ChainSawB},
	{Loot_WEAPON,		1,		ChainSawG},
	{Loot_WEAPON,		1,		ChainSawP},
	{Loot_WEAPON,		1,		ChainSawR}
};
