//Banned Weapons
//#include "CfgBanned\CfgAmmo.hpp"
//#include "CfgBanned\CfgMagazines.hpp"
//#include "CfgBanned\CfgMarkers.hpp"
//#include "CfgBanned\CfgVehicles.hpp"
//#include "CfgBanned\CfgWeapons.hpp"

class CfgPatches {
	class dayz_anim {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","HALO_Test","CAAnimals","CA_Anims","CA_Anims_Sdr","CA_Anims_Wmn","CA_Anims_E","CA_Anims_E_Sdr","CA_Anims_E_Wmn","CABuildings","CA_E","CA_PMC","CA_Heads","CAData_ParticleEffects","CA_Dubbing","CA_Dubbing_Counterattack","CA_Dubbing_E","CA_Dubbing_PMC","CA_Editor","CALanguage","CALanguage_e","CALanguage_PMC","CALanguage_missions","CALanguage_missions_e","CALanguage_missions_PMC","CA_HC_Sounds","CA_Modules","CA_Missions_AlternativeInjurySimulation","CA_Modules_Alice","CA_Missions_AmbientCombat","CA_Modules_Animals","CA_Missions_BattlefieldClearance","CA_Modules_clouds","CA_Modules_Coin","CA_Modules_DynO","CA_Missions_FirstAidSystem","CA_Modules_Functions","CA_Missions_GarbageCollector","CA_HighCommand","CA_Modules_Marta","CA_Modules_Silvie","BI_SRRS","CA_Modules_UAV","CA_Modules_ZoRA","CA_Modules_E","CA_Modules_Alice2","CA_Modules_E_DynO","CA_Modules_E_Functions","CA_Modules_E_Gita","CA_Modules_E_Jukebox","CA_Modules_E_OO","CA_Support","CA_Modules_E_UAV","CA_Modules_E_UAV_Heli","CA_Modules_E_Weather","CA_Modules_PMC","CA_Modules_PMC_Functions","CA_Modules_PMC_SimpleFIrstAid","CA_MPA","CA_MPA_Core","CA_MPA_Challenges","CA_MPA_Scenarios","CAMusic","CARoads2","CARoads2Bridge","CARoads2Dam","CARoads_E","CARoads_PMC_Bridge","CARocks2","CARocks_E","CASigns2","CASounds_Missions","CA_SoundsMissions_E","CASounds","CA_Sounds_Baf","CASounds_E","CAStructures","CAStructures_A_BuildingWIP","CAStructures_A_CraneCon","CAStructuresLand_A_MunicipalOffice","CAStructuresBarn_W","CAStructures_Castle","CAStructuresHouse","CAStructuresHouse_A_FuelStation","CAStructuresHouse_A_Hospital","CAStructuresHouse_A_Office01","CAStructuresHouse_A_Office02","CAStructuresHouse_a_stationhouse","CAStructuresHouse_Church_02","CAStructuresHouse_Church_03","CAStructuresHouse_Church_05R","CAStructuresHouse_HouseBT","CAStructuresHouse_HouseV2","CAStructuresHouse_HouseV","CAStructuresLand_Ind_Stack_Big","CAStructures_IndPipe1","CAStructuresInd_Quarry","Ind_SawMill","CAStructures_Mil","CAStructures_Misc_Powerlines","CAStructures_Nav","CAStructuresLand_Nav_Boathouse","pond_test","CAStructures_Proxy_BuildingParts","CAStructures_Proxy_Ruins","CAStructures_Rail","CAStructuresHouse_rail_station_big","CAStructures_Ruins","CAStructuresShed_Small","CAStructuresHouse_Shed_Ind","CAStructures_Wall","CAFonts","Utes","CAVideo2_PMC","CA_Animals2","CA_Animals2_Anim_Config","CA_Animals2_Chicken","CA_Animals2_Cow","CA_Animals2_Dogs","CA_Animals2_Dogs_Fin","CA_Animals2_Dogs_Pastor","CA_Animals2_Goat","CA_Animals2_Rabbit","CA_Animals2_Sheep","CA_Animals2_WildBoar","CA_Animals_E","CA_Anims_Char","CABuildings2","A_Crane_02","A_GeneralStore_01","CABuildings2_A_Pub","A_statue","Barn_Metal","Church_01","Farm_Cowshed","Farm_WTower","CAHouseBlock_A","CAHouseBlock_B","CAHouseBlock_C","CAHouseBlock_D","HouseRuins","Ind_Dopravnik","Ind_Expedice","Ind_MalyKomin","Ind_Mlyn","Ind_Pec","ind_silomale","Ind_SiloVelke","Ind_Vysypka","Ind_Garage01","CAStructures_IndPipe1_todo_delete","IndPipe2","Ind_Shed_01","Ind_Shed_02","Ind_Tank","Ind_Workshop01","CABuildings2_Misc_Cargo","Misc_PowerStation","Misc_WaterStation","Rail_House_01","Shed_small","Shed_wooden","CA_E_ParticleEffects","CA_DubbingRadio_E","CAMisc_fix","CAMisc_fix_Str","CA_Missions","CA_Missions_E","CAMusic_E","CAMusic_PMC","A_TVTower","CAStructures_Nav_pier","CAStructures_Railway","CAStructures_E","CAStructures_E_HouseA","CAStructures_E_HouseA_A_BuildingWIP","CAStructures_E_HouseA_A_CityGate1","CAStructures_E_HouseA_A_Minaret","CAStructures_E_HouseA_A_Minaret_Porto","CAStructures_E_HouseA_A_Mosque_big","CAStructures_E_HouseA_A_Mosque_small","CAStructures_E_HouseA_A_Office01","CAStructures_E_HouseA_a_stationhouse","CAStructures_E_HouseA_A_Statue","CAStructures_E_HouseA_A_Villa","CAStructures_E_HouseC","CAStructures_E_HouseK","CAStructures_E_HouseL","CAStructures_E_Ind","CAStructures_E_Ind_Ind_Coltan_Mine","CAStructures_E_Ind_Ind_FuelStation","CAStructures_E_Ind_Ind_Garage01","CAStructures_E_Ind_Oil_Mine","CAStructures_E_Ind_IndPipes","CAStructures_E_Ind_Misc_PowerStation","CAStructures_E_Ind_Ind_Shed","CAStructures_E_Mil","CAStructures_E_Misc","CAStructures_E_Misc_Misc_cables","CAStructures_E_Misc_Misc_Construction","CAStructures_E_Misc_Misc_Garbage","CAStructures_E_Misc_Misc_Lamp","CAStructures_E_Misc_Misc_powerline","CAStructures_E_Misc_Misc_Water","CAStructures_E_Misc_Misc_Well","CAStructures_E_Wall","CAStructures_E_Wall_Wall_L","CAStructures_PMC","CAStructures_PMC_Buildings","CAStructures_PMC_Buildings_Bunker","CAStructures_PMC_Buildings_GeneralStore_PMC","CAStructures_PMC_Buildings_Ruin_Cowshed","CAStructures_PMC_Ind","CAStructures_PMC_FuelStation","CAStructures_PMC_Misc","CAStructures_PMC_Misc_Shed","CAStructures_PMC_Ruins","CAStructures_PMC_Walls","CAUI","CAWeapons","CAWeapons_AK","CAWeapons_AmmoBoxes","CAWeapons_bizon","CAWeapons_Colt1911","CAWeapons_DMR","CAweapons_ksvk","CAWeapons_M1014","CAweapons_m107","CAWeapons_M252_81mm_Mortar","CAWeapons_Metis_AT_13","CAWeapons_2b14_82mm_Mortar","CAWeapons_Saiga12K","CAWeapons_SPG9","CAWeapons_VSS_vintorez","CAWeapons_ZU23","CAWeapons_E_AmmoBoxes","CACharacters","CACharacters_E_Head","CACharacters_PMC_Head","CA_Dubbing_Baf","CA_DubbingRadio_PMC","CAMisc2","CAMisc","CAMisc_fix_A2FREE","CAMisc_fix_Weap","CA_Missions_Armory2","CA_Missions_SecOps","CA_Missions_Templates_SecOps","CA_Missions_BAF","CA_Missions_BAF_Templates_SecOps","CA_Missions_E_Armory2","CA_Missions_E_SecOps","CA_Missions_E_Templates_SecOps","CA_Missions_PMC","CA_Modules_StratLayer","CA_MPA_MP","Warfare2","Warfare2_E","CAWater","CAWeapons2","CAWeapons2_HuntingRifle","CAWeapons2_RPG18","CAWeapons2_SMAW","CAWeapons_Kord","CABuildingParts","CABuildingParts_Signs","CATEC","CACharacters2","CACharacters_E","Chernarus","CAMisc_fix_Ch2","CA_Missions_BAF_2","missions_ew","CATracked","CAWater2","CAWater2_Destroyer","CAWater2_fishing_boat","CAWater2_Fregata","CAWater2_LHD","CAWater2_seafox","CAWater2_smallboat_1","CAWeapons_Warfare_weapons","CAWheeled","CAWheeled_Pickup","CAWheeled_Offroad","CAAir","CAMisc3","CAWater2_seafox_EP1","CAStructures_E_Misc_Misc_Interier","CAStructures_E_Misc_Misc_Market","CATracked2","CATracked2_2S6M_Tunguska","CATracked2_AAV","CATracked2_BMP3","CATracked2_T34","CATracked2_T90","CATracked2_us_m270mlrs","CAWheeled2","CAWheeled2_BTR90","CAWheeled2_GAZ39371","CAWheeled2_HMMWV_BASE","CAWheeled2_M1114_Armored","CAWheeled2_HMMWV_Ambulance","CAWheeled2_M998A2_Avenger","CAWheeled2_Ikarus","CAWheeled2_Kamaz","CAWheeled2_LADA","CAWheeled2_LAV25","CAWheeled2_MMT","CAWheeled2_MTVR","CAWheeled2_TowingTractor","CAWheeled2_V3S","CAWheeled2_VWGolf","CAWheeled3","CAWheeled3_M1030","CAWheeled3_TT650","CAWheeled_E","CAWheeled_E_ATV","CAWheeled_E_BRDM2","CAWheeled_E_BTR40","CAWheeled_E_BTR60","CAWheeled_E_Pickup","CAWheeled_E_Offroad","CAWheeled_E_HMMWV","CAWheeled_E_Ikarus","CAWheeled_E_LADA","CAWheeled_E_LandRover","CAWheeled_E_M1030","CAWheeled_E_MTVR","CAWheeled_E_Old_bike","CAWheeled_E_Old_moto","CAWheeled_E_s1203","CAWheeled_E_SCUD","CAWheeled_E_stryker","CAWheeled_E_SUV","CAWheeled_E_TT650","CAWheeled_E_UAZ","CAWheeled_E_Volha","CAWheeled_PMC","CAWheeled_PMC_ArmoredSUV","CAA10","CA_AH64D","CAAir2","CAAir2_C130J","CAAir2_ChukarTarget","CAAir2_F35B","Arma2_Ka52","CAAir2_MQ9PredatorB","CAAir2_MV22","CAAir2_Pchela1T","CA_AIR2_Su25","CAAir2_UH1Y","CAAir3","CAAir3_Su34","CA_BAF","CALanguage_Baf","CALanguageMissions_baf","WarfareBuildings","CAMisc_E","CAMisc_E_WF","CAMisc_fix_air","CA_Modules_ARTY","CAMP_Armory_Misc","CAMP_Armory_Misc_Concrete_Wall","CAMP_Armory_Misc_Entrance_Gate","CAMP_Armory_Misc_Info_Board","CAMP_Armory_Misc_Infostands","CAMP_Armory_Misc_Laptop","CAMP_Armory_Misc_Loudspeakers","CAMP_Armory_Misc_Plasticpole","CAMP_Armory_Misc_Red_Light","CAMP_Armory_Misc_Sign_Armex","CAMP_Armory_Misc_Sign_Direction","ProvingGrounds_PMC","Shapur_BAF","CASigns_E","Takistan","Warfare2Vehicles","CAWeapons_BAF","CAWeapons_E","CAWeapons_E_AGS","CAWeapons_E_AK","CAWeapons_E_Colt1911","CAWeapons_E_D30","CAWeapons_E_DSHKM","CAWeapons_E_FIM92_static","CAWeapons_E_fnfal","CAWeapons_E_G36","CAWeapons_E_GrenadeLauncher","CAWeapons_E_Igla","CAWeapons_E_Javelin","CAWeapons_E_KORD","CAWeapons_E_ksvk","CAWeapons_E_LeeEnfield","CAweapons_E_m107","CAWeapons_E_M110","CAWeapons_E_M119_Howitzer","CAWeapons_E_M136","CAWeapons_E_M14","CAWeapons_E_M16","CAWeapons_E_M240","CAWeapons_E_M252_81mm_Mortar","CAWeapons_E_M2StaticMG","CAWeapons_E_M47","CAWeapons_E_M9","CAWeapons_E_MAAWS","CAWeapons_E_Makarov","CAWeapons_E_Metis","CAWeapons_E_Mk19_MiniTriPod","CAWeapons_E_PK","CAWeapons_E_Podnos_2b14_82mm","CAWeapons_E_RPG18","CAWeapons_E_RPG7","CAWeapons_E_scar","CAWeapons_E_Searchlight","CAWeapons_E_SPG9","CAWeapons_E_STATIC","CAWeapons_E_Stinger","CAWeapons_E_Strela","CAWeapons_E_TOW","CAWeapons_E_ZU23","CAWeapons_PMC","CAWeapons_PMC_AA_12","CAWeapons_PMC_AS50","CAWeapons_PMC_XM8","CAWheeled_E_Ural","CAWheeled_E_V3S","zargabad","CA_CruiseMissile","CAAir_E","CAAir_E_A10","CAAir_E_AH64D","CAAir_E_AH6J","CAAir_E_An2","CAAir_E_C130J","CAAir_E_CH_47F","CAAir_E_Halo","CAAir_E_MI8","CAAir_E_Mi24","CA_AIR_E_MQ9PredatorB","CA_AIR_E_Su25","CAAir_E_UH1H_EP1","CAAir_E_UH60M","CAAir_PMC","CAAir_PMC_KA137","CAAir_PMC_KA60","CACharacters_BAF","CACharacters_BAF_Head","CACharacters_PMC","CACharacters_W_BAF","Desert_E","CA_L39","CA_Missions2_PMC","CATracked_E","CATracked_E_BMP2","CATracked_E_M113","CATracked_E_M1_Abrams","CATracked_E_M2A2_Bradley","CATracked_E_T34","CATracked_E_T55","CATracked_E_T72","CATracked_E_us_m270mlrs","CATracked_E_ZSU","CAWheeled_D_BAF","CAWheeled_W_BAF","CAAir_BAF","CAAir_BAF_CH_47F","CATracked_BAF","CATracked_W_BAF"};
		dayzVersion = "1.0.2.5";
	};
};

class CfgSkeletons
{
	class Default
{
		isDiscrete = 1;
		skeletonInherit = "";
		skeletonBones[] = {};
	};
	
	class AnimalSkeleton: Default
	{
		isDiscrete = 0;
		skeletonInherit = "";
		skeletonBones[] ={};
};
	class DogSkeleton
{
		isDiscrete = 0;
		skeletonInherit = "";
		skeletonBones[] =
		{
			"Hips","",
			"spine","Hips",
			"spine1","spine",
			"spine2","spine1",
			"neck","spine2",
			"neck1","neck",
			"head","neck1",
			"Jaw","head",
			"Tongue1","Jaw",
			"Tongue2","Tongue1",
			"leftArm","spine2",
			"leftForeArm","leftArm",
			"leftHand","leftForeArm",
			"leftFinger","leftHand",
			"rightArm","spine2",
			"rightForeArm","rightArm",
			"rightHand","rightForeArm",
			"rightFinger","rightHand",
			"tail1","Hips",
			"tail2","tail1",
			"tail3","tail2",
			"leftUpLeg","spine",
			"leftLeg","leftUpLeg",
			"leftFoot","leftLeg",
			"leftToe","leftFoot",
			"rightUpLeg","spine",
			"rightLeg","rightUpLeg",
			"rightFoot","rightLeg",
			"rightToe","rightFoot",
			"leftEar","head",
			"rightEar","head"
		};
		pivotsModel = "ca\Animals2\Dog_Skeleton.p3d";
	};
	class BirdSkeleton: AnimalSkeleton
	{
		skeletonInherit = "AnimalSkeleton";
		skeletonBones[] =
		{
			"head","neck",
			"Hips","spine",
			"leftArm","leftShoulder",
			"leftForeArm","leftArm",
			"leftHand","leftForeArm",
			"LeftFingerBase","leftHand",

			"leftFoot","leftLeg",
			"leftFootIndex1","leftFoot",
			"leftFootMiddle1","leftFoot",
			"leftFootRing1","leftFoot",
			"leftFootThumb1","leftFoot",

			"leftLeg","leftUpLeg",
			"leftShoulder","spine",

			"leftUpLeg","spine",
			"neck","spine1",

			"rightArm","rightShoulder",
			"rightForeArm","rightArm",
			"rightHand","rightForeArm",
			"rightFingerBase","RightHand",

			"rightFoot","rightLeg",
			"rightFootIndex1","rightFoot",
			"rightFootMiddle1","rightFoot",
			"rightFootRing1","rightFoot",
			"RightFootThumb1","rightFoot",

			"rightLeg","rightUpLeg",
			"rightShoulder","spine",
			"rightUpLeg","spine",
			"spine","",
			"spine1","spine",
			"tail","Hips",
};
	};
	class CfgMovesButterfly: Default
	{
		skeletonBones[] =
		{
			"body", "",
			"LBwing", "",
			"LTwing", "",
			"RBwing", "",
			"RTwing", ""
		};
	}; 
	class OFP2_ManSkeleton
	{
		isDiscrete = 0;
		skeletonInherit = "";
		skeletonBones[] =
		{
			"Pelvis", "",
			"Spine", "Pelvis",
			"Spine1", "Spine",
			"Spine2", "Spine1",
			"Spine3", "Spine2",
			"Camera", "Pelvis",
			"weapon", "Spine1",
			"launcher", "Spine1",

			//Head skeleton in hierarchy
			"neck", "Spine3",
			"neck1", "neck",
			"head", "neck1",
			"HeadCutScene", "head",
			"jaw", "head",
			"chin", "head",
			"jaw_rf", "head",
			"jaw_rm", "head",
			"jaw_rs", "head",
			"jaw_lf", "head",
			"jaw_lm", "head",
			"jaw_ls", "head",
			"ear_r", "head",
			"ear_l", "head",
			"lip_lc", "head",
			"lip_lwlb", "head",
			"lip_lwlf", "head",
			"lip_lwm", "head",
			"lip_lwrf", "head",
			"lip_lwrb", "head",
			"lip_rc", "head",
			"lip_uprb", "head",
			"lip_uprf", "head",
			"lip_upm", "head",
			"lip_uplf", "head",
			"lip_uplb", "head",
			"nose_tip", "head",
			"nose_r", "head",
			"nose_l", "head",
			"zig_lt", "head",
			"zig_lm", "head",
			"zig_lb", "head",
			"zig_rt", "head",
			"zig_rm", "head",
			"zig_rb", "head",
			"cheek_r", "head",
			"cheek_l", "head",
			"eyebrow_lb", "head",
			"eyebrow_lm", "head",
			"eyebrow_lf", "head",
			"corr", "head",
			"eyebrow_rf", "head",
			"eyebrow_rm", "head",
			"eyebrow_rb", "head",
			"eye_upr", "head",
			"eye_lwr", "head",
			"eye_upl", "head",
			"eye_lwl", "head",
			"cheek_rf", "head",
			"cheek_rm", "head",
			"cheek_rb", "head",
			"cheek_lf", "head",
			"cheek_lm", "head",
			"cheek_lb", "head",
			"forehead_l", "head",
			"forehead_m", "head",
			"forehead_r", "head",
			"l_eye", "head",
			"r_eye", "head",
			"l_pupila", "head",
			"r_pupila", "head",
			"neck_t", "head",
			"neck_b", "head",
			"neck_r", "head",
			"neck_l", "head",
			"tongue_b", "head",
			"tongue_m", "head",
			"tongue_f", "head",
 
			//Left upper side
			"LeftShoulder", "Spine3",
			"LeftArm", "LeftShoulder",
			"LeftArmRoll", "LeftArm",
			"LeftForeArm", "LeftArmRoll",
			"LeftForeArmRoll", "LeftForeArm",
			"LeftHand", "LeftForeArmRoll",
			"LeftHandRing", "LeftHand",
			"LeftHandRing1", "LeftHandRing",
			"LeftHandRing2", "LeftHandRing1",
			"LeftHandRing3", "LeftHandRing2",
			"LeftHandPinky1", "LeftHandRing",
			"LeftHandPinky2", "LeftHandPinky1",
			"LeftHandPinky3", "LeftHandPinky2",
			"LeftHandMiddle1", "LeftHand",
			"LeftHandMiddle2", "LeftHandMiddle1",
			"LeftHandMiddle3", "LeftHandMiddle2",
			"LeftHandIndex1", "LeftHand",
			"LeftHandIndex2", "LeftHandIndex1",
			"LeftHandIndex3", "LeftHandIndex2",
			"LeftHandThumb1", "LeftHand",
			"LeftHandThumb2", "LeftHandThumb1",
			"LeftHandThumb3", "LeftHandThumb2",
 
			//Right upper side
			"RightShoulder", "Spine3",
			"RightArm", "RightShoulder",
			"RightArmRoll", "RightArm",
			"RightForeArm", "RightArmRoll",
			"RightForeArmRoll", "RightForeArm",
			"RightHand", "RightForeArmRoll",
			"RightHandRing", "RightHand",
			"RightHandRing1", "RightHandRing",
			"RightHandRing2", "RightHandRing1",
			"RightHandRing3", "RightHandRing2",
			"RightHandPinky1", "RightHandRing",
			"RightHandPinky2", "RightHandPinky1",
			"RightHandPinky3", "RightHandPinky2",
			"RightHandMiddle1", "RightHand",
			"RightHandMiddle2", "RightHandMiddle1",
			"RightHandMiddle3", "RightHandMiddle2",
			"RightHandIndex1", "RightHand",
			"RightHandIndex2", "RightHandIndex1",
			"RightHandIndex3", "RightHandIndex2",
			"RightHandThumb1", "RightHand",
			"RightHandThumb2", "RightHandThumb1",
			"RightHandThumb3", "RightHandThumb2",
 
			//Left lower side
			"LeftUpLeg", "Pelvis",
			"LeftUpLegRoll", "LeftUpLeg",
			"LeftLeg", "LeftUpLegRoll",
			"LeftLegRoll", "LeftLeg",
			"LeftFoot", "LeftLegRoll",
			"LeftToeBase", "LeftFoot",
 
			//Right lower side
			"RightUpLeg", "Pelvis",
			"RightUpLegRoll", "RightUpLeg",
			"RightLeg", "RightUpLegRoll",
			"RightLegRoll", "RightLeg",
			"RightFoot", "RightLegRoll",
			"RightToeBase", "RightFoot"
		};
 
		pivotsModel = "";
	};
	};
	
class CfgModels
	{
	class Default
	{
		sectionsInherit = "";
		sections[] = {};
		skeletonName = "";
	};
 	class Dog: Default
	{
		sections[] = {"trup"};
		skeletonName = "DogSkeleton";
		htMin = 60;	// Minimum half-cooling time (in seconds)
		htMax = 1800;	// Maximum half-cooling time (in seconds)
		afMax = 30;	// Maximum temperature in case the model is alive (in celsius)
		mfMax = 0;	// Maximum temperature when the model is moving (in celsius)
		mFact = 1;	// Metabolism factor - number from interval <0, 1> (0 - metabolism has no influence, 1 - metabolism has full influence (no other temperature source will be considered)).
		tBody = 37; 	// Metabolism temperature of the model (in celsius)
	};
	class ArmaMan : Default
	{
		sections[] =
		{
			"osobnost",
			"Head_Injury",
			"Body_Injury",
			"l_leg_in jury",
			"l_arm_injury",
			"r_arm_injury",
			"r_leg_injury",
			"clan",
			"clan_sign",
			"Camo",
			"CamoB"
		};
 
		skeletonName = "OFP2_ManSkeleton";
	};
 
	class zmbStandIdleA : ArmaMan {};
	class zmbStandIdleB : ArmaMan {};
	class zmbStandIdleC_lookAround : ArmaMan {};
	class zmbStandIdleD_sniffingHyped : ArmaMan {};
	class zmbStandIdleE_swinging : ArmaMan {};
	class zmbStandCry1 : ArmaMan {};
	class zmbStandCry2 : ArmaMan {};
	class zmbStandDeath1 : ArmaMan {};
	class zmbStandDeath2 : ArmaMan {};
	class zmbStandDeath3 : ArmaMan {};
	class zmbStandAttack1 : ArmaMan {};
	class zmbStandAttack2bite : ArmaMan {};
	class zmbStandAttack3 : ArmaMan {};
	class zmbStandAttack4 : ArmaMan {};
	class zmbStandAttack5 : ArmaMan {};
	class zmbStandAttack6 : ArmaMan {};
	class zmbStandWalkF1 : ArmaMan {};
	class zmbStandWalkF2 : ArmaMan {};
	class zmbStandRunF1 : ArmaMan {};
	class zmbStandRunF2 : ArmaMan {};
	class zmbStandRunF3 : ArmaMan {};
	class zmbStandHit1_toRunF1 : ArmaMan {};
	class zmbStandHit2 : ArmaMan {};
	class zmbStandHit3_fromBehind : ArmaMan {};
	class zmbStandHit4 : ArmaMan {};
	class zmbBentIdleA : ArmaMan {};
	class zmbBentIdleB_lookAroundSwing : ArmaMan {};
	class zmbBentIdleC_lookAround : ArmaMan {};
	class zmbStand_zmbKneel : ArmaMan {};
	class zmbKneel_zmbStand : ArmaMan {};
	class zmbKneel_idleA : ArmaMan {};
	class zmbKneel_idleB : ArmaMan {};
	class zmbKneel_idleC : ArmaMan {};
	class zmbKneel_idleD : ArmaMan {};
	class zmbKneel_feedA : ArmaMan {};
	class zmbKneel_feedB : ArmaMan {};
	class zmbKneel_feedC : ArmaMan {};
	class zmbKneel_feedD : ArmaMan {};
	class zmbKneel_feedE : ArmaMan {};
	class zmbKneel_deathA : ArmaMan {};
	class zmbKneel_deathB : ArmaMan {};
	class zmbKneelAttack1_toStand : ArmaMan {};
	class zmbKneelAttack2 : ArmaMan {};
	class zmbKneelWalkF : ArmaMan {};
	class zmbKneelWalkB : ArmaMan {};
	class zmbKneeljogF : ArmaMan {};
	class zmbKneelrunF1 : ArmaMan {};
	class zmbKneelrunF2 : ArmaMan {};
	class zmbKneelrunF3 : ArmaMan {};
	class zmbKneelrunFrenzy1 : ArmaMan {};
	class zmbKneelrunFrenzy2 : ArmaMan {};
	class zmbKneelHit1 : ArmaMan {};
	//class zmbKneelHit1 : ArmaMan {};
	class zmbKneelHit2 : ArmaMan {};
	class zombie1_attack : ArmaMan {};
	class zombie1_deathFromWalk : ArmaMan {};
	class zombie1_walk : ArmaMan {};
	class zombie1_jump : ArmaMan {};
	class zombie1_birth : ArmaMan {};
	class zombie2_walk : ArmaMan {};
	class zombie2_birth : ArmaMan {};
	class zombie2_deathFromWalk : ArmaMan {};
	class zombie2_attack : ArmaMan {};
	class zombie2_jump : ArmaMan {};
	class zombie3_attack : ArmaMan {};
	class zombie3_birth : ArmaMan {};
	class zombie3_walk : ArmaMan {};
	class zombie3_jump : ArmaMan {};
	class zmbErcSprint9 : ArmaMan {};
	class zmbErcSprint13 : ArmaMan {};
	class zombie_frenziedCrawl3 : ArmaMan {};
	//class zombie_frenziedCrawl3 : ArmaMan {};
	class zombie_runDeaths6 : ArmaMan {};
	class zombie_stumble3 : ArmaMan {};
	class zombie_walk2sprint2 : ArmaMan {};
	//class zombie_frenziedCrawl3 : ArmaMan {};
	class zombieStand2KneelFeeding : ArmaMan {};
	class KneelFeeding2zombieStand : ArmaMan {};
	class zombie_kneelFeeding2_112_301 : ArmaMan {};
	//class zombie_kneelFeeding2_1054_1275 : ArmaMan {};
	//class zombie_kneelFeeding3_109-308 : ArmaMan {};
	//class zombie_kneelFeeding3_363-574 : ArmaMan {};
	//class zombie_kneelFeeding3_idle_1292-1461 : ArmaMan {};
	//class zombie_kneelFeeding3_idle_1488-1587 : ArmaMan {};
	//class zombie_kneelFeeding2_idle_893-1054 : ArmaMan {};
	//class zombie_kneelFeeding2_idle_893-1054 : ArmaMan {};
	//class zombie_kneelFeeding2_idle_1275-1430 : ArmaMan {};
	//class zombie_standSpasms1Stand_74-112 : ArmaMan {};
	//class zombie_standSpasms1Stand_74-112 : ArmaMan {};
	//class zombie_standSpasms1Stand_113-198 : ArmaMan {};
	//class zombie_standSpasms1Stand_199-327 : ArmaMan {};
	//class zombie_standSpasms1Stand_199-327 : ArmaMan {};
	//class zombie_standSpasms2bentPose_82-134 : ArmaMan {};
	//class zombie_standSpasms2bentPose_135-178 : ArmaMan {};
	//class zombie_standSpasms2bentPose_179-235 : ArmaMan {};
	//class zombie_standSpasms2bentPose_236-293 : ArmaMan {};
	//class zombie_standSpasms2bentPose_294-336 : ArmaMan {};
	//class zombie_standSpasms2bentPose_337-439 : ArmaMan {};
	//class zombie_standSpasms3Stand_83-190 : ArmaMan {};
	//class zombie_standSpasms3Stand_191-314 : ArmaMan {};
	//class zombie_standSpasms3Stand_315-400 : ArmaMan {};
	//class zombie_standSpasms3Stand_315-400 : ArmaMan {};
	//class zombie_standSpasms3Stand_401-478 : ArmaMan {};
	//class zombie_staticAttack3_67-158 : ArmaMan {};
	//class zombie_staticAttack3_67-158 : ArmaMan {};
	//class zombie_staticAttack3_183-274 : ArmaMan {};
	//class zombie_staticAttack3_183-274 : ArmaMan {};
	//class zombie_staticAttack3_441-554 : ArmaMan {};
	//class zombie_staticAttack3_570-707 : ArmaMan {};
	//class zombie_staticAttack3_742-833 : ArmaMan {};
	//class zombie_staticAttack3_855-987 : ArmaMan {};
	//class zombie_sniffing_264-499 : ArmaMan {};
	//class zombie_sniffing_573-809 : ArmaMan {};
	//class zombie_sniffing_573-809 : ArmaMan {};
	class dogBarkOnce: Dog {};
	class dogDownIdle: Dog {};
	class dogDownStand: Dog {};
	class dogDownStill: Dog {};
	class dogGestureHeadL: Dog {};
	class dogGestureHeadR: Dog {};
	class dogGestureIdle1: Dog {};
	class dogGestureIdle2: Dog {};
	class dogGestureSniff: Dog {};
	class dogStandDown: Dog {};
	class dogGestureGrowl: Dog {};
};
