class ATV_US_EP1: ATV_Base_EP1 {
	crew = "";
	faction = "";
	displayname = $STR_VEH_NAME_ATV;
	maxspeed = 80;
	scope = 2;
	side = 1;
	typicalcargo[] = {""};
	class HitPoints: Hitpoints {
		class HitBody {
			armor = 1;
			material = -1;
			name = "karoserie";
			passthrough = 1;
			visual = "";
		};
		class HitEngine {
			armor = 2;
			material = -1;
			name = "motor";
			passthrough = 0;
			visual = "motor";
		};
		class HitFuel {
			armor = 1;
			material = -1;
			name = "palivo";
			passthrough = 0;
			visual = "";
		};
		class HitLFWheel:HitLFWheel {
			armor = 1;
			material = -1;
			name = "wheel_1_1_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitLBWheel:HitLBWheel {
			armor = 1;
			material = -1;
			name = "wheel_1_2_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitRFWheel:HitRFWheel {
			armor = 1;
			material = -1;
			name = "wheel_2_1_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitRBWheel:HitRBWheel {
			armor = 1;
			material = -1;
			name = "wheel_2_2_steering";
			passthrough = 0.3;
			visual = "";
		};
	};
};