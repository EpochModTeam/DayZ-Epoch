// Weapons are organized in matching groups US,RU,CZ,EU, and Residential.
// Pistols also spawn in small groups so they are given smaller weights here.

weaponsRU[] =
{
	// Pistols
	{Loot_WEAPON,		2,		Makarov_DZ},
	{Loot_WEAPON,		1,		Makarov_SD_DZ},
	
	// Bolt action rifles and shotguns
	{Loot_WEAPON,		5,		Saiga12K},
	{Loot_WEAPON,		5,		Mosin_PU_DZ},
	
	// Sniper Rifles
	{Loot_WEAPON,		4,		SVD_des_EP1},
	{Loot_WEAPON,		4,		SVD_DZ},
	{Loot_WEAPON,		4,		VSS_vintorez_DZE},
	{Loot_WEAPON,		1,		KSVK_DZE}, // High value weapon, low spawn chance.
	{Loot_WEAPON,		1,		Anzio_20_DZ}, // High value weapon, low spawn chance.
	
	// Submachine Guns
	{Loot_WEAPON,		7,		Bizon_DZ},
	{Loot_WEAPON,		7,		Bizon_SD_DZ},
	
	// Assault Rifles
	{Loot_WEAPON,		6,		AK74_Kobra_DZ},
	{Loot_WEAPON,		6,		AKS74U_DZ},
	{Loot_WEAPON,		1,		AKS_GOLD},
	{Loot_WEAPON,		6,		AKM_DZ},
	{Loot_WEAPON,		6,		AK107_DZ}, // Attachment support added to AK-107 in 1.0.7
	{Loot_WEAPON,		6,		AK74_DZ},
	
	// Machine Guns
	{Loot_WEAPON,		3,		RPK74_DZ},
	{Loot_WEAPON,		2,		Pecheneg_DZ},
	{Loot_WEAPON,		3,		RPK_DZ},
	{Loot_WEAPON,		3,		PKM_DZ}
};

weaponsUS[] =
{
	// Pistols
	{Loot_WEAPON,		1,		M9_DZ},
	{Loot_WEAPON,		2,		M9_SD_DZ},
	
	// Bolt action rifles and shotguns
	{Loot_WEAPON,		5,		Remington870_DZ},
	{Loot_WEAPON,		5,		AA12_PMC},
	
	// Sniper Rifles
	{Loot_WEAPON,		5,		M4SPR_DZE},
	{Loot_WEAPON,		4,		M40A3_DZ},
	{Loot_WEAPON,		4,		M24_des_EP1},
	{Loot_WEAPON,		4,		M24_DZ},
	{Loot_WEAPON,		4,		M14_DZ},
	{Loot_WEAPON,		3,		DMR_DZ},
	{Loot_WEAPON,		1,		M107_DZ}, // High value weapon, low spawn chance.
	
	// Submachine Guns
	{Loot_WEAPON,		3,		PDW_DZ},
	{Loot_WEAPON,		3,		UZI_SD_EP1},
	
	// Assault Rifles
	{Loot_WEAPON,		6,		M16A2_DZ},
	{Loot_WEAPON,		6,		M16A4_ACOG_DZ},
	{Loot_WEAPON,		6,		M4A1_DZ},
	{Loot_WEAPON,		6,		M4A1_AIM_SD_camo},
	{Loot_WEAPON,		6,		M4A1_HWS_GL_camo},
	{Loot_WEAPON,		6,		M4A3_CCO_EP1},
	{Loot_WEAPON,		6,		M4A1_HWS_GL_SD_Camo},
	
	// Machine Guns
	{Loot_WEAPON,		3,		M60A4_EP1_DZE},
	{Loot_WEAPON,		5,		M249_m145_EP1_DZE},
	{Loot_WEAPON,		3,		m240_scoped_EP1_DZE},
	{Loot_WEAPON,		3,		M240_DZ},
	{Loot_WEAPON,		5,		M249_DZ}
};

weaponsEU[] =
{
	// Pistols
	{Loot_WEAPON,		2,		G17_DZ},
	{Loot_WEAPON,		1,		G17_SD_DZ},
	
	// Bolt action rifles and shotguns
	{Loot_WEAPON,		5,		LeeEnfield_DZ},
	{Loot_WEAPON,		5,		M1014_DZ},
	
	// Sniper Rifles
	{Loot_WEAPON,		1,		L115A3_DZ}, // Tan Lapua
	{Loot_WEAPON,		1,		L115A3_2_DZ}, // Green Lapua
	{Loot_WEAPON,		4,		SCAR_H_LNG_Sniper_SD},
	{Loot_WEAPON,		4,		SCAR_H_LNG_Sniper},
	{Loot_WEAPON,		4,		FNFAL_DZ},
	{Loot_WEAPON,		3,		FN_FAL_ANPVS4_DZE}, //FNFAL_ANPVS4_DZ is NV only _DZE is toggleable
	{Loot_WEAPON,		1,		BAF_AS50_scoped_DZ}, // High value weapon, low spawn chance.
	
	// Submachine Guns
	{Loot_WEAPON,		7,		MP5_DZ},
	{Loot_WEAPON,		7,		MP5_SD_DZ},
	
	// Assault Rifles
	{Loot_WEAPON,		5,		G36A_Camo_DZ},
	{Loot_WEAPON,		5,		G36C_DZ},
	{Loot_WEAPON,		5,		G36C_camo},
	{Loot_WEAPON,		5,		G36K_Camo_DZ},
	{Loot_WEAPON,		5,		G36_C_SD_camo},
	{Loot_WEAPON,		5,		m8_compact},
	{Loot_WEAPON,		5,		m8_sharpshooter},
	{Loot_WEAPON,		5,		m8_holo_sd},
	{Loot_WEAPON,		5,		m8_carbine},
	{Loot_WEAPON,		5,		L85A2_DZ},
	{Loot_WEAPON,		5,		SCAR_L_CQC_CCO_SD},
	{Loot_WEAPON,		5,		SCAR_L_CQC},
	{Loot_WEAPON,		5,		SCAR_L_CQC_Holo},
	{Loot_WEAPON,		5,		SCAR_L_CQC_EGLM_Holo},
	{Loot_WEAPON,		5,		SCAR_L_STD_EGLM_RCO},
	{Loot_WEAPON,		5,		SCAR_L_STD_HOLO},
	{Loot_WEAPON,		5,		SCAR_L_STD_Mk4CQT},
	{Loot_WEAPON,		3,		SCAR_H_CQC_CCO},
	{Loot_WEAPON,		3,		SCAR_H_CQC_CCO_SD},
	{Loot_WEAPON,		3,		SCAR_H_STD_EGLM_Spect},
	
	// Machine Guns
	{Loot_WEAPON,		6,		M8_SAW},
	{Loot_WEAPON,		4,		L110A1_DZ},
	{Loot_WEAPON,		4,		MG36_camo},
	{Loot_WEAPON,		4,		MG36},
	{Loot_WEAPON,		3,		Mk48_DZ},
	{Loot_WEAPON,		5,		BAF_L86A2_ACOG}
};

weaponsCZ[] = 
{
	// Pistols
	{Loot_WEAPON,		2,		CZ_75_P_07_DUTY},
	{Loot_WEAPON,		2,		CZ_75_D_COMPACT},
	{Loot_WEAPON,		2,		CZ_75_SP_01_PHANTOM},
	{Loot_WEAPON,		1,		CZ_75_SP_01_PHANTOM_SD},
	
	// Sniper Rifles
	{Loot_WEAPON,		3,		CZ_750_S1_ACR},
	{Loot_WEAPON,		3,		M110_NVG_EP1}, // Technically a US rifle, but the CZ group does not have a DMR type rifle.
	
	// Submachine Guns
	{Loot_WEAPON,		7,		Evo_ACR},
	{Loot_WEAPON,		7,		Evo_mrad_ACR},
	{Loot_WEAPON,		5,		evo_sd_ACR},
	
	// Assault Rifles
	{Loot_WEAPON,		6,		SA58_DZ},
	{Loot_WEAPON,		6,		Sa58V_CCO_EP1},
	{Loot_WEAPON,		6,		Sa58V_RCO_EP1},
	{Loot_WEAPON,		6,		SA58_RIS_DZ},
	{Loot_WEAPON,		6,		CZ805_A1_ACR},
	{Loot_WEAPON,		6,		CZ805_A1_GL_ACR},
	{Loot_WEAPON,		6,		CZ805_A2_ACR},
	{Loot_WEAPON,		6,		CZ805_A2_SD_ACR},
	{Loot_WEAPON,		3,		CZ805_B_GL_ACR}, // 7.62x51, uses SCAR mags.
	
	// Machine Gun
	{Loot_WEAPON,		6,		UK59_DZ}
	
	
};

pistols[] = { // Residential spawns
	{Loot_WEAPON,		7,		Makarov_DZ},
	{Loot_WEAPON,		5,		M1911_DZ},
	{Loot_WEAPON,		3,		Revolver_DZ},
	{Loot_WEAPON,		1,		revolver_gold_EP1}
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
