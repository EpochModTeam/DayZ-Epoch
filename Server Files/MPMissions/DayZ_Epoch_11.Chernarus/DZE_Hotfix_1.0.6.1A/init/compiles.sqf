if (!isDedicated) then {
	dayz_NutritionSystem = {
		private ["_type","_baseRegen","_nutrition","_calorieCount","_hungerCount","_thirstCount","_tempCount","_Thirst","_Hunger","_bloodregen","_golbalNutrition"];
		_type = _this select 0;
		_baseRegen = _this select 1;
		_nutrition = _this select 2;
		_calorieCount = ((_this select 2) select 0);
		_hungerCount = ((_this select 2) select 1);
		_thirstCount = ((_this select 2) select 2);
		_tempCount = ((_this select 2) select 3);	
		if (_calorieCount > 0) then {
			_hungerCount = _hungerCount + (SleepFood * (((ln ((_calorieCount / 3610) * 100)) * (1 - (dayz_hunger / SleepFood))) / 100));
			_thirstCount = _thirstCount + (SleepWater * (((ln ((_calorieCount / 3610) * 100)) * (1 - (dayz_thirst / SleepWater))) / 100));
		};
		switch (_type) do {
			case "FoodDrink": {
				if (_hungerCount > 0) then { 
					if (dayz_hunger > _hungerCount) then {
						dayz_hunger = dayz_hunger - (_hungerCount);  
					} else {
						dayz_hunger = 0;
					};
				};
				if (_thirstCount > 0) then { 
					if (dayz_thirst > _thirstCount) then {
						dayz_thirst = dayz_thirst - _thirstCount;
					} else {
						dayz_thirst = 0;
					};
				};
				if (_tempCount > 0) then { dayz_temperatur = dayz_temperatur + _tempCount; };
				if (_calorieCount > 0) then { dayz_nutrition = dayz_nutrition + _calorieCount; };
				if (_baseRegen > 0) then { r_player_bloodregen = r_player_bloodregen + _baseRegen; };
			};
			case "Working": {
				if (_calorieCount > 0) then { dayz_nutrition = dayz_nutrition - (_calorieCount / ((DZE_NutritionDivisor select 0) max 0.1)); };
				if (_thirstCount > 0) then { dayz_thirst = dayz_thirst + (_thirstCount / ((DZE_NutritionDivisor select 1) max 0.1)); };
				if (_hungerCount > 0) then { dayz_hunger = dayz_hunger + (_hungerCount / ((DZE_NutritionDivisor select 2) max 0.1)); };
				if (_tempCount > 0) then { dayz_temperatur = dayz_temperatur + (_tempCount / ((DZE_NutritionDivisor select 3) max 0.1)); };
			};
		};
		dayz_thirst = (dayz_thirst min SleepWater) max 0;
		dayz_hunger = (dayz_hunger min SleepFood) max 0;
		dayz_temperatur = (dayz_temperatur min dayz_temperaturmax) max dayz_temperaturmin;
	};
	Diag_Log "DZE_Hotfix_1.0.6.1A: dayz_NutritionSystem patched";
};