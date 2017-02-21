disableSerialization;

//Model Variables
Bandit1_DZ = "Bandit1_DZ";
BanditW1_DZ = "BanditW1_DZ";
Survivor1_DZ = "Survivor1_DZ";
Survivor2_DZ = "Survivor2_DZ";
SurvivorW2_DZ = "SurvivorW2_DZ";
Sniper1_DZ = "Sniper1_DZ";
Camo1_DZ = "Camo1_DZ";
Soldier1_DZ = "Soldier1_DZ";
Rocket_DZ = "Rocket_DZ";
// EPOCH ADDITIONS
Bandit2_DZ = "Bandit2_DZ";
BanditW2_DZ = "BanditW2_DZ";
SurvivorW3_DZ = "SurvivorW2_DZ";

//Rolling Msg system
Message_1 = "";
Message_2 = "";
Message_3 = "";
Message_1_time = 0;
Message_2_time = 0;
Message_3_time = 0;
//Kill Feed
death_1 = "";
death_2 = "";
death_3 = "";
death_4 = "";
death_1_time = 0;
death_2_time = 0;
death_3_time = 0;
death_4_time = 0;

//OpenTarget timer
OpenTarget_Time = 0;

///Player classes
AllPlayers = ["Survivor_DZ","Survivor1_DZ","SurvivorW2_DZ","Survivor2_DZ","Sniper1_DZ","Soldier1_DZ","Camo1_DZ","BanditW1_DZ","Bandit1_DZ","Survivor3_DZ","SurvivorWcombat_DZ","SurvivorWdesert_DZ","SurvivorWurban_DZ","SurvivorWsequishaD_DZ","SurvivorWsequisha_DZ","SurvivorWpink_DZ","SurvivorW3_DZ","Bandit2_DZ","BanditW2_DZ","Soldier_Crew_PMC","Rocket_DZ","Rocker1_DZ","Rocker2_DZ","Rocker3_DZ","Rocker4_DZ","Priest_DZ","Functionary1_EP1_DZ","GUE_Commander_DZ","Ins_Soldier_GL_DZ","Haris_Press_EP1_DZ","Pilot_EP1_DZ","RU_Policeman_DZ","pz_policeman","pz_suit1","pz_suit2","pz_worker1","pz_worker2","pz_worker3","pz_doctor","pz_teacher","pz_hunter","pz_villager1","pz_villager2","pz_villager3","pz_priest","Soldier_TL_PMC_DZ","Soldier_Sniper_PMC_DZ","Soldier_Bodyguard_AA12_PMC_DZ","Drake_Light_DZ","CZ_Special_Forces_GL_DES_EP1_DZ","TK_INS_Soldier_EP1_DZ","TK_INS_Warlord_EP1_DZ","FR_OHara_DZ","FR_Rodriguez_DZ","CZ_Soldier_Sniper_EP1_DZ","Graves_Light_DZ","GUE_Soldier_MG_DZ","GUE_Soldier_Sniper_DZ","GUE_Soldier_Crew_DZ","GUE_Soldier_CO_DZ","GUE_Soldier_2_DZ","TK_Special_Forces_MG_EP1_DZ","TK_Soldier_Sniper_EP1_DZ","TK_Commander_EP1_DZ","RU_Soldier_Crew_DZ","INS_Lopotev_DZ","INS_Soldier_AR_DZ","INS_Soldier_CO_DZ","INS_Bardak_DZ","INS_Worker2_DZ","USMC_Soldier_Officer_DZ","USMC_Soldier_MG_DZ","USMC_Soldier_Pilot_DZ","FR_TL_DZ","FR_R_DZ","FR_Marksman_DZ","FR_Assault_R_DZ","RU_Soldier_DZ","RU_Soldier_Officer_DZ","RUS_Soldier1_DZ","RUS_Commander_DZ","MVD_Soldier_DZ","Ins_Soldier_2_DZ","Ins_Commander_DZ","Ins_Soldier_Crew_DZ","CDF_Soldier_DZ","Doctor_DZ","Assistant_DZ","Worker1_DZ","Worker3_DZ","Worker4_DZ","TK_CIV_Takistani01_EP1_DZ","TK_CIV_Takistani03_EP1_DZ","TK_CIV_Takistani04_EP1_DZ","TK_CIV_Takistani06_EP1_DZ","TK_INS_Soldier_AR_EP1_DZ","TK_GUE_Soldier_EP1_DZ","CZ_Soldier_SL_DES_EP1_DZ","US_Soldier_EP1_DZ","UN_CDF_Soldier_Guard_EP1_DZ","UN_CDF_Soldier_EP1_DZ","GER_Soldier_TL_EP1_DZ","BAF_Soldier_Officer_MTP_DZ","BAF_Soldier_N_MTP_DZ","FR_Sapper_DZ"];
DayZ_Male = ["Survivor_DZ","Survivor1_DZ","Survivor2_DZ","Survivor3_DZ","Sniper1_DZ","Soldier1_DZ","Camo1_DZ","Bandit1_DZ","Bandit2_DZ","Soldier_Crew_PMC","Rocket_DZ","Rocker1_DZ","Rocker2_DZ","Rocker3_DZ","Rocker4_DZ","Priest_DZ","Functionary1_EP1_DZ","GUE_Commander_DZ","Ins_Soldier_GL_DZ","Haris_Press_EP1_DZ","Pilot_EP1_DZ","RU_Policeman_DZ","pz_policeman","pz_suit1","pz_suit2","pz_worker1","pz_worker2","pz_worker3","pz_doctor","pz_teacher","pz_hunter","pz_villager1","pz_villager2","pz_villager3","pz_priest","Soldier_TL_PMC_DZ","Soldier_Sniper_PMC_DZ","Soldier_Bodyguard_AA12_PMC_DZ","Drake_Light_DZ","CZ_Special_Forces_GL_DES_EP1_DZ","TK_INS_Soldier_EP1_DZ","TK_INS_Warlord_EP1_DZ","FR_OHara_DZ","FR_Rodriguez_DZ","CZ_Soldier_Sniper_EP1_DZ","Graves_Light_DZ","GUE_Soldier_MG_DZ","GUE_Soldier_Sniper_DZ","GUE_Soldier_Crew_DZ","GUE_Soldier_CO_DZ","GUE_Soldier_2_DZ","TK_Special_Forces_MG_EP1_DZ","TK_Soldier_Sniper_EP1_DZ","TK_Commander_EP1_DZ","RU_Soldier_Crew_DZ","INS_Lopotev_DZ","INS_Soldier_AR_DZ","INS_Soldier_CO_DZ","INS_Bardak_DZ","INS_Worker2_DZ","USMC_Soldier_Officer_DZ","USMC_Soldier_MG_DZ","USMC_Soldier_Pilot_DZ","FR_TL_DZ","FR_R_DZ","FR_Marksman_DZ","FR_Assault_R_DZ","RU_Soldier_DZ","RU_Soldier_Officer_DZ","RUS_Soldier1_DZ","RUS_Commander_DZ","MVD_Soldier_DZ","Ins_Soldier_2_DZ","Ins_Commander_DZ","Ins_Soldier_Crew_DZ","CDF_Soldier_DZ","Doctor_DZ","Assistant_DZ","Worker1_DZ","Worker3_DZ","Worker4_DZ","TK_CIV_Takistani01_EP1_DZ","TK_CIV_Takistani03_EP1_DZ","TK_CIV_Takistani04_EP1_DZ","TK_CIV_Takistani06_EP1_DZ","TK_INS_Soldier_AR_EP1_DZ","TK_GUE_Soldier_EP1_DZ","CZ_Soldier_SL_DES_EP1_DZ","US_Soldier_EP1_DZ","UN_CDF_Soldier_Guard_EP1_DZ","UN_CDF_Soldier_EP1_DZ","GER_Soldier_TL_EP1_DZ","BAF_Soldier_Officer_MTP_DZ","BAF_Soldier_N_MTP_DZ","FR_Sapper_DZ"];
DayZ_Female = ["SurvivorW2_DZ","BanditW1_DZ","BanditW2_DZ","SurvivorWcombat_DZ","SurvivorWurban_DZ","SurvivorWdesert_DZ","SurvivorWsequishaD_DZ","SurvivorWsequisha_DZ","SurvivorWpink_DZ","SurvivorW3_DZ"];

//Classnames for specific items
MeleeWeapons = ["MeleeHatchet","MeleeCrowbar","MeleeMachete","MeleeBaseball","MeleeBaseBallBat","MeleeBaseBallBatBarbed","MeleeBaseBallBatNails","MeleeFishingPole","MeleeSledge"];
MeleeMagazines = ["Hatchet_Swing","Crowbar_Swing","Machete_Swing","Bat_Swing","BatBarbed_Swing","BatNails_Swing","Fishing_Swing","Sledge_Swing"];
MeleeAmmo = ["Hatchet_Swing_Ammo","Crowbar_Swing_Ammo","Machete_Swing_Ammo","Bat_Swing_Ammo","BatBarbed_Swing_Ammo","BatNailed_Swing_Ammo","Fishing_Swing_Ammo","Sledge_Swing_Ammo","Chainsaw_Swing_Ammo"];
Dayz_fishingItems = ["MeleeFishingPole"];
Dayz_plants = ["Dayz_Plant1","Dayz_Plant2","Dayz_Plant3"];
Dayz_attachment_array = ["Attachment_ACG","Attachment_AIM"];
//DayZ_Tents = ["TentStorage","TentStorage0","TentStorage1","TentStorage2","TentStorage3","TentStorage4","DomeTentStorage","DomeTentStorage0","DomeTentStorage1","DomeTentStorage2","DomeTentStorage3","DomeTentStorage4"]
//DayZ_Stashs = ["StashSmall","StashSmall1","StashSmall2","StashSmall3","StashSmall4","StashMedium","StashMedium1","StashMedium2","StashMedium3","StashMedium4"]
//DayZ_cutter = ["Wire_cat1","Sandbag1_DZ","Fence_DZ","Generator_DZ","Hedgehog_DZ","CamoNet_DZ"]
DayZ_Backpacks = ["DZ_Patrol_Pack_EP1","DZ_Assault_Pack_EP1","DZ_Czech_Vest_Pouch","DZ_ALICE_Pack_EP1","DZ_TK_Assault_Pack_EP1","DZ_British_ACU","DZ_CivilBackpack_EP1","DZ_Backpack_EP1","DZ_TerminalPack_EP1","DZ_CompactPack_EP1","DZ_GunBag_EP1","DZ_LargeGunBag_EP1"];
Dayz_Gutting = ["ItemKnife","ItemKnife5","ItemKnife4","ItemKnife3","ItemKnife2","ItemKnife1","ItemKnifeBlunt"];
DayZ_Ignitors = ["ItemMatchbox","Item5Matchbox","Item4Matchbox","Item3Matchbox","Item2Matchbox","Item1Matchbox"];
DayZ_traps = ["Trap_Cans","TrapTripwireFlare","TrapBearTrapSmoke","TrapTripwireGrenade","TrapTripwireSmoke","TrapBearTrapFlare"];
DayZ_ViralZeds = ["z_new_villager2","z_new_villager3","z_new_villager4","z_new_worker2","z_new_worker3","z_new_worker4"];
DayZ_SafeObjects = ["Base_Fire_DZ","WoodenGate_1","WoodenGate_2","WoodenGate_3","WoodenGate_4","Land_Fire_DZ","TentStorage","TentStorage0","TentStorage1","TentStorage2","TentStorage3","TentStorage4","StashSmall","StashSmall1","StashSmall2","StashSmall3","StashSmall4","StashMedium","StashMedium1","StashMedium2","StashMedium3","StashMedium4","Wire_cat1","Sandbag1_DZ","Fence_DZ","Generator_DZ","Hedgehog_DZ","BearTrap_DZ","DomeTentStorage","DomeTentStorage0","DomeTentStorage1","DomeTentStorage2","DomeTentStorage3","DomeTentStorage4","CamoNet_DZ","Trap_Cans","TrapTripwireFlare","TrapBearTrapSmoke","TrapTripwireGrenade","TrapTripwireSmoke","TrapBearTrapFlare","TentStorageDomed","VaultStorageLocked","BagFenceRound_DZ","TrapBear","Fort_RazorWire","WoodGate_DZ","Land_HBarrier1_DZ","Land_HBarrier3_DZ","Land_HBarrier5_DZ","Fence_corrugated_DZ","M240Nest_DZ","CanvasHut_DZ","ParkBench_DZ","MetalGate_DZ","OutHouse_DZ","Wooden_shed_DZ","WoodShack_DZ","StorageShed_DZ","Plastic_Pole_EP1_DZ","StickFence_DZ","LightPole_DZ","FuelPump_DZ","DesertCamoNet_DZ","ForestCamoNet_DZ","DesertLargeCamoNet_DZ","ForestLargeCamoNet_DZ","SandNest_DZ","DeerStand_DZ","MetalPanel_DZ","WorkBench_DZ","WoodFloor_DZ","WoodLargeWall_DZ","WoodLargeWallDoor_DZ","WoodLargeWallWin_DZ","WoodSmallWall_DZ","WoodSmallWallWin_DZ","WoodSmallWallDoor_DZ","LockboxStorageLocked","WoodFloorHalf_DZ","WoodFloorQuarter_DZ","WoodStairs_DZ","WoodStairsSans_DZ","WoodStairsRails_DZ","WoodSmallWallThird_DZ","WoodLadder_DZ","Land_DZE_GarageWoodDoor","Land_DZE_LargeWoodDoor","Land_DZE_WoodDoor","Land_DZE_GarageWoodDoorLocked","Land_DZE_LargeWoodDoorLocked","Land_DZE_WoodDoorLocked","CinderWallHalf_DZ","CinderWall_DZ","CinderWallDoorway_DZ","CinderWallDoor_DZ","CinderWallDoorLocked_DZ","CinderWallSmallDoorway_DZ","CinderWallDoorSmall_DZ","CinderWallDoorSmallLocked_DZ","MetalFloor_DZ","WoodRamp_DZ","GunRack_DZ","FireBarrel_DZ","WoodCrate_DZ","Scaffolding_DZ","DesertTentStorage","DesertTentStorage0","DesertTentStorage1","DesertTentStorage2","DesertTentStorage3","DesertTentStorage4"];
DayZ_DropDrageeObjects = ["WoodenGate_1","WoodenGate_2","WoodenGate_3","WoodenGate_4","TentStorage","TentStorage0","TentStorage1","TentStorage2","TentStorage3","TentStorage4","Wire_cat1","Sandbag1_DZ","Fence_DZ","Generator_DZ","Hedgehog_DZ","DomeTentStorage","DomeTentStorage0","DomeTentStorage1","DomeTentStorage2","DomeTentStorage3","DomeTentStorage4","TentStorageDomed","VaultStorageLocked","BagFenceRound_DZ","Fort_RazorWire","WoodGate_DZ","Land_HBarrier1_DZ","Land_HBarrier3_DZ","Land_HBarrier5_DZ","Fence_corrugated_DZ","M240Nest_DZ","ParkBench_DZ","MetalGate_DZ","OutHouse_DZ","Wooden_shed_DZ","WoodShack_DZ","StorageShed_DZ","StickFence_DZ","SandNest_DZ","MetalPanel_DZ","WorkBench_DZ","WoodLargeWall_DZ","WoodLargeWallDoor_DZ","WoodLargeWallWin_DZ","WoodSmallWall_DZ","WoodSmallWallWin_DZ","WoodSmallWallDoor_DZ","LockboxStorageLocked","WoodSmallWallThird_DZ","WoodLadder_DZ","Land_DZE_GarageWoodDoor","Land_DZE_LargeWoodDoor","Land_DZE_WoodDoor","Land_DZE_GarageWoodDoorLocked","Land_DZE_LargeWoodDoorLocked","Land_DZE_WoodDoorLocked","CinderWallHalf_DZ","CinderWall_DZ","CinderWallDoorway_DZ","CinderWallDoor_DZ","CinderWallDoorLocked_DZ","CinderWallSmallDoorway_DZ","CinderWallDoorSmall_DZ","CinderWallDoorSmallLocked_DZ","DesertTentStorage","DesertTentStorage0","DesertTentStorage1","DesertTentStorage2","DesertTentStorage3","DesertTentStorage4","WoodFloorHalf_DZ","WoodFloor_DZ","WoodFloorQuarter_DZ","WoodStairs_DZ","WoodStairsSans_DZ","WoodStairsRails_DZ","MetalFloor_DZ","WoodRamp_DZ"];
DayZ_GearedObjects = ["Car","Helicopter","Motorcycle","Ship","TentStorage_base","StashSmall_base","StashMedium_base","Plane","Tank","VaultStorage","LockboxStorage","TentStorage","OutHouse_DZ","Wooden_shed_DZ","WoodShack_DZ","StorageShed_DZ","GunRack_DZ","WoodCrate_DZ","Scaffolding_DZ","Generator_DZ"];
DayZ_RestingAnims = ["amovpsitmstpsnonwpstdnon_ground","amovpsitmstpsnonwpstdnon_smoking","amovpsitmstpsraswrfldnon_weaponcheck1","amovpsitmstpsraswrfldnon"];
dayz_typedBags = ["bloodTester","bloodBagANEG","bloodBagAPOS","bloodBagBNEG","bloodBagBPOS","bloodBagABNEG","bloodBagABPOS","bloodBagONEG","bloodBagOPOS","wholeBloodBagANEG","wholeBloodBagAPOS","wholeBloodBagBNEG","wholeBloodBagBPOS","wholeBloodBagABNEG","wholeBloodBagABPOS","wholeBloodBagONEG","wholeBloodBagOPOS"];
dayz_playerAchievements = []; //[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
dayz_trees = ["ind_timbers.p3d","t_picea2s_snow.p3d","b_corylus.p3d","t_quercus3s.p3d","t_larix3s.p3d","t_pyrus2s.p3d","str_briza_kriva.p3d","dd_borovice.p3d","les_singlestrom_b.p3d","les_singlestrom.p3d","smrk_velky.p3d","smrk_siroky.p3d","smrk_maly.p3d","les_buk.p3d","str krovisko vysoke.p3d","str_fikovnik_ker.p3d","str_fikovnik.p3d","str vrba.p3d","hrusen2.p3d","str dub jiny.p3d","str lipa.p3d","str briza.p3d","p_akat02s.p3d","jablon.p3d","p_buk.p3d","str_topol.p3d","str_topol2.p3d","p_osika.p3d","t_picea3f.p3d","t_picea2s.p3d","t_picea1s.p3d","t_fagus2w.p3d","t_fagus2s.p3d","t_fagus2f.p3d","t_betula1f.p3d","t_betula2f.p3d","t_betula2s.p3d","t_betula2w.p3d","t_alnus2s.p3d","t_acer2s.p3d","t_populus3s.p3d","t_quercus2f.p3d","t_sorbus2s.p3d","t_malus1s.p3d","t_salix2s.p3d","t_picea1s_w.p3d","t_picea2s_w.p3d","t_ficusb2s_ep1.p3d","t_populusb2s_ep1.p3d","t_populusf2s_ep1.p3d","t_amygdalusc2s_ep1.p3d","t_pistacial2s_ep1.p3d","t_pinuse2s_ep1.p3d","t_pinuss3s_ep1.p3d","t_prunuss2s_ep1.p3d","t_pinusn2s.p3d","t_pinusn1s.p3d","t_pinuss2f.p3d","t_poplar2f_dead_pmc.p3d","misc_torzotree_pmc.p3d","misc_burnspruce_pmc.p3d","brg_cocunutpalm8.p3d","brg_umbrella_acacia01b.p3d","brg_jungle_tree_canopy_1.p3d","brg_jungle_tree_canopy_2.p3d","brg_cocunutpalm4.p3d","brg_cocunutpalm3.p3d","palm_01.p3d","palm_02.p3d","palm_03.p3d","palm_04.p3d","palm_09.p3d","palm_10.p3d","brg_cocunutpalm2.p3d","brg_jungle_tree_antiaris.p3d","brg_cocunutpalm1.p3d","str habr.p3d","brg_bird_1.p3d","brg_bird_2.p3d","brg_bird_3.p3d","brg_umbrella_acacia02b.p3d","brg_africandoumpalm_1.p3d","brg_umbrella_acacia04b.p3d","brg_datepalm_4.p3d","brg_datepalm_1.p3d","brg_umbrella_acacia03b.p3d","brg_bottle_4.p3d","brg_aloe1.p3d","brg_umbrella_acacia03.p3d","brg_umbrella_acacia01.p3d","brg_umbrella_acacia04.p3d","brg_aloe2.p3d","brg_umbrella_acacia02.p3d","brg_aloe3.p3d","brg_bottle_1.p3d","brg_datepalm_3.p3d","brg_datepalm_2.p3d","brg_baobab_1.p3d","brg_bottle_2.p3d","brg_bottle_3.p3d","t_fraxinus2s.p3d","t_carpinus2s.p3d"];

Dayz_meatraw =
[
    "FoodBeefRaw",
    "FoodMuttonRaw",
    "FoodChickenRaw",
    "FoodRabbitRaw",
    "FoodBaconRaw",
    "FoodGoatRaw",
	"FoodDogRaw",
	"FishRawTrout",
	"FishRawSeaBass",
	"FishRawTuna"
];

Dayz_meatcooked =
[
    "FoodBeefCooked",
    "FoodMuttonCooked",
    "FoodChickenCooked",
    "FoodRabbitCooked",
    "FoodBaconCooked",
	"FoodGoatCooked",
	"FoodDogCooked",
	"FishCookedTrout",
	"FishCookedSeaBass",
	"FishCookedTuna"
];

boil_tin_cans =
[
    "TrashTinCan",
	"FoodCanGriffEmpty",
	"FoodCanBadguyEmpty",
	"FoodCanBoneboyEmpty",
	"FoodCanCornEmpty",
	"FoodCanCurgonEmpty",
	"FoodCanDemonEmpty",
	"FoodCanFraggleosEmpty",
	"FoodCanHerpyEmpty",
	"FoodCanDerpyEmpty",
	"FoodCanOrlokEmpty",
	"FoodCanPowellEmpty",
	"FoodCanTylersEmpty",
	"FoodCanUnlabeledEmpty",
	"FoodCanRusUnlabeledEmpty",
	"FoodCanRusStewEmpty",
	"FoodCanRusPorkEmpty",
	"FoodCanRusPeasEmpty",
	"FoodCanRusMilkEmpty",
	"FoodCanRusCornEmpty",
    "ItemSodaEmpty",
	"ItemSodaClaysEmpty",
	"ItemSodaDrwasteEmpty",
	"ItemSodaFrankaEmpty",
	"ItemSodaGrapeDrinkEmpty",
	"ItemSodaLemonadeEmpty",
	"ItemSodaLirikEmpty",
	"ItemSodaLvgEmpty",
	"ItemSodaMtngreenEmpty",
	"ItemSodaMzlyEmpty",
	"ItemSodaPeppsyEmpty",
	"ItemSodaR4z0rEmpty",
	"ItemSodaRabbitEmpty",
	"ItemSodaRocketFuelEmpty",
	"ItemSodaSacriteEmpty",
	//"ItemSodaSherbetEmpty",
	"ItemSodaSmashtEmpty",
	"FoodCanPotatoesEmpty",
    "FoodCanBeefEmpty"
];

canPickup = false;
pickupInit = false;
mouseOverCarry = false; //for carry slot since determining mouse pos doesn't work right
dayZ_partClasses = ["PartFueltank","PartWheel","PartEngine"]; //No need to add PartGeneric, it is default for everything
dayZ_explosiveParts = ["palivo","motor"];
if (isNil "infectedWaterHoles") then {infectedWaterHoles = [];}; //Needed for non-cherno maps

//Survival Variables
SleepFood = 2160; //minutes (48 hours)
SleepWater = 1440; //minutes (24 hours)
SleepTemperatur = 90 / 100;	//First value = Minutes until player reaches the coldest point at night (without other effects! night factor expected to be -1) //TeeChange

//Server Variables
allowConnection = false;
dayz_serverObjectMonitor = [];

//GUI
Dayz_GUI_R = 0.38; // 0.7 .38
Dayz_GUI_G = 0.63; // -0.63
Dayz_GUI_B = 0.26; // -0.26

//actions blockers
a_player_cooking = false;
a_player_boil = false;
a_player_jerryfilling = false;
a_player_repairing = false;

//Player self-action handles
dayz_resetSelfActions = {
	s_player_equip_carry = -1;
	s_player_dragbody = -1;
	s_player_fire = -1;
	s_player_cook = -1;
	s_player_boil = -1;
	s_player_fireout = -1;
	s_player_packtent = -1;
	s_player_packtentinfected = -1;
	s_player_fillwater = -1;
	s_player_fillwater2 = -1;
	s_player_fillfuel = -1;
	s_player_grabflare = -1;
	s_player_removeflare = -1;
	s_player_painkiller = -1;
	s_player_studybody = -1;
	s_build_Sandbag1_DZ = -1;
	s_build_Hedgehog_DZ = -1;
	s_build_Wire_cat1 = -1;
	s_player_deleteBuild = -1;
	s_player_flipveh = -1;
	s_player_stats = -1;
	s_player_sleep = -1;
	s_player_fillfuel210 = -1;
	s_player_fillfuel20 = -1;
	s_player_fillfuel5 = -1;
	s_player_siphonfuel = -1;
	s_player_repair_crtl = -1;
	s_player_fishing = -1;
	s_player_fishing_veh = -1;
	s_player_gather = -1;
	s_player_debugCheck = -1;
	s_player_destroytent = -1;
	s_player_attach_bomb = -1;
	s_player_upgradestorage = -1;
	s_player_Drinkfromhands = -1;
	/*s_player_lockhouse = -1; //Vanilla base building currently not used in Epoch
	s_player_unlockhouse = -1;
	s_player_openGate = -1;
	s_player_CloseGate = -1;
	s_player_breakinhouse = -1;
	s_player_setCode = -1;
	s_player_BuildUnLock = -1;
	s_player_BuildLock = -1;*/
	
	// EPOCH ADDITIONS
	s_player_packvault = -1;
	s_player_lockvault = -1;
	s_player_unlockvault = -1;
	s_player_attack = -1;
	s_player_callzombies = -1;
	s_player_showname = -1;
	s_player_pzombiesattack = -1;
	s_player_pzombiesvision = -1;
	s_player_pzombiesfeed = -1;
	s_player_tamedog = -1;
	s_player_parts_crtl = -1;
	s_player_movedog = -1;
	s_player_speeddog = -1;
	s_player_calldog = -1;
	s_player_feeddog = -1;
	s_player_waterdog = -1;
	s_player_staydog = -1;
	s_player_trackdog = -1;
	s_player_barkdog = -1;
	s_player_warndog = -1;
	s_player_followdog = -1;
	s_player_information = -1;	
	s_player_fuelauto = -1;
	s_player_fuelauto2 = -1;
	s_player_fillgen = -1;
	s_player_upgrade_build = -1;
	s_player_maint_build = -1;
	s_player_downgrade_build = -1;
	s_player_towing = -1;
	s_halo_action = -1;
	s_player_SurrenderedGear = -1;
	s_player_maintain_area = -1;
	s_player_maintain_area_force = -1;
	s_player_maintain_area_preview = -1;
	s_player_heli_lift = -1;
	s_player_heli_detach = -1;
	s_player_lockUnlock_crtl = -1;
	s_player_lockUnlockInside_ctrl = -1;
	s_player_toggleSnap = -1;
	s_player_toggleSnapSelect = -1;
	s_player_toggleSnapSelectPoint = [];
	snapActions = -1;
	s_player_plot_boundary = -1;
	s_player_plotManagement = -1;
	s_player_toggleDegree = -1;
	s_player_toggleDegrees=[];
	degreeActions = -1;
	s_player_toggleVector = -1;
	s_player_toggleVectors=[];
	vectorActions = -1;
	s_player_manageDoor = -1;
};
call dayz_resetSelfActions;

//Engineering variables
s_player_lastTarget = objNull;
s_player_repairActions = [];

//Initialize Medical Variables
force_dropBody = false;
r_interrupt = false;
r_doLoop = false;
r_self = false;
r_self_actions = [];
r_drag_sqf = false;
r_action = false;
r_action_unload = false;
r_player_handler = false;
r_player_unconsciousInProgress = false;
r_player_unconsciousInputDisabled = false;
r_player_dead = false;
r_player_unconscious = false;
r_player_infected = false;
//infection from hits
r_player_Sepsis = [false, 0];
r_player_injured = false;
r_player_inpain = false;
r_player_loaded = false;
r_player_cardiac = false;
r_fracture_legs = false;
r_fracture_arms = false;
r_player_vehicle = player;
r_player_blood = 12000;
r_player_bloodregen = 0;
r_player_bloodgainpersec = 0;
r_player_bloodlosspersec = 0;
r_player_bloodpersec = 0; //Blood Per Sec (gain - loss)
r_player_foodstack = 1;
//player skill
r_player_lowblood = false;
r_player_timeout = 0;
r_player_bloodTotal = r_player_blood;
r_public_blood = r_player_blood;
r_player_bloodDanger = r_player_bloodTotal * 0.2;
r_player_actions = [];
r_handlerCount = 0;
r_action_targets = [];
r_pitchWhine = false;
r_isBandit = false;
dayz_DisplayGenderSelect = true;
//blood test vars
r_A_watered = false;
r_B_watered = false;
r_D_watered = false;
r_control_watered = false;
r_canClick_resultsCard = false;
r_resultsCard_Clicked = false;
r_water_clicked = false;
r_needleclicked = 0;
r_needleReset = false;
r_control_done = false;
r_antiA_done = false;
r_antiB_done = false;
r_antiD_done = false;
carryClick = false;
dayz_actionInProgress = false;
dayz_workingInprogress = false;
gear_done = false;

//player warming up vars
//heatpack
r_player_warming_heatpack = [false, 0];
r_player_warming_heatpack_time = 600; 

//displays temp progress
r_player_temp_factor = 0; //to be used for temp(up/down) indicators
r_player_temp_min_factor = -0.04; //(lvl3 down arrow)
r_player_temp_max_factor = 0.04; //(lvl3 up arrow)
 
//INT Nutrition Info
r_player_Nutrition = 0; // Calories
r_player_nutritionMuilpty = 2;

//ammo routine
r_player_actions2 = [];
r_action2 = false;
r_player_lastVehicle = objNull;
r_player_lastSeat = [];
r_player_removeActions2 = {
	if (!isNull r_player_lastVehicle) then {
		{
			r_player_lastVehicle removeAction _x;
		} count r_player_actions2;
		r_player_actions2 = [];
		r_action2 = false;
	};
};

USEC_woundHit = ["","body","hands","legs","head_hit"]; // limbs hit given by arma engine when fnc_usec_damageHandler is called
DAYZ_woundHit = [["body","hands","legs","head_hit"],[0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,2,2,3]];
DAYZ_woundHit_ok = [["body","hands","legs"],[0,0,0,0,0,1,1,1,2,2]];
USEC_MinorWounds = ["hands","legs"];
USEC_woundPoint = [ // translation table USEC_woundHit -> SV suffixes
	["Pelvis","aimpoint"],
	["aimpoint"], //,"RightShoulder","LeftShoulder"
	["lelbow","relbow"],
	["RightFoot","LeftFoot"],
	["neck","pilot"]
];
USEC_typeOfWounds = [ // used by player_sumMedical, should contains all limbs described in USEC_woundPoint. These limbs statuses are saved by server_playerSync in HIVE if they are bleeding (medical select 8)
	"Pelvis",
	"aimpoint",
	"lelbow","relbow",
	"RightFoot","LeftFoot",
	"neck","pilot"
];

//Initialize Zombie Variables
dayz_zombieTargetList = [["SoldierWB",50],["Air",500],["LandVehicle",200]];
PVDZ_obj_Publish = []; // Used for eventhandler to spawn a mirror of players tent
PVCDZ_obj_HideBody = objNull;

//DayZ settings
dayz_lastHumanityChange = diag_tickTime;
dayz_maxAnimals = 5;
dayz_maxPlants = 3;
dayz_animalDistance = 600;
dayz_plantDistance = 600;

dayz_maxMaxModels = 80; // max quantity of Man models (player or Z, dead or alive) around players. Below this limit we can spawn Z // max quantity of loot piles around players. Below this limit we can spawn some loot
dayz_cantseeDist = 150; // distance from which we can spawn a Z in front of any player without ray-tracing and angle checks
dayz_cantseefov = 70; // half player field-of-view. Visible Z won't be spawned in front of any near players
dayz_canDelete = 350; // Z, further than this distance from its "owner", will be deleted
dayz_traps = [];
dayz_traps_active = [];
dayz_traps_trigger = [];

//Settings Not under dayz_settings
if(isNil "dayz_attackRange") then { 
	dayz_attackRange = 3;
};
if(isNil "dayz_DamageMultiplier") then { 
	dayz_DamageMultiplier = 1;
};
if(isNil "dayz_quickSwitch") then {
	dayz_quickSwitch = false; //Enable quick weapon switch,
};
//Will be moved to map
if(isNil "dayz_infectiouswaterholes") then {
	dayz_infectiouswaterholes = true; //Enable infected waterholes
};
if(isNil "dayz_POIs") then {
    dayz_POIs = true; //Enable POI's
};
if(isNil "dayz_ForcefullmoonNights") then {
	dayz_ForcefullmoonNights = false; // Forces night time to be full moon.
};
if(isNil "dayz_randomMaxFuelAmount") then {
	dayz_randomMaxFuelAmount = 500; //Puts a random amount of fuel in all fuel stations.
};
if(isNil "dayz_townGenerator") then {
	dayz_townGenerator = true; // Spawn map junk. Currently only compatible with Chernarus. Need to add coordinates for other maps.
};
if(isNil "dayz_townGeneratorBlackList") then {
	dayz_townGeneratorBlackList = []; // Town generator will not spawn junk within 150m of these positions.
};

//Replace server individual settings with ranked settings
if(isNil "dayz_presets") then { dayz_presets = "Vanilla"; };

switch (dayz_presets) do {
	case "Custom": { //Custom 
		if(isNil "dayz_enableGhosting") then { dayz_enableGhosting = false; };
		if(isNil "dayz_ghostTimer") then { dayz_ghostTimer = 120; };
		if(isNil "dayz_spawnselection") then { dayz_spawnselection = 0; };
		if(isNil "dayz_spawncarepkgs_clutterCutter") then { dayz_spawncarepkgs_clutterCutter = 0; };
		if(isNil "dayz_spawnCrashSite_clutterCutter") then { dayz_spawnCrashSite_clutterCutter = 0; };
		if(isNil "dayz_spawnInfectedSite_clutterCutter") then { dayz_spawnInfectedSite_clutterCutter = 0; };
		if(isNil "dayz_bleedingeffect") then { dayz_bleedingeffect = 2; };
		if(isNil "dayz_OpenTarget_TimerTicks") then { dayz_OpenTarget_TimerTicks = 60 * 10; };
		if(isNil "dayz_temperature_override") then { dayz_temperature_override = true; };
		if(isNil "dayz_nutritionValuesSystem") then { dayz_nutritionValuesSystem = false; };
		if(isNil "dayz_classicBloodBagSystem") then { dayz_classicBloodBagSystem = false; };
		if(isNil "dayz_enableFlies") then { dayz_enableFlies = true; };
	};
    case "Classic": { //Classic
		dayz_enableGhosting = false; //Enable disable the ghosting system.
		dayz_ghostTimer = 120; //Sets how long in seconds a player must be dissconnected before being able to login again.
		dayz_spawnselection = 0; //Turn on spawn selection 0 = random only spawns, 1 = Spawn choice based on limits
		dayz_spawncarepkgs_clutterCutter = 0; //0 =  loot hidden in grass, 1 = loot lifted and 2 = no grass
		dayz_spawnCrashSite_clutterCutter = 0;	// heli crash options 0 =  loot hidden in grass, 1 = loot lifted and 2 = no grass
		dayz_spawnInfectedSite_clutterCutter = 0; // infected base spawn... 0: loot hidden in grass, 1: loot lifted, 2: no grass 
		dayz_bleedingeffect = 2; //1= blood on the ground, 2= partical effect, 3 = both.
		dayz_OpenTarget_TimerTicks = 60 * 10; //how long can a player be freely attacked for after attacking someone unprovoked.
		dayz_temperature_override = true; // Set to true to disable all temperature changes.
		dayz_nutritionValuesSystem = false; //Enables nutrition system
		dayz_classicBloodBagSystem = true; //Enables one type of bloodbag
		dayz_enableFlies = true;  //Enables flies spawning on death
	};
	case "Elite": { //Elite
		dayz_enableGhosting = true; //Enable disable the ghosting system.
		dayz_ghostTimer = 90; //Sets how long in seconds a player must be dissconnected before being able to login again.
		dayz_spawnselection = 0; //Turn on spawn selection 0 = random only spawns, 1 = Spawn choice based on limits
		dayz_spawncarepkgs_clutterCutter = 0; //0 =  loot hidden in grass, 1 = loot lifted and 2 = no grass
		dayz_spawnCrashSite_clutterCutter = 0;	// heli crash options 0 =  loot hidden in grass, 1 = loot lifted and 2 = no grass
		dayz_spawnInfectedSite_clutterCutter = 0; // infected base spawn... 0: loot hidden in grass, 1: loot lifted, 2: no grass 
		dayz_bleedingeffect = 3; //1= blood on the ground, 2= partical effect, 3 = both.
		dayz_OpenTarget_TimerTicks = 60 * 25; //how long can a player be freely attacked for after attacking someone unprovoked.
		dayz_temperature_override = false; // Set to true to disable all temperature changes.
		dayz_nutritionValuesSystem = true; //Enables nutrition system
		dayz_classicBloodBagSystem = false; //Enables one type of bloodbag
		dayz_enableFlies = true; //Enables flies spawning on death
	};
    default { //Vanilla
		dayz_enableGhosting = true; //Enable disable the ghosting system.
		dayz_ghostTimer = 60; //Sets how long in seconds a player must be disconnected before being able to login again.
		dayz_spawnselection = 1; //Turn on spawn selection 0 = random only spawns, 1 = Spawn choice based on limits
		dayz_spawncarepkgs_clutterCutter = 0; //0 =  loot hidden in grass, 1 = loot lifted and 2 = no grass
		dayz_spawnCrashSite_clutterCutter = 0;	// heli crash options 0 =  loot hidden in grass, 1 = loot lifted and 2 = no grass
		dayz_spawnInfectedSite_clutterCutter = 0; // infected base spawn... 0: loot hidden in grass, 1: loot lifted, 2: no grass 
		dayz_bleedingeffect = 3; //1= blood on the ground, 2= partical effect, 3 = both.
		dayz_OpenTarget_TimerTicks = 60 * 10; //how long can a player be freely attacked for after attacking someone unprovoked.
		dayz_temperature_override = false; // Set to true to disable all temperature changes.
		dayz_nutritionValuesSystem = true; //Enables nutrition system
		dayz_classicBloodBagSystem = false; //Enables one type of bloodbag
		dayz_enableFlies = true; //Enables flies spawning on death
	};
};

respawn_west_original = getMarkerPos "respawn_west"; //Prevent problems caused by cheaters moving respawn_west marker with setMarkerPos or deleteMarker

switch (toLower worldName) do {
	case "napf";
	case "sauerland" : {dayz_minpos = -1000; dayz_maxpos = 26000;};
	case "tavi" : {dayz_minpos = -26000; dayz_maxpos = 26000;};
	case "chernarus" : {dayz_minpos = -1; dayz_maxpos = 16000;};
	case default {dayz_minpos = -20000; dayz_maxpos = 20000;};
};

//start achievements_init
//call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\achievements_init.sqf";

// EPOCH ADDITIONS
keypadCancel = false; //Brute force fix
keyPadReset = {uiSleep 2; keypadCancel = false;};
canbuild = true;
dayz_activeInvites = [];
dayz_combination = "";
dayz_disallowedVault = ["TentStorage","BuiltItems","ModularItems","DZE_Base_Object","Generator_DZ"];
// These work with just a running generator
dayz_fuelpumparray = ["FuelPump_DZ","Land_A_FuelStation_Feed","Land_Ind_FuelStation_Feed_EP1","Land_FuelStation_Feed_PMC","FuelStation","Land_ibr_FuelStation_Feed","Land_fuelstation_army","Land_smd_fuelstation_army","Land_fuelstation","land_fuelstation_w","Land_benzina_schnell"];
dayz_humanitytarget = "";
dayz_selectedVault = objNull;
dayz_selectedDoor = objNull;
DAYZ_woundHit_dog = [["body","hands","legs"],[0,0,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2]];
DZE_fueltruckarray = ["KamazRefuel_DZ","UralRefuel_TK_EP1_DZ","MtvrRefuel_DES_EP1_DZ","V3S_Refuel_TK_GUE_EP1_DZ","MtvrRefuel_DZ","KamazRefuel_DZE1","KamazRefuel_DZE2","KamazRefuel_DZE3","KamazRefuel_DZE4"];
DZE_Lock_Door = "";
DZE_HeliAllowTowFrom = ["CH_47F_EP1_DZE","CH_47F_EP1_DZ","CH_47F_BAF","CH_47F_EP1","BAF_Merlin_DZE","CH53_DZE"];
DZE_HeliAllowToTow = ["hilux1_civil_1_open","HMMWV_Base","Lada_base","Offroad_DSHKM_base","Pickup_PK_base","SkodaBase","tractor","VWGolf","Volha_TK_CIV_Base_EP1","S1203_TK_CIV_EP1","SUV_Base_EP1","ArmoredSUV_Base_PMC","UAZ_Base","LandRover_Base","Ship"];
DZE_REPLACE_WEAPONS = [["Crossbow","DMR","M14_EP1","SVD","SVD_CAMO"],["Crossbow_DZ","DMR_DZ","M14_CCO_DZ","SVD_DZ","SVD_Gh_DZ"]];
DZE_LockableStorage = ["VaultStorage","VaultStorageLocked","LockboxStorageLocked","LockboxStorage"];
DZE_LockedStorage = ["VaultStorageLocked","LockboxStorageLocked"];
DZE_UnLockedStorage = ["VaultStorage","LockboxStorage"];
DZE_maintainClasses = ["ModularItems","DZE_Housebase","LightPole_DZ","BuiltItems","Generator_DZ","DZ_buildables","Plastic_Pole_EP1_DZ","Fence_corrugated_DZ","CanvasHut_DZ","ParkBench_DZ","MetalGate_DZ","StickFence_DZ","DesertCamoNet_DZ","ForestCamoNet_DZ","DesertLargeCamoNet_DZ","ForestLargeCamoNet_DZ","DeerStand_DZ","Scaffolding_DZ","FireBarrel_DZ","M240Nest_DZ"];
DZE_DoorsLocked = ["Land_DZE_GarageWoodDoorLocked","Land_DZE_LargeWoodDoorLocked","Land_DZE_WoodDoorLocked","CinderWallDoorLocked_DZ","CinderWallDoorSmallLocked_DZ"];
DZE_isWreck = ["SKODAWreck","HMMWVWreck","UralWreck","datsun01Wreck","hiluxWreck","datsun02Wreck","UAZWreck","Land_Misc_Garb_Heap_EP1","Fort_Barricade_EP1","Rubbish2"];
DZE_isWreckBuilding = ["Land_wreck_cinder","Land_wood_wreck_quarter","Land_wood_wreck_floor","Land_wood_wreck_third","Land_wood_wreck_frame","Land_iron_vein_wreck","Land_silver_vein_wreck","Land_gold_vein_wreck","Land_ammo_supply_wreck"];
DZE_isNewStorage = ["VaultStorage","OutHouse_DZ","Wooden_shed_DZ","WoodShack_DZ","StorageShed_DZ","GunRack_DZ","WoodCrate_DZ"];
DZE_isDestroyableStorage = ["OutHouse_DZ","Wooden_shed_DZ","WoodShack_DZ","StorageShed_DZ","GunRack_DZ","WoodCrate_DZ"];
helperDetach = false;
DZE_snapExtraRange = 0;
DZE_tradeVehicle = ["trade_any_vehicle","trade_any_vehicle_free","trade_any_vehicle_old","trade_any_bicycle","trade_any_bicycle_old","trade_any_boat","trade_any_boat_old"];
DZE_tradeVehicleKeyless = ["trade_any_bicycle","trade_any_bicycle_old","trade_any_vehicle_free"];
DZE_tradeObject = DZE_tradeVehicle + ["trade_backpacks"];
DZE_GearCheckBypass = false;
isInTraderCity = false;
inTraderCity = "Unknown Trader";
PlayerDeaths = [];
PVDZE_obj_Trade = []; // For all traders increment qty
PVDZE_plr_DeathB = [];
PVDZE_plr_TradeMenu = []; // For all traders
snapGizmos = [];
snapGizmosNearby = [];
s_player_combi = [];
s_player_lockunlock = [];
s_player_lockUnlockInside = [];
s_player_parts = [];
if (isNil "DZE_GodModeBase") then {DZE_GodModeBase = false;};
if (isNil "dayz_paraSpawn") then {dayz_paraSpawn = false;};
if (isNil "DZE_BuildingLimit") then {DZE_BuildingLimit = 150;};
if (isNil "DZE_BuildOnRoads") then {DZE_BuildOnRoads = false;};
if (isNil "DZE_SelfTransfuse") then {DZE_SelfTransfuse = false;};
if (isNil "DZE_selfTransfuse_Values") then {DZE_selfTransfuse_Values = [12000,15,120];};
if (isNil "DZE_PlotPole") then {DZE_PlotPole = [30,45];};
DZE_maintainRange = ((DZE_PlotPole select 0)+20);
if (isNil "DZE_slowZombies") then {DZE_slowZombies = false;};
TimeOutDisplayed = false;

if (isServer) then {
	dead_bodyCleanup = [];
	needUpdate_objects = [];
	needUpdate_FenceObjects = [];
	//dayz_spawnCrashSite_clutterCutter=0; // helicrash spawn... 0: loot hidden in grass, 1: loot lifted, 2: no grass 
	//dayz_spawnInfectedSite_clutterCutter=0; // infected base spawn... 0: loot hidden in grass, 1: loot lifted, 2: no grass 
	//Objects to remove when killed.
	DayZ_nonCollide = ["TentStorage","TentStorage0","TentStorage1","TentStorage2","TentStorage3","TentStorage4","StashSmall","StashSmall1","StashSmall2","StashSmall3","StashSmall4","StashMedium","StashMedium1","StashMedium2","StashMedium3", "StashMedium4", "DomeTentStorage", "DomeTentStorage0", "DomeTentStorage1", "DomeTentStorage2", "DomeTentStorage3", "DomeTentStorage4", "CamoNet_DZ", "DesertTentStorage", "DesertTentStorage0", "DesertTentStorage1", "DesertTentStorage2", "DomeTentStorage3", "DesertTentStorage4"];
	DayZ_WoodenFence = ["WoodenFence_1","WoodenFence_2","WoodenFence_3","WoodenFence_4","WoodenFence_5","WoodenFence_6","WoodenFence_7"];
	DayZ_WoodenGates = ["WoodenGate_1","WoodenGate_2","WoodenGate_3","WoodenGate_4"];
	DayZ_removableObjects = ["Wire_cat1","Sandbag1_DZ","Hedgehog_DZ","CamoNet_DZ","Trap_Cans","TrapTripwireFlare","TrapBearTrapSmoke","TrapTripwireGrenade","TrapTripwireSmoke","TrapBearTrapFlare"];
	//[10416.695, 4198.4634],[7982.2563, 1419.8256],[10795.93, 1419.8263],[7966.083, 4088.7463],[9259.7266, 2746.1985],[5200.5234, 3915.3274],[6494.1665, 2572.7798],[5216.6968, 1246.407],[2564.7244, 3915.3296],[3858.3674, 2572.782],[2580.8977, 1246.4092],[13398.995, 4400.5874],[12242.025, 2948.3196],[13551.842, 1832.2257],[14870.512, 3009.5117],[-178.19415, 1062.4478],[1099.2754, 2388.8206],[-194.36755, 3731.3679],[10394.215, 8322.1719],[7959.7759, 5543.5342],[10773.449, 5543.5342],
	dayz_grid =[[7943.6025, 8212.4551],[9237.2461, 6869.9063],[5178.043, 8039.0361],[6471.686, 6696.4883],[5194.2163, 5370.1152],[2542.2439, 8039.0381],[3835.887, 6696.4902],[2558.4172, 5370.1172],[13376.514, 8524.2969],[12219.544, 7072.0273],[13529.361, 5955.9336],[14848.032, 7133.2197],[-200.67474, 5186.1563],[1076.7949, 6512.5283],[-216.84814, 7855.0771],[10293.751, 12197.736],[7859.312, 9419.0996],[10672.988, 9419.0996],[7843.1387, 12088.021],[9136.7822, 10745.474],[5077.5791, 11914.601],[6371.2222, 10572.052],[5093.7524, 9245.6816],[2441.78, 11914.604],[3735.4231, 10572.055],[2457.9534, 9245.6816],[13276.053, 12399.861],[12119.08, 10947.596],[13428.897, 9831.501],[14747.566, 11008.786],[-301.13867, 9061.7207],[976.33112, 10388.096],[-317.31201, 11730.642],[10271.271, 16321.429],[7836.8315, 13542.813],[10650.506, 13542.813],[7820.6582, 16211.718],[9114.3018, 14869.175],[5055.0986, 16038.3],[6348.7417, 14695.758],[5071.272, 13369.392],[2419.2996, 16038.305],[3712.9426, 14695.76],[2435.4729, 13369.392],[13253.568, 16523.553],[12096.6, 15071.295],[13406.416, 13955.209],[14725.089, 15132.486],[-323.61914, 13185.43],[953.85059, 14511.8],[-339.79248, 15854.346]];
	dayz_choppedTrees = [];
	dayz_ghostPlayers = [];
	dayz_activePlayers = [];
	dayz_died = [];

	// EPOCH ADDITIONS
	DZE_safeVehicle = ["ParachuteWest","ParachuteC"];
	if (isNil "EpochUseEvents") then {EpochUseEvents = false;};
	if (isNil "EpochEvents") then {EpochEvents = [];};
	if (isNil "MaxDynamicDebris") then {MaxDynamicDebris = 100;};
	if (isNil "MaxVehicleLimit") then {MaxVehicleLimit = 50;};
	if (isNil "spawnArea") then {spawnArea = 1400;};
	if (isNil "spawnShoremode") then {spawnShoremode = 1;};
};

if (!isDedicated) then {
	dayz_buildingBubbleMonitor = [];
	DayZ_fuelCans = ["ItemJerrycan","ItemFuelcan","ItemFuelBarrel"];
	DayZ_fuelCansEmpty = ["ItemJerrycanEmpty","ItemFuelcanEmpty","ItemFuelBarrelEmpty"];
	DayZ_fuelSources = ["Land_Ind_TankSmall","Land_fuel_tank_big","Land_fuel_tank_stairs","Land_fuel_tank_stairs_ep1","Land_wagon_tanker","Land_fuelstation","Land_fuelstation_army","Land_smd_fuelstation_army","land_fuelstation_w","Land_benzina_schnell"];

	//temperature variables
	dayz_temperatur = 36; //TeeChange
	dayz_temperaturnormal = 36; //TeeChange
	dayz_temperaturmax = 42; //TeeChange
	dayz_temperaturmin = 27; //TeeChange

	//player special variables
	dayz_bloodBagHumanity = 300;
	dayz_lastDamageSourceNull = false;
	dayz_lastDamageSource = "none";
	dayz_lastDamageTime = 0;
	dayz_lastMedicalSource = "none";
	dayz_lastMedicalTime = 0;
	dayz_lastClothesChange = 0;
	dayZ_lastPlayerUpdate = 0;
	dayz_lastSelfTransfusion = -(DZE_selfTransfuse_Values select 2);
	dayz_lastTransfusion = 0;
	dayz_playerName = "unknown";
	dayz_hunger = 0;
	dayz_thirst = 0;
	dayz_nutrition = 0;
	dayz_preloadFinished = true;
	dayz_soundMuted = false;
	dayz_statusArray = [1,1];
	dayz_disAudial = 0;
	dayz_disVisual = 0;
	dayz_firedCooldown = 0;
	dayz_damageCounter = time;
	dayz_lastSave = time;
	dayz_isSwimming = true;
	dayz_currentDay = 0;
	dayz_hasLight = false;
	dayz_surfaceNoise = 0;
	dayz_surfaceType = "None";
	dayz_noPenalty = [];
	dayz_heavenCooldown = 0;
	deathHandled = false;
	dayz_firstGroup = group player;
	dayz_originalPlayer = player;
	dayz_sourceBleeding = objNull;
	dayz_clientPreload = false;
	dayz_authed = false;
	dayz_panicCooldown = 0;
	dayz_areaAffect = 3.5;
	dayz_monitorPeriod = 0.6; // number of seconds between each player_zombieCheck calls
	dayz_heartBeat = false;
	dayz_spawnZombies = 0; // Current local
	dayz_swarmSpawnZombies = 0;
	dayz_maxLocalZombies = 15; // max quantity of Z controlled by local gameclient, used by player_spawnCheck. Below this limit we can spawn Z
	dayz_CurrentNearByZombies = 0;
	dayz_maxNearByZombies = 30; // max quantity of Z controlled by local gameclient, used by player_spawnCheck. Below this limit we can spawn Z
	dayz_currentGlobalZombies = 0; // Current total
	if(isNil "dayz_maxGlobalZeds") then {
		dayz_maxGlobalZeds = 1000;
	};
	//Animals
	dayz_currentGlobalAnimals =	0;
	dayz_maxGlobalAnimals =	50;
	//Plants	
	dayz_currentGlobalPlants = 0;
	dayz_maxGlobalPlants = 500;
	//Loot
	r_player_divideinvehicle = 0;
	dayz_currentWeaponHolders = 0;
	dayz_maxMaxWeaponHolders = 80;
	dayz_inVehicle = false;
	dayz_unsaved = false;
	dayz_scaleLight = 0;
	dayzDebug = false;
	dayzState = -1;
	dayz_onBack = "";
	dayz_fishingInprogress = false;
	dayz_siphonFuelInProgress = false;
	dayz_salvageInProgress = false;
	lastSpawned = diag_tickTime;
	lastSepsis = 0;
	NORRN_dropAction = -1;
	//uiNamespace setVariable ['DAYZ_GUI_display',displayNull];
	//if (uiNamespace getVariable ['DZ_displayUI', 0] == 2) then {
	//	dayzDebug = true;
	//};
	dayz_dodge = false;
	Dayz_constructionContext = [];
	Dayz_freefall = [ time, 0, 0.1 ];
	dayz_getout = objNull;
	dayz_getoutTime = 0;
	dayz_HitBy = objNull;
	voice_actions = ["voiceOverNet","PushToTalk","PushToTalkAll","PushToTalkCommand","PushToTalkDirect","PushToTalkGroup","PushToTalkSide","PushToTalkVehicle"];

	// EPOCH ADDITIONS
	if (isNil "DZE_BackpackAntiTheft") then {DZE_BackpackAntiTheft = false;};
	if (isNil "DZE_requireplot") then {DZE_requireplot = 1;};
	if (isNil "DZE_StaticConstructionCount") then {DZE_StaticConstructionCount = 0;};
	if (toLower DZE_DeathMsgChat in ["global","side"]) then {enableRadio true;}; //Needed for scripted global chat to show, doesn't seem to have any adverse effects
	dayz_autoRun = false;
	DZE_AntiWallCounter = 0;
	DZE_myHaloVehicle = objNull;
	dayz_myLiftVehicle = objNull;
	DZE_Friends = [];
	DZE_Q = false;
	DZE_Z = false;
	DZE_Q_alt = false;
	DZE_Z_alt = false;
	DZE_Q_ctrl = false;
	DZE_Z_ctrl = false;
	DZE_4 = false;
	DZE_5 = false;
	DZE_6 = false;
	DZE_F = false;
	DZE_cancelBuilding = false;
	DZE_TEMP_treedmg = 1;
	DZE_Surrender = false;
	DZE_Quarantine = false;
	DZE_InRadiationZone = false;
	DZE_myVehicle = objNull;
	dayz_groupNameTags = (profileNamespace getVariable ["streamerMode",0] == 0); //If streamer mode is on then hide name tags at startup. Toggle with Windows key.
	dayz_minusDownTime = 0;
	dayz_lastCodeFail = 0;
};
