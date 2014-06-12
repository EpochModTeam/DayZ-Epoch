class USEC_ch53_E;
class CfgVehicles {
	class CH53_DZ : USEC_ch53_E {
		displayname = "USEC CH53E DZ";
		displaynameshort = "CH53_DZ";
		transportMaxWeapons = 25;
		transportMaxMagazines = 80;
		transportmaxbackpacks = 15;
	};
	class CH53_DZE : CH53_DZ {
		displayname = "USEC CH53E AL";
		displaynameshort = "CH53_AL";
		scope = 2;
		side = 2;
		typicalCargo[] = {};
		hiddenSelections[] = {};
		radartype = 0;
		class TransportMagazines{};
		class TransportWeapons{};
	};
};
