class ItemCarBomb : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_ITEM_NAME_equip_carbomb;
	model = "\ca\weapons\explosive.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\carbomb.paa";
	descriptionShort = $STR_ITEM_DESC_equip_carbomb;
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_attach_carbomb;
			script = "spawn player_attach_bomb;";
		};
	};
};	