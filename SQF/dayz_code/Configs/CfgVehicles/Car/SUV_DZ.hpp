class SUV_DZ: SUV_Base_EP1 {
	crew = "";
	faction = "BIS_TK_CIV";
	rarityurban = 0.8;
	scope = 2;
	side = 3;
	typicalcargo[] = {};
	class HitPoints : HitPoints {
		class HitLFWheel:HitLFWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_1_1_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitLBWheel:HitLBWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_1_2_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitRFWheel:HitRFWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_2_1_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitRBWheel:HitRBWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_2_2_steering";
			passthrough = 0.3;
			visual = "";
		};
		class HitFuel:HitFuel {
			armor = 0.14;
			material = -1;
			name = "palivo";
			passthrough = 1;
			visual = "";
		};
		class HitEngine:HitEngine {
			armor = 0.5;
			material = -1;
			name = "motor";
			passthrough = 1;
			visual = "";
		};
		class HitGlass1:HitGlass1 {
			armor = 0.1;
			material = -1;
			name = "glass1";
			passthrough = 0;
			visual = "glass1";
		};
		class HitGlass2:HitGlass2 {
			armor = 0.1;
			material = -1;
			name = "glass2";
			passthrough = 0;
			visual = "glass2";
		};
		class HitGlass3:HitGlass3 {
			armor = 0.1;
			material = -1;
			name = "glass3";
			passthrough = 0;
			visual = "glass3";
		};
		class HitGlass4:HitGlass4 {
			armor = 0.1;
			material = -1;
			name = "glass4";
			passthrough = 0;
			visual = "glass4";
		};
	};
};