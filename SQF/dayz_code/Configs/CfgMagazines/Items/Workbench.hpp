class ItemWorkBench : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemWorkBench;//"Work Bench (Packed)"
	model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
	picture = "\z\addons\dayz_buildings\equip\item_workbench.paa"; // add to PBO
	descriptionShort = $STR_BLD_desc_ItemWorkBench;//"A Folded Workbench, required for House Building and Some Crafting"
	vehicle = "WorkBench";
	sfx = "tentunpack";
	class ItemActions {
		class Build {
			text = $STR_BLD_build_ItemWorkBench;//"place WorkBench"
			script = "; ['ItemWorkBench','Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {};
			consume[] = {"ItemWorkBench"};
			create = "WorkBench";
		};
	};
};