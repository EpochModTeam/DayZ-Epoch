class Military : Default
{
	zombieChance = 0.3;
	maxRoaming = 6;
	zombieClass[] =
	{
		"z_soldier",
		"z_soldier",
		"z_soldier",
		"z_policeman",
		"z_soldier_heavy",
		"z_soldier_heavy",
		"z_soldier_usmc_ghillie",
		"z_soldier_cdf_officer",
		"z_soldier_cdf_commander",
		"z_soldier_ru_specnaz",
		"z_soldier_ru_commander",
		"z_soldier_ru_specialforces",
		"z_soldier_ru_soldier",
		"z_soldier_ru_soldier_heavy"
	};
	lootChance = 0.55;
	lootGroup = Military;
};
class MilitaryIndustrial: Military 
{
	zombieChance = 0.3;
	maxRoaming = 6;
	zombieClass[] = 
	{
		"z_soldier",
		"z_soldier_heavy",
		"z_soldier",
		"z_worker1",
		"z_worker2",
		"z_worker3"
	};
	lootChance = 0.5;
	lootGroup = MilitaryIndustrial;
};
class Land_a_stationhouse : Military
{
	zedPos[] = {{-3.47607,-7.15527,5.28641},{-3.24609,-7.74219,0.831207},{-2.8208,-7.29395,-3.7739},{-2.79443,-6.34668,-8.59558},{2.04248,1.26563,-8.59558},{16.0332,0.907227,-8.59558},{15.8687,-4.1123,-8.59558},{3.45801,-4.02344,-8.59558}};
	lootPos[] = {
		{15.436,2.85498,-9.47058},{1.22583,2.24463,-9.47058},{-3.9126,-7.29834,-9.47058},{-2.28271,-6.21094,-4.6489},{-2.99219,-8.27148,8.49209},{-2.31641,-8.28223,4.41141},{-2.17822,-5.43359,4.41141},{-4.90674,-8.37012,-0.0437927},{-2.35938,-8.1748,-4.6489}
	};
	lootPosSmall[] = {
		{14.6826,3.55029,-8.25058},{18.15,-6.73,-9.36},{18.08,-6.05,-9.44},{-0.52,1,-8.63},{-0.41,1.76,-9.37},{-1.63623,-8.99756,-9.39058},{-3.5647,-9.01855,-8.63058},{-2.40137,-9.03027,-8.25058},{-4.67334,-6.26953,-4.6489},{-4.40308,-8.7666,4.41139},{-4.4541,-8.81055,8.49209},{-1.74316,-8.29883,0.126221},{-0.440918,2.51367,-8.25058},{8.35986,3.58203,-8.25058},{-1.81641,-9.00098,1.1962},{-5.52734,-7.54395,-8.23059}
	};
};

class Land_Mil_ControlTower: Military
{
	zombieClass[] =
	{
		"z_soldier",
		"z_soldier",
		"z_policeman",
		"z_soldier_ru_officer"
	};
	zedPos[] = {{10.0703,3.76367,-9.62869},{1.75195,5.68164,-5.51373},{3.85254,3.53516,-5.50372},{6.66113,-0.625488,-1.0787},{6.72266,3.23389,-1.0787},{2.63965,-0.191406,-1.0687}};
	lootPos[] = {{3.41,-3.29,-5.5},{9.5,-3.63,-5.5},{8.25,-2.09,-9.64},{-0.01,1.93,-9.64},{-1.96,-3.36,-9.64},{-8.37,-3.53,-9.64},{-6.19,-0.04,-8.83},{-5.49,-3.16,-8.83},{-1.92,0.06,-10.19},{-1.92,0.06,-10.19},{-2.12,-0.01,-9.64},{9.35,6.05,-9.65},{2.6,3.76,-5.5},{7.58,2.04,-0.38},{2.22,-0.87,-1.07},{5.15,-1.88,-0.39},{2.79688,-3.91602,-9.64148}};
	lootPosSmall[] = {{9.83,4.49,-7.38},{5.56,4.05,-5.51},{6.06,4.1,-0.63},{0.35,-3.75,-9.52},{-3.36,-3.44,-9.64},{-6.2,0.03,-9.64},{-10.23,0.02,-8.81},{-7.6,-3.87,-9.64},{0.01,6.07,-9.65},{8.2,-0.53,-4.69},{6.53,-0.91,-4.98},{3.22,-1.21,-5.5}};
};

class Land_SS_hangar: MilitaryIndustrial
{
	zombieClass[] = 
	{
		"z_soldier_pilot",
		"z_soldier_heavy",
		"z_soldier_pilot",
		"z_soldier_heavy",
		"z_worker1",
		"z_worker2",
		"z_worker3",
		"z_soldier_ru_pilot",
		"z_soldier_ru_crewman"
	};
	maxRoaming = 3;
	zedPos[] = {{-11.7158,-18.9541,-5.87253},{11.7344,-17.165,-5.87253},{-14.2461,23.0439,-5.87253}};
	lootPos[] = {
		{-13.0562,-17.6318,-5.87253},{-12.9907,20.873,-5.87253},{12.7217,22.6377,-5.87253},{1.80469,3.94238,-5.87253},{13.1997,-18.3457,-5.87253}
	};
	lootPosSmall[] = {
		{-14.1362,12.6729,-5.87253},{14.4819,-7.80371,-5.87253}
	};
};

class Land_A_TVTower_Base: Military
{
	zombieClass[] =
	{
		"z_soldier",
		"z_soldier",
		"z_policeman"
	};
	zedPos[] = {{-0.95166,1.48047,-2.31586},{-2.01782,-4.24121,-2.30939},{-0.982422,-1.92383,-2.25586}};
	lootPos[] = {{-2.68,-5.79,-22.67},{-2.58,1.46,-22.67},{1.4,-5.85,-22.67},{-1.22,2.99,-20.71},{2.12,2.16,-14.76},{-3.99,-3.58,-14.36},{-4.13,2.92,-10.61},{1.22,1.67,-6.03},{-3.95,-3.39,-6.4},{-4.45,0.97,-2.31},{-4.52,0.61,2.78},{0.82,-0.5,7.21},{-1.82,3.73,2.78}};
	lootPosSmall[] = {{-1.01,-5.33,-22.67},{-1.56,2.79,-21.65},{-0.7,-4.81,-14.76},{-1.25,3.07,-12.37},{2.57,-0.52,-6.39},{-4.24,-1.23,3.96},{0.68,2.37,2.78},{-1.67,0.13,7.11}};
};

class Land_Mil_House: Military
{
		zombieClass[] =
	{
		"z_soldier",
		"z_soldier",
		"z_policeman",
		"z_soldier_ru_ghillie",
		"z_soldier_ru_specnaz",
		"z_soldier_ru_commander",
		"z_soldier_ru_specialforces",
		"z_soldier_ru_soldier",
		"z_soldier_ru_soldier_heavy"
	};
	zedPos[] = {{11.1638,4.70117,-5.67465},{12.4565,1.42383,-5.67465},{13.6672,4.42383,-5.67465}};
	lootPos[] = {{8.02,4.33,-5.07},{5,2.6,-5.07},{10.72,-1.85,-5.57},{2.59,-5.69,-5.07},{0.71,-6.8,-5.07},{-7.48,-7.23,-4.24},{-10.11,-4.59,-5.07},{-12.21,-2.28,-5.07},{-7.87,4.44,-0.09},{-13.76,-6.49,-0.94},{-13.96,3.4,-0.94},{-1.71,-6.68,-0.94},{-1.38,-1.7,-0.94},{-12.84,2.75,3.25},{-6.69,-6.36,3.3},{-13.78,6.93,-0.69},{-5.78,6.62,-3.7},{12.91,3.06,-5.68},{14.4,1.51,-5.68},{3.92,2.42,-5.07},{10.82,-0.49,-5.57},{-1.9,-7.37,-5.07},{-1.71,3.84,-5.07},{-1.17,1.31,-5.07}};
	lootPosSmall[] = {{9.8,1.45,-4.97},{9.74,2.38,-3.8},{9.74,2.35,-4.96},{9.77,3.22,-4.93},{9,4.78,-5.07},{9.73,-0.19,-4.95},{3.47,1,-5.07},{4.15,-5.17,-4.97},{1.95,-5.85,-4.95},{1.96,-5.01,-4.57},{-2.92,-3.78,-5.07},{-4.83,-6.98,-5.07},{-3.2,-7.07,-5.07},{-8.16,-6.95,-5.07},{-4.08,1.73,-0.81},{-4.08,2.51,-0.82},{-7.22,4.41,-0.94},{-7.15,1.57,-0.94},{-8.26,-4.42,-0.94},{-7.24,-4.68,-0.94},{-1,-3.76,-0.94},{-14.76,-0.43,-2.85},{-14.74,-1.45,-2.85}};
};

class Land_Mil_Barracks_i: Military
{
	zedPos[] = {{-1.95361,2.57813,-1.1084},{5.46289,2.5791,-1.1084},{1.29346,-2.16211,-1.09839},{-1.78369,-0.166992,-1.09839},{-5.39355,-2.11719,-1.09839},{-5.4707,2.58203,-1.09839},{-1.80664,-1.97559,-1.09827},{5.38965,-1.75781,-1.09827},{-9.1499,-2.55859,-1.09827},{1.4668,-0.129883,-1.09814},{-4.77881,0.0498047,-1.09814},{-8.32617,-0.144531,-1.09814}};
	lootPos[] = {
		{4.56494,-2.67383,-1.14822},{0.312988,1.54492,-1.09824},{-2.95361,1.49414,-1.11823},{-3.39111,-1.99023,-0.708221},{-6.68604,-1,0.0917664},{-8.94238,-2.52441,-1.09824},{-0.59668,-1.49609,-1.10825},{3.03467,-1.00586,0.0917664},{-0.214355,-2.19531,0.0917664},{-8.93018,1.53906,-1.09824}
	};
	lootPosSmall[] = {
		{3.88037,-0.905273,-0.358246},{6.48242,-2.51367,-0.978241},{3.03662,-1.78418,-0.698242},{-0.179199,0.488281,-1.10825},{-3.20703,-0.101563,-1.11823},{-3.37061,-1.08887,0.0917664},{-6.79297,-2.63086,-1.09824},{-9.29541,-0.212891,-1.09824}
	};
};

class Land_Mil_Barracks: Military {
	lootPos[] = {
		//{-0.891113,-3.48926,-1.51633},{-1.09204,2.88672,-1.51633},{-3.55591,3.42871,-1.51633},{-6.31299,3.7041,-1.51633},{-7.68262,-3.54102,-1.93634},{-5.11475,-2.09961,-1.93634},{0.24707,3.57324,-1.93634},{6.72217,-2.47949,-1.93634},{5.41602,3.99316,-1.93634},{-6.34912,3.90137,-0.726349},{-3.58691,2.8252,-0.726349},{-1.04224,3.39941,-0.726349},{-3.75195,-3.25977,-0.726349},{-0.864746,-3.88672,-0.726349},{-3.52563,-2.44824,-1.93634},{-6.06396,2.57422,-1.93634},{-0.935059,-4.05078,-1.93634},{-1.39502,3.89941,-1.93634}
		{-0.913086,-3.82031,-0.785156},{-3.62402,-2.74219,-0.785156},{-1.17529,3.83887,-0.785156},{-3.58203,2.84766,-0.785156},{-6.36328,3.91797,-0.785156},{-6.42188,-3.79688,-0.785156},{-0.922852,-2.7627,-1.58514},{-3.6875,-3.82715,-1.58514},{-6.47656,-2.72559,-1.58514},{-6.34375,2.82813,-1.58514},{-3.60596,3.91797,-1.58514},{-1.16016,2.83398,-1.58514},{0.203125,3.68945,-1.99515},{-2.28467,3.76953,-1.99515},{-5.12451,-2.64648,-1.99515},{-7.54688,-3.60547,-1.99515},{6.52783,-3.56641,-1.99515},{2.30811,3.74414,-1.99515},{5.87793,3.76563,-1.99515}
	};
	lootPosSmall[] = {
		//{-6.45703,2.03125,-1.79633},{-3.5127,1.98242,-1.79633},{-1.14746,1.9873,-1.79633},{-0.911621,-1.87598,-1.79633},{-3.81567,-1.90234,-1.79633},{-6.5249,-1.86426,-1.79633},{3.78979,-4.17773,-1.13635},{5.32861,-4.19043,-1.13635},{5.20923,-1.99805,-1.65634},{6.54175,-1.99707,-1.65634},{3.82324,-1.96582,-1.65634},{6.89209,2.93457,-1.84634},{6.98877,1.95215,-1.84634},{6.98291,2.23145,-1.46634},{7.00391,2.73438,-1.46634},{6.96729,3.01953,-1.08633},{6.94824,2.04785,-0.706329},{4.36768,3.13086,-0.396332},{3.86768,3.49316,-0.396332},{3.84521,3.49609,-1.86633},{4.33984,3.1748,-1.86633}
		{-6.37695,1.94727,-1.85513},{-3.59863,1.99316,-1.85513},{-1.16602,1.95117,-1.85513},{-6.50195,-1.87891,-1.85513},{-3.7041,-1.86914,-1.85513},{-0.899902,-1.84375,-1.85513},{6.91992,2.08691,-1.90515},{6.9248,2.88184,-1.90515},{6.9248,2.85547,-1.14514},{6.9082,2.07422,-1.14514},{6.90918,2.07129,-0.385162},{6.93652,2.85938,-0.385162},{4.4248,3.12695,-0.455139},{4.45996,3.08789,-1.93515},{3.83008,-1.95508,-1.71515},{5.21973,-2.0332,-1.71515},{6.54199,-2.03711,-1.71515},{5.33301,-4.17969,-1.18515},{3.82861,-4.19727,-1.18515}
	};
	zedPos[] = {
		//{-2.15845,-3.12793,-1.06134},{2.13281,3.24316,-1.06134},{-6.20679,-0.125,-1.06134},{2.09521,-3.36719,-1.06134}
		{-6.40332,-0.116211,-1.12015},{-5.0542,3.20508,-1.12015},{-2.23438,-3.58398,-1.12015},{2.02441,3.46875,-1.12015}
	};
};

class Camp: Military {
	maxRoaming = 1;
	zedPos[] = {{0.833496,-1.52246,-1.09949},{0.385742,0.963867,-1.08948}};
	lootPos[] = {{0.833252,-1.52246,-1.09949},{0.38501,0.963867,-1.08948}};
};

class Land_stan: Camp {};

class CampEast: Military {
	maxRoaming = 1;
	zedPos[] = {{0.627441,1.83594,-1.31049},{-1.05713,-1.80762,-1.31049}};
	lootPos[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83398,-1.31049}};
};

class CampEast_EP1: Military {
	maxRoaming = 1;
	zedPos[] = {{-0.670898,0.955078,-1.31049},{1.68408,-2.43359,-1.31049},{-1.76318,-1.625,-1.31049}};
	lootPos[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
};

class Land_tent_east: Military {
	minRoaming = 2;
	maxRoaming = 3;
	zedPos[] = {{-1.82,1.71,-1.74},{2.06,-0.97,-1.74}};
	lootPos[] = {{2.06,-0.97,-1.74},{-1.82,1.71,-1.74}};
};

class Land_Dam_ConcP_20: Military {
	zedPos[] = {{-0.94,10.26,9.09},{2.47,9.87,9.09}};
	lootPos[] = {{-0.94,10.26,9.09},{2.47,9.87,9.09},{-0.94,10.26,9.09},{2.47,9.87,9.09},{-6.51,4.46,2.21},{1.47,6.06,2.21},{4.89,2.99,2.19},{7.92,6.13,2.21}};
};

class C130J_wreck_EP1: Military {
	zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
	zedPos[] = {{0.37,0.61,-5.44},{-0.84,2.92,-5.44},{-2.16,-6.32,-5.42},{1.26,-20.49,-5.39},{1.88,-3.67,-5.36},{-0.2,-12.76,-4.78},{-0.36,-7.87,-4.6},{-1.32,-14.56,-4.59}};
	lootPos[] = {{-0.36,-7.87,-4.6},{-0.2,-12.76,-4.78},{-1.32,-14.56,-4.59},{-2.16,-6.32,-5.42},{-0.84,2.92,-5.44},{0.37,0.61,-5.44},{1.88,-3.67,-5.36},{1.26,-20.49,-5.39}};
};

class Barrack2: Military {
	lootPos[]={{1.33,-0.65,-0.27},{1.14,5.21,-0.27},{-2.09,0.71,0.05},{1.13,3.25,0.52}};
};

class Mi8Wreck: Military {
	zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
	lootPos[]={{0,-5.79,-1.71}};
};

class USMC_WarfareBVehicleServicePoint: Military {
	lootPos[] = {{1.57,-3.96,-0.09},{-1.49,2.23,-1.41}};
};

class Land_Vysilac_FM: Military {
	zedPos[] = {{-0.36,1.96,-6.21},{-1.72,4.5,-6.21},{-3.25,0.75,-6.21}};
	lootPos[] = {{-0.36,1.96,-6.21},{-1.72,4.5,-6.21},{-3.25,0.75,-6.21},{1.35,-0.6,8.39}};
};

class Land_Mil_Barracks_L: Military {
	zedPos[] = {{4,-5.22,-2.21},{7.3,-4.04,-2.21},{-0.82,-4.72,-2.2}};
	lootPos[] = {{-0.82,-4.72,-2.2},{4,-5.22,-2.21},{7.3,-4.04,-2.21}};
};
// ALT-MAP Support 
class Land_budova4_in: Military // barracks broken blue front door. cannot enter inner rooms
{
	zedPos[] = {{-3.94531,2.27344,-1.88723},{-0.0566406,2.2666,-1.88723},{6.27148,2.5752,-1.88723}};
	lootPos[] = {{ -6.50415,2.1416,-1.88723 },{ -1.66162,2.10168,-1.88723 },{ 2.94312,2.297,-1.88723 },{ 5.34082,-1.82922,-1.88723 }};
};
class Land_kostel_trosky: Military // church ruins
{
	zedPos[] = {{-0.388672,10.0176,-5.37072},{-2.97852,-0.816406,-5.55207}};
	lootPos[] = {{0.386719,13.5918,-5.54349},{3.81055,2.98828,-5.30816}};
};
class Land_MBG_Killhouse_3: Military // cement 2 story 
{
	zedPos[] = {{-4.10547,-0.466797,0.451439},{-2.06152,3.2168,0.451439},{-10.7031,3.0293,0.451439},{-8.07715,-1.2168,0.451439}};
	lootPos[] = {{-4.10547,-0.466797,0.451439},{-2.06152,3.2168,0.451439},{-10.7031,3.0293,0.451439},{-8.07715,-1.2168,0.451439}};
};
//Land_MBG_Killhouse_4 in Residential.hpp
class Land_aif_strazni_vez: Military // metal platform-overlook 
{
	lootPos[] = {{0.113281,0.859375,1.46157},{-1.24023,1.25195,1.46157}};
};
class Land_MBG_Killhouse_2: Military // cement 2 story 
{
	zedPos[] = {{-4.58887,-4.49023,-2.79856},{1.78516,1.58887,3.80144}};
	lootPos[] = {{-4.58887,-4.49023,-2.79856},{6.50488,5.86328,-2.79856},{-6.24365,-4.69336,0.501437},{-4.99805,-4.63281,3.80144},{5.48828,-3.87793,3.80144}};
};
//Land_A_Villa_EP1 in Office.hpp
class Land_budova4_winter: Military { // winter version of military barracks
	lootPos[] = {{-7.73389,0.300049,-1.09824},{-7.7666,1.97388,-1.09824},{-5.85645,1.92651,-1.09824},{-4.82373,0.194336,-1.09824},{-4.82715,-2.00244,-1.09824},{-8.09766,-2.28149,-1.09824},{-3.06787,2.24805,-1.09824},{-1.65283,-1.91821,-1.09824},{-1.41309,-0.034668,-1.09824},{0.266602,1.76807,-1.09824},{1.28369,0.289307,-1.09824},{1.81982,-2.28687,-1.09824},{4.37549,2.14941,-1.09824},{5.61865,1.71338,-1.09824},{5.06787,-1.74316,-1.09824},{2.54785,2.33716,-1.09824}};
};
class land_pozorovatelna: Military { // concrete tower
	lootPos[] = {{-2.36328,-2.79248,-2.49767},{3.11426,-2.92969,-2.49767},{0.740234,2.47852,-2.49767},{-1.67578,-2.50049,7.54509},{-1.23047,1.90283,7.54509},{2.88477,2.08496,7.54509},{2.61426,-2.48096,7.54509},{0.491211,-0.290527,7.54509}};
};
class land_hlaska: Military // metal platform
{
	lootPos[] = {{-0.802246,0.614258,3.77092},{0.917969,0.9375,3.77093}};
};
class Land_MBG_Killhouse_1: Military // cement block building
{
	lootPos[] = {{-1.98071,5.50488,1.25144},{-2.79443,0.65625,-2.04856},{2.88354,2.7627,-2.04856}};
};
class land_army_hut2_int: Military // beige hut on blocks
{
	lootPos[] = {{ -0.421387,-0.0517578,-0.948329 },{ 1.80103,0.945313,-0.948329 },{ 2.24585,-2.6875,-0.948329 },{ -1.24561,-1.53955,-0.948329 }};
};
class land_army_hut_int: Military // beige hut on blocks
{
	lootPos[] = {{ 2.7959,-5.07373,-1.33056 },{ 2.79785,-2.1626,-1.33056 },{ -0.943359,-0.060791,-1.35981 },{ 0.689453,1.87134,-1.36167 }};
};
class Land_army_hut3_long_int: Military // beige hut on blocks
{
	lootPos[] = {{ -2.88721,-4.36035,-1.23617 },{ 0.753906,-3.90039,-1.23617 },{ -2.53711,-1.95117,-1.23617 },{ -2.27856,-0.211914,-1.23617 },{ -0.0664063,-1.70801,-1.23617 },{ 0.141113,2.31104,-1.23617 }};
};
//Land_ibr_terminal in Office.hpp
class Land_smd_garaz_s_tankem: Military // garage - blockade - ladder
{
	zedPos[] = {{5.83203,2.34961,-2.49103}};
	lootPos[] = {{5.83203,2.34961,-2.49103},{-0.569336,3.00684,3.4697}};
};
class land_smd_army_hut2_int: Military { // beige hut on blocks
	lootPos[] = {{-0.848633,-1.24316,-0.948334},{-1.92383,-0.00390625,-0.948334},{2.7959,-0.0146484,-0.948334}};
	lootPosSmall[] = {{0.15918,-1.26465,-0.498337},{3.0791,1.96387,-0.948334}};
	zedPos[] = {{-3.35352,-2.65332,-0.407364},{0.475586,3.37402,-0.350555}};
};
class land_smd_army_hut2: Military { // beige hut on blocks
	lootPos[] = {{0.447266,-4.6543,-1.33328}};
	lootPosSmall[] = {{-0.257813,-5.02539,-0.623276},{3.02832,-6.1582,-1.33328}};
	zedPos[] = {{0.552734,6.06836,-0.515976},{-3.86816,-5.6875,-1.13228}};
};
class Land_smd_SS_hangar_withdoor: MilitaryIndustrial
{
	maxRoaming = 3;
	zedPos[] = {{10.957,-16.6943,-5.87254},{-11.3311,-15.499,-5.87254},{-9.27832,2.05566,-5.87254}};
	lootPos[] = {{10.957,-16.6943,-5.87254},{-11.3311,-15.499,-5.87254},{-9.27832,2.05566,-5.87254},{-11.0947,21.3438,-5.87254},{10.7002,17.6221,-5.87254},{11.4658,1.51367,-5.87254},{12.9443,-15.6855,-5.87254}};
};
class Land_smd_budova4_in: Military // barracks blue doors internal rooms
{
	zedPos[] = {{5.9375,1.33496,-1.88723}};
	lootPos[] = {{5.68359,-1.41211,-1.88723},{-7.21484,2.17285,-1.88723},{-4.04492,2.07227,-1.88723},{-0.4375,1.95898,-1.88723},{3.23633,2.06348,-1.88723},{0.804688,-0.614258,-1.88723},{-1.2793,-1.0791,-1.88723},{-6.87695,-1.35156,-1.88723}};
};
class land_smd_army_hut3_long_int: Military { // wide 3 doors bunks
	lootPos[] = {{0.643555,5.24219,-0.0739136},{-2.78809,3.13672,-1.27391},{-2.80957,5.27441,-0.863907},{-3.13086,-3.3584,-1.27391},{-0.875977,-0.6875,-1.27391}};
	lootPosSmall[] = {{1.6875,5.27539,-0.863907},{-0.604492,-3.36816,-0.563904},{1.91699,1.27832,-1.27391}};
	zedPos[] = {{3.37598,0.145508,-0.938461},{-4.52734,0.833984,-1.2229}};
};
class land_smd_hlaska: Military { // wide 3 doors bunks
	lootPos[] = {{-0.724609,0.822266,3.77092}};
	lootPosSmall[] = {{1.06201,-0.864258,3.77092},{-1.04688,-0.759766,3.77092}};
	zedPos[] = {{-0.18457,-3.13574,-2.25991}};
};
class Land_smd_kostel_trosky: Military // church ruins
{
	lootPos[] = {{3.83789,0.8125,-4.81671},{0.206055,12.3555,-5.09952}};
};
// ALT-MAP Support 
class Land_Mil_hangar_EP1: MilitaryIndustrial // tak hangar
{
	zombieClass[] = 
	{
		"z_soldier_pilot",
		"z_soldier_heavy",
		"z_soldier_pilot",
		"z_soldier_heavy",
		"z_worker1",
		"z_worker2",
		"z_worker3"
	};
	maxRoaming = 3;
	lootPos[] = {{-9.83203,-12.4097,-5.38129},{10.5488,-12.1318,-5.38129},{13.002,0.0214844,-5.38129},{-13.3887,0.25,-5.38129},{13.3203,20.5176,-5.38129},{-13.1865,19.9839,-5.38129},{0.0195313,21.5078,-5.38129},{0.49707,11.5469,-5.38129},{-0.836914,-0.634277,-5.38129},{0.177734,-11.6821,-5.38129}};
};
class Land_Mil_ControlTower_EP1: Military // tak atc
{
	zombieClass[] =
	{
		"z_soldier",
		"z_soldier",
		"z_policeman"
	};
	lootPos[] = {
		{ 5.53369,3.64355,-5.46368 },
		{ 7.67236,3.68115,-1.0687 },
		{ 7.53271,-1.70068,-1.0687 },
		{ 4.55225,1.64111,2.92148 },
		{ 10.1292,3.6958,-9.62869 },
		{ 0.491943,6.1543,-9.62869},
		{ 7.54956,1.74512,-0.378696},
		{5.40234,-1.71289,-0.378696}};
};
class Land_Mil_Barracks_i_EP1: Military // tak barracks
{
	maxRoaming = 2;
	lootPos[] = {
		{5.15625,-2.30371,-1.09824},
		{1.05664,-2.45508,-1.09824},
		{-0.841797,-2.36133,-1.09824},
		{-4.03516,-2.31836,-1.09824},
		{-8.49609,-2.33838,-1.09824}};
};
class Land_Mil_House_EP1: Military // tak
{
	zombieClass[] =
	{
		"z_soldier",
		"z_soldier",
		"z_policeman"
	};
	vehPos[] = {
		{ 13.439,3.25244,-5.71244,84 }};
	lootPos[] = {
		{11.7949,4.3147,-5.81439}
	};
	lootPosSmall[] = {
		{-1.54785,5.46997,-5.00406},
		{-2.61816,5.46362,-5.0097}
	};
	zedPos[] = {{-2.13477,6.69116,-4.56909},{5.58887,6.41284,-4.44098}};
};

class land_st_vez: Military // nm tower
{
	lootPos[] = {{-5.56445,4.23975,-3.31476},{-5.05566,-3.17627,-3.31476},{4.12109,3.92822,2.42732},{-1.73389,2.68896,6.40834},{-4.23584,1.29736,6.40834},{-3.80322,-1.09277,6.40834},{0.430664,1.31787,6.40834},{-2.45166,-2.16748,6.40834},{-0.608398,-0.57666,-11.095},{-2.08691,1.10303,-11.0649},{0.259277,-3.89697,-3.31476},{3.9375,3.30957,-8.50825}};
};
class Land_mi8_crashed: Military // nm wreck
{
	lootPos[] = {{0.238281, -2.89746, -1.65002}, {0.0, -4.06982, -1.7}, {-0.245117, -6.06982, -1.74091}};
};
class land_AII_last_floor: Military
{
	zombieClass[] = {"z_soldier","z_soldier","z_policeman"};
	maxRoaming = 3;
	lootPos[] = {{-1.73975,-7.99756,11.6976},{-1.73975,-7.99756,11.6976},{-1.20801,5.45605,4.6129},{-3.82813,2.81494,5.46183}};
};

class land_AII_middle_floor: Military
{
	zombieClass[] = {"z_soldier","z_soldier","z_policeman"};
	maxRoaming = 3;
	lootPos[] = {{-7.64941,4.97412,0.510368},{-7.7207,5.10498,0.510216},{-7.27979,-0.931152,0.518509},{8.47461,-2.3252,-4.63377},{9.20508,0.508301,-4.63377},{4.36768,3.7998,-4.63377},{-0.669434,2.74805,-4.63377},{-10.3594,5.03516,-4.63377},{-13.9766,9.10059,-4.63377},{-8.021,1.22314,-4.63377},{6.07227,-2.64551,-4.63377},{-8.75293,8.79297,-2.10379}};
};

class Land_AII_upper_part: Military
{
	lootPos[] = {{-0.616211, -3.80762, -2.31434}, {-2.62158, -1.05127, -2.32196}, {-2.30322, 2.0415, -2.32196}};
};

class Land_Mil_Guardhouse_EP1: Military //Not enterable, Takistan version
{
	zombieClass[] =
	{
		"z_soldier",
		"z_soldier",
		"z_policeman"
	};
	lootPos[] = {{-3.05859,1.76514,-1.59003},{-3.16895,3.45361,-1.59003},{-3.19922,-0.323242,-1.59003}};
};

class Land_Mil_Guardhouse: Military //Enterable zero_building
{
	zombieClass[] =
	{
		"z_soldier",
		"z_soldier",
		"z_policeman"
	};
	maxRoaming = 3;
	zedPos[] = {{-2.44727,0.250977,-1.70563},{-2.44873,3.00293,-1.70285}};
	lootPos[] = {
		{4.65381,-3.61914,-1.46277},{2.99756,3.54102,-0.712769}
	};
	lootPosSmall[] = {
		{-0.798828,-3.51758,-1.46277},{3.73047,-3.95996,-1.32278},{-0.283203,-3.15723,-1.32278},{-0.996582,3.81445,-1.14279},{-1.33008,2.26563,-0.762787},{0.289063,3.66211,-0.0827942},{-1.17383,-0.112305,-1.48279}
	};
};

//DZE ADDED BELOW
class land_vstup: Military {
	lootPos[] = {{-11.51,-2.64844,-1.53312},{-6.24463,-2.85059,-1.53312},{-1.16992,-2.84961,-1.53312},{2.70898,-2.85059,-1.53312}};
};
class land_smd_ss_hangard_withdoor: MilitaryIndustrial {
	lootPos[] = {
		{0.236328,3.4209,-5.87254},{-14.0732,22.499,-5.87254},{13.1895,22.2031,-5.87254},{-13.8877,-10.5459,-5.87254},{2.10742,-19.8496,-5.87254}
	};
	lootPosSmall[] = {
		{14.3984,12.2852,-5.87254},{0.289063,-0.197266,-5.87254},{-14.8389,-20.6475,-5.87254},{14.8574,-20.5088,-5.87254}
	};
	zedPos[] = {{0.128906,-25.0273,-5.42465},{-16.7891,1.98145,-5.42465},{0.0742188,26.5654,-5.42465},{16.6631,-7.1084,-5.42465}};
};
class land_budova5: Military {
	lootPos[] = {
		{-2.04004,2.89844,-1.98059}
	};
	lootPosSmall[] = {
		{-1.96191,-0.314453,-1.98059}
	};
	zedPos[] = {{-3.04492,2.0332,-1.40211}};
};
class land_smd_strazni_vez: Military {
	lootPos[] = {
		{-1.68066,-1.30273,2.00299}
	};
	lootPosSmall[] = {
		{-0.902344,-1.29395,1.41299},
		{-1.92578,1.28613,1.41299}
	};
	zedPos[] = {{-1.14844,0.125977,2.28799},{1.04102,2.45898,-1.76974}};
};

class Land_A_Stationhouse_ep1: Land_a_stationhouse{};
class land_ibr_hangar: MilitaryIndustrial
{
	lootPos[] = {
		{ -5.75635,9.95386,-3.57318 },
		{ -8.06152,-11.4065,-3.58192 },
		{ 8.68555,-5.30371,-3.57942 }};
};
class land_ind_pec_03: MilitaryIndustrial
{
	lootPos[] = {
		{6.07275,11.8623,2.59973},{7.82275,-2.04883,-1.9376},{13.1899,16.0693,-5.15128},{14.0396,8.12549,-5.15128},{13.8237,12.5366,-4.69128},{4.63086,16.6553,-2.04201},{3.07275,-5.11963,-5.15128},{4.79541,-2.07031,-1.9387},{3.67627,14.5518,2.60131},{-2.08447,-13.6855,1.11455},{3.21484,8.37207,-5.15128},{4.78662,18.0498,-5.15128},{-3.98193,-24.5332,-5.15128},{12.9028,-1.58447,3.05404},{-0.259766,22.2715,4.05607},{1.96094,25.4209,4.05607}
	};
	lootPosSmall[] = {
		{2.1709,11.5796,2.75019},{1.17725,11.8911,3.87051},{6.62451,13.2251,4.24952},{3.21777,-11.7026,-1.85671},{8.35938,-3.10693,-1.93559},{14.1851,-5.31348,-1.08754},{13.0874,16.7339,-4.27128},{7.37207,16.6235,-4.99128},{11.6133,16.7075,-5.04128},{12.248,13.2998,-3.56128},{-15.2876,-18.2754,-5.06128},{3.3833,14.4814,3.36135},{10.6797,7.66943,-4.43128},{-4.56982,14.9658,-4.94128},{4.23242,-26.7783,-1.97225},{2.2749,21.8086,4.05607}
	};
	zedPos[] = {{1.979,15.7012,3.48646},{5.93604,16.2686,3.48582},{6.50586,13.8198,-4.22628},{12.314,9.64258,-4.22628},{6.15381,9.78711,-4.22628},{6.34424,-2.52051,-0.953124},{-5.04004,-4.30566,-4.22628},{-5.77588,-21.0293,-4.22628}};
};
class land_ind_pec_03a: MilitaryIndustrial
{
	lootPos[] = {
		{6.07275,11.8623,2.59973},{7.82275,-2.04883,-1.9376},{13.1899,16.0693,-5.15128},{14.0396,8.12549,-5.15128},{13.8237,12.5366,-4.69128},{4.63086,16.6553,-2.04201},{3.07275,-5.11963,-5.15128},{4.79541,-2.07031,-1.9387},{3.67627,14.5518,2.60131},{-2.08447,-13.6855,1.11455},{3.21484,8.37207,-5.15128},{4.78662,18.0498,-5.15128},{-3.98193,-24.5332,-5.15128},{12.9028,-1.58447,3.05404},{-0.259766,22.2715,4.05607},{1.96094,25.4209,4.05607}
	};
	lootPosSmall[] = {
		{2.1709,11.5796,2.75019},{1.17725,11.8911,3.87051},{6.62451,13.2251,4.24952},{3.21777,-11.7026,-1.85671},{8.35938,-3.10693,-1.93559},{14.1851,-5.31348,-1.08754},{13.0874,16.7339,-4.27128},{7.37207,16.6235,-4.99128},{11.6133,16.7075,-5.04128},{12.248,13.2998,-3.56128},{-15.2876,-18.2754,-5.06128},{3.3833,14.4814,3.36135},{10.6797,7.66943,-4.43128},{-4.56982,14.9658,-4.94128},{4.23242,-26.7783,-1.97225},{2.2749,21.8086,4.05607}
	};
	zedPos[] = {{1.979,15.7012,3.48646},{5.93604,16.2686,3.48582},{6.50586,13.8198,-4.22628},{12.314,9.64258,-4.22628},{6.15381,9.78711,-4.22628},{6.34424,-2.52051,-0.953124},{-5.04004,-4.30566,-4.22628},{-5.77588,-21.0293,-4.22628}};
};
class Land_Mil_Barracks_EP1: Military
{
	lootChance = 0;
	lootPos[] = {};
};
class Land_Mil_Barracks_L_EP1: Military
{
	lootPos[] = {};
	zedPos[] = {{-3.97998,-7.65137,-1.33652},{-2.41919,-7.81445,-1.33569}};
};
class Land_vez: Military
{
	maxRoaming = 1;
	lootPos[] = {{-0.0585938,1.51367,1.36331}};
	zedPos[] = {{-0.116699,-0.801758,-2.81857}};
};
class Land_fortified_nest_big_EP1: Military
{
	lootPos[] = {
		{0.663086,1.06738,-0.740341},
		{0.513184,-1.3623,-0.740341},
		{-0.991211,1.11621,-0.740341},
		{-2.87109,-3.94238,-0.740341}};
};
class datsun02Wreck: Military
{
	zombieClass[] = {"zZombie_Base","z_hunter"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 1;
	maxRoaming = 2;
	lootPos[] = {};
};
class HMMWVWreck: Military
{
	zombieClass[] = {"z_soldier","z_soldier_heavy"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 1;
	maxRoaming = 2;
	lootPos[] = {};
};
class UH60_NAVY_Wreck_DZ: Military {
	zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 4;
	maxRoaming = 8;
	lootPos[] = {};
};

class UH60_ARMY_Wreck_DZ: Military {
	zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 4;
	maxRoaming = 8;
	lootPos[] = {};
};

class UH60_NAVY_Wreck_burned_DZ: Military {
	zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 4;
	maxRoaming = 8;
	lootPos[] = {};
};

class UH60_ARMY_Wreck_burned_DZ: Military {
	zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 4;
	maxRoaming = 8;
	lootPos[] = {};
};

class Camp_EP1: Military { // Looks like the MASH tent, Balota POI
	maxRoaming = 1;
	lootPos[] = {{1.18213,-1.65039,-1.17793},{0.24707,0.799316,-1.17803}};
	zedPos[] = {{0.24707,0.798828,-1.11798},{1.18213,-1.64844,-1.11786}};
};
