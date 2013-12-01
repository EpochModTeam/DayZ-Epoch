class Man;	// External class reference
class Default;	// External class reference
class CfgFaces
{
	class ZFaces
	{	
		class Default
		{
			name = "PZombie 1";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"PZombie1"};
			disabled = 0;
			material = "\ca\characters\heads\male\defaulthead\data\hhl_white.rvmat"; 
            head = "defaultHead"; 
		};
		class Zombie1 : Default
		{
			name = "PZombie 1";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"PZombie1"};
			disabled = 0;
		};
		class Zombie2 : Default
		{
			name = "PZombie 2";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"PZombie2"};
			disabled = 0;
		};
		class Zombie3 : Default {
			name = "Zombie 3";
			texture = "z\addons\dayz_communityassets\faces\zombie_03_co.paa";
			material = "z\addons\dayz_communityassets\faces\zombie_03.rvmat";
			identityTypes[] = {"Zombie3"};
			disabled = 0;
		};
	};
	class Man : Default {
		class Default;	// External class reference
	class OW_Nope : Default {
		identityTypes[] = {};
	};
	class Merc_Face1 : OW_Nope {};
	class Merc_Face2 : OW_Nope {};
	class Merc_Face3 : OW_Nope {};
	class Merc_Face4 : OW_Nope {};
	class Merc_Face5 : OW_Nope {};
	class Merc_Face5_camo : OW_Nope {};
	class Merc_Face6 : OW_Nope {};
	class Merc_Face6_camo : OW_Nope {};
	class Merc_Face7 : OW_Nope {};
	class Merc_Face8 : OW_Nope {};
	class Merc_Face8_camo : OW_Nope {};
	class Merc_Face9 : OW_Nope {};
	class Merc_Face10 : OW_Nope {};
	class Merc_Face11 : OW_Nope {};
	class Merc_Face12 : OW_Nope {};
	class Merc_Face13 : OW_Nope {};
	class Merc_Face13_camo : OW_Nope {};
	class Merc_Face14 : OW_Nope {};
	class Merc_Face15 : OW_Nope {};
	class Merc_Face16 : OW_Nope {};
	class Merc_Face17 : OW_Nope {};
	class Merc_Face18 : OW_Nope {};
	class Merc_Face19 : OW_Nope {};
	class Merc_Face20 : OW_Nope {};
	class Merc_Face21 : OW_Nope {};
	class Merc_Face22 : OW_Nope {};
	class Merc_Face23 : OW_Nope {};
	class Merc_Face24 : OW_Nope {};
	class Merc_Face25 : OW_Nope {};
	class Merc_Face26 : OW_Nope {};
	class Merc_Face27 : OW_Nope {};
	class Merc_Face28 : OW_Nope {};
	class Merc_Face29 : OW_Nope {};
	class Merc_Face30 : OW_Nope {};
	class Merc_Face31 : OW_Nope {};
	class Merc_Face32 : OW_Nope {};
	class Merc_Face33 : OW_Nope {};
	};
	
class MaskBlack : Man {};
class gas_mask_face : Man {};
class gangsta_faces : Man {};
class gangsta_faces2 : Man {};
class gangsta_faces_mask : Man {};
class HeadMaskWinter : Man {};
class HeadMaskSnow : Man {};
class HeadMaskSkull : Man {};
};