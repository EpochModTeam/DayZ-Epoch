//{Loot_GROUP,		2,		pistols},
//{Loot_GROUP,		2,		shotgunsingleshot},
//{Loot_GROUP,		2,		farmweapons},
//{Loot_GROUP,		2,		sniperrifles},
//{Loot_GROUP,		2,		submachinegun},
//{Loot_GROUP,		2,		assaultrifles},
//{Loot_GROUP,		2,		militaryshotguns},
pistols[] = {
	{Loot_WEAPON,		2,		Makarov_DZ}, //Makarov
	{Loot_WEAPON,		2,		M1911_DZ}, //Colt1911
	{Loot_WEAPON,		1.5,	Revolver_DZ}, //revolver_EP1
	{Loot_WEAPON,		1,		G17_DZ}, //glock17_EP1
	{Loot_WEAPON,		1,		Makarov_SD_DZ}, //MakarovSD
	{Loot_WEAPON,		0.7,	M9_DZ}, //M9
	{Loot_WEAPON,		0.5,	M9_SD_DZ}, //M9SD
	{Loot_WEAPON,		0.1,	revolver_gold_EP1}
};
shotgunsingleshot[] = {
	{Loot_WEAPON,		2,		Winchester1866_DZ}, //Winchester1866
	{Loot_WEAPON,		1.7,	LeeEnfield_DZ}, //LeeEnfield
	{Loot_WEAPON,		1.7,	MR43_DZ}, //MR43
	{Loot_WEAPON,		1,		Saiga12K},
	{Loot_WEAPON,		1,		Remington870_DZ}, //Remington870_lamp
	{Loot_WEAPON,		1,		Crossbow_DZ},
	{Loot_WEAPON,		1,		RedRyder},
	{Loot_WEAPON,		1,		M1014_DZ} //M1014
};
Chainsaws[] = {
	{Loot_WEAPON,		1,		ChainSaw},
	{Loot_WEAPON,		1,		ChainSawB},
	{Loot_WEAPON,		1,		ChainSawG},
	{Loot_WEAPON,		1,		ChainSawP},
	{Loot_WEAPON,		1,		ChainSawR}
};
farmweapons[] = {
	{Loot_GROUP,		5,		shotgunsingleshot},
	{Loot_WEAPON,		2,		CZ550_DZ}, //huntingrifle
	{Loot_GROUP,		0.3,	Chainsaws},
	{Loot_WEAPON,		2,		RedRyder},
	{Loot_WEAPON,		3,		Mosin_DZ}
};
sniperrifles[] = {
	{Loot_WEAPON,		1,		AK_107_PSO},
	{Loot_WEAPON,		0.9,	M4SPR},
	{Loot_WEAPON,		0.9,	M40A3_DZ}, //M40A3
	{Loot_WEAPON,		0.7,	SVD_Gh_DZ}, //SVD_CAMO
	{Loot_WEAPON,		0.7,	SVD_des_EP1},
	{Loot_WEAPON,		0.7,	SVD_DZ}, //SVD
	{Loot_WEAPON,		1,		CZ550_DZ}, //huntingrifle
	{Loot_WEAPON,		0.8,	M24_des_EP1},
	{Loot_WEAPON,		0.8,	M24_DZ}, //M24
	{Loot_WEAPON,		0.7,	BAF_LRR_scoped},
	{Loot_WEAPON,		0.5,	M107_DZ},
	{Loot_WEAPON,		0.5,	KSVK_DZE},
	{Loot_WEAPON,		0.5,	VSS_vintorez},
	{Loot_WEAPON,		0.6,	SCAR_H_LNG_Sniper_SD},
	{Loot_WEAPON,		1,		M14_DZ}, //M14_EP1
	{Loot_WEAPON,		0.7,		DMR_DZ}, //DMR
	{Loot_WEAPON,		0.8,	SCAR_H_LNG_Sniper}, //Mk17 Sniper
	{Loot_WEAPON,		0.6,	M110_NVG_EP1} //M110 NVG
};
submachinegun[] = {
	{Loot_WEAPON,		2,		PDW_DZ}, //UZI_EP1
	{Loot_WEAPON,		1.5,	Bizon_DZ}, //bizon
	{Loot_WEAPON,		1.5,	Sa61_EP1},
	{Loot_WEAPON,		1,		MP5_DZ}, //MP5A5
	{Loot_WEAPON,		1,		Bizon_SD_DZ}, //bizon_silenced
	{Loot_WEAPON,		0.8,	UZI_SD_EP1},
	{Loot_WEAPON,		0.7,	MP5_SD_DZ} //MP5SD
};
assaultrifles[] = {
	{Loot_WEAPON,		0.5,		AK74_Kobra_DZ}, //AKS_74_kobra (stock is slightly different, otherwise identical)
	{Loot_WEAPON,		0.5,		AKS74U_DZ}, //AKS_74_U
	{Loot_WEAPON,		0.1,		AKS_GOLD},
	{Loot_WEAPON,		0.5,		AKM_DZ}, //AK_47_M
	{Loot_WEAPON,		0.5,		AK74_DZ}, //AK_74
	{Loot_WEAPON,		0.3,		FNFAL_DZ}, //FN_FAL
	{Loot_WEAPON,		0.1,		FN_FAL_ANPVS4_DZE}, //FNFAL_ANPVS4_DZ is NV only _DZE is toggleable
	{Loot_WEAPON,		0.5,		G36A_Camo_DZ}, //G36A_camo
	{Loot_WEAPON,		0.5,		G36C_DZ}, //G36C
	{Loot_WEAPON,		0.4,		G36C_camo},
	{Loot_WEAPON,		0.5,		G36K_Camo_DZ}, //G36K_camo
	{Loot_WEAPON,		0.2,		G36_C_SD_camo},
	{Loot_WEAPON,		0.5,		M16A2_DZ}, //M16A2
	//{Loot_WEAPON,		0.2,		M16A2_GL_DZ}, //M16A2GL //added to attachments system
	{Loot_WEAPON,		0.1,		M16A4_ACOG_DZ}, //M16A4_ACG (has slightly different scope)
	{Loot_WEAPON,		0.5,		M4A1_DZ}, //M4A1
	{Loot_WEAPON,		0.4,		M4A1_CCO_DZ}, //M4A1_Aim
	{Loot_WEAPON,		0.1,		M4A1_AIM_SD_camo},
	{Loot_WEAPON,		0.1,		M4A1_HWS_GL_camo},
	{Loot_WEAPON,		0.3,		M4A3_CCO_EP1},
	{Loot_WEAPON,		0.4,		SA58_DZ}, //Sa58P_EP1 (identical), Sa58V_EP1 (different stock)
	{Loot_WEAPON,		0.3,		SA58_CCO_DZ}, //No camo, no grip handle
	{Loot_WEAPON,		0.2,		Sa58V_CCO_EP1}, //Camo with grip handle
	{Loot_WEAPON,		0.3,		SA58_ACOG_DZ}, //No camo, no grip handle
	{Loot_WEAPON,		0.2,		Sa58V_RCO_EP1}, // Camo with grip handle
	{Loot_WEAPON,		0.3,		SA58_RIS_DZ}, //SA58_DZ with different rail
	{Loot_WEAPON,		0.4,		m8_compact},
	{Loot_WEAPON,		0.3,		m8_sharpshooter},
	{Loot_WEAPON,		0.3,		m8_holo_sd},
	{Loot_WEAPON,		0.5,		m8_carbine},
	{Loot_WEAPON,		0.2,		BAF_L85A2_RIS_SUSAT},
	{Loot_WEAPON,		0.3,		L85_Holo_DZ}, //BAF_L85A2_RIS_Holo
	{Loot_WEAPON,		0.1,		M4A1_HWS_GL_SD_Camo},
	{Loot_WEAPON,		0.2,		BAF_L85A2_RIS_ACOG}, //L85A2 ACOG
	//Mk16
	{Loot_WEAPON,		0.2,		SCAR_L_CQC_CCO_SD}, //Mk16 Aimpoint SD 
	{Loot_WEAPON,		0.3,		SCAR_L_CQC}, //Mk16 CQC 
	{Loot_WEAPON,		0.3,		SCAR_L_CQC_Holo}, //Mk16 CQC EOTech 
	{Loot_WEAPON,		0.2,		SCAR_L_CQC_EGLM_Holo}, //Mk16 EGLM EOTech,(40mm)
	{Loot_WEAPON,		0.2,		SCAR_L_STD_EGLM_RCO}, //Mk16 EGLM RCO,(40mm)
	{Loot_WEAPON,		0.3,		SCAR_L_STD_HOLO}, //Mk16 EOTech 
	{Loot_WEAPON,		0.3,		SCAR_L_STD_Mk4CQT}, //Mk16 Mk4CQ/T 
	//Mk17
	{Loot_WEAPON,		0.1,		SCAR_H_CQC_CCO}, //Mk17 Aimpoint
	{Loot_WEAPON,		0.1,		SCAR_H_CQC_CCO_SD}, //Mk17 Aimpoint SD 
	{Loot_WEAPON,		0.1,		SCAR_H_STD_EGLM_Spect} //Mk17 EGLM ACOG,(40mm)	
};
machineguns[] = {
	{Loot_WEAPON,		1.1,	RPK74_DZ}, //RPK_74
	{Loot_WEAPON,		1.1,	M8_SAW},
	{Loot_WEAPON,		1,		Pecheneg_DZ},
	{Loot_WEAPON,		1,		PKM_DZ}, //PK_DZ
	{Loot_WEAPON,		0.9,	L110A1_DZ}, //BAF_L110A1_Aim_DZE scope is slightly different from L110A1_CCO_DZ, otherwise identical
	{Loot_WEAPON,		0.9,		MG36_camo},
	{Loot_WEAPON,		1,		M60A4_EP1_DZE},
	{Loot_WEAPON,		1,		MG36},
	{Loot_WEAPON,		1,		M249_m145_EP1_DZE},
	{Loot_WEAPON,		1,		m240_scoped_EP1_DZE},
	{Loot_WEAPON,		0.8,	M240_DZ},
	{Loot_WEAPON,		0.9,	M249_DZ},
	{Loot_WEAPON,		0.5,	Mk48_DZ}, //Mk_48_DZ (removed, was a duplicate of Mk48_CCO_DZ)
	{Loot_WEAPON,		0.9,	BAF_L86A2_ACOG} //L86A2 ACOG
};
militaryshotguns[] = {
	{Loot_WEAPON,		2,		Saiga12K},
	{Loot_WEAPON,		2,		Remington870_FL_DZ}, //Remington870_lamp
	{Loot_WEAPON,		2,		M1014_DZ}, //M1014
	{Loot_WEAPON,		1,		AA12_PMC} //AA12 Shotgun
};
