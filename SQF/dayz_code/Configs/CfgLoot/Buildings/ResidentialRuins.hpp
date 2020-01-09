class ResidentialRuins : Default
{
	zombieChance = 0.3;
	maxRoaming = 1;
	zombieClass[] = {"z_new_villager2","z_new_villager3","z_new_villager4"};
	lootChance = 0.4;
	lootGroup = ResidentialRuins;
};

class Land_ruin_corner_1: ResidentialRuins {
	zedPos[] = {{-0.96,-1.37,-1.03},{1.49,0.96,-1.03}};
	lootChance = 0.4;
	lootPos[] = {{-0.96,-1.37,-1.03},{1.49,0.96,-1.03}};
};

class Land_ruin_walldoor: ResidentialRuins {
	zedPos[] = {{-1.74,1.31,-1.06},{1.94,1.18,-1.06}};
	lootChance = 0.4;
	lootPos[] = {{-1.74,1.31,-1.06},{1.94,1.18,-1.06}};
};

class MAP_R_HouseV2_02: ResidentialRuins {
	lootPos[]={{-2.82,-4.04,-4.66},{-7.05,-1.15,-4.38},{-7.17,2.04,-4.38},{-3.92,1.89,-4.38},{-2.61,5.95,-4.38},{5.19,0.17,-4.38},{3.19,-0.88,-4.38},{3.73,2.1,-4.38},{3.58,5.92,-4.38},{7.5,5.85,-4.38},{6.97,3.27,-4.38}};
};

class MAP_R_HouseV2_03B: ResidentialRuins {
	lootPos[]={{5.57,9.21,-5.66},{0.69,8.73,-5.66},{-6.73,4.6,-5.73},{-3,-7.76,-5.73},{3.71,-6.76,-5.63}};
};

class MAP_R_HouseV2_04: ResidentialRuins {
	lootPos[]={{2.07,2.87,-4.08},{-1.93,3.56,-4.08},{-3.98,5.6,-4.08},{7.24,-1.47,-4.08}};
};

class MAP_R_HouseV_2L: ResidentialRuins {
	lootPos[]={{2.63,-2.77,-3.72},{-2.02,-1.33,-2.64},{2.78,4.61,-3.07}};
};

class MAP_ruiny_kopa_big: ResidentialRuins {
	lootPos[]={{0.61,-1.27,1.97},{-0.86,0,1.63},{-2.78,-1.26,0.4}};
};

class MAP_sara_domek_vilka_ruins: ResidentialRuins {
	lootPos[]={{0.23,1.59,1.11},{0.87,-0.51,1.57},{-0.13,-3.22,1.24},{0.77,-4.95,1.34}};
};

class Land_ruin_01: ResidentialRuins {
	lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
	zedPos[] = {{3.41309,0.271484,-1.71381},{3.00293,3.42773,-1.49768},{-4.25708,-0.181641,-1.45575},{0.622559,-1.73828,-1.36047}};
};
// ALT-MAP Support 
class Land_afbarabizna: ResidentialRuins {
	lootPos[] = {{-1.29395,-2.97461,-4.22117}};
	zedPos[] = {{-4.08594,2.62402,-4.22117},{4.95557,6.03857,-4.22117},{4.60156,5.50098,-0.168262},{-0.87793,-3.41406,-0.168266},{-0.065918,-1.86523,-0.512926}};
};
class Land_dum_zboreny: ResidentialRuins { //ruins
	lootPos[] = {{3.74902,4.38379,-2.37675}};
	zedPos[] = {{3.74902,4.38379,-2.37675},{-3.16797,3.21484,-2.37675},{-3.31787,3.25781,1.40384},{-5.35791,-1.67676,1.41383}};
};
class land_seb_residental: ResidentialRuins { //ruins
	lootPos[] = {{3.74902,4.38379,-2.37675}};
	zedPos[] = {{-4.70215,6.14648,-3.70411},{2.15479,8.1123,-3.7844},{-4.03955,6.47949,0.530872},{-4.41943,-7.93652,0.397972},{-1.40479,-7.99414,0.394527}};
};
//Land_House_L_9_EP1 in Residential.hpp
class Land_dum_zboreny_total: ResidentialRuins { //ruins
	lootPos[] = {{-4.32422,-1.71094,-2.31456}};
};
//Land_dulni_bs in Residential.hpp
// ALT-MAP Support 
