class Land_pumpa: House
{
	class UserActions
	{
		class Drink
		{
			displayName = $STR_ACTIONS_DRINK2;
			displayNameDefault = $STR_ACTIONS_DRINK2;
			priority = 3;
			radius = 3;
			position = "";
			showWindow = 1;
			onlyForPlayer = 1;
			shortcut = "";
			condition = "(['Drink',this] call userActionConditions)";
			statement = "'hands' spawn player_drinkWater;";
		};
	};
};