#include "TraderCategory.hpp"

class CfgServerTrader {

	//Hero Trader for Example
	class RU_Functionary1 {		//Classname of the person
		humanity = "hero";		//If Hero, normal or bandit
		category[] = {			//{"DisplayName","LinkedCategory"}
			{"Ammunition","ammunition_1"},
			{"Clothes","clothes_1"},
			{"Helicopter Armed","heliarmed_1"},
			{"Military Armed","militaryarmed_1"},
			{"Trucks Armed","truckarmed_1"},
			{"Weapons","weapons_1"}
		};
	};
};