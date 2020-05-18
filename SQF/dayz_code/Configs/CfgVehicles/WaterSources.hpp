#define ACTION_DRINK class Drink\
{\
	displayName = $STR_ACTIONS_DRINK2;\
	displayNameDefault = $STR_ACTIONS_DRINK2;\
	priority = 3;\
	radius = 3;\
	position = "";\
	showWindow = 1;\
	onlyForPlayer = 1;\
	shortcut = "";\
	condition = "(['Drink',this] call userActionConditions)";\
	statement = "['hands'] spawn player_fillWater;";\
};

class Land_pumpa: House
{
	class UserActions {ACTION_DRINK};
};

class Land_Misc_Well_C_EP1: House_EP1
{
	class UserActions {ACTION_DRINK};
};

class Land_Misc_Well_L_EP1: House_EP1
{
	class UserActions {ACTION_DRINK};
};

class Land_Barrel_water: Thing
{
	class UserActions {ACTION_DRINK};
};

#undef ACTION_DRINK