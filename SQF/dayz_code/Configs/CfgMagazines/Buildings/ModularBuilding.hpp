class glass_floor_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GLASSFLOOR;
	descriptionShort = $STR_EPOCH_GLASSFLOOR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "GlassFloor_DZ";
		};
	};
};

class glass_floor_half_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GLASSFLOORHALF;
	descriptionShort = $STR_EPOCH_GLASSFLOORHALF;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "GlassFloor_Half_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_ACTION_GLASS_FLOOR;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"glass_floor_kit",1}};
			input[] = {{"glass_floor_half_kit",2}};
		};
	};
};

class glass_floor_quarter_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GLASSFLOORQUARTER;
	descriptionShort = $STR_EPOCH_GLASSFLOORQUARTER;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "GlassFloor_Quarter_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_ACTION_GLASS_FLOOR_HALF;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"glass_floor_half_kit",1}};
			input[] = {{"glass_floor_quarter_kit",2}};
		};		
	};
};

class metal_floor_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALFLOOR;
	descriptionShort = $STR_EPOCH_METALFLOOR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalFloor_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_228_3;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};
			output[] = {{"metal_floor4x_kit",1}};
			input[] = {{"metal_floor_kit",4}};
		};		
	};
};

class metal_floor_half_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALFLOORHALF;
	descriptionShort = $STR_EPOCH_METALFLOORHALF;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalFloor_Half_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_228;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};
			output[] = {{"metal_floor_kit",1}};
			input[] = {{"metal_floor_half_kit",2}};
		};
	};
};

class metal_floor_quarter_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALFLOORQUARTER;
	descriptionShort = $STR_EPOCH_METALFLOORQUARTER;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalFloor_Quarter_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_228_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","fire"};
			requiretools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};
			output[] = {{"metal_floor_half_kit",1}};
			input[] = {{"metal_floor_quarter_kit",2}};
		};
	};
};

class metal_floor4x_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALFLOOR4x;
	descriptionShort = $STR_EPOCH_METALFLOOR4x;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalFloor4x_DZ";
		};
	};
};

class metal_pillar_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALPILLAR;
	descriptionShort = $STR_EPOCH_METALPILLAR_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalPillar_DZ";
		};
	};
};

class half_cinder_wall_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBLOCKWALL_HALF;
	descriptionShort = $STR_EPOCH_CINDERBLOCKWALL_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallHalf_DZ";
		};
	};
};

class full_cinder_wall_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBLOCKWALL;
	descriptionShort = $STR_EPOCH_FULLCINDERBLOCKWALL_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWall_DZ";
		};
	};
};

class cinderwall_window_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBLOCKWALLWINDOW;
	descriptionShort = $STR_EPOCH_CINDERBLOCKWALLWINDOW_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallWindow_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239_1_2;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"cinderwall_window_locked_kit",1}};
			input[] = {{"cinderwall_window_kit",1},{"ItemComboLock",1}};
		};
	};
};

class cinderwall_window_locked_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBLOCKWALLWINDOW_LOCKED;
	descriptionShort = $STR_EPOCH_CINDERBLOCKWALLWINDOW_LOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallWindowLocked_DZ";
		};
	};
};

class cinder_door_frame_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKDOORWAY;
	descriptionShort = $STR_EPOCH_BLOCKDOORWAY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallSmallDoorway_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_238;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_door_kit",1}};
			input[] = {{"cinder_door_frame_kit",1},{"ItemPole",1},{"ItemTankTrap",1}};
		};			
	};
};

class cinder_door_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKDOOR;
	descriptionShort = $STR_EPOCH_BLOCKDOOR_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallDoorSmall_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"cinder_door_kit_locked",1}};
			input[] = {{"cinder_door_kit",1},{"ItemComboLock",1}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_PLAYER_238_2;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"cinder_door_hatch_kit",1}};
			input[] = {{"cinder_door_kit",1}};
		};		
	};
};

class cinder_door_kit_locked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKDOORLOCKED;
	descriptionShort = $STR_EPOCH_BLOCKDOORWAY_LOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallDoorSmallLocked_DZ";
		};
	};
};

class cinder_door_hatch_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKDOOR_HATCH;
	descriptionShort = $STR_EPOCH_BLOCKDOOR_HATCH_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderDoorHatch_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"cinder_door_hatch_kit_locked",1}};
			input[] = {{"cinder_door_hatch_kit",1},{"ItemComboLock",1}};
		};
	};
};

class cinder_door_hatch_kit_locked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKDOORLOCKED_HATCH;
	descriptionShort = $STR_EPOCH_BLOCKDOORWAY_HATCH_LOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderDoorHatchLocked_DZ";
		};
	};
};

class cinder_garage_frame_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKGARAGEDOORWAY;
	descriptionShort = $STR_EPOCH_BLOCKGARAGEDOORWAY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallDoorway_DZ";
		};	
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_240;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_garage_kit",1}};
			input[] = {{"cinder_garage_frame_kit",1},{"ItemPole",3},{"ItemTankTrap",3}};
		};		
	};
};

class cinder_garage_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKGARAGEDOORWAY;
	descriptionShort = $STR_EPOCH_BLOCKGARAGEDOORWAY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallDoorway_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"cinder_garage_kit_locked",1}};
			input[] = {{"cinder_garage_kit",1},{"ItemComboLock",1}};
		};		
	};
};

class cinder_garage_kit_locked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKGARAGEDOORLOCKED;
	descriptionShort = $STR_EPOCH_BLOCKGARAGEDOORWAY_LOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallDoorLocked_DZ";
		};
	};
};

class cinder_garage_top_open_frame_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDEROPENTOPGARAGEFRAME;
	descriptionShort = $STR_EPOCH_CINDEROPENTOPGARAGEFRAME_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderGarageOpenTopFrame_DZ";
		};	
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_240;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_garage_top_open_kit",1}};
			input[] = {{"cinder_garage_top_open_frame_kit",1},{"ItemPole",3},{"ItemTankTrap",3}};
		};		
	};
};

class cinder_garage_top_open_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDEROPENTOPGARAGEDOOR;
	descriptionShort = $STR_EPOCH_CINDEROPENTOPGARAGEDOOR_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderGarageOpenTop_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"cinder_garage_top_open_kit_locked",1}};
			input[] = {{"cinder_garage_top_open_kit",1},{"ItemComboLock",1}};
		};		
	};
};

class cinder_garage_top_open_kit_locked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDEROPENTOPGARAGEDOORLOCKED;
	descriptionShort = $STR_EPOCH_CINDEROPENTOPGARAGEDOORLOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderGarageOpenTopLocked_DZ";
		};
	};
};

class cinder_gate_frame_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERGATEFRAME;
	descriptionShort = $STR_EPOCH_CINDERGATEFRAME_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderGateFrame_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239_1_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_gate_kit",1}};
			input[] = {{"cinder_gate_frame_kit",1},{"equip_metal_sheet",6},{"ItemRSJ",2},{"ItemScrews",2}};
		};
	};
};


class cinder_gate_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERGATE;
	descriptionShort = $STR_EPOCH_CINDERGATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderGate_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"cinder_gate_kit_locked",1}};
			input[] = {{"cinder_gate_kit",1},{"ItemComboLock",1}};
		};	
	};
};

class cinder_gate_kit_locked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERGATELOCKED;
	descriptionShort = $STR_EPOCH_CINDERGATELOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderGateLocked_DZ";
		};
	};
};

class cinder_bunker_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBUNKER;
	descriptionShort = $STR_EPOCH_CINDERBUNKER_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Concrete_Bunker_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239_1_2;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"cinder_bunker_kit_locked",1}};
			input[] = {{"cinder_bunker_kit",1},{"ItemComboLock",1}};
		};	
	};
};

class cinder_bunker_kit_locked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBUNKERLOCKED;
	descriptionShort = $STR_EPOCH_CINDERBUNKER_LOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Concrete_Bunker_Locked_DZ";
		};
	};
};

class metal_drawbridge_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALDRAWBRIDGE;
	descriptionShort = $STR_EPOCH_METALDRAWBRIDGE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Metal_Drawbridge_DZ";
		};
	};
};

class metal_drawbridge_kit_locked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALDRAWBRIDGELOCKED;
	descriptionShort = $STR_EPOCH_METALDRAWBRIDGELOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Metal_DrawbridgeLocked_DZ";
		};
	};
};


class ItemWoodFloor: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FLOORCEILING;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_FLOORCEILING_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloor_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_ACTION_WOODFLOORSTAIRS;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodFloorStairs",1}};
			input[] = {{"ItemWoodStairs",1},{"ItemWoodFloor",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_232c;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodFloor4x",1}};
			input[] = {{"ItemWoodFloor",4}};
		};		
	};
};

class ItemWoodFloor4x: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FLOORCEILING4x;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_FLOORCEILING_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloor4x_DZ";
		};		
	};
};

class ItemWoodFloorStairs: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODFLOORSTAIRS;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODFLOORSTAIRS_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloorStairs_DZ";
		};	
	};
};

class ItemWoodFloorHalf: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FLOORCEILINGHALF;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_FLOORCEILING_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloorHalf_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodFloor",1}};
			input[] = {{"ItemWoodFloorHalf",2}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_ACTION_WOODENTRIANGLEWALL;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemTriangleWoodWall",1}};
			input[] = {{"ItemWoodFloorQuarter",1},{"ItemWoodFloorHalf",1}};
		};		
	};
};

class ItemWoodFloorQuarter: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FLOORCEILINGQUARTER;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_FLOORCEILING_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloorQuarter_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_232a;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodFloorHalf",1}};
			input[] = {{"ItemWoodFloorQuarter",2}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_ACTION_WOODENTRIANGLEWALL;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemTriangleWoodWall",1}};
			input[] = {{"ItemWoodFloorQuarter",1},{"ItemWoodFloorHalf",1}};
		};		
	};
};

class ItemWoodStairs: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODSTAIRS;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODSTAIRS;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodStairsSans_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_233;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodStairsSupport",1}};
			input[] = {{"ItemWoodStairs",1},{"PartWoodLumber",2}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_ACTION_WOODFLOORSTAIRS;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodFloorStairs",1}};
			input[] = {{"ItemWoodStairs",1},{"ItemWoodFloor",1}};
		};		
	};
};

class ItemWoodStairsSupport: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODSTAIRSWITHSUPPORTS;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODSTAIRSWITHSUPPORTS_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodStairs_DZ";
		};
	};
};

class ItemWoodLadder: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODLADDER;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODLADDER;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLadder_DZ";
		};
	};
};

class ItemWoodHandRail: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODRAIL;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODRAIL_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodHandrail_DZ";
		};
	};
};

class ItemWoodPillar: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODPILLAR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODPILLAR_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodPillar_DZ";
		};
	};
};

class ItemWoodWall: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODWALL;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODWALL_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWall_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_234;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","Handsaw_DZE"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallDoor",1}};
			input[] = {{"ItemWoodWall",1}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_PLAYER_235;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop","Handsaw_DZE"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWindow",1}};
			input[] = {{"ItemWoodWall",1},{"PartGlass",1}};
		};
		class Crafting2 
		{
			text = $STR_EPOCH_PLAYER_236;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodWallLg",1}};
			input[] = {{"ItemWoodWall",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class ItemTriangleWoodWall: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_TRIANGLE_WOODWALL;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_TRIANGLE_WOODWALL_DESC;
	
	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodTriangleWall_DZ";
		};
	};
};

class ItemWoodWallThird: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODWALLTHIRDPART;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODWALLTHIRDPART_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWallThird_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_237;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodWall",1}};
			input[] = {{"ItemWoodWallThird",3}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_PLAYER_237_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodGateFrame",1}};
			input[] = {{"ItemWoodWallThird",6}};
		};		
	};
};

class ItemWoodWallWindow: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WALLWITHWINDOW;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WALLWITHWINDOW_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWallWin_DZ";
		};
	};
};

class ItemWoodWallDoor: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WALLWITHDOORWAY;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WALLWITHDOORWAY_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWallDoor_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_238;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodWallWithDoor",1}};
			input[] = {{"ItemWoodWallDoor",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class ItemWoodWallWithDoor: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WALLWITHDOOR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WALLWITHDOOR_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodDoor";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemWoodWallWithDoorLocked",1}};
			input[] = {{"ItemWoodWallWithDoor",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodWallWithDoorLocked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WALLWITHDOORLOCKED;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WALLWITHDOORLOCKED_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodDoorLocked";
		};
	};
};

class ItemWoodWallGarageDoor: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODGARAGEDOOR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODGARAGEDOOR_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_GarageWoodDoor";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemWoodWallGarageDoorLocked",1}};
			input[] = {{"ItemWoodWallGarageDoor",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodWallGarageDoorLocked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODGARAGEDOORLOCKED;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODGARAGEDOORLOCKED_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_GarageWoodDoorLocked";
		};
	};
};

class ItemWoodOpenTopGarageDoor: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODOPENTOPGARAGEDOOR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODOPENTOPGARAGEDOOR_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodOpenTopGarageDoor";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemWoodOpenTopGarageDoorLocked",1}};
			input[] = {{"ItemWoodOpenTopGarageDoor",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodOpenTopGarageDoorLocked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODOPENTOPGARAGEDOORLOCKED;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODOPENTOPGARAGEDOORLOCKED_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodOpenTopGarageLocked";
		};
	};
};

class ItemWoodWallLg: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWOODWALL;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_LARGEWOODWALL_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLargeWall_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_234;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodWallDoorLg",1}};
			input[] = {{"ItemWoodWallLg",1}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_PLAYER_235;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodWallWindowLg",1}};
			input[] = {{"ItemWoodWallLg",1},{"PartGlass",1}};
		};
		class Crafting2 
		{
			text = $STR_EPOCH_PLAYER_240;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodWallGarageDoor",1}};
			input[] = {{"ItemWoodWallLg",1},{"PartWoodLumber",2}};
		};
		class Crafting3 
		{
			text = $STR_EPOCH_PLAYER_240_1;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodOpenTopGarageDoor",1}};
			input[] = {{"ItemWoodWallLg",1},{"PartWoodLumber",2}};
		};		
	};
};

class ItemWoodWallWindowLg: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWALLWITHWINDOW;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_LARGEWALLWITHWINDOW_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLargeWallWin_DZ";
		};
	};
};

class ItemWoodWallDoorLg: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWALLWITHDOORWAY;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_LARGEWALLWITHDOORWAY_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLargeWallDoor_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_238;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodWallWithDoorLg",1}};
			input[] = {{"ItemWoodWallDoorLg",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class ItemWoodWallWithDoorLg: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWALLWITHDOOR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_LARGEWALLWITHDOOR_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_LargeWoodDoor";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemWoodWallWithDoorLgLocked",1}};
			input[] = {{"ItemWoodWallWithDoorLg",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodWallWithDoorLgLocked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWALLWITHDOORLOCKED;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_LARGEWALLWITHDOORLOCKED_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_LargeWoodDoorLocked";
		};
	};
};

class ItemWoodGateFrame: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODGATEFRAME;
	descriptionShort = $STR_EPOCH_WOODGATEFRAME_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodGateFrame_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239_1_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","Handsaw_DZE"};
			output[] = {{"ItemWoodGate",1}};
			input[] = {{"ItemWoodGateFrame",1},{"PartWoodPlywood",8},{"PartWoodLumber",2},{"equip_nails",1}};
		};
	};
};

class ItemWoodGate: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODGATE;
	descriptionShort = $STR_EPOCH_WOODGATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodGate";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemWoodGateLocked",1}};
			input[] = {{"ItemWoodGate",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodGateLocked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODGATELOCKED;
	descriptionShort = $STR_EPOCH_WOODGATELOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodGateLocked";
		};
	};
};

class door_frame_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DOORWAY;
	descriptionShort = $STR_EPOCH_DOORWAY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "DoorFrame_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_238;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"door_kit",1}};
			input[] = {{"door_frame_kit",1},{"ItemPole",1},{"ItemTankTrap",1}};
		};		
	};
};

class door_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DOOR;
	descriptionShort = $STR_EPOCH_DOOR_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Door_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"door_locked_kit",1}};
			input[] = {{"door_kit",1},{"ItemComboLock",1}};
		};
	};
};

class door_locked_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DOORLOCKED;
	descriptionShort = $STR_EPOCH_DOOR_LOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "DoorLocked_DZ";
		};
	};
};