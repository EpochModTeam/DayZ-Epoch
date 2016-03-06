class ItemTrapTripwireCans : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_can.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_can.paa";
	displayName = $STR_ITEM_NAME_TRIPWIRE_CANS;
	descriptionShort = $STR_ITEM_DESC_TRIPWIRE_CANS;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "; [_id,'Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemTrapTripwireCans"};
			create = "Trap_Cans";
		};
	};
};

class ItemTrapTripwireFlare : ItemTrapTripwireCans
{
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_flare.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_flare.paa";
	displayName = $STR_ITEM_NAME_TRIPWIRE_FLARE;
	descriptionShort = $STR_ITEM_DESC_TRIPWIRE_FLARE;

	class ItemActions : ItemActions
	{
		class Build : Build
		{
			consume[] = {"ItemTrapTripwireFlare"};
			create = "TrapTripwireFlare";
		};
	};
};

class ItemTrapTripwireGrenade : ItemTrapTripwireCans
{
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_grenade.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_grenade.paa";
	displayName = $STR_ITEM_NAME_TRIPWIRE_GRENADE;
	descriptionShort = $STR_ITEM_DESC_TRIPWIRE_GRENADE;

	class ItemActions : ItemActions
	{
		class Build : Build
		{
			consume[] = {"ItemTrapTripwireGrenade"};
			create = "TrapTripwireGrenade";
		};
	};
};

class ItemTrapTripwireSmoke : ItemTrapTripwireCans
{
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_smoke.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_smoke.paa";
	displayName = $STR_ITEM_NAME_TRIPWIRE_SMOKE;
	descriptionShort = $STR_ITEM_DESC_TRIPWIRE_SMOKE;

	class ItemActions : ItemActions
	{
		class Build : Build
		{
			consume[] = {"ItemTrapTripwireSmoke"};
			create = "TrapTripwireSmoke";
		};
	};
};