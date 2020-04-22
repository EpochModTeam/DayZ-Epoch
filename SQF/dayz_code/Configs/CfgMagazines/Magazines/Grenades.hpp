// M32/M203 grenades
class 1Rnd_HE_M203: CA_Magazine {	
	scope = 2;
	type = 16;
	displayName = "$STR_DN_HE_M203";
    model = "\z\addons\dayz_epoch_w\magazine\dze_m203_he.p3d";
	picture = "\z\addons\dayz_epoch_w\magazine\ui\m_m203he_ca.paa";
	ammo = "G_40mm_HE";
	initSpeed = 80;
	count = 1;
	nameSound = "grenadelauncher";
	descriptionShort = "$STR_DSS_1Rnd_HE_M203";	
};
class 6Rnd_HE_M203: 1Rnd_HE_M203 {
	count = 6;
	displayName = "$STR_EP1_DN_6Rnd_HE_M203";
	descriptionShort = "$STR_EP1_DSS_6Rnd_HE_M203";
	type = 256;
	picture = "\CA\weapons_E\Data\icons\m_6x40mmHP_CA.paa";
    model = "\z\addons\dayz_epoch_w\magazine\dze_6rnd_m32_mag.p3d";
};
class FlareWhite_M203: CA_Magazine {	
	scope = 2;
	type = 16;
	displayName = "$STR_DN_FLAREWHITE_M203";
	picture = "\Ca\weapons\Data\Equip\m_FlareWhite_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_m203_flare.p3d";
	ammo = "F_40mm_White";
	initSpeed = 80;
	count = 1;
	nameSound = "grenadelauncher";
	descriptionShort = "$STR_DSS_1Rnd_FLAREWHITE_M203";	
};
class 6Rnd_FlareWhite_M203: FlareWhite_M203
{
	count = 6;
	displayName = "$STR_EP1_DN_6Rnd_FlareWhite_M203";
	descriptionShort = "$STR_EP1_DSS_6Rnd_FlareWhite_M203";
	type = 256;
	picture = "\CA\weapons_E\Data\icons\m_6x40mmFlare_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_6rnd_m32_mag.p3d";
};
class FlareGreen_M203: FlareWhite_M203 {
	displayName = "$STR_DN_FLAREGREEN_M203";
	ammo = "F_40mm_Green";
	picture = "\Ca\weapons\Data\Equip\m_FlareGreen_CA.paa";
	descriptionShort = "$STR_DSS_1Rnd_FLAREGREEN_M203";		
};
class 6Rnd_FlareGreen_M203: FlareGreen_M203
{
	count = 6;
	displayName = "$STR_EP1_DN_6Rnd_FlareGreen_M203";
	descriptionShort = "$STR_EP1_DSS_6Rnd_FlareGreen_M203";
	type = 256;
	picture = "\CA\weapons_E\Data\icons\m_6x40mmFlare_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_6rnd_m32_mag.p3d";
};
class FlareRed_M203: FlareWhite_M203 {
	displayName = "$STR_DN_FLARERED_M203";
	ammo = "F_40mm_Red";
	picture = "\Ca\weapons\Data\Equip\m_FlareRed_CA.paa";
	descriptionShort = "$STR_DSS_1Rnd_FLARERED_M203";		
};
class 6Rnd_FlareRed_M203: FlareRed_M203
{
	count = 6;
	displayName = "$STR_EP1_DN_6Rnd_FlareRed_M203";
	descriptionShort = "$STR_EP1_DSS_6Rnd_FlareRed_M203";
	type = 256;
	picture = "\CA\weapons_E\Data\icons\m_6x40mmFlare_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_6rnd_m32_mag.p3d";
};
class FlareYellow_M203: FlareWhite_M203 {
	displayName = "$STR_DN_FLAREYELLOW_M203";
	ammo = "F_40mm_Yellow";
	picture = "\Ca\weapons\Data\Equip\m_FlareYelow_CA.paa";
	descriptionShort = "$STR_DSS_1Rnd_FLAREYELLOW_M203";	
};
class 6Rnd_FlareYellow_M203: FlareYellow_M203
{
	count = 6;
	displayName = "$STR_EP1_DN_6Rnd_FlareYellow_M203";
	descriptionShort = "$STR_EP1_DSS_6Rnd_FlareYellow_M203";
	type = 256;
	picture = "\CA\weapons_E\Data\icons\m_6x40mmFlare_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_6rnd_m32_mag.p3d";
};
class 1Rnd_Smoke_M203: 1Rnd_HE_M203 {
	displayName = "$STR_MN_SMOKE_M203";
	picture = "\Ca\weapons_E\Data\icons\m_40mmSmoke_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_m203_smoke.p3d";
	ammo = "G_40mm_Smoke";
	descriptionShort = "$STR_DSS_1Rnd_SMOKE_M203";		
};
class 6Rnd_Smoke_M203: 1Rnd_Smoke_M203
{
	count = 6;
	displayName = "$STR_EP1_DN_6Rnd_Smoke_M203";
	descriptionShort = "$STR_EP1_DSS_6Rnd_Smoke_M203";
	type = 256;
	picture = "\CA\weapons_E\Data\icons\m_6x40mmSmoke_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_6rnd_m32_mag.p3d";
};
class 1Rnd_SmokeRed_M203: 1Rnd_Smoke_M203 {
	ammo = "G_40mm_SmokeRed";
	displayName = "$STR_DN_1Rnd_SmokeRed_M203";
	descriptionShort = "$STR_DSS_1Rnd_SMOKERED_M203";
	picture = "\Ca\weapons_E\Data\icons\m_40mmSmokeRed_CA.paa";
};
class 6Rnd_SmokeRed_M203: 1Rnd_SmokeRed_M203
{
	count = 6;
	displayName = "$STR_EP1_DN_6Rnd_SmokeRed_M203";
	descriptionShort = "$STR_EP1_DSS_6Rnd_SmokeRed_M203";
	type = 256;
	picture = "\CA\weapons_E\Data\icons\m_6x40mmSmoke_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_6rnd_m32_mag.p3d";
};
class 1Rnd_SmokeGreen_M203: 1Rnd_Smoke_M203 {
	ammo = "G_40mm_SmokeGreen";
	displayName = "$STR_DN_1Rnd_SmokeGreen_M203";
	descriptionShort = "$STR_DSS_1Rnd_SMOKEGREEN_M203";
	picture = "\Ca\weapons_E\Data\icons\m_40mmSmokeGreen_CA.paa";
};
class 6Rnd_SmokeGreen_M203: 1Rnd_SmokeGreen_M203
{
	count = 6;
	displayName = "$STR_EP1_DN_6Rnd_SmokeGreen_M203";
	descriptionShort = "$STR_EP1_DSS_6Rnd_SmokeGreen_M203";
	type = 256;
	picture = "\CA\weapons_E\Data\icons\m_6x40mmSmoke_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_6rnd_m32_mag.p3d";
};
class 1Rnd_SmokeYellow_M203: 1Rnd_Smoke_M203 {
	ammo = "G_40mm_SmokeYellow";
	displayName = "$STR_DN_1Rnd_SmokeYellow_M203";
	descriptionShort = "$STR_DSS_1Rnd_SMOKEYELLOW_M203";
	picture = "\Ca\weapons_E\Data\icons\m_40mmSmokeYellow_CA.paa";
};
class 6Rnd_SmokeYellow_M203: 1Rnd_SmokeYellow_M203
{
	count = 6;
	displayName = "$STR_EP1_DN_6Rnd_SmokeYellow_M203";
	descriptionShort = "$STR_EP1_DSS_6Rnd_SmokeYellow_M203";
	type = 256;
	picture = "\CA\weapons_E\Data\icons\m_6x40mmSmoke_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_6rnd_m32_mag.p3d";
};

// GP-25
class 1Rnd_HE_GP25: CA_Magazine {	
	scope = 2;
	type = 16;
	displayName = "$STR_DN_HE_GP25";
	picture = "\Ca\weapons_E\Data\icons\M_GP25_HE_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_gp_he.p3d";
	ammo = "G_40mm_HE";
	initSpeed = 80;
	count = 1;
	nameSound = "grenadelauncher";
	descriptionShort = "$STR_DSS_1Rnd_HE_GP25";	
};
class FlareWhite_GP25: CA_Magazine {	
	scope = 2;
	type = 16;
	displayName = "$STR_DN_FLAREWHITE_GP25";
	descriptionShort = "$str_dss_1rnd_flarewhite_gp25";
	picture = "\Ca\weapons_E\Data\icons\M_GP25_white_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_gp_flare.p3d";
	ammo = "F_40mm_White";
	initSpeed = 80;
	count = 1;
	nameSound = "grenadelauncher";	
};
class FlareGreen_GP25: FlareWhite_GP25 {
	displayName = "$STR_DN_FLAREGREEN_GP25";
	ammo = "F_40mm_Green";
	picture = "\Ca\weapons_E\Data\icons\M_GP25_green_CA.paa";
	descriptionShort = "$STR_DSS_1Rnd_FLAREGREEN_GP25";
};
class FlareRed_GP25: FlareWhite_GP25 {
	displayName = "$STR_DN_FLARERED_GP25";
	ammo = "F_40mm_Red";
	picture = "\Ca\weapons_E\Data\icons\M_GP25_red_CA.paa";
	descriptionShort = "$STR_DSS_1Rnd_FLARERED_GP25";
};
class FlareYellow_GP25: FlareWhite_GP25 {
	displayName = "$STR_DN_FLAREYELLOW_GP25";
	ammo = "F_40mm_Yellow";
	picture = "\Ca\weapons_E\Data\icons\M_GP25_yellow_CA.paa";
	descriptionShort = "$STR_DSS_1Rnd_FLAREYELLOW_GP25";
};
class 1Rnd_SMOKE_GP25: 1Rnd_HE_GP25 {
	displayName = "$STR_MN_SMOKE_GP25";
	picture = "\Ca\weapons_E\Data\icons\M_GP25_white_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_gp_smoke.p3d";
	ammo = "G_40mm_Smoke";
	descriptionShort = "$STR_DSS_1Rnd_SMOKE_GP25";		
};
class 1Rnd_SmokeRed_GP25: 1Rnd_SMOKE_GP25 {
	displayName = "$STR_DN_1Rnd_SmokeRed_GP25";
	picture = "\Ca\weapons_E\Data\icons\M_GP25_red_CA.paa";
	ammo = "G_40mm_SmokeRed";
	descriptionShort = "$STR_DSS_1Rnd_SMOKERED_GP25";
};
class 1Rnd_SmokeYellow_GP25: 1Rnd_SMOKE_GP25 {
	displayName = "$STR_DN_1Rnd_SmokeYellow_GP25";
	picture = "\Ca\weapons_E\Data\icons\M_GP25_yellow_CA.paa";
	ammo = "G_40mm_SmokeYellow";
	descriptionShort = "$STR_DSS_1Rnd_SMOKEYELLOW_GP25";
};
class 1Rnd_SmokeGreen_GP25: 1Rnd_SMOKE_GP25 {
	displayName = "$STR_DN_1Rnd_SmokeGreen_GP25";
	picture = "\Ca\weapons_E\Data\icons\M_GP25_green_CA.paa";
	ammo = "G_40mm_SmokeGreen";
	descriptionShort = "$STR_DSS_1Rnd_SMOKEGREEN_GP25";
};