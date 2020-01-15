class Land_Ind_Oil_Pump_EP1_DZE : House {
	scope = 1;
	model = "\ca\Structures_E\Ind\Ind_Oil_Mine\Ind_Oil_Pump_EP1";
	vehicleClass = "Test";
    ladders[] = {{"start", "end"}};
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\Ca\Structures_E\Ind_Oil_Pump:\verHistory\AB_packlog\Ind\Ind_Oil_Mine\Ind_Oil_Pump_ruins_EP1.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	featureSize = 10;
	//simulation = "fountain";
	//sound = "Oil_pump";
};