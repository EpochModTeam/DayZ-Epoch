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
	
	//each include is preceded by its required external references.
	
	/* RIFLES */
	
	class AK_74;
	class AKS_74_UN_kobra;
	#include "Rifles\AK74.hpp"
	#include "Rifles\AK107.hpp"	
	#include "Rifles\AN94.hpp"
	
	class AKS_74_U;
	#include "Rifles\AKS74U.hpp"
	
	class AK_47_M;
	#include "Rifles\AKM.hpp"
	#include "Rifles\AKS.hpp"	
	#include "Rifles\RK95.hpp"
	#include "Rifles\Groza.hpp"
	#include "Rifles\SCARAK.hpp"
	
	#include "Rifles\RPK.hpp"
	
	class DMR : Rifle
	{
		class Single;
	};
	#include "Rifles\DMR.hpp"
	#include "Rifles\RSASS.hpp"
	
	class FN_FAL;
	class FN_FAL_ANPVS4;
	#include "Rifles\FNFAL.hpp"
	#include "Rifles\G3.hpp"
	
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
	#include "Rifles\MG36.hpp"	
	
	class M4A1;
	class M4A1_AIM_SD_camo;
	#include "Rifles\M4A1.hpp"
	#include "Rifles\M4A3.hpp"	
	#include "Rifles\HK416.hpp"	
	#include "Rifles\SteyrAug.hpp"	
	#include "Rifles\HK53.hpp"
	#include "Rifles\PDR.hpp"	
	#include "Rifles\Famas.hpp"	
	#include "Rifles\ACR.hpp"
	#include "Rifles\KACPDW.hpp"	
	#include "Rifles\CTAR21.hpp"	
	#include "Rifles\Masada.hpp"	
	#include "Rifles\MK16.hpp"
	#include "Rifles\XM8.hpp"
	
	class M14_EP1;
	#include "Rifles\M14.hpp"
	#include "Rifles\M1ASC.hpp"
	#include "Rifles\M21.hpp"
	#include "Rifles\HK417.hpp"	
	#include "Rifles\MK14.hpp"	
	#include "Rifles\MK17.hpp"
	#include "Rifles\M110.hpp"	
	
	#include "Rifles\CZ805.hpp"
	
	class M24 : Rifle
	{
		class OpticsModes
		{
			class StepScope;
		};
	};
	#include "Rifles\M24.hpp"
	
	class M40A3;
	#include "Rifles\M40A3.hpp"	
	#include "Rifles\CZ750.hpp"
	
	class M249;
	#include "Rifles\M249.hpp"
	
	class BAF_L110A1_Aim;
	#include "Rifles\L110A1.hpp"
	
	class M240;
	class m240_scoped_EP1;
	#include "Rifles\M240.hpp"
	
	#include "Rifles\M60A4.hpp"
	#include "Rifles\MK43.hpp"

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
	
	class SVD : Rifle
	{
		class OpticsModes
		{
			class Scope;
			class Ironsights;
		};
	};
	#include "Rifles\SVD.hpp"
	#include "Rifles\SVU.hpp"
	
	#include "Rifles\VSSVintorez.hpp"
	#include "Rifles\VAL.hpp"
	
	#include "Rifles\KSVK.hpp"	
	
	#include "Rifles\Mosin.hpp"
	
	class MP5A5;
	class MP5SD;
	#include "Rifles\MP5.hpp"
	#include "Rifles\Kriss.hpp"
	#include "Rifles\CZScorpion.hpp"
	#include "Rifles\MP7.hpp"
	#include "Rifles\TMP.hpp"
	#include "Rifles\UMP.hpp"
	#include "Rifles\P90.hpp"
	#include "Rifles\Sten.hpp"
	#include "Rifles\MAT49.hpp"
	#include "Rifles\M31.hpp"
	
	class M16A2;
	class M16A2GL;
	#include "Rifles\M16A2.hpp"
	#include "Rifles\M16A4.hpp"
	
	class Sa58V_EP1;
	#include "Rifles\SA58.hpp"
	
	class BAF_L85A2_RIS_Holo;
	#include "Rifles\L85A2.hpp"
	#include "Rifles\L86A2.hpp"
	
	class bizon;
	class bizon_silenced;
	#include "Rifles\Bizon.hpp"
	
	class huntingrifle : M24 {};
	#include "Rifles\CZ550.hpp"
	
	class LeeEnfield;
	#include "Rifles\LeeEnfield.hpp"
	
	#include "Rifles\MR43.hpp"
	#include "Rifles\Winchester1866.hpp"
	#include "Rifles\Remington870.hpp"
	#include "Rifles\Saiga12.hpp"
	#include "Rifles\Usas12.hpp"
	#include "Rifles\AA12.hpp"	
	#include "Rifles\Crossbow.hpp"
	#include "Rifles\L115A3.hpp"
	#include "Rifles\MSR.hpp"
	#include "Rifles\XM2010.hpp"
	#include "Rifles\Anzio_20.hpp"
	#include "Rifles\AS50.hpp"
	#include "Rifles\M107.hpp"	
	#include "Rifles\M4SPR.hpp"		
	#include "Rifles\M200CheyTac.hpp"	
	#include "Rifles\WA2000.hpp"	
	#include "Rifles\BarrettMRAD.hpp"	
	
	/* PISTOLS */
	
	class M9;
	class M9SD;
	#include "Pistols\M9.hpp"
	#include "Pistols\P99.hpp"
	#include "Pistols\Browning.hpp"
	#include "Pistols\P226.hpp"
	#include "Pistols\P38.hpp"
	#include "Pistols\PPK.hpp"
	#include "Pistols\MK22.hpp"
	
	class glock17_EP1;
	#include "Pistols\G17.hpp"
	#include "Pistols\G18.hpp"
	
	class Colt1911;
	#include "Pistols\M1911.hpp"
	#include "Pistols\USP.hpp"
	
	class Makarov;
	class MakarovSD;
	#include "Pistols\Makarov.hpp"
	#include "Pistols\TT33.hpp"
	#include "Pistols\RugerMK2.hpp"
	#include "Pistols\APS.hpp"
	
	class UZI_EP1;
	class UZI_SD_EP1;
	#include "Pistols\PDW.hpp"
	#include "Pistols\TEC9.hpp"
	#include "Pistols\MAC10.hpp"
	#include "Pistols\SA61.hpp"		
	
	class revolver_EP1;	
	#include "Pistols\Revolver.hpp"
	
	#include "Pistols\CZ75.hpp"		
	#include "Pistols\DesertEagle.hpp"	
	
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
	#include "Tools\BinocularVector.hpp"
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
	
	#include "Tools\Flashlights.hpp"
	
	#include "Tools\Radio.hpp"
	#include "Tools\ItemKeyKit.hpp"
	
	#include "Tools\APSI.hpp"
	#include "Tools\Masks.hpp"
	#include "Tools\Solder.hpp"
	#include "Tools\Cuffs.hpp"
	#include "Tools\Hammer.hpp"
	#include "Tools\Saw.hpp"
	#include "Tools\Smartphone.hpp"
	#include "Tools\Scissors.hpp"
	#include "Tools\ScrewExtractor.hpp"
	#include "Tools\Wrench.hpp"
	#include "Tools\MutantHeart.hpp"
	
	#include "Item\ItemKeys.hpp"
	#include "Item\Documents.hpp"
	
	#include "VehicleWeapons.hpp"
};