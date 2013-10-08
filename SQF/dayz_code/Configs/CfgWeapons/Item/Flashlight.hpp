class MeleeFlashlight : Pistol {
		class ItemActions {
			class Toolbelt {
				text = "Add to toolbelt";
			};
		};
	};
	
	class ItemFlashlight : ItemCore {
		class ItemActions {
			class Toolbelt {
				text = "Remove from toolbelt";
			};
			class ToBack
			{
				text=$STR_ACTIONS_2BACK;
				script="spawn player_addtoBack;";
				use[]=
				{
					"ItemFlashlight"
				};
				output[]=
				{
					"MeleeFlashlight"
				};
			};
		};
	}; 

	class MeleeFlashlightRed : MeleeFlashlight {
		class ItemActions {
			class Toolbelt {
				text = "Add to toolbelt";
			};
		};
	};

	class ItemFlashlightRed : ItemCore {
		class ItemActions {
			class Toolbelt {
				text = "Remove from toolbelt";
			};
			class ToBack
			{
				text=$STR_ACTIONS_2BACK;
				script="spawn player_addtoBack;";
				use[]=
				{
					"ItemFlashlightRed"
				};
				output[]=
				{
					"MeleeFlashlightRed"
				};
			};
		};
	};