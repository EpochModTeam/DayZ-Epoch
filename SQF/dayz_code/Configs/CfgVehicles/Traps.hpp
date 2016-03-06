class TrapItems : NonStrategic {};

class BearTrap_DZ : TrapItems {
	scope = public;
	destrType = "DestructNo";
	displayName = $STR_EQUIP_NAME_BEARTRAP;
	descriptionShort = $STR_EQUIP_DESC_BEARTRAP;
	model = "\dayz_equip\models\bear_trap.p3d";

	script = "beartrap"; // compiled script variable name (used by server side loop)
	initState = 0; // initial armed state
	singleUse = 0;

	class Eventhandlers {
		init = "['init', _this select 0] spawn beartrap;";
	};

	class AnimationSources {
		class LeftShutter {
			source = "user";
			animPeriod = 0.1;
			initPhase = 1;
		};

		class RightShutter {
			source = "user";
			animPeriod = 0.1;
			initPhase = 1;
		};
	};

	class UserActions {
		class OpenTrap {
			position = "";
			displayName = $STR_BEARTRAP_ARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase 'LeftShutter' == 1";
			statement = "['arm', this] spawn beartrap;";
		};

		class CloseTrap {
			position = "";
			displayName = $STR_BEARTRAP_DISARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase 'LeftShutter' == 0";
			statement = "['disarm', this] spawn beartrap;";
		};

		class CollectTrap {
			position = "";
			displayName = $STR_BEARTRAP_TAKE;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase 'LeftShutter' == 1";
			statement = "['remove', this] spawn beartrap;";
		};
	};
};
class Bomb
{
	condition = "bomb";
	class Circle
	{
		type = "line";
		points[] = {
		{ "WeaponAim",
		{ 0,-0.1125 },1 },
		{ "WeaponAim",
		{ 0.05,-0.097875 },1 },
		{ "WeaponAim",
		{ 0.087,-0.05625 },1 },
		{ "WeaponAim",
		{ 0.1,0 },1 },
		{ "WeaponAim",
		{ 0.087,0.05625 },1 },
		{ "WeaponAim",
		{ 0.05,0.097875 },1 },
		{ "WeaponAim",
		{ 0,0.1125 },1 },
		{ "WeaponAim",
		{ -0.05,0.097875 },1 },
		{ "WeaponAim",
		{ -0.087,0.05625 },1 },
		{ "WeaponAim",
		{ -0.1,0 },1 },
		{ "WeaponAim",
		{ -0.087,-0.05625 },1 },
		{ "WeaponAim",
		{ -0.05,-0.097875 },1 },
		{ "WeaponAim",
		{ 0,-0.1125 },1 },
		{                },
		{ "Velocity",0.001,"WeaponAim",
		{ 0.0,0.0 },1 },
		{ "Velocity",
		{ 0.0,0.0 },1 },
		{                },
		{ "Target",
		{ 0,-0.07875 },1 },
		{ "Target",
		{ 0.07,0 },1 },
		{ "Target",
		{ 0,0.07875 },1 },
		{ "Target",
		{ -0.07,0 },1 },
		{ "Target",
		{ 0,-0.07875 },1 }};
	};
};

class TrapBearTrapFlare : TrapItems {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "z\addons\dayz_communityassets\models\trap_beartrap_flare.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 0;
	armor = 400;
	displayName = $STR_ITEM_NAME_BEAR_TRAP_FLARE;
	vehicleClass = "Fortifications";

	script = "beartrapflare"; // compiled script variable name (used by server side loop)
	initState = 1; // initial armed state
	singleUse = 1; // gets replaced by BearTrap_DZ due to animation issues

	class Eventhandlers {
		init = "['init', _this select 0] spawn beartrapflare;";
	};

	class UserActions {
		class ArmTrap {
			position = "";
			displayName = $STR_BEARTRAP_ARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['arm', this] spawn beartrapflare;";
		};

		class DisarmTrap {
			position = "";
			displayName = $STR_BEARTRAP_DISARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "(this getVariable ['armed', false])";
			statement = "['disarm', this] spawn beartrapflare;";
		};

		class CollectTrap {
			position = "";
			displayName = $STR_BEARTRAP_TAKE;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['remove', this] spawn beartrapflare;";
		};
	};
};

class TrapBearTrapSmoke : TrapItems {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "z\addons\dayz_communityassets\models\trap_beartrap_smoke.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 0;
	armor = 400;
	displayName = $STR_ITEM_NAME_BEAR_TRAP_SMOKE;
	vehicleClass = "Fortifications";

	script = "beartrapsmoke"; // compiled script variable name (used by server side loop)
	initState = 1; // initial armed state
	singleUse = 1; // gets replaced by BearTrap_DZ due to animation issues

	class Eventhandlers {
		init = "['init', _this select 0] spawn beartrapsmoke;";
	};

	class UserActions {
		class ArmTrap {
			position = "";
			displayName = $STR_BEARTRAP_ARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['arm', this] spawn beartrapsmoke;";
		};

		class DisarmTrap {
			position = "";
			displayName = $STR_BEARTRAP_DISARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "(this getVariable ['armed', false])";
			statement = "['disarm', this] spawn beartrapsmoke;";
		};

		class CollectTrap {
			position = "";
			displayName = $STR_BEARTRAP_TAKE;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['remove', this] spawn beartrapsmoke;";
		};
	};
};

class Trap_Cans : TrapItems {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "z\addons\dayz_communityassets\models\tripwire_cans.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 0;
	armor = 400;
	displayName = $STR_ITEM_NAME_TRIPWIRE_CANS;
	vehicleClass = "Fortifications";

	script = "tripcans"; // compiled script variable name (used by server side loop)
	initState = 1; // initial armed state
	singleUse = 0;

	class Eventhandlers {
		init = "['init', _this select 0] spawn tripcans;";
	};

	class UserActions {
		class ArmTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_ARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['arm', this] spawn tripcans;";
		};

		class DisarmTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_DISARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "(this getVariable ['armed', false])";
			statement = "['disarm', this] spawn tripcans;";
		};

		class CollectTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_TAKE;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['remove', this] spawn tripcans;";
		};
	};
};

class TrapTripwireFlare : TrapItems {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "z\addons\dayz_communityassets\models\trap_tripwire_flare.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 0;
	armor = 400;
	displayName = $STR_ITEM_NAME_TRIPWIRE_FLARE;
	vehicleClass = "Fortifications";

	script = "tripflare"; // compiled script variable name (used by server side loop)
	initState = 1; // initial armed state
	singleUse = 0;

	class Eventhandlers {
		init = "['init', _this select 0] spawn tripflare;";
	};

	class UserActions {
		class ArmTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_ARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['arm', this] spawn tripflare;";
		};

		class DisarmTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_DISARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "(this getVariable ['armed', false])";
			statement = "['disarm', this] spawn tripflare;";
		};

		class CollectTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_TAKE;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['remove', this] spawn tripflare;";
		};
	};
};

class TrapTripwireGrenade : TrapItems {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "z\addons\dayz_communityassets\models\trap_tripwire_grenade.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 0;
	armor = 400;
	displayName = $STR_ITEM_NAME_TRIPWIRE_GRENADE;
	vehicleClass = "Fortifications";

	script = "tripgrenade"; // compiled script variable name (used by server side loop)
	initState = 1; // initial armed state
	singleUse = 0;

	class Eventhandlers {
		init = "['init', _this select 0] spawn tripgrenade;";
	};

	class UserActions {
		class ArmTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_ARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['arm', this] spawn tripgrenade;";
		};

		class DisarmTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_DISARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "(this getVariable ['armed', false])";
			statement = "['disarm', this] spawn tripgrenade;";
		};

		class CollectTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_TAKE;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['remove', this] spawn tripgrenade;";
		};
	};
};

class TrapTripwireSmoke : TrapItems {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "z\addons\dayz_communityassets\models\trap_tripwire_smoke.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 0;
	armor = 400;
	displayName = $STR_ITEM_NAME_TRIPWIRE_SMOKE;
	vehicleClass = "Fortifications";

	script = "tripsmoke"; // compiled script variable name (used by server side loop)
	initState = 1; // initial armed state
	singleUse = 0;

	class Eventhandlers {
		init = "['init', _this select 0] spawn tripsmoke;";
	};

	class UserActions
	{
		class ArmTrap 
		{
			position = "TripA";
			displayName = $STR_BEARTRAP_ARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['arm', this] spawn tripsmoke;";
		};

		class DisarmTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_DISARM;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "(this getVariable ['armed', false])";
			statement = "['disarm', this] spawn tripsmoke;";
		};

		class CollectTrap {
			position = "TripA";
			displayName = $STR_BEARTRAP_TAKE;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['armed', false])";
			statement = "['remove', this] spawn tripsmoke;";
		};
	};
};
