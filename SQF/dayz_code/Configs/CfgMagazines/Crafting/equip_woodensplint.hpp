class equip_woodensplint : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_WOODENSPLINT;
	descriptionShort = $STR_ITEM_DESC_WOODENSPLINT;
	model = "\z\addons\dayz_communityassets\models\woodensplint.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_woodensplint_ca.paa";
	type = 256;
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_BRACE_LEG;
			script = "spawn player_useMeds;";
		};
	};
};

