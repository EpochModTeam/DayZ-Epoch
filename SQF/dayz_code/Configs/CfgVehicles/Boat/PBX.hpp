class PBX: RubberBoat {
	cargoaction[] = {"PBX_Cargo01", "PBX_Cargo02", "PBX_Cargo03"};
	crew = "";
	displayname = $STR_VEH_NAME_PBX;
	driveraction = "PBX_Driver";
	extcameraposition[] = {0, 4, -14};
	faction = "RU";
	icon = "\Ca\water\Data\map_ico\icomap_rubber_CA.paa";
	mapsize = 6;
	maxspeed = 68;
	model = "\ca\water\PBX";
	picture = "\ca\water\data\ico\pbx_CA.paa";
	scope = 2;
	side = 0;
	transportsoldier = 3;
	typicalcargo[] = {};
	class TransportMagazines {};
	class Library {
		libtextdesc = "The PBX is a Combat Rubber Craft very similar to the CRRC in design. It is intended to be used for maritime raids and infiltration, as well as riverine operations.";
	};
	class Damage {
		mat[] = {"ca\water\data\pbx_engine.rvmat", "ca\water\data\pbx_engine.rvmat", "ca\water\data\pbx_engine_destruct.rvmat", "ca\water\data\pbx_01.rvmat", "ca\water\data\pbx_01.rvmat", "ca\water\data\pbx_01_destruct.rvmat", "ca\water\data\pbx_02.rvmat", "ca\water\data\pbx_02.rvmat", "ca\water\data\pbx_02_destruct.rvmat"};
		tex[] = {};
	};
};