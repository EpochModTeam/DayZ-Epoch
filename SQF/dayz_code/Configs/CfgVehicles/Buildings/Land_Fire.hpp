class flamable_DZ: House
{
	model = "z\addons\dayz_communityassets\models\waterHoleProxy";
	displayName = "";
	icon = "\ca\misc3\data\Icons\icon_fireplace_ca.paa";
	mapSize = 0;
	scope=2;
	armor=1000;
	simulation="fire";
	vehicleClass="Misc";

	class effects
	{
		class Light1
		{
			simulation = "light";
			type = "SmallFireLight";
		};
		class sound
		{
			simulation = "sound";
			type = "Fire";
		};
		class Fire1
		{
			simulation = "particles";
			type = "SmallFireF";
		};
		class Smoke1
		{
			simulation = "particles";
			type = "SmallFireS";
		};
	};
};

class Land_Fire: House
{
	model = "z\addons\dayz_communityassets\models\fire";
	displayName = "$STR_MISC_FIRE";
	icon = "\ca\misc3\data\Icons\icon_fireplace_ca.paa";
	mapsize = 1.03;
	scope = 2;
	accuracy=1;
	armor = 150;
	simulation="fire";
	vehicleClass = "Misc";
	destrtype = "DestructNo";
	keephorizontalplacement = 0;
	_generalmacro = "Land_FirePlace_F";

	class UserActions {
		class lightup {
			displayNameDefault = "Light fire";
			displayName = "Light fire";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,true] call dayz_inflame_showMenu";
			statement = "[this,true] call dayz_inflame";
		};
		class putout {
			displayNameDefault = "Put out fire";
			displayName = "Put out fire";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,false] call dayz_inflame_showMenu";
			statement = "[this,false] call dayz_inflame";
		};
	};
	actionBegin1 = "lightup";
	actionEnd1 = "lightup";
};
class Land_Fire_barrel : Land_Fire
{
	model = "z\addons\dayz_communityassets\models\Barel7"; 
	icon="\Ca\misc\data\icons\i_beczka_CA.paa";
	displayName=$STR_MISC_FIRE_BARREL;
	destrType=DestructEngine;
	class UserActions {
		class lightup {
			displayNameDefault = "Light fire";
			displayName = "Light fire";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,true] call dayz_inflame_showMenu_other";
			statement = "[this,true] call dayz_inflame_other";
		};
		class putout {
			displayNameDefault = "Put out fire";
			displayName = "Put out fire";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,false] call dayz_inflame_showMenu_other";
			statement = "[this,false] call dayz_inflame_other";
		};
	};
};

class Land_Fire_DZ : Land_Fire {
		transportMaxMagazines = 1;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
	class UserActions {
		/*
		class upgrade {
			displayNameDefault = "Create Base Fire";
			displayName = "Create Base Fire";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "alive this";
			statement = "[this] spawn object_upgradeFireplace";
		};
		*/
		class lightup {
			displayNameDefault = "Light fire";
			displayName = "Light fire";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,true] call dayz_inflame_showMenu";
			statement = "[this,true] call dayz_inflame";
		};
		class putout {
			displayNameDefault = "Put out fire";
			displayName = "Put out fire";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,false] call dayz_inflame_showMenu";
			statement = "[this,false] call dayz_inflame";
		};
	};
	/*
	class Upgrade {
		requiredTools[] = {"ItemEtool"}; 
		requiredParts[] = {"ItemLog", "ItemLog", "ItemStone", "ItemStone", "ItemStone"};
		create = "Base_Fire_DZ";
	};
	*/
};
	
class Base_Fire_DZ : Land_Fire {
		displayName = "Permanent fireplace";
		transportMaxMagazines = 1;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		model = "\Ca\misc3\Campfire";
};

class Land_Camp_Fire_DZ : Land_Fire {
	transportMaxMagazines = 3;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	model = "\Ca\misc3\Campfire";
};		

class Misc_TyreHeap: Land_Fire
{
	scope=2;
	vehicleClass="Misc";
	model = "\ca\misc\Misc_TyreHeap";
	icon="\Ca\Misc3\Data\Icons\icomap_tyreHeap_CA.paa";
	mapSize = 2;
	displayName=$STR_DN_TYREHEAP;
	class UserActions {
		class lightup {
			displayNameDefault = "Light fire";
			displayName = "Light fire";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,true] call dayz_inflame_showMenu_other";
			statement = "[this,true] call dayz_inflame_other";
		};
		class putout {
			displayNameDefault = "Put out fire";
			displayName = "Put out fire";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,false] call dayz_inflame_showMenu_other";
			statement = "[this,false] call dayz_inflame_other";
		};
	};
};
