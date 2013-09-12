class CfgNonAIVehicles {
	class StreetLamp {
	animated = 0;
	brightness = 0.5;
	colorambient[] = {0.02, 0.02, 0.02};
	colordiffuse[] = {0.27, 0.25, 0.15};
	destrtype = "DestructTree";
	model = "";
	simulation = "StreetLamp";
		class HitPoints {
				 class HitBulb {
						 armor = 1;
						 material = 60;
						 name = "lampa";
						 passThrough = 1;
				 };
		 };
		 
		 class Reflectors
		 {
				 class LampLight {
						 color[] = {0.27, 0.25, 0.15, 1.0};
						 ambient[] = {0.27, 0.25, 0.15, 1.0};
						 position = "Light";
						 direction = "";
						 hitpoint = "lampa";
						 selection = "";
						 size = 0.5;
						 brightness = 0.5;
				 };
		 };
	 armorLights = 0.4;
		
	};
	
	class StreetLamp_BaseWeakYellow : StreetLamp {
		brightness = 0.5;
		scope = 2;
	};
	
	class StreetLamp_BaseMediumOrange : StreetLamp {
		brightness = 0.5;
		scope = 2;
	};
	
	class StreetLamp_BaseMediumPale : StreetLamp {
		brightness = 0.5;
		scope = 2;
	};
	
	class StreetLamp_BaseStrongPale : StreetLamp {
		brightness = 0.5;
		scope = 2;
	};
	
	class Land_Lamp_Small_EP1 : StreetLamp {
		brightness = 0;
		scope = 2;
		class HitPoints {
			class HitBulb {
				armor = 1;
				material = 60;
				name = "lampa";
				passthrough = 1;
			};
		};
		class Reflectors {
			class LampLight {
				ambient[] = {0.27, 0.25, 0.15, 1};
				brightness = 0.5;
				color[] = {0.27, 0.25, 0.15, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
	
	class Land_Lamp_Street1_EP1 : StreetLamp {
		brightness = 0;
		scope = 2;
		class HitPoints {
			class HitBulb {
				armor = 1;
				material = 60;
				name = "lampa";
				passthrough = 1;
			};
		};
		class Reflectors {
			class LampLight {
				ambient[] = {0.27, 0.25, 0.15, 1};
				brightness = 0.5;
				color[] = {0.27, 0.25, 0.15, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
	
	class Land_Lamp_Street2_EP1 : StreetLamp {
		brightness = 0;
		scope = 2;
		class HitPoints {
			class HitBulb {
				armor = 1;
				material = 60;
				name = "lampa";
				passthrough = 1;
			};
		};
		class Reflectors {
			class LampLight {
				ambient[] = {0.27, 0.25, 0.15, 1};
				brightness = 0.5;
				color[] = {0.27, 0.25, 0.15, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
	
	class Land_Lampa_Ind_EP1 : StreetLamp {
		brightness = 0;
		scope = 2;
		class HitPoints {
			class HitBulb {
				armor = 1;
				material = 60;
				name = "lampa";
				passthrough = 1;
			};
		};
		class Reflectors {
			class LampLight {
				ambient[] = {0.27, 0.25, 0.15, 1};
				brightness = 0.5;
				color[] = {0.27, 0.25, 0.15, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
	
	class Land_PowLines_Conc2L_EP1 : StreetLamp {
		brightness = 0;
		scope = 2;
		class HitPoints {
			class HitBulb {
				armor = 1;
				material = 60;
				name = "lampa";
				passthrough = 1;
			};
		};
		class Reflectors {
			class LampLight {
				ambient[] = {0.27, 0.25, 0.15, 1};
				brightness = 0.5;
				color[] = {0.27, 0.25, 0.15, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
	
	class Land_lampa_sidl : StreetLamp {
		scope = 2;
		model = "\ca\buildings\Misc\lampa_sidl";
		class HitPoints {
			class HitBulb {
				armor = 1;
				material = 60;
				name = "lampa";
				passthrough = 1;
			};
		};
		class Reflectors {
			class LampLight {
				ambient[] = {0.27, 0.25, 0.15, 1};
				brightness = 0.5;
				color[] = {0.27, 0.25, 0.15, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
	
	class Land_lampa_sidl_2 : StreetLamp {
		scope = 2;
		model = "\ca\buildings\Misc\lampa_sidl_2";
		class HitPoints {
			class HitBulb {
				armor = 1;
				material = 60;
				name = "lampa";
				passthrough = 1;
			};
		};
		class Reflectors {
			class LampLight {
				ambient[] = {0.27, 0.25, 0.15, 1};
				brightness = 0.5;
				color[] = {0.27, 0.25, 0.15, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
	
	class Land_lampa_sidl_3 : StreetLamp {
		scope = 2;
		model = "\ca\buildings\Misc\lampa_sidl_3";
		class HitPoints {
			class HitBulb {
				armor = 1;
				material = 60;
				name = "lampa";
				passthrough = 1;
			};
		};
		class Reflectors {
			class LampLight {
				ambient[] = {0.27, 0.25, 0.15, 1};
				brightness = 0.5;
				color[] = {0.27, 0.25, 0.15, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
	
	class Land_lampa_ind : StreetLamp {
		scope = 2;
		model = "\ca\buildings\Misc\lampa_ind";
		class HitPoints {
			class HitBulb {
				armor = 1;
				material = 60;
				name = "lampa";
				passthrough = 1;
			};
		};
		class Reflectors {
			class LampLight {
				ambient[] = {0.27, 0.25, 0.15, 1};
				brightness = 0.5;
				color[] = {0.27, 0.25, 0.15, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
	
	class Land_lampa_ind_zebr : StreetLamp {
		scope = 2;
		model = "\ca\buildings\Misc\lampa_ind_zebr";
		class HitPoints {
			class HitBulb {
				armor = 1;
				material = 60;
				name = "lampa";
				passthrough = 1;
			};
		};
		class Reflectors {
			class LampLight {
				ambient[] = {0.27, 0.25, 0.15, 1};
				brightness = 0.5;
				color[] = {0.27, 0.25, 0.15, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
};
