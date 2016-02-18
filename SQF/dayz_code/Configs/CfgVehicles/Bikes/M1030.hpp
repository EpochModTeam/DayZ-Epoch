class M1030: Motorcycle {
	class HitPoints {
		class HitEngine {
			armor = 1.2;
			material = 60;
			name = "engine";
			passthrough = 1;
			visual = "engine";
		};
		class HitRGlass {
			armor = 0.5;
			convexcomponent = "sklo predni P";
			material = -1;
			name = "sklo predni P";
			passthrough = 1;
			visual = "";
		};
		class HitLGlass {
			armor = 0.5;
			convexcomponent = "sklo predni L";
			material = -1;
			name = "sklo predni L";
			passthrough = 1;
			visual = "";
		};
		class HitBody {
			armor = 0.4;
			material = -1;
			name = "karoserie";
			passthrough = 1;
			visual = "karoserie";
		};
		class HitFuel {
			armor = 1.4;
			material = -1;
			name = "palivo";
			passthrough = 1;
			visual = "palivo";
		};
		class HitFWheel {
			armor = 0.05;
			material = -1;
			name = "Pravy predni tlumic";
			passthrough = 1;
			visual = "Pravy predni";
		};
		class HitBWheel {
			armor = 0.05;
			material = -1;
			name = "Pravy zadni tlumic";
			passthrough = 1;
			visual = "Pravy zadni";
		};
	};
};