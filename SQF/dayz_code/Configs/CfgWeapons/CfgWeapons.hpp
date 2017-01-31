class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class HandGrenade;

class CfgWeapons
{
	class Default
	{
		canlock = LockNo;
	};
	
	class ItemCore;
	class Rifle;
	class Pistol;
	class GrenadeLauncher;
	
	
	
	/* Dummy weapons */
	#include "Throw.hpp"
	#include "Loot.hpp"
	
	//Sniper Rifles
	#include "Weapon\Sniper\Anzio_20.hpp"
	#include "Weapon\Sniper\AS50.hpp"
	#include "Weapon\Sniper\M107.hpp"
	#include "Weapon\Sniper\KSVK.hpp"
	#include "Weapon\Sniper\M4SPR.hpp"
	#include "Weapon\Sniper\VSSVintorez.hpp"
	
	
	//each include is preceded by its required external references.
	
	/* RIFLES */
	
	class AK_74;
	class AKS_74_UN_kobra;
	#include "Rifles\AK74.hpp"
	
	class AKS_74_U;
	#include "Rifles\AKS74U.hpp"
	
	class AK_47_M;
	#include "Rifles\AKM.hpp"
	
	#include "Rifles\RPK.hpp"
	
	class DMR : Rifle
	{
		class Single;
	};
	#include "Rifles\DMR.hpp"
	
	class FN_FAL;
	class FN_FAL_ANPVS4;
	#include "Rifles\FNFAL.hpp"
	
	class G36C : Rifle
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class G36_C_SD_eotech : G36C
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	#include "Rifles\G36.hpp"
	#include "Rifles\G36C.hpp"
	
	class M4A1;
	class M4A1_AIM_SD_camo;
	#include "Rifles\M4A1.hpp"
	
	class M14_EP1;
	#include "Rifles\M14.hpp"
	
	class M24;
	#include "Rifles\M24.hpp"
	
	class M40A3;
	#include "Rifles\M40A3.hpp"
	
	class M249;
	#include "Rifles\M249.hpp"
	
	class BAF_L110A1_Aim;
	#include "Rifles\L110A1.hpp"
	
	class M240;
	class m240_scoped_EP1;
	#include "Rifles\M240.hpp"
	
	#include "Weapon\LMG\M60A4.hpp"

	class M1014 : Rifle
	{
		class Single;
	};
	#include "Rifles\M1014.hpp"
	
	class Mk_48;
	#include "Rifles\Mk48.hpp"
	
	class PK : Rifle
	{
		class manual;
	};
	class Pecheneg;
	#include "Rifles\PKM.hpp"
	
	#include "Rifles\UK59.hpp"
	
	class RPK_74;
	#include "Rifles\RPK74.hpp"
	
	class SVD;
	#include "Rifles\SVD.hpp"
	
	#include "Rifles\Mosin.hpp"
	
	class MP5A5;
	class MP5SD;
	#include "Rifles\MP5.hpp"
	
	class M16A2;
	class M16A2GL;
	#include "Rifles\M16A2.hpp"
	#include "Rifles\M16A4.hpp"
	
	class Sa58V_EP1;
	#include "Rifles\SA58.hpp"
	
	class BAF_L85A2_RIS_Holo;
	#include "Rifles\L85.hpp"
	
	class bizon;
	class bizon_silenced;
	#include "Rifles\Bizon.hpp"
	
	class huntingrifle;
	#include "Rifles\CZ550.hpp"
	
	class LeeEnfield;
	#include "Rifles\LeeEnfield.hpp"
	
	#include "Rifles\MR43.hpp"
	#include "Rifles\Winchester1866.hpp"
	#include "Rifles\Remington870.hpp"
	#include "Rifles\Crossbow.hpp"
	
	
	
	/* PISTOLS */
	
	class M9;
	class M9SD;
	#include "Pistols\M9.hpp"
	
	class glock17_EP1;
	#include "Pistols\G17.hpp"
	
	class Colt1911;
	#include "Pistols\M1911.hpp"
	
	class Makarov;
	class MakarovSD;
	#include "Pistols\Makarov.hpp"
	
	class UZI_EP1;
	#include "Pistols\PDW.hpp"
	
	class revolver_EP1;
	#include "Pistols\Revolver.hpp"
	
	
	
	
	
	/* MELEE */
	
	class MeleeWeapon : Rifle
	{
		melee = true;
		
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		fireLightDuration = 0;
		fireLightIntensity = 0;
		
		autoReload = true;
		magazineReloadTime = 0;
		
		soundBullet[] = {"emptySound", 1};
		drySound[] = {"", 1, 1};
		reloadMagazineSound[] = {"", 1, 1};
		
		cursor = "Vehicle_Grenade_W";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		
		handAnim[] = {"OFP2_ManSkeleton","\dayz_weapons\anim\melee_hatchet_holding.rtm"};
		
		modes[] = {Single};
		
		class Single : Mode_FullAuto
		{
			displayName = $STR_ACTION_HACK;
			dispersion = 0.1;
			reloadTime = 1;
			recoil = "DZ_Swing";
			recoilProne = "DZ_Swing";
			
			sound[] = {"", 0, 1};
			swing0[] = {"dayz_weapons\sounds\swing_0", 1.77828, 1, 30};
			swing1[] = {"dayz_weapons\sounds\swing_1", 1.77828, 1, 30};
			soundBegin[] = {"swing0", 0.5, "swing1", 0.5};
		};
	};
	
	#include "Melee\Hatchet.hpp"
	#include "Melee\Crowbar.hpp"
	#include "Melee\Machete.hpp"
	#include "Melee\BaseballBat.hpp"
	#include "Melee\FishingPole.hpp"
	#include "Melee\MeleeSledgehammer.hpp"
	
	
	
	
	
	/* TOOLS */
	
	#include "Tools\Binocular.hpp"
	#include "Tools\NVG.hpp"
	#include "Tools\Chainsaw.hpp"
	
	#include "Tools\Map.hpp"
	#include "Tools\Compass.hpp"
	#include "Tools\GPS.hpp"
	#include "Tools\Watch.hpp"
	
	#include "Tools\Knife.hpp"
	#include "Tools\Matchbox.hpp"
	
	#include "Tools\Toolbox.hpp"
	#include "Tools\Etool.hpp"
	
	#include "Tools\FishingPole.hpp"
	#include "Tools\Shovel.hpp"
	#include "Tools\Pickaxe.hpp"
	#include "Tools\Sledgehammer.hpp"
	
	#include "Tools\Crowbar.hpp"
	#include "Tools\Hatchet.hpp"
	#include "Tools\Machete.hpp"
	
	#include "Tools\Flashlight.hpp"
	#include "Tools\FlashlightRed.hpp"
	
	#include "Tools\Radio.hpp"
	#include "Item\ItemKeyKit.hpp"
	#include "Item\ItemKeys.hpp"
	#include "Item\Documents.hpp"
	
	
	
	
	
	/* OTHER */
	
	/*class ItemFlashlightEmpty : ItemCore
	{
		scope = public;
		displayName = $STR_EQUIP_NAME_5;
		model = "\dayz_equip\models\flashlight.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_5;
	};
	
	class ItemSodaEmpty : HandGrenade
	{
		scope = public;
		displayName = $STR_EQUIP_NAME_35;
		model = "\dayz_equip\models\soda_coke_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_35;
		ammo = "SodaCan";
		class ItemActions
		{
			class Drink
			{
				text = $STR_ACTIONS_DRINK2;
				script = ";[_id] spawn player_fillWater;";
			};
		};
	};
	
	class TrashTinCan : HandGrenade
	{
		scope = public;
		displayName = $STR_EQUIP_NAME_33;
		model = "\dayz_equip\models\trash_tincan.p3d";
		picture = "\dayz_equip\textures\equip_tincan_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_33;
		ammo = "TinCan";
		class ItemActions
		{
			class Drink
			{
				text = $STR_ACTIONS_DRINK2;
				script = ";[_id] spawn player_fillWater;";
			};
		};
	};*/
};
