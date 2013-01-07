class CfgWorlds {
	class DefaultWorld {
		class Weather;	// External class reference
	};
	
	class CAWorld : DefaultWorld {
		class Grid {};
		class DayLightingBrightAlmost;	// External class reference
		class DayLightingRainy;	// External class reference
		class DefaultClutter;	// External class reference
		
		class Weather : Weather {
			class Lighting;	// External class reference
		};
	};
	class DefaultLighting;	// External class reference
	
	class Chernarus : CAWorld {
		access = ReadOnlyVerified;
		worldId = 4;
		cutscenes[] = {"ChernarusIntro1"};
		description = $STR_DN_CHERNARUS;
		icon = "";
		worldName = "\ca\chernarus\chernarus.wrp";
		pictureMap = "";
		pictureShot = "\ca\chernarus\data\ui_selectisland_chernarus_ca.paa";
		plateFormat = "ML$ - #####";
		plateLetters = ABCDEGHIKLMNOPRSTVXZ;
		longitude = 30;	// positive is east
		latitude = -45;	// positive is south
		
		class OutsideTerrain {
			satellite = "ca\CHERNARUS\data\s_satout_co.paa";
			enableTerrainSynth = 1;
			
			class Layers {
				class Layer0 {
					nopx = "ca\CHERNARUS\data\cr_trava1_detail_nopx.paa";
					texture = "ca\CHERNARUS\data\cr_trava1_detail_co.paa";
				};
			};
		};
		
		class Grid : Grid {
			offsetX = 0;
			offsetY = 0;
			
			class Zoom1 {
				zoomMax = 0.15;
				format = "XY";
				formatX = 000;
				formatY = 000;
				stepX = 100;
				stepY = 100;
			};
			
			class Zoom2 {
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = 1000;
			};
			
			class Zoom3 {
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = 10000;
			};
		};
		startTime = 9:20;
		startDate = 11/10/2008;
		startWeather = 0.25;
		startFog = 0.0;
		forecastWeather = 0.25;
		forecastFog = 0.0;
		centerPosition[] = {7100, 7750, 300};
		seagullPos[] = {1272.84, 150.0, 14035};
		ilsPosition[] = {4887.5, 9660};
		ilsDirection[] = {0.5075, 0.08, -0.8616};
		ilsTaxiIn[] = {4785.21, 10174.3, 5024.9, 9759.07, 5027.38, 9737.02, 5015.33, 9721.14, 4928.96, 9670.51, 4906.1, 9664.37, 4880.94, 9673.65};
		ilsTaxiOff[] = {4671, 10038, 4195.5, 10862, 4201.01, 10885.8, 4218.54, 10899.8, 4304.68, 10950.2, 4324.96, 10953.7, 4345.75, 10938.9, 4785.21, 10174.3};
		drawTaxiway = 1;
		
		class SecondaryAirports {
			class ChernarusAirstrip1 {
				ilsPosition[] = {12461, 12585};
				ilsDirection[] = {0.9396, 0.08, -0.342};
				ilsTaxiIn[] = {12125.9, 12669.3, 12435.5, 12562.1, 12442, 12561, 12447, 12564, 12453.3, 12575.2, 12454.3, 12581, 12451.4, 12586};
				ilsTaxiOff[] = {12204.4, 12681.9, 11812.1, 12824.1, 11804.1, 12824.4, 11797.8, 12818.8, 11790.9, 12801.5, 11790.6, 12793.6, 11796.6, 12788.6, 12125.9, 12669.3};
				drawTaxiway = 0;
			};
			
			class ChernarusAirstrip2 {
				ilsPosition[] = {5223, 2220.5};
				ilsDirection[] = {0.866, 0.08, -0.5};
				ilsTaxiIn[] = {5009.9, 2374.2, 5240.3, 2243.2, 5243.3, 2238.4, 5242.7, 2232.1, 5235.9, 2221.1, 5229.7, 2216.6, 5221.5, 2217.3};
				ilsTaxiOff[] = {5070, 2308, 4640.8, 2551.9, 4638.3, 2557, 4639.3, 2563.3, 4646.5, 2573.9, 4651.3, 2578.5, 4658.5, 2577.9, 5009.9, 2374.2};
				drawTaxiway = 0;
			};
		};
		
		class ReplaceObjects {};
		
		class Sounds {
			sounds[] = {};
		};
		
		class Animation {
			vehicles[] = {};
		};
		
		class Lighting : DefaultLighting {
			groundReflection[] = {0.06, 0.06, 0.03};
		};
		
		class DayLightingBrightAlmost : DayLightingBrightAlmost {
			deepNight[] = {-15, {0.05, 0.05, 0.06}, {0.001, 0.001, 0.002}, {0.02, 0.02, 0.05}, {0.003, 0.003, 0.003}, {0.0001, 0.0001, 0.0002}, {0.0001, 0.0001, 0.0002}, 0};
			fullNight[] = {-5, {0.05, 0.05, 0.05}, {0.02, 0.02, 0.02}, {0.04, 0.04, 0.04}, {0.04, 0.04, 0.04}, {0.01, 0.01, 0.02}, {0.08, 0.06, 0.06}, 0};
			sunMoon[] = {-3.75, {0.045, 0.04, 0.04}, {0.04, 0.04, 0.04}, {0.045, 0.04, 0.04}, {0.04, 0.04, 0.04}, {0.04, 0.035, 0.04}, {0.1, 0.08, 0.09}, 0.5};
			earlySun[] = {-2.5, {0.12, 0.1, 0.1}, {0.08, 0.06, 0.07}, {0.12, 0.1, 0.1}, {0.08, 0.06, 0.07}, {0.08, 0.07, 0.08}, {0.1, 0.1, 0.12}, 1};
			sunrise[] = {0, {{0.7, 0.45, 0.45}, 5.16+(-4)}, {{0.07, 0.09, 0.12}, 4.0+(-4)}, {{0.6, 0.47, 0.25}, 4.66+(-4)}, {{0.1, 0.09, 0.1}, 4.3+(-4)}, {{0.5, 0.4, 0.4}, 6.49+(-4)}, {{0.88, 0.51, 0.24}, 8.39+(-4)}, 1};
			earlyMorning[] = {3, {{0.65, 0.55, 0.55}, 6.04+(-4)}, {{0.08, 0.09, 0.11}, 4.5+(-4)}, {{0.55, 0.47, 0.25}, 5.54+(-4)}, {{0.1, 0.09, 0.1}, 5.02+(-4)}, {{0.5, 0.4, 0.4}, 7.05+(-4)}, {{0.88, 0.51, 0.24}, 8.88+(-4)}, 1};
			midMorning[] = {8, {{0.98, 0.85, 0.8}, 8.37+(-4)}, {{0.08, 0.09, 0.11}, 6.42+(-4)}, {{0.87, 0.47, 0.25}, 7.87+(-4)}, {{0.09, 0.09, 0.1}, 6.89+(-4)}, {{0.5, 0.4, 0.4}, 8.9+(-4)}, {{0.88, 0.51, 0.24}, 10.88+(-4)}, 1};
			morning[] = {16, {{1, 1, 0.9}, 13.17+(-4)}, {{0.17, 0.18, 0.19}, 10.26+(-4)}, {{1, 1, 0.9}, 12.67+(-4)}, {{0.17, 0.18, 0.19}, 11.71+(-4)}, {{0.15, 0.15, 0.15}, 12.42+(-4)}, {{0.17, 0.17, 0.15}, 14.42+(-4)}, 1};
			noon[] = {45, {{1, 1, 1}, 17+(-4)}, {{1, 1.3, 1.55}, 13.5+(-4)}, {{1, 1, 1}, 15+(-4)}, {{0.36, 0.37, 0.38}, 13.5+(-4)}, {{1, 1, 1}, 16+(-4)}, {{1.0, 1.0, 1}, 17+(-4)}, 1};
		};
		
		class DayLightingRainy : DayLightingRainy {
			deepNight[] = {-15, {0.0034, 0.0034, 0.004}, {0.003, 0.003, 0.003}, {0.0034, 0.0034, 0.004}, {0.003, 0.003, 0.003}, {0.001, 0.001, 0.002}, {0.001, 0.001, 0.002}, 0};
			fullNight[] = {-5, {0.023, 0.023, 0.023}, {0.02, 0.02, 0.02}, {0.023, 0.023, 0.023}, {0.02, 0.02, 0.02}, {0.01, 0.01, 0.02}, {0.08, 0.06, 0.06}, 0};
			sunMoon[] = {-3.75, {0.04, 0.04, 0.05}, {0.04, 0.04, 0.05}, {0.04, 0.04, 0.05}, {0.04, 0.04, 0.05}, {0.04, 0.035, 0.04}, {0.11, 0.08, 0.09}, 0.5};
			earlySun[] = {-2.5, {0.0689, 0.0689, 0.0804}, {0.06, 0.06, 0.07}, {0.0689, 0.0689, 0.0804}, {0.06, 0.06, 0.07}, {0.08, 0.07, 0.08}, {0.14, 0.1, 0.12}, 0.5};
			earlyMorning[] = {0, {{1, 1, 1}, (-4)+3.95}, {{1, 1, 1}, (-4)+3.0}, {{1, 1, 1}, (-4)+3.95}, {{1, 1, 1}, (-4)+3.0}, {{1, 1, 1}, (-4)+4}, {{1, 1, 1}, (-4)+5.5}, 1};
			morning[] = {5, {{1, 1, 1}, (-4)+5.7}, {{1, 1, 1}, (-4)+4.5}, {{1, 1, 1}, (-4)+5.7}, {{1, 1, 1}, (-4)+4.5}, {{1, 1, 1}, (-4)+7}, {{1, 1, 1}, (-4)+8}, 1};
			lateMorning[] = {25, {{1, 1, 1}, (-4)+10.45}, {{1, 1, 1}, (-4)+9.75}, {{1, 1, 1}, (-4)+10.45}, {{1, 1, 1}, (-4)+9.75}, {{1, 1, 1}, (-4)+12}, {{1, 1, 1}, (-4)+12.75}, 1};
			noon[] = {70, {{1, 1, 1}, (-4)+12.5}, {{1, 1, 1}, (-4)+11}, {{1, 1, 1}, (-4)+12}, {{1, 1, 1}, (-4)+11}, {{1, 1, 1}, (-4)+13.5}, {{1, 1, 1}, (-4)+14}, 1};
		};
		
		class Weather : Weather {
			class Lighting : Lighting {
				class BrightAlmost : DayLightingBrightAlmost {
					overcast = 0;
				};
				
				class Rainy : DayLightingRainy {
					overcast = 1.0;
				};
			};
		};
		clutterGrid = 1.0;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "ca\chernarus\data\cr_trava1_mco.paa";
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 3;
		
		class clutter {
			class GrassTall : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassTall.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			
			class StubbleClutter : DefaultClutter {
				model = "ca\plants2\clutter\c_stubble.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.1;
			};
			
			class AutumnFlowers : DefaultClutter {
				model = "ca\plants2\clutter\c_autumn_flowers.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			
			class GrassBunch : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassBunch.p3d";
				affectedByWind = 0.35;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 1.0;
			};
			
			class GrassCrooked : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassCrooked.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class GrassCrookedGreen : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassCrookedGreen.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.3;
			};
			
			class GrassCrookedForest : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassCrookedForest.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.4;
			};
			
			class WeedDead : DefaultClutter {
				model = "ca\plants2\clutter\c_WeedDead.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.1;
			};
			
			class WeedDeadSmall : DefaultClutter {
				model = "ca\plants2\clutter\c_WeedDead2.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 0.9;
			};
			
			class HeatherBrush : DefaultClutter {
				model = "ca\plants2\clutter\c_caluna.p3d";
				affectedByWind = 0.15;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.8;
				surfaceColor[] = {0.53, 0.5, 0.37, 1};
			};
			
			class WeedSedge : DefaultClutter {
				model = "ca\plants2\clutter\c_weed3.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.85;
			};
			
			class WeedTall : DefaultClutter {
				model = "ca\plants2\clutter\c_weed2.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.1;
			};
			
			class BlueBerry : DefaultClutter {
				model = "ca\plants2\clutter\c_BlueBerry.p3d";
				affectedByWind = 0.05;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.3;
			};
			
			class RaspBerry : DefaultClutter {
				model = "ca\plants2\clutter\c_raspBerry.p3d";
				affectedByWind = 0;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			
			class FernAutumn : DefaultClutter {
				model = "ca\plants2\clutter\c_fern.p3d";
				affectedByWind = 0.1;
				scaleMin = 0.6;
				scaleMax = 1.2;
			};
			
			class FernAutumnTall : DefaultClutter {
				model = "ca\plants2\clutter\c_fernTall.p3d";
				affectedByWind = 0.15;
				scaleMin = 0.75;
				scaleMax = 1.0;
			};
			
			class SmallPicea : DefaultClutter {
				model = "ca\plants2\clutter\c_picea.p3d";
				affectedByWind = 0.05;
				scaleMin = 0.75;
				scaleMax = 1.25;
			};
			
			class PlantWideLeaf : DefaultClutter {
				model = "ca\plants2\clutter\c_WideLeafPlant.p3d";
				affectedByWind = 0.1;
				scaleMin = 1.0;
				scaleMax = 1.0;
			};
			
			class MushroomsHorcak : DefaultClutter {
				model = "ca\plants2\clutter\c_MushroomHorcak.p3d";
				affectedByWind = 0;
				scaleMin = 0.85;
				scaleMax = 1.25;
			};
			
			class MushroomsPrasivka : MushroomsHorcak {
				model = "ca\plants2\clutter\c_MushroomPrasivky.p3d";
			};
			
			class MushroomsBabka : MushroomsHorcak {
				model = "ca\plants2\clutter\c_MushroomBabka.p3d";
			};
			
			class MushroomsMuchomurka : MushroomsHorcak {
				model = "ca\plants2\clutter\c_MushroomMuchomurka.p3d";
			};
		};
		
		class Subdivision {
			class Fractal {
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			
			class WhiteNoise {
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = 0.0;
			minSlope = 0.02;
		};
		
		class Ambient {
			class Mammals {
				radius = 200;
				cost = "(1 + forest + trees) * (0.5 + (0.5 * night)) * (1 - sea) * (1 - houses)";
				
				class Species {
					class Rabbit {
						probability = 0.2;
						cost = 1;
					};
				};
			};
			
			class BigBirds {
				radius = 300;
				cost = "((1 + forest + trees) - ((2 * rain)) - houses) * (1 - night) * (1 - sea)";
				
				class Species {
					class Hawk {
						probability = 0.2;
						cost = 1;
					};
				};
			};
			
			class Birds {
				radius = 170;
				cost = "(1 - night) * ((1 + (3 * sea)) - (2 * rain))";
				
				class Species {
					class Crow {
						probability = 0.2;
						cost = 1;
					};
				};
			};
			
			class BigInsects {
				radius = 20;
				cost = "(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				
				class Species {
					class DragonFly {
						probability = "0.6 - (meadow * 0.5) + (forest * 0.4)";
						cost = 1;
					};
					
					class ButterFly {
						probability = "0.4 + (meadow * 0.5) - (forest * 0.4)";
						cost = 1;
					};
				};
			};
			
			class BigInsectsAquatic {
				radius = 20;
				cost = "(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				
				class Species {
					class DragonFly {
						probability = 1;
						cost = 1;
					};
				};
			};
			
			class SmallInsects {
				radius = 3;
				cost = "(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				
				class Species {
					class HouseFly {
						probability = "deadBody + (1 - deadBody) * (0.5 - forest * 0.1 - meadow * 0.2)";
						cost = 1;
					};
					
					class HoneyBee {
						probability = "(1 - deadBody) * (0.5 - forest * 0.1 + meadow * 0.2)";
						cost = 1;
					};
					
					class Mosquito {
						probability = "(1 - deadBody) * (0.2 * forest)";
						cost = 1;
					};
				};
			};
			
			class NightInsects {
				radius = 3;
				cost = "(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				
				class Species {
					class Mosquito {
						probability = 1;
						cost = 1;
					};
				};
			};
			
			class WindClutter {
				radius = 10;
				cost = "((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				
				class Species {
					class FxWindGrass1 {
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					
					class FxWindGrass2 {
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					
					class FxWindRock1 {
						probability = "0.4 * hills";
						cost = 1;
					};
					
					class FxCrWindLeaf1 {
						probability = "0.2 * trees";
						cost = 1;
					};
					
					class FxCrWindLeaf2 {
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					
					class FxCrWindLeaf3 {
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};
			
			class NoWindClutter {
				radius = 15;
				cost = 8;
				
				class Species {
					class FxWindPollen1 {
						probability = 1;
						cost = 1;
					};
					
					class FxCrWindLeaf1 {
						probability = "0.2 * trees";
						cost = 1;
					};
					
					class FxCrWindLeaf2 {
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					
					class FxCrWindLeaf3 {
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};
		};
		
		class Names {
			class city_Chernogorsk {
				name = $STR_LOCATION_CHERNOGORSK;
				position[] = {6780.7207, 2551.1646};
				type = "NameCityCapital";
				speech[] = {"Chernogorsk"};
				radiusA = 800.0;
				radiusB = 800.0;
				angle = 0.0;
			};
			
			class city_Elektrozavodsk {
				name = $STR_LOCATION_ELEKTROZAVODSK;
				position[] = {10368.232, 2195.3083, 0.10199881};
				type = "NameCity";
				speech[] = {"Elektrozavodsk"};
				radiusA = 1200.0;
				radiusB = 700.0;
				angle = 0.0;
			};
			
			class vill_Tulga {
				name = $STR_LOCATION_TULGA;
				position[] = {12657.16, 4436.7534};
				type = "NameVillage";
				speech[] = {"Tulga"};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			
			class city_Solnychniy {
				name = $STR_LOCATION_SOLNICHNIY;
				position[] = {13178.195, 6210.582};
				type = "NameCity";
				speech[] = {"Solnichniy"};
				radiusA = 600.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			
			class city_Berezino {
				name = $STR_LOCATION_BEREZINO;
				position[] = {12680.196, 9523.0225};
				type = "NameCity";
				speech[] = {"Berezino"};
				radiusA = 1200.0;
				radiusB = 1000.0;
				angle = 0.0;
			};
			
			class city_StarySobor {
				name = $STR_LOCATION_STARYSOBOR;
				position[] = {6134.6616, 7752.5161};
				type = "NameCity";
				speech[] = {"StarySobor"};
				radiusA = 400.0;
				radiusB = 400.0;
				angle = 0.0;
			};
			
			class vill_Msta {
				name = $STR_LOCATION_MSTA;
				position[] = {11291.271, 5463.5273};
				type = "NameVillage";
				speech[] = {"Msta"};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			
			class vill_Staroye {
				name = $STR_LOCATION_STAROYE;
				position[] = {10130.323, 5535.4438};
				type = "NameVillage";
				speech[] = {"Staroye"};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			
			class vill_Shakhovka {
				name = $STR_LOCATION_SHAKHOVKA;
				position[] = {9624.1504, 6546.8462};
				type = "NameVillage";
				speech[] = {"Shakhovka"};
				radiusA = 150.0;
				radiusB = 150.0;
				angle = 0.0;
			};
			
			class vill_Dolina {
				name = $STR_LOCATION_DOLINA;
				position[] = {11210.574, 6638.3159};
				type = "NameVillage";
				speech[] = {"Dolina"};
				radiusA = 500.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			
			class vill_Orlovets {
				name = $STR_LOCATION_ORLOVETS;
				position[] = {12146.171, 7269.7651};
				type = "NameVillage";
				speech[] = {"Orlovets"};
				radiusA = 250.0;
				radiusB = 250.0;
				angle = 0.0;
			};
			
			class vill_Bor {
				name = $STR_LOCATION_BOR;
				position[] = {3335.8518, 3950.2542};
				type = "NameVillage";
				speech[] = {"Bor"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			
			class city_Gorka {
				name = $STR_LOCATION_GORKA;
				position[] = {9570.916, 8819.9619};
				type = "NameCity";
				speech[] = {"Gorka"};
				radiusA = 450.0;
				radiusB = 250.0;
				angle = 0.0;
			};

			class vill_NovySobor {
				name = $STR_LOCATION_NOVYSOBOR;
				position[] = {7079.8203, 7682.7925};
				type = "NameVillage";
				speech[] = {"NovySobor"};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			
			class vill_Kabanino {
				name = $STR_LOCATION_KABANINO;
				position[] = {5354.8496, 8582.9023};
				type = "NameVillage";
				speech[] = {"Kabanino"};
				radiusA = 250.0;
				radiusB = 250.0;
				angle = 0.0;
			};
			
			class vill_Mogilevka {
				name = $STR_LOCATION_MOGILEVKA;
				position[] = {7597.0806, 5097.8647};
				type = "NameVillage";
				speech[] = {"Mogilevka"};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			
			class vill_Nadezhdino {
				name = $STR_LOCATION_NADEZHDINO;
				position[] = {5876.66, 4696.93};
				type = "NameVillage";
				speech[] = {"Nadezhdino"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class hill_Pik_Kozlova {
				name = $STR_LOCATION_MT_PIKKOZLOVA;
				position[] = {8850.17, 2880.53};
				type = "Hill";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			
			class hill_Altar {
				name = $STR_LOCATION_MT_ALTAR;
				position[] = {8137.82, 9139.1};
				type = "Hill";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			
			class hill_Ridge_Postoy {
				name = $STR_LOCATION_MT_RIDGEPOSTOY;
				position[] = {10725.2, 5670.67};
				type = "Hill";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			
			class vill_Guglovo {
				name = $STR_LOCATION_GUGLOVO;
				position[] = {8431.08, 6703.19};
				type = "NameVillage";
				speech[] = {"Guglovo"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Kamyshovo {
				name = $STR_LOCATION_KAMYSHOVO;
				position[] = {12063.1, 3515.58};
				type = "NameVillage";
				speech[] = {"Kamyshovo"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Pusta {
				name = $STR_LOCATION_PUSTA;
				position[] = {9127.18, 3954.47};
				type = "NameVillage";
				speech[] = {"Pusta"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class city_Zelenogorsk {
				name = $STR_LOCATION_ZELENOGORSK;
				position[] = {2774.26, 5380.38};
				type = "NameCity";
				speech[] = {"Zelenogorsk"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			
			class city_Vybor {
				name = $STR_LOCATION_VYBOR;
				position[] = {3833.17, 8918.92};
				type = "NameCity";
				speech[] = {"Vybor"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			
			class vill_Dubrovka {
				name = $STR_LOCATION_DUBROVKA;
				position[] = {10382.1, 9938.35};
				type = "NameVillage";
				speech[] = {"Dubrovka"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Khelm {
				name = $STR_LOCATION_KHELM;
				position[] = {12329.3, 10771};
				type = "NameVillage";
				speech[] = {"Khelm"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Olsha {
				name = $STR_LOCATION_OLSHA;
				position[] = {13331, 12900};
				type = "NameVillage";
				speech[] = {"Olsha"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Gvozdno {
				name = $STR_LOCATION_GVOZDNO;
				position[] = {8614.62, 11890.3};
				type = "NameVillage";
				speech[] = {"Gvozdno"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class city_Krasnostav {
				name = $STR_LOCATION_KRASNOSTAV;
				position[] = {11224.3, 12274.5};
				type = "NameCity";
				speech[] = {"Krasnostav"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			
			class vill_Petrovka {
				name = $STR_LOCATION_PETROVKA;
				position[] = {5016.45, 12490.8};
				type = "NameVillage";
				speech[] = {"Petrovka"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Grishino {
				name = $STR_LOCATION_GRISHINO;
				position[] = {5959.94, 10335.7};
				type = "NameVillage";
				speech[] = {"Grishino"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class Local_Skalka {
				name = $STR_LOCATION_LOC_SKALKA;
				position[] = {2060.16, 12809.3};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Rogovo {
				name = $STR_LOCATION_ROGOVO;
				position[] = {4770.96, 6835.26};
				type = "NameVillage";
				speech[] = {"Rogovo"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Pogorevka {
				name = $STR_LOCATION_POGOREVKA;
				position[] = {4435.36, 6425.58};
				type = "NameVillage";
				speech[] = {"Pogorevka"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Pustoshka {
				name = $STR_LOCATION_PUSTOSHKA;
				position[] = {3070.23, 7940.48};
				type = "NameVillage";
				speech[] = {"Pustoshka"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Kozlovka {
				name = $STR_LOCATION_KOZLOVKA;
				position[] = {4477.57, 4597.79};
				type = "NameVillage";
				speech[] = {"Kozlovka"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Polana {
				name = $STR_LOCATION_POLANA;
				position[] = {10707.1, 8053.29};
				type = "NameVillage";
				speech[] = {"Polana"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Balota {
				name = $STR_LOCATION_BALOTA;
				position[] = {4527.58, 2465.32};
				type = "NameVillage";
				speech[] = {"Balota"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Komarovo {
				name = $STR_LOCATION_KOMAROVO;
				position[] = {3664.31, 2499.0};
				type = "NameVillage";
				speech[] = {"Komarovo"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Kamenka {
				name = $STR_LOCATION_KAMENKA;
				position[] = {1853.09, 2249.85};
				type = "NameVillage";
				speech[] = {"Kamenka"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Myshkino {
				name = $STR_LOCATION_MYSHKINO;
				position[] = {1998.18, 7355.13};
				type = "NameVillage";
				speech[] = {"Myshkino"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Pavlovo {
				name = $STR_LOCATION_PAVLOVO;
				position[] = {1693.98, 3858.65};
				type = "NameVillage";
				speech[] = {"Pavlovo"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class Local_Dichina {
				name = $STR_LOCATION_LOC_DICHINA;
				position[] = {4626.16, 7906.55};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class Local_Devils_Castle {
				name = $STR_LOCATION_LOC_DEVILSCASTLE;
				position[] = {6816.39, 11551.6};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class Local_Zub {
				name = $STR_LOCATION_LOC_ZUB;
				position[] = {6574.28, 5573.85};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class Local_Rog {
				name = $STR_LOCATION_LOC_ROG;
				position[] = {11221.9, 4353.38};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class Local_Power_Plant {
				name = $STR_LOCATION_POWERPLANT;
				position[] = {10255, 2639.05};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Lopatino {
				name = $STR_LOCATION_LOPATINO;
				position[] = {2750.0, 10005};
				type = "NameVillage";
				speech[] = {"Lopatino"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Vyshnoye {
				name = $STR_LOCATION_VYSHNOE;
				position[] = {6561.91, 6078.77};
				type = "NameVillage";
				speech[] = {"Vyshnoe"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class vill_Prigorodki {
				name = $STR_LOCATION_PRIGORODKI;
				position[] = {8015.58, 3419.26};
				type = "NameVillage";
				speech[] = {"Prigorodki"};
				radiusA = 144.91;
				radiusB = 81.43;
				angle = 0.0;
			};
			
			class vill_Drozhino {
				name = $STR_LOCATION_DROZHINO;
				position[] = {3382.02, 4925.88};
				type = "NameVillage";
				speech[] = {"Drozhino"};
				radiusA = 57.81;
				radiusB = 66.94;
				angle = 0.0;
			};
			
			class vill_Sosnovka {
				name = $STR_LOCATION_SOSNOVKA;
				position[] = {2539.26, 6358.71};
				type = "NameVillage";
				speech[] = {"Sosnovka"};
				radiusA = 57.46;
				radiusB = 62.62;
				angle = 0.0;
			};
			
			class vill_Nizhnoye {
				name = $STR_LOCATION_NIZHNOYE;
				position[] = {12824.9, 8097.7};
				type = "NameVillage";
				speech[] = {"Nizhnoye"};
				radiusA = 97.78;
				radiusB = 111.66;
				angle = 0.0;
			};
			
			class vill_Pulkovo {
				name = $STR_LOCATION_PULKOVO;
				position[] = {4950.82, 5627.1};
				type = "NameVillage";
				speech[] = {"Pulkovo"};
				radiusA = 60.01;
				radiusB = 48.11;
				angle = 0.0;
			};
			
			class AStrong_Chernogorsk_01 {
				name = "";
				position[] = {6329.81, 2867.8};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 290.0;
			};
			
			class AStrong_Chernogorsk_02 {
				name = "";
				position[] = {6478.44, 3036.28};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 330.0;
			};
			
			class AStrong_Chernogorsk_03 {
				name = "";
				position[] = {7181.44, 3314.53};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AStrong_Chernogorsk_04 {
				name = "";
				position[] = {7318.47, 2691.98};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 40.0;
			};
			
			class AStrong_Chernogorsk_05 {
				name = "";
				position[] = {6486.8, 2233.07};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.0;
			};
			
			class AStrong_Chernogorsk_06 {
				name = "";
				position[] = {6311.8, 2253.6};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AStrong_Chernogorsk_07 {
				name = "";
				position[] = {6013.38, 2170.94};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 260.0;
			};
			
			class AFlatC_Chernogorsk {
				name = "";
				position[] = {6881.44, 2781.03};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 15.0;
			};
			
			class AFlat_001 {
				name = "";
				position[] = {5811.59, 2081.12};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_002 {
				name = "";
				position[] = {6632.68, 3550.57};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_003 {
				name = "";
				position[] = {7330.57, 3404.08};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlatCS_Chernogorsk_01 {
				name = "";
				position[] = {6504.64, 2403.03};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 130.0;
			};
			
			class AFlatCS_Chernogorsk_02 {
				name = "";
				position[] = {6994.2, 2605.59};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 50.0;
			};
			
			class AFlatCS_Chernogorsk_03 {
				name = "";
				position[] = {6662.41, 2976.61};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 325.0;
			};
			
			class AFlat_004 {
				name = "";
				position[] = {4925.81, 2154.93};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AStrong_Balota_01 {
				name = "";
				position[] = {4363.75, 2299.27};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AStrong_Balota_02 {
				name = "";
				position[] = {4357.23, 2561.82};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AStrong_Balota_03 {
				name = "";
				position[] = {4613.53, 2565.56};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 350.0;
			};
			
			class AStrong_Balota_04 {
				name = "";
				position[] = {4607.47, 2405.78};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class ACityC_Chernogorsk {
				name = "";
				position[] = {6735.83, 2626.6};
				type = "CityCenter";
				neighbors[] = {"ACityC_Prigorodki", "ACityC_Balota", "ACityC_Nadezhdino", "ACityC_Mogilevka"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Balota {
				name = "";
				position[] = {4498.07, 2449.39};
				type = "CityCenter";
				neighbors[] = {"ACityC_Chernogorsk", "ACityC_Komarovo", "ACityC_Kozlovka"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlatCS_Balota_01 {
				name = "";
				position[] = {4591.08, 2450.67};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 10.0;
			};
			
			class AFlat_005 {
				name = "";
				position[] = {4063.19, 2850.32};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_006 {
				name = "";
				position[] = {3177.66, 2047.28};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_007 {
				name = "";
				position[] = {1173.92, 2445.61};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_008 {
				name = "";
				position[] = {2014.02, 2848.63};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_009 {
				name = "";
				position[] = {2670.98, 3375.57};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_010 {
				name = "";
				position[] = {2051.36, 4343.92};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_011 {
				name = "";
				position[] = {2107.03, 5051.17};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_012 {
				name = "";
				position[] = {3129.51, 4469.73};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_013 {
				name = "";
				position[] = {3408.55, 5433.56};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_014 {
				name = "";
				position[] = {4053.07, 4864.02};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_015 {
				name = "";
				position[] = {2330.27, 5980.01};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_016 {
				name = "";
				position[] = {2869.66, 6690.13};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_017 {
				name = "";
				position[] = {3339.92, 6597.18};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_018 {
				name = "";
				position[] = {3264.86, 7266.2};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_019 {
				name = "";
				position[] = {3766.45, 8114.37};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_020 {
				name = "";
				position[] = {3325.96, 8736.5};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_021 {
				name = "";
				position[] = {2735.22, 9423.34};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_022 {
				name = "";
				position[] = {3732.01, 10153.9};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_023 {
				name = "";
				position[] = {2192.24, 10800.4};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_024 {
				name = "";
				position[] = {3865.45, 11133.4};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_025 {
				name = "";
				position[] = {4529.94, 9147.24};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_026 {
				name = "";
				position[] = {5315.17, 10960.3};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_027 {
				name = "";
				position[] = {5810.39, 11338.3};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_028 {
				name = "";
				position[] = {5610.61, 12283.3};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_029 {
				name = "";
				position[] = {7476.93, 11361};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_030 {
				name = "";
				position[] = {8283.83, 10607.2};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_031 {
				name = "";
				position[] = {9089.95, 11354.0};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_032 {
				name = "";
				position[] = {9418.09, 12168.5};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_033 {
				name = "";
				position[] = {10390.4, 12470.4};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_034 {
				name = "";
				position[] = {10933.4, 11472.3};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_035 {
				name = "";
				position[] = {12318.6, 13055.1};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_036 {
				name = "";
				position[] = {13122.8, 11274.8};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_037 {
				name = "";
				position[] = {13170.5, 10722.5};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_038 {
				name = "";
				position[] = {11814, 9903.66};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_039 {
				name = "";
				position[] = {12654, 9031.65};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_040 {
				name = "";
				position[] = {12163.5, 8549.9};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_041 {
				name = "";
				position[] = {13137.6, 7470.0};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_042 {
				name = "";
				position[] = {13442.9, 5248.4};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_043 {
				name = "";
				position[] = {12880.5, 5582.35};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_044 {
				name = "";
				position[] = {12597.9, 3598.7};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_045 {
				name = "";
				position[] = {11181, 4754.65};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_046 {
				name = "";
				position[] = {11773.3, 5662.78};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_047 {
				name = "";
				position[] = {10007.5, 6010.35};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_048 {
				name = "";
				position[] = {10694.9, 6889.37};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 320.0;
			};
			
			class AFlat_049 {
				name = "";
				position[] = {11150.3, 7874.84};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_050 {
				name = "";
				position[] = {10481.1, 8641.44};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_051 {
				name = "";
				position[] = {10896.8, 9058.49};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_052 {
				name = "";
				position[] = {9987.1, 10544.8};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_053 {
				name = "";
				position[] = {10133.5, 8392.46};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_054 {
				name = "";
				position[] = {7253.13, 9838.1};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_055 {
				name = "";
				position[] = {8174.12, 9026.43};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_056 {
				name = "";
				position[] = {7958.59, 8264.05};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_057 {
				name = "";
				position[] = {8517.94, 7973.78};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_058 {
				name = "";
				position[] = {8850.2, 6330.11};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_059 {
				name = "";
				position[] = {8215.92, 5800.98};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_060 {
				name = "";
				position[] = {7857.14, 7154.31};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_061 {
				name = "";
				position[] = {5610.09, 8205.99};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_062 {
				name = "";
				position[] = {4865.21, 8087.61};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_063 {
				name = "";
				position[] = {4523.31, 7190.4};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_064 {
				name = "";
				position[] = {5569.96, 7228.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_065 {
				name = "";
				position[] = {6247.75, 6869.7};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_066 {
				name = "";
				position[] = {6943.65, 5718.2};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_067 {
				name = "";
				position[] = {5775.64, 9179.84};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_068 {
				name = "";
				position[] = {6672.03, 8983.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_069 {
				name = "";
				position[] = {5015.76, 3667.38};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_070 {
				name = "";
				position[] = {8520.4, 2681.92};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_071 {
				name = "";
				position[] = {6542.0, 4730.7};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_072 {
				name = "";
				position[] = {7772.44, 4483.84};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_073 {
				name = "";
				position[] = {9103.76, 3447.82};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_074 {
				name = "";
				position[] = {8744.62, 2275.0};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlat_075 {
				name = "";
				position[] = {11088.9, 3051.86};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AStrong_Komarovo_01 {
				name = "";
				position[] = {3498.06, 2502.13};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 290.0;
			};
			
			class AStrong_Komarovo_02 {
				name = "";
				position[] = {3421.86, 2355.14};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 230.0;
			};
			
			class AStrong_Komarovo_03 {
				name = "";
				position[] = {3610.0, 2277.04};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AStrong_Komarovo_04 {
				name = "";
				position[] = {3813.88, 2539.62};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 50.0;
			};
			
			class AStrong_Kamenka_01 {
				name = "";
				position[] = {2174.05, 2231.89};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AStrong_Kamenka_02 {
				name = "";
				position[] = {1574.21, 2225.27};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 310.0;
			};
			
			class AStrong_Kamenka_03 {
				name = "";
				position[] = {1738.02, 2364.54};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 5.0;
			};
			
			class AStrong_Kamenka_04 {
				name = "";
				position[] = {1985.02, 2169.76};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 175.0;
			};
			
			class AStrong_Pavlovo_01 {
				name = "";
				position[] = {1772.95, 3578.54};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.0;
			};
			
			class AStrong_Pavlovo_02 {
				name = "";
				position[] = {1917.22, 3801.09};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AStrong_Pavlovo_03 {
				name = "";
				position[] = {1818.71, 4089.96};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AStrong_Zelenogorsk_01 {
				name = "";
				position[] = {2468.85, 4991.24};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 215.0;
			};
			
			class AStrong_Zelenogorsk_02 {
				name = "";
				position[] = {2451.34, 5229.32};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 285.0;
			};
			
			class AStrong_Zelenogorsk_03 {
				name = "";
				position[] = {2710.61, 5778.91};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 350.0;
			};
			
			class AStrong_Zelenogorsk_04 {
				name = "";
				position[] = {3191.54, 5566.72};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AStrong_Zelenogorsk_05 {
				name = "";
				position[] = {3020.77, 5257.98};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AStrong_Bor_01 {
				name = "";
				position[] = {3229.91, 4270.79};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 360.0;
			};
			
			class AStrong_Bor_02 {
				name = "";
				position[] = {3342.4, 3823.52};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 190.0;
			};
			
			class AStrong_Bor_03 {
				name = "";
				position[] = {3589.89, 3915.1};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 125.0;
			};
			
			class AStrong_Kozlovka_01 {
				name = "";
				position[] = {4073.13, 4669.06};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 140.0;
			};
			
			class AStrong_Kozlovka_02 {
				name = "";
				position[] = {4126.82, 4884.66};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 235.0;
			};
			
			class AStrong_Kozlovka_03 {
				name = "";
				position[] = {4740.74, 4751.81};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 25.0;
			};
			
			class AStrong_Kozlovka_04 {
				name = "";
				position[] = {4557.41, 4372.1};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AStrong_Pogorevka_01 {
				name = "";
				position[] = {4274.78, 6518.44};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 310.0;
			};
			
			class AStrong_Pogorevka_02 {
				name = "";
				position[] = {4437.05, 6287.04};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 195.0;
			};
			
			class AStrong_Pogorevka_03 {
				name = "";
				position[] = {4591.23, 6467.21};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 145.0;
			};
			
			class AStrong_Rogovo_01 {
				name = "";
				position[] = {4799.27, 6678.24};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 190.0;
			};
			
			class AStrong_Rogovo_02 {
				name = "";
				position[] = {4860.91, 6815.34};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 105.0;
			};
			
			class AStrong_Rogovo_03 {
				name = "";
				position[] = {4863.62, 7073.8};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 330.0;
			};
			
			class AStrong_Rogovo_04 {
				name = "";
				position[] = {4581.29, 6928.57};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 310.0;
			};
			
			class AStrong_Pustoshka_01 {
				name = "";
				position[] = {3017.85, 7602.57};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 190.0;
			};
			
			class AStrong_Pustoshka_02 {
				name = "";
				position[] = {3298.03, 7913.21};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.0;
			};
			
			class AStrong_Pustoshka_03 {
				name = "";
				position[] = {3250.01, 8262.25};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 65.0;
			};
			
			class AStrong_Pustoshka_04 {
				name = "";
				position[] = {2969.7, 8044.09};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 335.0;
			};
			
			class AStrong_Vybor_01 {
				name = "";
				position[] = {3625.18, 8511.43};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 235.0;
			};
			
			class AStrong_Vybor_02 {
				name = "";
				position[] = {3600.31, 9074.23};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AStrong_Vybor_03 {
				name = "";
				position[] = {4054.09, 8757.92};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AStrong_Lopatino_01 {
				name = "";
				position[] = {2944.76, 9715.82};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 130.0;
			};
			
			class AStrong_Lopatino_02 {
				name = "";
				position[] = {2553.58, 9836.94};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 175.0;
			};
			
			class AStrong_Lopatino_03 {
				name = "";
				position[] = {2633.66, 10202.7};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 295.0;
			};
			
			class AStrong_Lopatino_04 {
				name = "";
				position[] = {2945.79, 9936.53};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 60.0;
			};
			
			class AStrong_AirField_01 {
				name = "";
				position[] = {4083.95, 10287.4};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 230.0;
			};
			
			class AStrong_AirField_02 {
				name = "";
				position[] = {4522.24, 9793.23};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.0;
			};
			
			class AStrong_AirField_03 {
				name = "";
				position[] = {4465.91, 9498.5};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 210.0;
			};
			
			class AStrong_AirField_04 {
				name = "";
				position[] = {5058.49, 9670.99};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 30.0;
			};
			
			class AStrong_AirField_05 {
				name = "";
				position[] = {4826.65, 10294.8};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 330.0;
			};
			
			class AStrong_AirField_06 {
				name = "";
				position[] = {4484.99, 10868};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AStrong_AirField_07 {
				name = "";
				position[] = {4110.95, 11125.8};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AStrong_Grishino_01 {
				name = "";
				position[] = {5858.96, 10075.3};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.0;
			};
			
			class AStrong_Grishino_02 {
				name = "";
				position[] = {5968.55, 10062.8};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 150.0;
			};
			
			class AStrong_Grishino_03 {
				name = "";
				position[] = {5705.31, 10251.4};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AStrong_Grishino_04 {
				name = "";
				position[] = {6072.27, 10598.7};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 20.0;
			};
			
			class AStrong_Grishino_05 {
				name = "";
				position[] = {6247.73, 10397.9};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.0;
			};
			
			class AStrong_Gvozdno_01 {
				name = "";
				position[] = {8287.87, 12081.7};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.0;
			};
			
			class AStrong_Gvozdno_02 {
				name = "";
				position[] = {8708.44, 11603.9};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 275.0;
			};
			
			class AStrong_Gvozdno_03 {
				name = "";
				position[] = {9061.04, 11774.5};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.0;
			};
			
			class AStrong_Gvozdno_04 {
				name = "";
				position[] = {8794.4, 11903.7};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.0;
			};
			
			class AStrong_Krasnostav_01 {
				name = "";
				position[] = {10642.8, 12384.8};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 275.0;
			};
			
			class AStrong_Krasnostav_02 {
				name = "";
				position[] = {11181.4, 12067.8};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 220.0;
			};
			
			class AStrong_Krasnostav_03 {
				name = "";
				position[] = {11761.7, 12281.3};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AStrong_Krasnostav_04 {
				name = "";
				position[] = {11628.7, 12546.4};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 30.0;
			};
			
			class AStrong_Krasnostav_05 {
				name = "";
				position[] = {11166.4, 12507.3};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 50.0;
			};
			
			class AStrong_Olsha_01 {
				name = "";
				position[] = {13247.2, 12765.7};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 115.0;
			};
			
			class AStrong_Khelm_01 {
				name = "";
				position[] = {12092, 10594.9};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AStrong_Khelm_02 {
				name = "";
				position[] = {12378, 10564.2};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 150.0;
			};
			
			class AStrong_Khelm_03 {
				name = "";
				position[] = {12373.5, 11020.5};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 60.0;
			};
			
			class AStrong_Dubrovka_01 {
				name = "";
				position[] = {10878.3, 9939.88};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AStrong_Dubrovka_02 {
				name = "";
				position[] = {10250, 9951.04};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 25.0;
			};
			
			class AStrong_Dubrovka_03 {
				name = "";
				position[] = {10504.6, 10074.3};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AStrong_Dubrovka_04 {
				name = "";
				position[] = {10517.9, 9578.36};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 115.0;
			};
			
			class AStrong_Dubrovka_05 {
				name = "";
				position[] = {10392.5, 9537.81};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 190.0;
			};
			
			class AStrong_Berezino_01 {
				name = "";
				position[] = {11424.4, 9388.34};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AStrong_Berezino_02 {
				name = "";
				position[] = {11889.3, 9354.62};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 320.0;
			};
			
			class AStrong_Berezino_03 {
				name = "";
				position[] = {11933, 8701.13};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AStrong_Berezino_04 {
				name = "";
				position[] = {12291.1, 8924.34};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AStrong_Berezino_05 {
				name = "";
				position[] = {12097.7, 9292.37};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AStrong_Polana_02 {
				name = "";
				position[] = {10887.9, 8048.79};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 125.0;
			};
			
			class AStrong_Polana_01 {
				name = "";
				position[] = {10645.8, 8317.94};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 360.0;
			};
			
			class AStrong_Polana_03 {
				name = "";
				position[] = {10626, 7771.07};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 210.0;
			};
			
			class AStrong_Polana_04 {
				name = "";
				position[] = {10394.7, 7760.1};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 280.0;
			};
			
			class AStrong_Gorka_01 {
				name = "";
				position[] = {9056.94, 8889.79};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AStrong_Gorka_02 {
				name = "";
				position[] = {9530.46, 8970.73};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 60.0;
			};
			
			class AStrong_Gorka_03 {
				name = "";
				position[] = {9217.85, 8755.51};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 185.0;
			};
			
			class AStrong_Gorka_04 {
				name = "";
				position[] = {9943.65, 8850.86};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 80.0;
			};
			
			class AStrong_Gorka_05 {
				name = "";
				position[] = {9982.89, 8663.2};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.0;
			};
			
			class AStrong_Orlovets_01 {
				name = "";
				position[] = {11918.6, 7250.96};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 305.0;
			};
			
			class AStrong_Orlovets_02 {
				name = "";
				position[] = {12399.1, 7370.42};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 360.0;
			};
			
			class AStrong_Dolina_01 {
				name = "";
				position[] = {11030.1, 6704.28};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 275.0;
			};
			
			class AStrong_Dolina_02 {
				name = "";
				position[] = {11640.4, 6583.65};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AStrong_Solnichniy_01 {
				name = "";
				position[] = {13115.5, 6256.0};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AStrong_Solnichniy_02 {
				name = "";
				position[] = {13425.1, 6460.38};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 350.0;
			};
			
			class AStrong_Solnichniy_03 {
				name = "";
				position[] = {13395.2, 5932.02};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.0;
			};
			
			class AStrong_Shakhovka_01 {
				name = "";
				position[] = {9702.1, 6248.43};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 70.0;
			};
			
			class AStrong_Shakhovka_02 {
				name = "";
				position[] = {9782.59, 6543.7};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 85.0;
			};
			
			class AStrong_Shakhovka_03 {
				name = "";
				position[] = {9471.98, 6808.37};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.0;
			};
			
			class AStrong_Shakhovka_04 {
				name = "";
				position[] = {9668.36, 6779.11};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 10.0;
			};
			
			class AStrong_Staroye_01 {
				name = "";
				position[] = {10172.2, 5228.89};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 150.0;
			};
			
			class AStrong_Staroye_02 {
				name = "";
				position[] = {9820.59, 5467.55};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AStrong_Staroye_03 {
				name = "";
				position[] = {9928.93, 5927.96};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 340.0;
			};
			
			class AStrong_Staroye_04 {
				name = "";
				position[] = {10505.5, 5480.98};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.0;
			};
			
			class AStrong_Staroye_05 {
				name = "";
				position[] = {10325.5, 5734.03};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 50.0;
			};
			
			class AStrong_Tulga_01 {
				name = "";
				position[] = {12907.6, 4457.43};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 280.0;
			};
			
			class AStrong_Tulga_02 {
				name = "";
				position[] = {12541.8, 4552.67};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 60.0;
			};
			
			class AStrong_Tulga_03 {
				name = "";
				position[] = {12508.4, 4462.73};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 260.0;
			};
			
			class AStrong_Kamyshovo_01 {
				name = "";
				position[] = {11852, 3480.01};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 255.0;
			};
			
			class AStrong_Kamyshovo_02 {
				name = "";
				position[] = {12383.8, 3552.52};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 85.0;
			};
			
			class AStrong_Kamyshovo_03 {
				name = "";
				position[] = {12004.6, 3800.47};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 320.0;
			};
			
			class AStrong_Elektrozavodsk_01 {
				name = "";
				position[] = {10924.1, 2779.45};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AStrong_Elektrozavodsk_02 {
				name = "";
				position[] = {10379.8, 1971.46};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.0;
			};
			
			class AStrong_Elektrozavodsk_03 {
				name = "";
				position[] = {10383.5, 2718.41};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 330.0;
			};
			
			class AStrong_Elektrozavodsk_04 {
				name = "";
				position[] = {10196.3, 2358.27};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.0;
			};
			
			class AStrong_Elektrozavodsk_05 {
				name = "";
				position[] = {9555.84, 2250.67};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 70.0;
			};
			
			class AStrong_Elektrozavodsk_06 {
				name = "";
				position[] = {9868.6, 1894.98};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.0;
			};
			
			class AStrong_Elektrozavodsk_07 {
				name = "";
				position[] = {9182.6, 2101.25};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 280.0;
			};
			
			class AStrong_Pusta_01 {
				name = "";
				position[] = {9126.34, 3620.25};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 95.0;
			};
			
			class AStrong_Pusta_02 {
				name = "";
				position[] = {8843.86, 4021.92};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 315.0;
			};
			
			class AStrong_Pusta_03 {
				name = "";
				position[] = {9362.76, 4025.28};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 20.0;
			};
			
			class AStrong_Mogilevka_01 {
				name = "";
				position[] = {7522.63, 4706.67};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.0;
			};
			
			class AStrong_Mogilevka_02 {
				name = "";
				position[] = {7592.56, 4915.05};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 105.0;
			};
			
			class AStrong_Mogilevka_03 {
				name = "";
				position[] = {7432.33, 5104.58};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 290.0;
			};
			
			class AStrong_Mogilevka_04 {
				name = "";
				position[] = {7362.05, 5292.25};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 335.0;
			};
			
			class AStrong_Mogilevka_05 {
				name = "";
				position[] = {7802.83, 5218.96};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 5.0;
			};
			
			class AStrong_Vyshnoye_01 {
				name = "";
				position[] = {6638.91, 5857.39};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 110.0;
			};
			
			class AStrong_Vyshnoye_02 {
				name = "";
				position[] = {6348.21, 6241.24};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 310.0;
			};
			
			class AStrong_Vyshnoye_03 {
				name = "";
				position[] = {6602.14, 6204.11};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 330.0;
			};
			
			class AStrong_NovySobor_01 {
				name = "";
				position[] = {7351.73, 7694.96};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 140.0;
			};
			
			class AStrong_NovySobor_02 {
				name = "";
				position[] = {6911.07, 7856.05};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 20.0;
			};
			
			class AStrong_NovySobor_03 {
				name = "";
				position[] = {6880.22, 7579.58};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 10.0;
				angle = 300.0;
			};
			
			class AStrong_NovySobor_04 {
				name = "";
				position[] = {7086.97, 7438.21};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 125.0;
			};
			
			class AStrong_StarySobor_01 {
				name = "";
				position[] = {6373.77, 7555.69};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 160.0;
			};
			
			class AStrong_StarySobor_02 {
				name = "";
				position[] = {5855.67, 7529.08};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 200.0;
			};
			
			class AStrong_StarySobor_03 {
				name = "";
				position[] = {6257.96, 7839.42};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 330.0;
			};
			
			class AStrong_StarySobor_04 {
				name = "";
				position[] = {6243.91, 8026.06};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 60.0;
			};
			
			class AStrong_StarySobor_05 {
				name = "";
				position[] = {5824.87, 8121.5};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 325.0;
			};
			
			class AStrong_Kabanino_01 {
				name = "";
				position[] = {5532.61, 8397.47};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 140.0;
			};
			
			class AStrong_Kabanino_02 {
				name = "";
				position[] = {5169.41, 8542.31};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AStrong_Kabanino_03 {
				name = "";
				position[] = {5277.36, 8765.71};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 330.0;
			};
			
			class AStrong_Kabanino_04 {
				name = "";
				position[] = {5488.48, 8712.34};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 50.0;
			};
			
			class AStrong_Bor_04 {
				name = "";
				position[] = {2795.24, 4119.73};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 15.0;
			};
			
			class AStrong_Nadezhdino_01 {
				name = "";
				position[] = {5796.27, 4825.3};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 295.0;
			};
			
			class AStrong_Nadezhdino_02 {
				name = "";
				position[] = {6025.22, 4886.99};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 115.0;
			};
			
			class AStrong_Nadezhdino_03 {
				name = "";
				position[] = {5799.28, 5036.47};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 15.0;
			};
			
			class AStrong_Nadezhdino_04 {
				name = "";
				position[] = {5800.69, 4417.76};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 260.0;
			};
			
			class AStrong_Drozhino_01 {
				name = "";
				position[] = {3254.26, 5052.21};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 315.0;
			};
			
			class AStrong_Drozhino_02 {
				name = "";
				position[] = {3525.2, 4888.45};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.0;
			};
			
			class AStrong_Pulkovo_01 {
				name = "";
				position[] = {4833.52, 5719.49};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 350.0;
			};
			
			class AStrong_Pulkovo_02 {
				name = "";
				position[] = {5018.95, 5597.01};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 110.0;
			};
			
			class AStrong_Sosnovka_01 {
				name = "";
				position[] = {2818.84, 6647.56};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.0;
			};
			
			class AStrong_Sosnovka_02 {
				name = "";
				position[] = {2501.56, 6080.72};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 135.0;
			};
			
			class AStrong_Myshkino_01 {
				name = "";
				position[] = {2316.46, 7201.92};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 40.0;
			};
			
			class AStrong_Myshkino_02 {
				name = "";
				position[] = {1868.52, 7547.36};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AStrong_Vybor_04 {
				name = "";
				position[] = {4113.06, 9088.76};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 60.0;
			};
			
			class AStrong_Petrovka_01 {
				name = "";
				position[] = {4849.9, 12570.4};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 175.0;
			};
			
			class AStrong_Petrovka_02 {
				name = "";
				position[] = {5105.77, 12497.3};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 145.0;
			};
			
			class AStrong_Olsha_02 {
				name = "";
				position[] = {13306.2, 12958.6};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 330.0;
			};
			
			class AStrong_Berezino_06 {
				name = "";
				position[] = {13141.9, 10473.3};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 20.0;
			};
			
			class AStrong_Berezino_07 {
				name = "";
				position[] = {12816.2, 10254.7};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 290.0;
			};
			
			class AStrong_Berezino_08 {
				name = "";
				position[] = {12678.8, 9892.24};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AStrong_Berezino_09 {
				name = "";
				position[] = {12914, 9683.69};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 190.0;
			};
			
			class AStrong_Nizhnoye_01 {
				name = "";
				position[] = {12658.2, 8395.95};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 360.0;
			};
			
			class AStrong_Nizhnoye_02 {
				name = "";
				position[] = {12933.8, 8423.15};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 345.0;
			};
			
			class AStrong_Nizhnoye_03 {
				name = "";
				position[] = {12751.6, 7996.58};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 210.0;
			};
			
			class AStrong_Nizhnoye_04 {
				name = "";
				position[] = {13063.2, 7975.24};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 185.0;
			};
			
			class AStrong_Solnichniy_04 {
				name = "";
				position[] = {13145.1, 7190.32};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 355.0;
			};
			
			class AStrong_Solnichniy_05 {
				name = "";
				position[] = {13137, 6913.16};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AStrong_Orlovets_03 {
				name = "";
				position[] = {12157.3, 7400.25};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 65.0;
			};
			
			class AStrong_Orlovets_04 {
				name = "";
				position[] = {12182.6, 6980.58};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 145.0;
			};
			
			class AStrong_Dolina_03 {
				name = "";
				position[] = {12041.3, 6348.71};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AStrong_Dolina_04 {
				name = "";
				position[] = {12424.5, 6251.06};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.0;
			};
			
			class AStrong_Msta_01 {
				name = "";
				position[] = {11041.7, 5347.4};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 5.0;
			};
			
			class AStrong_Msta_02 {
				name = "";
				position[] = {11079.8, 5142.4};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 135.0;
			};
			
			class AStrong_Msta_03 {
				name = "";
				position[] = {11440.3, 5497.8};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AStrong_Tulga_04 {
				name = "";
				position[] = {12398.9, 4376.36};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AStrong_Prigorodki_01 {
				name = "";
				position[] = {7579.7, 3215.71};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 265.0;
			};
			
			class AStrong_Prigorodki_02 {
				name = "";
				position[] = {7989.64, 3131.91};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 85.0;
			};
			
			class AStrong_Prigorodki_03 {
				name = "";
				position[] = {7637.42, 3499.4};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.0;
			};
			
			class AStrong_Prigorodki_04 {
				name = "";
				position[] = {7880.12, 3532.44};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 135.0;
			};
			
			class AStrong_Guglovo_01 {
				name = "";
				position[] = {8563.02, 6589.22};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 105.0;
			};
			
			class AStrong_Guglovo_02 {
				name = "";
				position[] = {8295.73, 6775.43};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 315.0;
			};
			
			class AFlat_076 {
				name = "";
				position[] = {13180.6, 3987.41};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Komarovo {
				name = "";
				position[] = {3670.81, 2385.79};
				type = "CityCenter";
				neighbors[] = {"ACityC_Bor", "ACityC_Pavlovo", "ACityC_Kamenka", "ACityC_Balota"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Kamenka {
				name = "";
				position[] = {1860.74, 2220.66};
				type = "CityCenter";
				neighbors[] = {"ACityC_Komarovo", "ACityC_Pavlovo"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Pavlovo {
				name = "";
				position[] = {1691.95, 3838.99};
				type = "CityCenter";
				neighbors[] = {"ACityC_Bor", "ACityC_Zelenogorsk", "ACityC_Kamenka", "ACityC_Komarovo"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Bor {
				name = "";
				position[] = {3351.68, 3950.19};
				type = "CityCenter";
				neighbors[] = {"ACityC_Pavlovo", "ACityC_Kozlovka", "ACityC_Drozhino", "ACityC_Komarovo"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Zelenogorsk {
				name = "";
				position[] = {2754.43, 5270.98};
				type = "CityCenter";
				neighbors[] = {"ACityC_Drozhino", "ACityC_Pulkovo", "ACityC_Pavlovo", "ACityC_Sosnovka", "ACityC_Pogorevka"};
				demography[] = {CIV, 0.9, CIV_RU, 0.1};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Drozhino {
				name = "";
				position[] = {3379.62, 4922.15};
				type = "CityCenter";
				neighbors[] = {"ACityC_Bor", "ACityC_Kozlovka", "ACityC_Zelenogorsk", "ACityC_Pulkovo"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Kozlovka {
				name = "";
				position[] = {4467.61, 4626.55};
				type = "CityCenter";
				neighbors[] = {"ACityC_Drozhino", "ACityC_Balota", "ACityC_Bor", "ACityC_Nadezhdino"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Sosnovka {
				name = "";
				position[] = {2527.6, 6336.11};
				type = "CityCenter";
				neighbors[] = {"ACityC_Pustoshka", "ACityC_Myshkino", "ACityC_Zelenogorsk", "ACityC_Pogorevka"};
				demography[] = {CIV, 0.9, CIV_RU, 0.1};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Pulkovo {
				name = "";
				position[] = {4931.55, 5612.53};
				type = "CityCenter";
				neighbors[] = {"ACityC_Zelenogorsk", "ACityC_Rogovo", "ACityC_Pogorevka", "ACityC_Drozhino"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Pogorevka {
				name = "";
				position[] = {4464.15, 6420.89};
				type = "CityCenter";
				neighbors[] = {"ACityC_Rogovo", "ACityC_Zelenogorsk", "ACityC_Pustoshka", "ACityC_Pulkovo", "ACityC_Sosnovka"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Rogovo {
				name = "";
				position[] = {4742.94, 6775.92};
				type = "CityCenter";
				neighbors[] = {"ACityC_Pogorevka", "ACityC_Kabanino", "ACityC_StarySobor", "ACityC_Nadezhdino", "ACityC_Pulkovo", "ACityC_Vyshnoye"};
				demography[] = {CIV, 0.9, CIV_RU, 0.1};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Myshkino {
				name = "";
				position[] = {2002.45, 7322.61};
				type = "CityCenter";
				neighbors[] = {"ACityC_Pustoshka", "ACityC_Sosnovka", "ACityC_Lopatino"};
				demography[] = {CIV, 0.8, CIV_RU, 0.2};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Pustoshka {
				name = "";
				position[] = {3048.06, 7885.56};
				type = "CityCenter";
				neighbors[] = {"ACityC_Vybor", "ACityC_Myshkino", "ACityC_Pogorevka", "ACityC_Sosnovka", "ACityC_Kabanino", "ACityC_Lopatino"};
				demography[] = {CIV, 0.8, CIV_RU, 0.2};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Vybor {
				name = "";
				position[] = {3904.06, 8932.71};
				type = "CityCenter";
				neighbors[] = {"ACityC_Lopatino", "ACityC_Pustoshka", "ACityC_Kabanino"};
				demography[] = {CIV, 0.7, CIV_RU, 0.3};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Lopatino {
				name = "";
				position[] = {2767.78, 9935.97};
				type = "CityCenter";
				neighbors[] = {"ACityC_Vybor", "ACityC_Pustoshka", "ACityC_Grishino", "ACityC_Myshkino"};
				demography[] = {CIV, 0.3, CIV_RU, 0.7};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Kabanino {
				name = "";
				position[] = {5347.5, 8595.36};
				type = "CityCenter";
				neighbors[] = {"ACityC_Rogovo", "ACityC_StarySobor", "ACityC_Grishino", "ACityC_Vybor", "ACityC_Pustoshka"};
				demography[] = {CIV, 0.6, CIV_RU, 0.4};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Grishino {
				name = "";
				position[] = {5980.06, 10289.6};
				type = "CityCenter";
				neighbors[] = {"ACityC_Kabanino", "ACityC_Petrovka", "ACityC_NovySobor", "ACityC_Gvozdno", "ACityC_Gorka", "ACityC_Lopatino"};
				demography[] = {CIV, 0.3, CIV_RU, 0.7};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Petrovka {
				name = "";
				position[] = {4987.79, 12510.6};
				type = "CityCenter";
				neighbors[] = {"ACityC_Grishino"};
				demography[] = {CIV, 0.0, CIV_RU, 1.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_StarySobor {
				name = "";
				position[] = {6115.92, 7747.75};
				type = "CityCenter";
				neighbors[] = {"ACityC_Kabanino", "ACityC_NovySobor", "ACityC_Rogovo", "ACityC_Vyshnoye"};
				demography[] = {CIV, 0.7, CIV_RU, 0.3};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_NovySobor {
				name = "";
				position[] = {7061.19, 7718.04};
				type = "CityCenter";
				neighbors[] = {"ACityC_Guglovo", "ACityC_StarySobor", "ACityC_Gorka", "ACityC_Mogilevka", "ACityC_Grishino"};
				demography[] = {CIV, 0.3, CIV_RU, 0.7};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Guglovo {
				name = "";
				position[] = {8466.55, 6662.45};
				type = "CityCenter";
				neighbors[] = {"ACityC_NovySobor", "ACityC_Staroye", "ACityC_Shakhovka"};
				demography[] = {CIV, 0.5, CIV_RU, 0.5};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Vyshnoye {
				name = "";
				position[] = {6565.11, 6104.91};
				type = "CityCenter";
				neighbors[] = {"ACityC_Rogovo", "ACityC_StarySobor", "ACityC_Mogilevka"};
				demography[] = {CIV, 0.9, CIV_RU, 0.1};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Mogilevka {
				name = "";
				position[] = {7576.98, 5177.14};
				type = "CityCenter";
				neighbors[] = {"ACityC_Vyshnoye", "ACityC_NovySobor", "ACityC_Pusta", "ACityC_Chernogorsk"};
				demography[] = {CIV, 0.8, CIV_RU, 0.2};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Nadezhdino {
				name = "";
				position[] = {5871.47, 4774.94};
				type = "CityCenter";
				neighbors[] = {"ACityC_Kozlovka", "ACityC_Rogovo", "ACityC_Chernogorsk"};
				demography[] = {CIV, 0.9, CIV_RU, 0.1};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Prigorodki {
				name = "";
				position[] = {7982.71, 3382.4};
				type = "CityCenter";
				neighbors[] = {"ACityC_Chernogorsk", "ACityC_Elektrozavodsk"};
				demography[] = {CIV, 0.9, CIV_RU, 0.1};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Elektrozavodsk {
				name = "";
				position[] = {10436.3, 2138.39};
				type = "CityCenter";
				neighbors[] = {"ACityC_Pusta", "ACityC_Prigorodki", "ACityC_Kamyshovo", "ACityC_Staroye"};
				demography[] = {CIV, 0.9, CIV_RU, 0.1};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Pusta {
				name = "";
				position[] = {9169.62, 3857.71};
				type = "CityCenter";
				neighbors[] = {"ACityC_Mogilevka", "ACityC_Elektrozavodsk"};
				demography[] = {CIV, 0.9, CIV_RU, 0.1};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Staroye {
				name = "";
				position[] = {10167, 5572.38};
				type = "CityCenter";
				neighbors[] = {"ACityC_Shakhovka", "ACityC_Guglovo", "ACityC_Msta", "ACityC_Elektrozavodsk", "", "ACityC_Dolina"};
				demography[] = {CIV, 0.8, CIV_RU, 0.2};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Msta {
				name = "";
				position[] = {11273.1, 5471.18};
				type = "CityCenter";
				neighbors[] = {"ACityC_Staroye", "ACityC_Dolina", "ACityC_Tulga"};
				demography[] = {CIV, 0.4, CIV_RU, 0.6};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Tulga {
				name = "";
				position[] = {12775.8, 4416.77};
				type = "CityCenter";
				neighbors[] = {"ACityC_Kamyshovo", "ACityC_Solnychniy", "ACityC_Msta"};
				demography[] = {CIV, 0.6, CIV_RU, 0.4};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Kamyshovo {
				name = "";
				position[] = {12075, 3583.77};
				type = "CityCenter";
				neighbors[] = {"ACityC_Solnychniy", "ACityC_Tulga", "ACityC_Elektrozavodsk"};
				demography[] = {CIV, 0.8, CIV_RU, 0.2};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Solnychniy {
				name = "";
				position[] = {13328.9, 6255.62};
				type = "CityCenter";
				neighbors[] = {"ACityC_Dolina", "ACityC_Nizhnoye", "ACityC_Tulga", "ACityC_Kamyshovo"};
				demography[] = {CIV, 0.6, CIV_RU, 0.4};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Dolina {
				name = "";
				position[] = {11281.5, 6581.77};
				type = "CityCenter";
				neighbors[] = {"ACityC_Polana", "ACityC_Shakhovka", "ACityC_Staroye", "ACityC_Solnychniy", "ACityC_Msta"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Shakhovka {
				name = "";
				position[] = {9624.39, 6565.69};
				type = "CityCenter";
				neighbors[] = {"ACityC_Dolina", "ACityC_Guglovo", "ACityC_Polana", "ACityC_Staroye"};
				demography[] = {CIV, 0.6, CIV_RU, 0.4};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Orlovets {
				name = "";
				position[] = {12155.9, 7266.46};
				type = "CityCenter";
				neighbors[] = {"ACityC_Polana", "ACityC_Berezino"};
				demography[] = {CIV, 0.1, CIV_RU, 0.9};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Polana {
				name = "";
				position[] = {10674.2, 8033.22};
				type = "CityCenter";
				neighbors[] = {"ACityC_Dolina", "ACityC_Shakhovka", "ACityC_Orlovets", "ACityC_Gorka", "ACityC_Dubrovka"};
				demography[] = {CIV, 0.1, CIV_RU, 0.9};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Gorka {
				name = "";
				position[] = {9598.56, 8833.33};
				type = "CityCenter";
				neighbors[] = {"ACityC_Polana", "ACityC_Dubrovka", "ACityC_NovySobor", "ACityC_Grishino", "ACityC_Gvozdno"};
				demography[] = {CIV, 0.8, CIV_RU, 0.2};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Berezino {
				name = "";
				position[] = {12480.4, 9650.34};
				type = "CityCenter";
				neighbors[] = {"ACityC_Dubrovka", "ACityC_Orlovets", "ACityC_Nizhnoye", "ACityC_Khelm"};
				demography[] = {CIV, 1.0, CIV_RU, 0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Dubrovka {
				name = "";
				position[] = {10430.3, 9799.58};
				type = "CityCenter";
				neighbors[] = {"ACityC_Gorka", "ACityC_Berezino", "ACityC_Krasnostav", "ACityC_Gvozdno", "ACityC_Polana"};
				demography[] = {CIV, 0.1, CIV_RU, 0.9};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Gvozdno {
				name = "";
				position[] = {8573.37, 11948};
				type = "CityCenter";
				neighbors[] = {"ACityC_Gorka", "ACityC_Krasnostav", "ACityC_Dubrovka", "ACityC_Grishino"};
				demography[] = {CIV, 0.0, CIV_RU, 1.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Krasnostav {
				name = "";
				position[] = {11175.2, 12282.8};
				type = "CityCenter";
				neighbors[] = {"ACityC_Olsha", "ACityC_Dubrovka", "ACityC_Gvozdno", "ACityC_Khelm"};
				demography[] = {CIV, 0.0, CIV_RU, 1.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Olsha {
				name = "";
				position[] = {13359.7, 12873.1};
				type = "CityCenter";
				neighbors[] = {"ACityC_Krasnostav"};
				demography[] = {CIV, 0.0, CIV_RU, 1.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Khelm {
				name = "";
				position[] = {12302.7, 10796.3};
				type = "CityCenter";
				neighbors[] = {"ACityC_Berezino", "ACityC_Krasnostav"};
				demography[] = {CIV, 0.0, CIV_RU, 1.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class ACityC_Nizhnoye {
				name = "";
				position[] = {12945.8, 8169.6};
				type = "CityCenter";
				neighbors[] = {"ACityC_Berezino", "ACityC_Solnychniy"};
				demography[] = {CIV, 0.0, CIV_RU, 1.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlatC_Balota {
				name = "";
				position[] = {4388.25, 2538.51};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 30.0;
			};
			
			class AFlatC_Komarovo {
				name = "";
				position[] = {3760.11, 2473.73};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 150.0;
			};
			
			class AFlatC_Kamenka {
				name = "";
				position[] = {1684.68, 2234.78};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 20.0;
			};
			
			class AFlatC_Pavlovo {
				name = "";
				position[] = {1732.25, 3740.96};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.0;
			};
			
			class AFlatC_Bor {
				name = "";
				position[] = {3481.35, 3997.94};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 25.0;
			};
			
			class AFlatC_Kozlovka {
				name = "";
				position[] = {4465.96, 4570.83};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AFlatC_Drozhino {
				name = "";
				position[] = {3406.36, 4872.27};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 220.0;
			};
			
			class AFlatC_Zelenogorsk {
				name = "";
				position[] = {2671.15, 5320.51};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 280.0;
			};
			
			class AFlatC_Sosnovka {
				name = "";
				position[] = {2399.68, 6303.76};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 205.0;
			};
			
			class AFlatC_Pulkovo {
				name = "";
				position[] = {4892.73, 5712.45};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 65.0;
			};
			
			class AFlatC_Nadezhdino {
				name = "";
				position[] = {5807.61, 4998.41};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.0;
			};
			
			class AFlatC_Pogorevka {
				name = "";
				position[] = {4519.03, 6324.5};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 360.0;
			};
			
			class AFlatC_Rogovo {
				name = "";
				position[] = {4811.73, 6728.05};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 355.0;
			};
			
			class AFlatC_Vyshnoye {
				name = "";
				position[] = {6522.85, 6149.59};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 50.0;
			};
			
			class AFlatC_NovySobor {
				name = "";
				position[] = {7015.66, 7645.47};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 160.0;
			};
			
			class AFlatC_StarySobor {
				name = "";
				position[] = {6306.92, 7540.0};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 210.0;
			};
			
			class AFlatC_Kabanino {
				name = "";
				position[] = {5449.29, 8608.54};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 265.0;
			};
			
			class AFlatC_Vybor {
				name = "";
				position[] = {3635.42, 8897.64};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 225.0;
			};
			
			class AFlatC_Pustoshka {
				name = "";
				position[] = {2934.61, 7780.66};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 275.0;
			};
			
			class AFlatC_Myshkino {
				name = "";
				position[] = {1916.1, 7439.7};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 250.0;
			};
			
			class AFlatC_Lopatino {
				name = "";
				position[] = {2636.01, 10089};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 235.0;
			};
			
			class AFlatC_Grishino {
				name = "";
				position[] = {6008.88, 10420.3};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AFlatC_Petrovka {
				name = "";
				position[] = {4977.83, 12583};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.0;
			};
			
			class AFlatC_Elektrozavodsk {
				name = "";
				position[] = {10248.8, 2163.76};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 345.0;
			};
			
			class AFlatC_Prigorodki {
				name = "";
				position[] = {7831.21, 3340.26};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlatC_Kamyshovo {
				name = "";
				position[] = {12300.6, 3541.93};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 350.0;
			};
			
			class AFlatC_Pusta {
				name = "";
				position[] = {9081.88, 3753.14};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 85.0;
			};
			
			class AFlatC_Mogilevka {
				name = "";
				position[] = {7641.62, 4966.96};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 35.0;
			};
			
			class AFlatC_Tulga {
				name = "";
				position[] = {12593.9, 4356.49};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 195.0;
			};
			
			class AFlatC_Msta {
				name = "";
				position[] = {11387.2, 5503.74};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 10.0;
			};
			
			class AFlatC_Staroye {
				name = "";
				position[] = {10278.8, 5539.12};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 235.0;
			};
			
			class AFlatC_Shakhovka {
				name = "";
				position[] = {9708.31, 6479.32};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AFlatC_Dolina {
				name = "";
				position[] = {11442.9, 6555.93};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 160.0;
			};
			
			class AFlatC_Orlovets {
				name = "";
				position[] = {12166.4, 7150.0};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 175.0;
			};
			
			class AFlatC_Solnychniy {
				name = "";
				position[] = {13459.3, 6064.03};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 95.0;
			};
			
			class AFlatC_Guglovo {
				name = "";
				position[] = {8428.35, 6800.75};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 15.0;
			};
			
			class AFlatC_Polana {
				name = "";
				position[] = {10911.2, 8136.78};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AFlatC_Berezino {
				name = "";
				position[] = {12181.8, 9397.31};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 135.0;
			};
			
			class AFlatC_Gorka {
				name = "";
				position[] = {9810.16, 8776.46};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 185.0;
			};
			
			class AFlatC_Dubrovka {
				name = "";
				position[] = {10483, 9836.03};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 145.0;
			};
			
			class AFlatC_Khelm {
				name = "";
				position[] = {12260.6, 10782.7};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AFlatC_Olsha {
				name = "";
				position[] = {13387.8, 12858.2};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AFlatC_Krasnostav {
				name = "";
				position[] = {10982.9, 12377.4};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 195.0;
			};
			
			class AFlatC_Gvozdno {
				name = "";
				position[] = {8510.66, 12007.6};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 225.0;
			};
			
			class AFlatC_Nizhnoye {
				name = "";
				position[] = {13034.1, 8336.34};
				type = "FlatAreaCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.0;
			};
			
			class AFlatCS_Balota_02 {
				name = "";
				position[] = {4384.55, 2380.82};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 35.0;
			};
			
			class AFlatCS_Komarovo_01 {
				name = "";
				position[] = {3531.16, 2415.7};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 160.0;
			};
			
			class AFlatCS_Komarovo_02 {
				name = "";
				position[] = {3669.81, 2412.33};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 95.0;
			};
			
			class AFlatCS_Kamenka_01 {
				name = "";
				position[] = {1835.86, 2275.42};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 195.0;
			};
			
			class AFlatCS_Pavlovo_01 {
				name = "";
				position[] = {1637.99, 3942.0};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AFlatCS_Bor_01 {
				name = "";
				position[] = {3235.45, 4011.75};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 25.0;
			};
			
			class AFlatCS_Nadezhdino_01 {
				name = "";
				position[] = {5868.47, 4806.13};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AFlatCS_Kozlovka_01 {
				name = "";
				position[] = {4301.77, 4751.35};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.0;
			};
			
			class AFlatCS_Kozlovka_02 {
				name = "";
				position[] = {4401.23, 4666.25};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.0;
			};
			
			class AFlatCS_Kozlovka_03 {
				name = "";
				position[] = {4469.24, 4595.37};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 260.0;
			};
			
			class AFlatCS_Drozhino_01 {
				name = "";
				position[] = {3323.82, 5002.93};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 215.0;
			};
			
			class AFlatCS_Drozhino_02 {
				name = "";
				position[] = {3487.01, 4892.45};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 205.0;
			};
			
			class AFlatCS_Zelenogorsk_01 {
				name = "";
				position[] = {2544.68, 5045.13};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 320.0;
			};
			
			class AFlatCS_Zelenogorsk_02 {
				name = "";
				position[] = {2752.29, 5113.42};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 105.0;
			};
			
			class AFlatCS_Zelenogorsk_03 {
				name = "";
				position[] = {2692.45, 5427.91};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 200.0;
			};
			
			class AFlatCS_Zelenogorsk_04 {
				name = "";
				position[] = {2878.56, 5370.32};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AFlatCS_Pulkovo_01 {
				name = "";
				position[] = {4856.25, 5629.71};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 195.0;
			};
			
			class AFlatCS_Pogorevka_01 {
				name = "";
				position[] = {4346.98, 6463.28};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 220.0;
			};
			
			class AFlatCS_Rogovo_01 {
				name = "";
				position[] = {4619.03, 6863.36};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 205.0;
			};
			
			class AFlatCS_Vyshnoye_01 {
				name = "";
				position[] = {6422.01, 6170.91};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 205.0;
			};
			
			class AFlatCS_Vyshnoye_02 {
				name = "";
				position[] = {6502.49, 6108.76};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.0;
			};
			
			class AFlatCS_Sosnovka_01 {
				name = "";
				position[] = {2567.8, 6290.77};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 150.0;
			};
			
			class AFlatCS_Sosnovka_02 {
				name = "";
				position[] = {2502.94, 6460.31};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AFlatCS_Myshkino_01 {
				name = "";
				position[] = {2123.76, 7321.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 30.0;
			};
			
			class AFlatCS_Pustoshka_01 {
				name = "";
				position[] = {3158.45, 8044.45};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 30.0;
			};
			
			class AFlatCS_Pustoshka_02 {
				name = "";
				position[] = {3140.71, 8101.63};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 10.0;
				angle = 325.0;
			};
			
			class AFlatCS_NovySobor_01 {
				name = "";
				position[] = {7147.77, 7573.71};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 95.0;
			};
			
			class AFlatCS_StarySobor_01 {
				name = "";
				position[] = {6226.96, 7753.01};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 125.0;
			};
			
			class AFlatCS_Kabanino_01 {
				name = "";
				position[] = {5348.69, 8731.31};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 200.0;
			};
			
			class AFlatCS_Vybor_01 {
				name = "";
				position[] = {3903.04, 8799.05};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 200.0;
			};
			
			class AFlatCS_Vybor_02 {
				name = "";
				position[] = {3752.26, 8639.15};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 125.0;
			};
			
			class AFlatCS_Lopatino_01 {
				name = "";
				position[] = {2788.91, 9833.8};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 210.0;
			};
			
			class AFlatCS_Lopatino_02 {
				name = "";
				position[] = {2620.33, 9880.63};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AFlatCS_Lopatino_03 {
				name = "";
				position[] = {2710.26, 10132.8};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 50.0;
			};
			
			class AFlatCS_Grishino_01 {
				name = "";
				position[] = {5834.99, 10170.4};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 290.0;
			};
			
			class AFlatCS_Grishino_02 {
				name = "";
				position[] = {5912.03, 10272.7};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 300.0;
			};
			
			class AFlatCS_Grishino_03 {
				name = "";
				position[] = {6043.37, 10404.7};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AFlatCS_Grishino_04 {
				name = "";
				position[] = {6039.71, 10525.3};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 295.0;
			};
			
			class AFlatCS_Petrovka_01 {
				name = "";
				position[] = {5032.65, 12449.9};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 210.0;
			};
			
			class AFlatCS_Krasnostav_01 {
				name = "";
				position[] = {11336.4, 12276.5};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 115.0;
			};
			
			class AFlatCS_Krasnostav_02 {
				name = "";
				position[] = {11248.4, 12170.7};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 30.0;
			};
			
			class AFlatCS_Krasnostav_03 {
				name = "";
				position[] = {11551.8, 12250.5};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 355.0;
			};
			
			class AFlatCS_Krasnostav_04 {
				name = "";
				position[] = {11162, 12140.1};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 290.0;
			};
			
			class AFlatCS_Krasnostav_05 {
				name = "";
				position[] = {10738.7, 12407.9};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 165.0;
			};
			
			class AFlatCS_Gvozdno_01 {
				name = "";
				position[] = {8601.28, 11857.9};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 235.0;
			};
			
			class AFlatCS_Gvozdno_02 {
				name = "";
				position[] = {8773.88, 11697.9};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 80.0;
			};
			
			class AFlatCS_Gvozdno_03 {
				name = "";
				position[] = {8435.86, 12008.5};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.0;
			};
			
			class AFlatCS_Gvozdno_04 {
				name = "";
				position[] = {8691.0, 11841.1};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 45.0;
			};
			
			class AFlatCS_Khelm_01 {
				name = "";
				position[] = {12319.7, 10729.6};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.0;
			};
			
			class AFlatCS_Khelm_02 {
				name = "";
				position[] = {12378.9, 10792.6};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.0;
			};
			
			class AFlatCS_Dubrovka_01 {
				name = "";
				position[] = {10459.2, 9967.9};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AFlatCS_Dubrovka_02 {
				name = "";
				position[] = {10557, 9597.84};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 195.0;
			};
			
			class AFlatCS_Dubrovka_03 {
				name = "";
				position[] = {10273.5, 9622.66};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 245.0;
			};
			
			class AFlatCS_Berezino_01 {
				name = "";
				position[] = {11785.5, 9224.77};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 350.0;
			};
			
			class AFlatCS_Berezino_02 {
				name = "";
				position[] = {11758.2, 9119.88};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 235.0;
			};
			
			class AFlatCS_Berezino_03 {
				name = "";
				position[] = {12020.6, 8912.44};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 145.0;
			};
			
			class AFlatCS_Berezino_04 {
				name = "";
				position[] = {12136.5, 9071.39};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 20.0;
			};
			
			class AFlatCS_Berezino_05 {
				name = "";
				position[] = {12291.1, 9049.66};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 60.0;
			};
			
			class AFlatCS_Berezino_06 {
				name = "";
				position[] = {12058.9, 9258.5};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AFlatCS_Berezino_07 {
				name = "";
				position[] = {12221.4, 9564.58};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 15.0;
			};
			
			class AFlatCS_Berezino_08 {
				name = "";
				position[] = {12371.8, 9652.38};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AFlatCS_Berezino_09 {
				name = "";
				position[] = {12658.7, 9792.38};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 330.0;
			};
			
			class AFlatCS_Berezino_10 {
				name = "";
				position[] = {12915.9, 10067.5};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 120.0;
			};
			
			class AFlatCS_Berezino_11 {
				name = "";
				position[] = {12953.2, 10243.0};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 290.0;
			};
			
			class AFlatCS_Berezino_12 {
				name = "";
				position[] = {12943.4, 9826.84};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 285.0;
			};
			
			class AFlatCS_Gorka_01 {
				name = "";
				position[] = {9809.33, 8822.68};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 5.0;
			};
			
			class AFlatCS_Gorka_02 {
				name = "";
				position[] = {9225.92, 8787.83};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 205.0;
			};
			
			class AFlatCS_Gorka_03 {
				name = "";
				position[] = {9319.5, 8929.39};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 325.0;
			};
			
			class AFlatCS_Nizhnoye_01 {
				name = "";
				position[] = {12964.8, 8347.79};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 250.0;
			};
			
			class AFlatCS_Nizhnoye_02 {
				name = "";
				position[] = {12990.8, 8245.67};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 255.0;
			};
			
			class AFlatCS_Nizhnoye_03 {
				name = "";
				position[] = {13056.0, 8061.94};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 85.0;
			};
			
			class AFlatCS_Polana_01 {
				name = "";
				position[] = {10705, 7982.89};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 210.0;
			};
			
			class AFlatCS_Polana_02 {
				name = "";
				position[] = {10773.8, 8212.94};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 215.0;
			};
			
			class AFlatCS_Orlovets_01 {
				name = "";
				position[] = {12331, 7402.01};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 305.0;
			};
			
			class AFlatCS_Orlovets_02 {
				name = "";
				position[] = {11988.7, 7241.98};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 190.0;
			};
			
			class AFlatCS_Dolina_01 {
				name = "";
				position[] = {11127.2, 6622.73};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 200.0;
			};
			
			class AFlatCS_Dolina_02 {
				name = "";
				position[] = {11360.8, 6583.02};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlatCS_Shakhovka_01 {
				name = "";
				position[] = {9667.99, 6449.84};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.0;
			};
			
			class AFlatCS_Shakhovka_02 {
				name = "";
				position[] = {9584.25, 6641.26};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.0;
			};
			
			class AFlatCS_Guglovo_01 {
				name = "";
				position[] = {8343.99, 6766.49};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 190.0;
			};
			
			class AFlatCS_Staroye_01 {
				name = "";
				position[] = {10295.5, 5578.51};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 65.0;
			};
			
			class AFlatCS_Staroye_02 {
				name = "";
				position[] = {10111.3, 5550.66};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.0;
			};
			
			class AFlatCS_Staroye_03 {
				name = "";
				position[] = {10020.7, 5705.52};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 60.0;
			};
			
			class AFlatCS_Staroye_04 {
				name = "";
				position[] = {10123.8, 5377.05};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AFlatCS_Msta_01 {
				name = "";
				position[] = {11431.7, 5564.05};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 35.0;
			};
			
			class AFlatCS_Msta_02 {
				name = "";
				position[] = {11124.7, 5310.37};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 115.0;
			};
			
			class AFlatCS_Solnychniy_01 {
				name = "";
				position[] = {13163.8, 6249.84};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AFlatCS_Solnychniy_02 {
				name = "";
				position[] = {13443.5, 5939.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.0;
			};
			
			class AFlatCS_Solnychniy_03 {
				name = "";
				position[] = {13438.5, 6411.26};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AFlatCS_Prigorodki_01 {
				name = "";
				position[] = {7793.31, 3496.96};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 165.0;
			};
			
			class AFlatCS_Mogilevka_01 {
				name = "";
				position[] = {7512.98, 5054.14};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 295.0;
			};
			
			class AFlatCS_Mogilevka_02 {
				name = "";
				position[] = {7529.12, 5291.37};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 245.0;
			};
			
			class AFlatCS_Pusta_01 {
				name = "";
				position[] = {9180.62, 3928.19};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 325.0;
			};
			
			class AFlatCS_Elektrozavodsk_01 {
				name = "";
				position[] = {9650.88, 2000.21};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 185.0;
			};
			
			class AFlatCS_Elektrozavodsk_02 {
				name = "";
				position[] = {10089.7, 2114.46};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 350.0;
			};
			
			class AFlatCS_Elektrozavodsk_03 {
				name = "";
				position[] = {10321.7, 1953.92};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.0;
			};
			
			class AFlatCS_Elektrozavodsk_04 {
				name = "";
				position[] = {10369.7, 2048.25};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 125.0;
			};
			
			class AFlatCS_Elektrozavodsk_05 {
				name = "";
				position[] = {10511.7, 2154.33};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 335.0;
			};
			
			class AFlatCS_Elektrozavodsk_06 {
				name = "";
				position[] = {10393, 2265.15};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 305.0;
			};
			
			class AFlatCS_Elektrozavodsk_07 {
				name = "";
				position[] = {10512.1, 2024.9};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 60.0;
			};
			
			class AFlatCS_Elektrozavodsk_08 {
				name = "";
				position[] = {10391.9, 2516.4};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 5.0;
			};
			
			class AFlatCS_Elektrozavodsk_09 {
				name = "";
				position[] = {10685.3, 2469.69};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 325.0;
			};
			
			class AFlatCS_Kamyshovo_01 {
				name = "";
				position[] = {11960.7, 3515.92};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 355.0;
			};
			
			class AFlatCS_Kamyshovo_02 {
				name = "";
				position[] = {12253.2, 3494.5};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 175.0;
			};
			
			class AFlatCS_Tulga_01 {
				name = "";
				position[] = {12566.9, 4402.68};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 210.0;
			};
			
			class AFlatCS_Tulga_02 {
				name = "";
				position[] = {12791.6, 4466.95};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 5.0;
			};
			
			class AAirport_1 {
				name = "";
				position[] = {4783.72, 2564.25};
				type = "Airport";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AAirport_2 {
				name = "";
				position[] = {4828.25, 10205.3};
				type = "Airport";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			
			class AStrong_Sosnovka_03 {
				name = "";
				position[] = {2497.28, 6803.58};
				type = "StrongpointArea";
				radiusA = 207.58;
				radiusB = 177.44;
				angle = 40.0;
			};
			
			class AFlatCS_StarySobor_02 {
				name = "";
				position[] = {6212.46, 7805.0};
				type = "FlatAreaCitySmall";
				radiusA = 219.4;
				radiusB = 189.26;
				angle = 310.0;
			};
			
			class AFlatCS_NovySobor_02 {
				name = "";
				position[] = {7241.92, 7646.02};
				type = "FlatAreaCitySmall";
				radiusA = 155.62;
				radiusB = 133.16;
				angle = 195.0;
			};
			
			class AFlatCS_NovySobor_03 {
				name = "";
				position[] = {7044.93, 7609.06};
				type = "FlatAreaCitySmall";
				radiusA = 135.15;
				radiusB = 115.94;
				angle = 175.0;
			};
			
			class hill_Lysina {
				name = $STR_LOCATION_MT_LYSINA;
				position[] = {2655.95, 14170.7};
				type = "Hill";
				radiusA = 125.34;
				radiusB = 141.67;
				angle = 0.0;
			};
			
			class hill_Misty_Peak {
				name = $STR_LOCATION_MT_MISTYPEAK;
				position[] = {3727.95, 14491.6};
				type = "Hill";
				radiusA = 188.63;
				radiusB = 214.21;
				angle = 0.0;
			};
			
			class hill_Bashnya {
				name = $STR_LOCATION_MT_BASHNYA;
				position[] = {4178.27, 11771.2};
				type = "Hill";
				radiusA = 276.97;
				radiusB = 315.47;
				angle = 0.0;
			};
			
			class hill_Veresnik {
				name = $STR_LOCATION_MT_VERESNIK;
				position[] = {4440.17, 8070.54};
				type = "Hill";
				radiusA = 85.14;
				radiusB = 95.59;
				angle = 0.0;
			};
			
			class hill_Kurgan {
				name = $STR_LOCATION_MT_KURGAN;
				position[] = {3368.52, 5296.87};
				type = "Hill";
				radiusA = 125.64;
				radiusB = 142.01;
				angle = 0.0;
			};
			
			class hill_Kustryk {
				name = $STR_LOCATION_MT_KUSTRYK;
				position[] = {4912.88, 5063.45};
				type = "Hill";
				radiusA = 232.9;
				radiusB = 264.95;
				angle = 0.0;
			};
			
			class hill_Windy_Mountain {
				name = $STR_LOCATION_MT_WINDYMT;
				position[] = {3892.74, 4200.59};
				type = "Hill";
				radiusA = 338.77;
				radiusB = 386.3;
				angle = 0.0;
			};
			
			class hill_Little_Hill {
				name = $STR_LOCATION_MT_LITTLEHILL;
				position[] = {6903.78, 4919.66};
				type = "Hill";
				radiusA = 391.98;
				radiusB = 447.29;
				angle = 0.0;
			};
			
			class hill_Pop_Ivan {
				name = $STR_LOCATION_MT_POPIVAN;
				position[] = {6420.26, 6570.66};
				type = "Hill";
				radiusA = 157.1;
				radiusB = 178.07;
				angle = 0.0;
			};
			
			class hill_Ridge_Lesnoy {
				name = $STR_LOCATION_MT_RIDGELESNOY;
				position[] = {8122.77, 7815.54};
				type = "Hill";
				radiusA = 287.79;
				radiusB = 327.87;
				angle = 0.0;
			};
			
			class hill_Vysoky_Kamen {
				name = $STR_LOCATION_MT_VYSOKYKAMEN;
				position[] = {8940.19, 4380.52};
				type = "Hill";
				radiusA = 279.91;
				radiusB = 318.84;
				angle = 0.0;
			};
			
			class hill_Dobryy {
				name = $STR_LOCATION_MT_DOBRYY;
				position[] = {10552.9, 3061.03};
				type = "Hill";
				radiusA = 149.99;
				radiusB = 169.92;
				angle = 0.0;
			};
			
			class hill_Baranchik {
				name = $STR_LOCATION_MT_BARANCHIK;
				position[] = {10104.7, 6202.21};
				type = "Hill";
				radiusA = 263.06;
				radiusB = 296.32;
				angle = 0.0;
			};
			
			class hill_Malinovka {
				name = $STR_LOCATION_MT_MALINOVKA;
				position[] = {10897.7, 7575.59};
				type = "Hill";
				radiusA = 472.68;
				radiusB = 539.79;
				angle = 0.0;
			};
			
			class hill_Dubina {
				name = $STR_LOCATION_MT_DUBINA;
				position[] = {11107.9, 8474.83};
				type = "Hill";
				radiusA = 351.49;
				radiusB = 400.89;
				angle = 0.0;
			};
			
			class hill_Klen {
				name = $STR_LOCATION_MT_KLEN;
				position[] = {11544.0, 11381.1};
				type = "Hill";
				radiusA = 510.49;
				radiusB = 582.23;
				angle = 0.0;
			};
			
			class hill_Black_Mountain {
				name = $STR_LOCATION_MT_BLACKMT;
				position[] = {10277.6, 12024.6};
				type = "Hill";
				radiusA = 469.73;
				radiusB = 536.41;
				angle = 0.0;
			};
			
			class hill_Ostry {
				name = $STR_LOCATION_MT_OSTRY;
				position[] = {10807.6, 12848.4};
				type = "Hill";
				radiusA = 349.39;
				radiusB = 398.47;
				angle = 0.0;
			};
			
			class hill_Olsha {
				name = $STR_LOCATION_MT_OLSHA;
				position[] = {12975.7, 12775.2};
				type = "Hill";
				radiusA = 141.52;
				radiusB = 160.21;
				angle = 0.0;
			};
			
			class w_Tikhaya {
				name = $STR_LOCATION_W_BAYTIKHAYA;
				position[] = {1221.49, 2111.89};
				type = "NameMarine";
				radiusA = 255.79;
				radiusB = 291.19;
				angle = 0.0;
			};
			
			class w_Mutnaya {
				name = $STR_LOCATION_W_BAYMUTNAYA;
				position[] = {5659.94, 1919.19};
				type = "NameMarine";
				radiusA = 196.48;
				radiusB = 223.21;
				angle = 0.0;
			};
			
			class w_Chyornaya_Bay {
				name = $STR_LOCATION_W_BAYCHYORNAYA;
				position[] = {7620.49, 3024.65};
				type = "NameMarine";
				radiusA = 130.67;
				radiusB = 147.77;
				angle = 0.0;
			};
			
			class w_Zelenaya {
				name = $STR_LOCATION_W_BAYZELENAYA;
				position[] = {11303.7, 3060.39};
				type = "NameMarine";
				radiusA = 241.66;
				radiusB = 275.0;
				angle = 0.0;
			};
			
			class w_Skalisty_Proliv {
				name = $STR_LOCATION_W_SKALISTYPROLIV;
				position[] = {13385.9, 3613.94};
				type = "NameMarine";
				radiusA = 186.38;
				radiusB = 211.64;
				angle = 0.0;
			};
			
			class w_Nizhnaya {
				name = $STR_LOCATION_W_BAYNIZHNAYA;
				position[] = {12989.3, 8515.76};
				type = "NameMarine";
				radiusA = 180.18;
				radiusB = 204.52;
				angle = 0.0;
			};
			
			class w_Rify {
				name = $STR_LOCATION_W_RIFY;
				position[] = {13802.2, 11185.6};
				type = "NameMarine";
				radiusA = 214.88;
				radiusB = 244.3;
				angle = 0.0;
			};
			
			class w_Willow_Lake {
				name = $STR_LOCATION_W_LAKEWILLOW;
				position[] = {13285, 11560.0};
				type = "NameMarine";
				radiusA = 320.32;
				radiusB = 364.18;
				angle = 0.0;
			};
			
			class w_Black_Lake {
				name = $STR_LOCATION_W_LAKEBLACK;
				position[] = {13322.6, 12050.0};
				type = "NameMarine";
				radiusA = 296.41;
				radiusB = 341.67;
				angle = 0.0;
			};
			
			class w_Pobeda_Dam {
				name = $STR_LOCATION_W_DAMPOBEDA;
				position[] = {9464.53, 13623.6};
				type = "NameMarine";
				radiusA = 159.59;
				radiusB = 180.92;
				angle = 0.0;
			};
			
			class w_Topolka_Dam {
				name = $STR_LOCATION_W_DAMTOPOLKA;
				position[] = {10231.3, 3691.15};
				type = "NameMarine";
				radiusA = 72.06;
				radiusB = 80.6;
				angle = 0.0;
			};
			
			class w_Ozerko {
				name = $STR_LOCATION_W_OZERKO;
				position[] = {6777.63, 4492.42};
				type = "NameMarine";
				radiusA = 94.14;
				radiusB = 105.91;
				angle = 0.0;
			};
			
			class w_Prud {
				name = $STR_LOCATION_W_PRUD;
				position[] = {6566.98, 9254.57};
				type = "NameMarine";
				radiusA = 67.5;
				radiusB = 75.36;
				angle = 0.0;
			};
			
			class w_Guba {
				name = $STR_LOCATION_W_GUBA;
				position[] = {14303.2, 13163};
				type = "NameMarine";
				radiusA = 344.67;
				radiusB = 393.07;
				angle = 0.0;
			};
			
			class Local_Pass_Grozovoy {
				name = $STR_LOCATION_LOC_PASSGROZOVOY;
				position[] = {1451.82, 14421.9};
				type = "NameLocal";
				radiusA = 427.43;
				radiusB = 487.92;
				angle = 0.0;
			};
			
			class Local_Pass_Sosnovy {
				name = $STR_LOCATION_LOC_PASSSOSNOVY;
				position[] = {2687.4, 6590.28};
				type = "NameLocal";
				radiusA = 168.62;
				radiusB = 191.28;
				angle = 0.0;
			};
			
			class Local_Green_Mountain {
				name = $STR_LOCATION_LOC_GREENMOUNTAIN;
				position[] = {3767.17, 6010.54};
				type = "NameLocal";
				radiusA = 256.14;
				radiusB = 290.56;
				angle = 0.0;
			};
			
			class Local_Airstrip1 {
				name = $STR_LOCATION_AIRSTRIP;
				position[] = {4955.75, 2427.69};
				type = "NameLocal";
				radiusA = 130.83;
				radiusB = 147.96;
				angle = 0.0;
			};
			
			class Local_Cement_Factory {
				name = $STR_LOCATION_FACTORY;
				position[] = {6515.46, 2683.52};
				type = "NameLocal";
				radiusA = 107.17;
				radiusB = 120.84;
				angle = 0.0;
			};
			
			class Local_Vysota {
				name = $STR_LOCATION_LOC_VYSOTA;
				position[] = {6591.63, 3400.0};
				type = "NameLocal";
				radiusA = 160.8;
				radiusB = 182.67;
				angle = 0.0;
			};
			
			class Local_Kopyto {
				name = $STR_LOCATION_LOC_KOPYTO;
				position[] = {7879.16, 3904.42};
				type = "NameLocal";
				radiusA = 174.97;
				radiusB = 198.55;
				angle = 0.0;
			};
			
			class Local_Cap_Golova {
				name = $STR_LOCATION_LOC_CAPGOLOVA;
				position[] = {8322.08, 2450.0};
				type = "NameLocal";
				radiusA = 370.61;
				radiusB = 422.8;
				angle = 0.0;
			};
			
			class Local_Drakon {
				name = $STR_LOCATION_LOC_DRAKON;
				position[] = {11160.5, 2477.5};
				type = "NameLocal";
				radiusA = 85.14;
				radiusB = 95.59;
				angle = 0.0;
			};
			
			class Local_Otmel {
				name = $STR_LOCATION_LOC_OTMEL;
				position[] = {11581.3, 3213.24};
				type = "NameLocal";
				radiusA = 199.36;
				radiusB = 226.51;
				angle = 0.0;
			};
			
			class Local_Skalisty_Island {
				name = $STR_LOCATION_LOC_ISLANDSKALISTY;
				position[] = {13728.9, 2919.62};
				type = "NameLocal";
				radiusA = 153.26;
				radiusB = 173.67;
				angle = 0.0;
			};
			
			class Local_Cap_Krutnoy {
				name = $STR_LOCATION_LOC_CAPKRUTOY;
				position[] = {13578.2, 3976.82};
				type = "NameLocal";
				radiusA = 124.21;
				radiusB = 140.37;
				angle = 0.0;
			};
			
			class Local_Three_Valleys {
				name = $STR_LOCATION_LOC_THREEVALLEYS;
				position[] = {12764.5, 5412.21};
				type = "NameLocal";
				radiusA = 629.64;
				radiusB = 718.83;
				angle = 0.0;
			};
			
			class Local_Quarry {
				name = $STR_LOCATION_QUARRY;
				position[] = {13103, 6072.1};
				type = "NameLocal";
				radiusA = 239.51;
				radiusB = 271.47;
				angle = 0.0;
			};
			
			class Local_Factory1 {
				name = $STR_LOCATION_FACTORY;
				position[] = {13057, 7120.0};
				type = "NameLocal";
				radiusA = 286.3;
				radiusB = 326.17;
				angle = 0.0;
			};
			
			class Local_Factory2 {
				name = $STR_LOCATION_FACTORY;
				position[] = {11497.7, 7490.0};
				type = "NameLocal";
				radiusA = 186.89;
				radiusB = 211.06;
				angle = 0.0;
			};
			
			class Local_Lumber_Mill {
				name = $STR_LOCATION_LUMBERMILL;
				position[] = {12676.7, 9658.46};
				type = "NameLocal";
				radiusA = 68.38;
				radiusB = 76.38;
				angle = 0.0;
			};
			
			class Local_Blunt_Rocks {
				name = $STR_LOCATION_LOC_BLUNTROCKS;
				position[] = {13115.1, 11900.0};
				type = "NameLocal";
				radiusA = 215.13;
				radiusB = 244.59;
				angle = 0.0;
			};
			
			class Local_Airstrip {
				name = $STR_LOCATION_AIRSTRIP;
				position[] = {12034.3, 12788.4};
				type = "NameLocal";
				radiusA = 136.67;
				radiusB = 154.66;
				angle = 0.0;
			};
			
			class Local_Novy_Lug {
				name = $STR_LOCATION_LOC_NOVYLUG;
				position[] = {9491.63, 11219.9};
				type = "NameLocal";
				radiusA = 166.29;
				radiusB = 188.61;
				angle = 0.0;
			};
			
			class Local_Black_Forest {
				name = $STR_LOCATION_LOC_BLACKFOREST;
				position[] = {9067.52, 7600.0};
				type = "NameLocal";
				radiusA = 131.78;
				radiusB = 163.67;
				angle = 0.0;
			};
			
			class Local_Pass_Oreshka {
				name = $STR_LOCATION_LOC_PASSORESHKA;
				position[] = {9935.03, 6044.51};
				type = "NameLocal";
				radiusA = 146.19;
				radiusB = 165.57;
				angle = 0.0;
			};
			
			class Local_Kumyrna {
				name = $STR_LOCATION_LOC_KUMYRNA;
				position[] = {8288.55, 6058.34};
				type = "NameLocal";
				radiusA = 97.25;
				radiusB = 109.47;
				angle = 0.0;
			};
			
			class Local_Old_Fields {
				name = $STR_LOCATION_LOC_OLDFIELDS;
				position[] = {6847.5, 9219.06};
				type = "NameLocal";
				radiusA = 149.42;
				radiusB = 169.27;
				angle = 0.0;
			};
			
			class Local_Airfield {
				name = $STR_LOCATION_AIRFIELD;
				position[] = {4631.52, 10192.2};
				type = "NameLocal";
				radiusA = 171.47;
				radiusB = 193.34;
				angle = 0.0;
			};
			
			class V_fir {
				name = "";
				position[] = {8906.13, 5500.0};
				type = "VegetationFir";
				radiusA = 176.65;
				radiusB = 204.4;
				angle = 0.0;
			};
			
			class V_broad {
				name = "";
				position[] = {8212.63, 3782.34};
				type = "VegetationBroadleaf";
				radiusA = 171.48;
				radiusB = 194.55;
				angle = 0.0;
			};
			
			class V_broad1 {
				name = "";
				position[] = {10543, 2992.66};
				type = "VegetationBroadleaf";
				radiusA = 136.22;
				radiusB = 154.14;
				angle = 0.0;
			};
			
			class V_broad2 {
				name = "";
				position[] = {12739.7, 4638.12};
				type = "VegetationBroadleaf";
				radiusA = 135.37;
				radiusB = 153.16;
				angle = 0.0;
			};
			
			class V_broad3 {
				name = "";
				position[] = {12826, 7534.79};
				type = "VegetationBroadleaf";
				radiusA = 134.6;
				radiusB = 152.28;
				angle = 0.0;
			};
			
			class V_broad4 {
				name = "";
				position[] = {11308.7, 9942.01};
				type = "VegetationBroadleaf";
				radiusA = 133.92;
				radiusB = 151.5;
				angle = 0.0;
			};
			
			class V_broad5 {
				name = "";
				position[] = {11626.6, 13559.4};
				type = "VegetationBroadleaf";
				radiusA = 163.21;
				radiusB = 185.08;
				angle = 0.0;
			};
			
			class V_broad6 {
				name = "";
				position[] = {2141.27, 3363.08};
				type = "VegetationBroadleaf";
				radiusA = 159.48;
				radiusB = 180.8;
				angle = 0.0;
			};
			
			class V_broad7 {
				name = "";
				position[] = {1242.32, 3161.05};
				type = "VegetationBroadleaf";
				radiusA = 236.55;
				radiusB = 268.85;
				angle = 0.0;
			};
			
			class V_broad8 {
				name = "";
				position[] = {9615.74, 4585.6};
				type = "VegetationBroadleaf";
				radiusA = 149.09;
				radiusB = 168.71;
				angle = 0.0;
			};
			
			class V_broad9 {
				name = "";
				position[] = {5950.63, 4072.75};
				type = "VegetationBroadleaf";
				radiusA = 222.03;
				radiusB = 252.23;
				angle = 0.0;
			};
			
			class V_broad10 {
				name = "";
				position[] = {6375.96, 3988.7};
				type = "VegetationBroadleaf";
				radiusA = 330.67;
				radiusB = 375.63;
				angle = 0.0;
			};
			
			class V_broad11 {
				name = "";
				position[] = {5340.66, 11380};
				type = "VegetationBroadleaf";
				radiusA = 165.11;
				radiusB = 187.05;
				angle = 0.0;
			};
			
			class V_broad12 {
				name = "";
				position[] = {9495.71, 10822.4};
				type = "VegetationBroadleaf";
				radiusA = 161.35;
				radiusB = 182.75;
				angle = 0.0;
			};
			
			class V_broad13 {
				name = "";
				position[] = {10562.7, 12070.5};
				type = "VegetationBroadleaf";
				radiusA = 194.07;
				radiusB = 220.21;
				angle = 0.0;
			};
			
			class V_broad15 {
				name = "";
				position[] = {1563.88, 2593.79};
				type = "VegetationBroadleaf";
				radiusA = 187.26;
				radiusB = 212.41;
				angle = 0.0;
			};
			
			class V_broad14 {
				name = "";
				position[] = {1995.36, 2390.72};
				type = "VegetationBroadleaf";
				radiusA = 181.17;
				radiusB = 205.44;
				angle = 0.0;
			};
			
			class V_broad16 {
				name = "";
				position[] = {2453.14, 2741.07};
				type = "VegetationBroadleaf";
				radiusA = 216.23;
				radiusB = 245.58;
				angle = 0.0;
			};
			
			class V_broad17 {
				name = "";
				position[] = {2464.73, 2269.39};
				type = "VegetationBroadleaf";
				radiusA = 207.08;
				radiusB = 235.1;
				angle = 0.0;
			};
			
			class V_broad18 {
				name = "";
				position[] = {6644.53, 3307.91};
				type = "VegetationBroadleaf";
				radiusA = 161.85;
				radiusB = 183.32;
				angle = 0.0;
			};
			
			class V_fir1 {
				name = "";
				position[] = {8961.88, 4721.06};
				type = "VegetationFir";
				radiusA = 211.17;
				radiusB = 239.79;
				angle = 0.0;
			};
			
			class V_fir2 {
				name = "";
				position[] = {10100.7, 4908.68};
				type = "VegetationFir";
				radiusA = 202.56;
				radiusB = 229.93;
				angle = 0.0;
			};
			
			class V_fir3 {
				name = "";
				position[] = {10996.9, 4539.14};
				type = "VegetationFir";
				radiusA = 194.85;
				radiusB = 221.1;
				angle = 0.0;
			};
			
			class V_fir4 {
				name = "";
				position[] = {11850.9, 4173.95};
				type = "VegetationFir";
				radiusA = 153.1;
				radiusB = 173.3;
				angle = 0.0;
			};
			
			class V_fir5 {
				name = "";
				position[] = {12336.9, 3801.76};
				type = "VegetationFir";
				radiusA = 234.96;
				radiusB = 265.96;
				angle = 0.0;
			};
			
			class V_fir7 {
				name = "";
				position[] = {12898.5, 4065.38};
				type = "VegetationFir";
				radiusA = 360.57;
				radiusB = 408.15;
				angle = 0.0;
			};
			
			class V_fir8 {
				name = "";
				position[] = {13167.4, 4309.48};
				type = "VegetationFir";
				radiusA = 220.08;
				radiusB = 249.99;
				angle = 0.0;
			};
			
			class V_fir9 {
				name = "";
				position[] = {11515.4, 4184.56};
				type = "VegetationFir";
				radiusA = 171.15;
				radiusB = 193.97;
				angle = 0.0;
			};
			
			class V_fir10 {
				name = "";
				position[] = {12063.4, 4914.45};
				type = "VegetationFir";
				radiusA = 259.97;
				radiusB = 294.63;
				angle = 0.0;
			};
			
			class V_fir11 {
				name = "";
				position[] = {12061.4, 7804.22};
				type = "VegetationFir";
				radiusA = 162.49;
				radiusB = 184.06;
				angle = 0.0;
			};
			
			class V_fir12 {
				name = "";
				position[] = {11472.2, 8657.76};
				type = "VegetationFir";
				radiusA = 159.01;
				radiusB = 180.07;
				angle = 0.0;
			};
			
			class V_fir13 {
				name = "";
				position[] = {11780.3, 11646};
				type = "VegetationFir";
				radiusA = 155.9;
				radiusB = 176.51;
				angle = 0.0;
			};
			
			class V_fir14 {
				name = "";
				position[] = {10853.7, 13219.1};
				type = "VegetationFir";
				radiusA = 231.56;
				radiusB = 263.13;
				angle = 0.0;
			};
			
			class V_fir15 {
				name = "";
				position[] = {10247.4, 12874.8};
				type = "VegetationFir";
				radiusA = 343.92;
				radiusB = 390.82;
				angle = 0.0;
			};
			
			class V_fir16 {
				name = "";
				position[] = {7185.06, 12000.3};
				type = "VegetationFir";
				radiusA = 171.18;
				radiusB = 194.0;
				angle = 0.0;
			};
			
			class V_fir17 {
				name = "";
				position[] = {6287.21, 11720.8};
				type = "VegetationFir";
				radiusA = 205.06;
				radiusB = 232.79;
				angle = 0.0;
			};
			
			class V_fir18 {
				name = "";
				position[] = {3659.11, 11561.8};
				type = "VegetationFir";
				radiusA = 307.05;
				radiusB = 348.58;
				angle = 0.0;
			};
			
			class V_fir19 {
				name = "";
				position[] = {2353.78, 12590.9};
				type = "VegetationFir";
				radiusA = 233.38;
				radiusB = 265.22;
				angle = 0.0;
			};
			
			class V_fir20 {
				name = "";
				position[] = {1662.64, 6534.22};
				type = "VegetationFir";
				radiusA = 274.61;
				radiusB = 312.42;
				angle = 0.0;
			};
			
			class V_broad19 {
				name = "";
				position[] = {1898.61, 6035.53};
				type = "VegetationBroadleaf";
				radiusA = 403.88;
				radiusB = 459.49;
				angle = 0.0;
			};
			
			class V_broad20 {
				name = "";
				position[] = {1671.58, 7014.02};
				type = "VegetationBroadleaf";
				radiusA = 244.87;
				radiusB = 278.37;
				angle = 0.0;
			};
			
			class V_fir21 {
				name = "";
				position[] = {6181.74, 4665.88};
				type = "VegetationFir";
				radiusA = 188.89;
				radiusB = 214.28;
				angle = 0.0;
			};
			
			class V_fir22 {
				name = "";
				position[] = {6808.52, 6225.47};
				type = "VegetationFir";
				radiusA = 182.63;
				radiusB = 207.11;
				angle = 0.0;
			};
			
			class V_fir23 {
				name = "";
				position[] = {6766.88, 6820.21};
				type = "VegetationFir";
				radiusA = 177.02;
				radiusB = 200.69;
				angle = 0.0;
			};
			
			class V_fir24 {
				name = "";
				position[] = {8847.72, 3573.4};
				type = "VegetationFir";
				radiusA = 140.35;
				radiusB = 158.7;
				angle = 0.0;
			};
			
			class V_fir25 {
				name = "";
				position[] = {9056.14, 2851.6};
				type = "VegetationFir";
				radiusA = 139.21;
				radiusB = 157.4;
				angle = 0.0;
			};
			
			class V_fir26 {
				name = "";
				position[] = {10359, 6426.5};
				type = "VegetationFir";
				radiusA = 138.19;
				radiusB = 156.23;
				angle = 0.0;
			};
			
			class V_fir27 {
				name = "";
				position[] = {9399.06, 8022.21};
				type = "VegetationFir";
				radiusA = 137.28;
				radiusB = 155.19;
				angle = 0.0;
			};
			
			class V_fir28 {
				name = "";
				position[] = {8146.79, 7870.69};
				type = "VegetationFir";
				radiusA = 213.09;
				radiusB = 240.89;
				angle = 0.0;
			};
			
			class V_fir29 {
				name = "";
				position[] = {10197, 11847.4};
				type = "VegetationFir";
				radiusA = 204.27;
				radiusB = 231.88;
				angle = 0.0;
			};
			
			class V_fir30 {
				name = "";
				position[] = {8118.65, 12492.2};
				type = "VegetationFir";
				radiusA = 130.61;
				radiusB = 147.55;
				angle = 0.0;
			};
			
			class V_fir31 {
				name = "";
				position[] = {7351.65, 4198.65};
				type = "VegetationFir";
				radiusA = 184.27;
				radiusB = 208.99;
				angle = 0.0;
			};
			
			class V_fir32 {
				name = "";
				position[] = {5508.17, 5208.87};
				type = "VegetationFir";
				radiusA = 119.16;
				radiusB = 134.45;
				angle = 0.0;
			};
			
			class V_fir33 {
				name = "";
				position[] = {5446.21, 6182.29};
				type = "VegetationFir";
				radiusA = 188.13;
				radiusB = 212.26;
				angle = 0.0;
			};
			
			class V_broad21 {
				name = "";
				position[] = {5086.7, 6132.5};
				type = "VegetationBroadleaf";
				radiusA = 188.89;
				radiusB = 214.28;
				angle = 0.0;
			};
			
			class V_fir34 {
				name = "";
				position[] = {4580.99, 5151.71};
				type = "VegetationFir";
				radiusA = 148.84;
				radiusB = 168.42;
				angle = 0.0;
			};
			
			class V_fir35 {
				name = "";
				position[] = {3536.92, 5865.87};
				type = "VegetationFir";
				radiusA = 221.68;
				radiusB = 251.82;
				angle = 0.0;
			};
			
			class V_fir36 {
				name = "";
				position[] = {3879.61, 6059.51};
				type = "VegetationFir";
				radiusA = 172.3;
				radiusB = 195.29;
				angle = 0.0;
			};
			
			class V_fir37 {
				name = "";
				position[] = {3750.79, 3444.96};
				type = "VegetationFir";
				radiusA = 206.31;
				radiusB = 234.23;
				angle = 0.0;
			};
			
			class V_fir38 {
				name = "";
				position[] = {3877.26, 4151.61};
				type = "VegetationFir";
				radiusA = 198.21;
				radiusB = 224.95;
				angle = 0.0;
			};
			
			class V_fir39 {
				name = "";
				position[] = {1484.4, 8440.14};
				type = "VegetationFir";
				radiusA = 190.96;
				radiusB = 216.65;
				angle = 0.0;
			};
			
			class V_fir40 {
				name = "";
				position[] = {6423.22, 5522.86};
				type = "VegetationFir";
				radiusA = 150.32;
				radiusB = 170.12;
				angle = 0.0;
			};
			
			class V_broad22 {
				name = "";
				position[] = {5155.9, 6557.89};
				type = "VegetationBroadleaf";
				radiusA = 290.84;
				radiusB = 329.09;
				angle = 0.0;
			};
		};
		
		class Armory {
			positionAdmin[] = {12548.3, 3140.68};
			positionStartWater[] = {7584.11, 1206.68};
			positionsViewer[] = {{4810.49, 10160.7}, {2637.16, 9777.03}, {6955.78, 2813.33}, {3716.81, 14503.9}};
			positionsViewerWater[] = {{14105.8, 3510.57}};
			positionBlacklist[] = {{{8150.07, 2267.8}, {8278.83, 2138.24}}, {{11064.1, 2614.1}, {11268.6, 2372.43}}, {{11290.5, 3442.58}, {12687.9, 3023.46}}, {{12881.1, 3822.22}, {14294.3, 2519.14}}};
			
			class Challenges {
				class CheckpointRace {
					backUpRoute[] = {{4061.43, 4822.89}, {3996, 4780.64}, {4113.97, 4644.71}, {4246.81, 4456.91}, {3694.83, 3877.98}, {3544.34, 3903.62}, {3319.35, 3936.96}};
				};
				
				class FiringRange {
					positionsStart[] = {{4865.31, 9700.02}, {4636.6, 2553.73}};
					directionsStart[] = {330, 118};
					positionsStartWater[] = {{13608.4, 8965.45}};
					directionsStartWater[] = {0};
				};
				
				class FitnessTrack {
					positionStart[] = {{13094.9, 6891.64}};
					directionStart[] = {6.22921};
					objectSets[] = {"ca\chernarus\data\scripts\armory\fitTrack1.sqf"};
					positionAnchor[] = {{13155.9, 7102.43}};
					obstacleSets[] = {{{{13095.3, 6899.61}, 1.10213, 3, 2, 0, ""}, {{13107.7, 6950.43}, 30.3792, 1.8, 2, 9, ""}, {{13134.8, 6978.44}, 51.8825, 1.6, 2, 1, ""}, {{13151.6, 7026.52}, -14.7014, 2, 2, 3, ""}, {{13133.9, 7081.76}, 341.227, 2, 2, 12, ""}, {{13131.5, 7148.46}, 428.066, 2, 1.5, 6, ""}, {{13179.8, 7154.96}, 78.6647, 2, 2, 5, ""}, {{13184.2, 7182.75}, 64.1526, 1.4, 1.5, 4, ""}, {{13173.7, 7197.87}, -40.9861, 1, 1.2, 12, ""}, {{13107.5, 7194.29}, 161.734, 2.5, 2, 11, ""}, {{13053.4, 7188.99}, -17.0643, 3, 2, 6, ""}, {{13030.6, 7198.67}, -49.3159, 3, 2, 11, ""}, {{13054.5, 7225.2}, -115.63, 1.8, 2, 2, ""}, {{13091.7, 7224.59}, -2.72224, 3, 2, 7, ""}, {{13138.8, 7234.56}, 75.7073, 5, 2, 11, ""}, {{13291.4, 7289.55}, 0.672324, 2, 2, 8, ""}, {{13218.5, 7324.56}, -69.7547, 4, 2, 10, ""}}};
					positionMachineguns[] = {{{13175.7, 7183.29}}};
					directionMachineguns[] = {{-264.329}};
					positionStartAnimal[] = {{6907.97, 7809.62}};
					directionStartAnimal[] = {162.931};
					objectSetsAnimal[] = {"ca\chernarus\data\scripts\armory\fitTrackAnimals1.sqf"};
					positionAnchorAnimal[] = {{6949.95, 7739.74}};
					obstacleSetsAnimal[] = {{{{6909.26, 7803.94}, 161.905, 3, 2, 0, ""}, {{6951.48, 7766.52}, -225.434, 2.5, 2, 3, ""}, {{6981.53, 7738.84}, -36.381, 4, 2, 11, ""}, {{6988.8, 7721.26}, 101.748, 2, 2, 9, ""}, {{6961.07, 7739.35}, -32.4181, 3.5, 2, 11, ""}, {{6938.11, 7748.52}, -16.6424, 4, 2, 11, ""}, {{6952.14, 7727.59}, -34.0591, 1.5, 2, 2, ""}, {{6985.34, 7699.78}, 96.194, 3.5, 2, 7, ""}, {{7022.23, 7704.2}, 53.1431, 2.5, 2, 10, ""}}};
				};
				
				class MobilityRange {
					positionStart[] = {{12053.3, 3489.24}};
					directionStart[] = {-4.7294};
					positionStartAmphibious[] = {{12137.8, 3123.76}};
					directionStartAmphibious[] = {48.4716};
					positionStartWater[] = {{12065.6, 3405.79}};
					directionStartWater[] = {162.681};
					objectSets[] = {"ca\chernarus\data\scripts\armory\mobilityRange1.sqf"};
					positionAnchor[] = {{12507.5, 4194.75}};
					objectSetsWater[] = {"ca\chernarus\data\scripts\armory\mobilityRangeWater1.sqf"};
					positionAnchorWater[] = {{12252.5, 3171.1}};
					obstacleSets[] = {{{{{12071.9, 3591.15}, -7.02982, 5, 4, 0, ""}, {{12008.3, 3762.57}, -37.7214, 2.5, 4, 3, ""}, {{11949.1, 3883.31}, 57.1021, 5, 4, 4, ""}, {{12053.2, 3983.8}, -117.695, 3, 3.5, 1, ""}, {{12062.2, 3988.89}, -117.695, 3, 3.5, 2, ""}, {{12146.5, 4079.57}, 176.644, 3, 3.5, 6, ""}, {{12144.7, 4096.78}, -3.3011, 3, 3.5, 5, ""}, {{12101, 4277.94}, -22.3838, 3.5, 5, 8, ""}, {{12028.9, 4405.19}, -38.3716, 5, 4, 4, ""}, {{11963.4, 4505.31}, -37.1154, 5, 4, 7, ""}, {{11782.4, 4562.26}, -58.6036, 2.5, 4, 3, $STR_LIB_CHAL_MOB_RANGE_HINT_3}, {{11919.4, 4601.38}, -143.118, 3, 4, 7, ""}, {{12064.1, 4622.48}, -55.0453, 10, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}, {{12133.9, 4579.64}, 135.321, 22, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}, {{12211.6, 4496.3}, -258.86, 5, 4, 4, ""}, {{12354.5, 4478.4}, -247.526, 5, 4, 7, $STR_LIB_CHAL_MOB_RANGE_OBSTACLE_10_DESC}, {{12401.3, 4458.67}, 8.25237, 7, 3, 11, ""}, {{12415.4, 4455.72}, 15.3833, 7, 3, 11, ""}, {{12437.5, 4450.04}, 14.7473, 4, 3, 11, ""}, {{12446, 4448.1}, 10.4627, 4, 3, 11, ""}, {{12485.6, 4448.54}, 2.29143, 5, 4, 7, ""}, {{12331.2, 4560.79}, -49.7273, 6, 6, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_4}, {{12574.3, 4578.19}, 237.392, 2.5, 4, 3, ""}, {{12610.9, 4960.63}, -305.597, 5, 4, 4, ""}, {{12781.8, 4813.13}, -308.815, 5, 4, 4, ""}, {{13170.4, 5301.26}, 34.8985, 2.5, 4, 8, ""}, {{13260.4, 5428.17}, -115.369, 5, 4, 7, ""}, {{13376.2, 5429.76}, 90.0, 6, 3, 9, ""}}, {{{12182.2, 3170.91}, 26.1951, 6, 4, 0, ""}, {{12071.9, 3591.15}, -7.02982, 5, 4, 4, ""}, {{12008.3, 3762.57}, -37.7214, 2.5, 4, 3, ""}, {{11949.1, 3883.31}, 57.1021, 5, 4, 4, ""}, {{12053.2, 3983.8}, -117.695, 3, 3.5, 1, ""}, {{12062.2, 3988.89}, -117.695, 3, 3.5, 2, ""}, {{12146.5, 4079.57}, 176.644, 3, 3.5, 6, ""}, {{12144.7, 4096.78}, -3.3011, 3, 3.5, 5, ""}, {{12101, 4277.94}, -22.3838, 3.5, 5, 8, ""}, {{12028.9, 4405.19}, -38.3716, 5, 4, 4, ""}, {{12009.2, 4467.85}, 32.5832, 18, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}, {{12039.7, 4535.72}, 26.4356, 28, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}, {{12211.6, 4496.3}, -258.86, 5, 4, 4, ""}, {{12354.5, 4478.4}, -247.526, 5, 4, 7, $STR_LIB_CHAL_MOB_RANGE_OBSTACLE_10_DESC}, {{12401.3, 4458.67}, 8.25237, 7, 3, 11, ""}, {{12415.4, 4455.72}, 15.3833, 7, 3, 11, ""}, {{12437.5, 4450.04}, 14.7473, 4, 3, 11, ""}, {{12446, 4448.1}, 10.4627, 4, 3, 11, ""}, {{12485.6, 4448.54}, 2.29143, 5, 4, 7, ""}, {{12331.2, 4560.79}, -49.7273, 6, 6, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_4}, {{12574.3, 4578.19}, 237.392, 2.5, 4, 3, ""}, {{12610.9, 4960.63}, -305.597, 5, 4, 4, ""}, {{12781.8, 4813.13}, -308.815, 5, 4, 4, ""}, {{13170.4, 5301.26}, 34.8985, 2.5, 4, 8, ""}, {{13260.4, 5428.17}, -115.369, 5, 4, 7, ""}, {{13376.2, 5429.76}, 90.0, 6, 3, 9, ""}}}};
					obstacleSetsWater[] = {{{{12017.6, 3285.37}, 42.0182, 13, 4, 0, ""}, {{11844.2, 3127.83}, 44.3972, 5, 4, 3, ""}, {{11748.2, 2909.91}, -45.4878, 6.5, 4, 7, ""}, {{11917.3, 2951.09}, -0.640769, 12, 3, 11, ""}, {{11943.6, 2951.3}, -0.640769, 12, 3, 11, ""}, {{12204.3, 2975.06}, 88.1787, 9, 5, 8, ""}, {{12345.8, 3151.73}, 20.1174, 13, 4, 4, ""}, {{12091.6, 3426.72}, 29.1932, 5, 4, 7, ""}, {{12329.8, 3418.31}, 78.9531, 13, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}, {{12415, 3428.55}, 85.594, 13, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}, {{12705.7, 3360.44}, 115.49, 13, 4, 10, ""}, {{12729.7, 3350.22}, 69.3157, 10, 4, 10, ""}, {{12746.6, 3379.15}, 77.9038, 10, 4, 10, ""}, {{12777.5, 3362.87}, 118.098, 13, 4, 10, ""}, {{12786.7, 3027.8}, -0.524382, 13, 5, 9, ""}}};
					positionRollingBarrels[] = {{12306.8, 4513.47}};
					directionRollingBarrels[] = {-168.907};
					positionTriggerRollingBarrels[] = {{12268.5, 4488.47}};
					radiusTriggerRollingBarrels[] = {10};
					positionOncomingTraffic[] = {{12805.3, 4989.41}};
					directionOncomingTraffic[] = {-154.203};
					waypointsOncomingTraffic[] = {{{12773.3, 4812.58}, {12609.4, 4945.45}, {12835.3, 4456.59}}};
					positionTriggerOncomingTraffic[] = {{12606.8, 4676.23}};
					radiusTriggerOncomingTraffic[] = {10};
				};
				
				class KillHouse {
					class Small {
						positionStart[] = {{4654.47, 9694.46}};
						directionStart[] = {-79.0564};
						positionEnd[] = {{4691.72, 9608.63}};
						objectSet[] = {"ca\chernarus\data\scripts\armory\killHouse1.sqf"};
						positionAnchor[] = {{4625.39, 9641.47}};
						waypoints[] = {{{4608.23, 9703.41}, {4596.46, 9643.5}, {4600.54, 9602.46}, {4591.2, 9587.13}, {4608.54, 9571.21}, {4629.66, 9593.27}, {4671.44, 9587.56}}};
						
						class Targets {
							class Set1 {
								class T1 {
									position[] = {4620.94, 9693.76};
									direction = -117.926;
									upTime = 4;
									positionMove[] = {};
									moveTime = 0;
									type = VSoft;
									side = TEast;
									size = 0;
									spawn = 0;
									positionTrigger[] = {4632.47, 9699.44};
									radiusTrigger = 10;
								};
								
								class T2 : T1 {
									position[] = {4612.77, 9695.62};
									direction = -76.0219;
									upTime = 6;
									positionMove[] = {4613.48, 9698.9};
									moveTime = 2;
									type = VArmor;
									positionTrigger[] = {4625.14, 9700.42};
								};
								
								class T3 : T2 {
									position[] = {4614.18, 9710.1};
									direction = -80.856;
									upTime = 7;
									positionMove[] = {4613.73, 9707.11};
									moveTime = 1.5;
									spawn = 1;
									positionTrigger[] = {4625.16, 9700.64};
								};
								
								class T4 : T1 {
									position[] = {4601.68, 9707.36, 3};
									direction = -80.856;
									upTime = 3;
									side = TGuerrila;
									spawn = 1;
									positionTrigger[] = {4611.91, 9703.51};
								};
								
								class T5 : T1 {
									position[] = {4601.07, 9705.75, 3};
									direction = -81.122;
									upTime = 5;
									side = TEast;
									spawn = 0;
									positionTrigger[] = {4611.87, 9703.14};
								};
								
								class T6 : T1 {
									position[] = {4600.23, 9710.68};
									direction = -80.7032;
									upTime = 7;
									positionMove[] = {4603.56, 9710.06};
									moveTime = 4;
									type = VArmor;
									side = TEast;
									spawn = 0;
									positionTrigger[] = {4611.96, 9703.81};
								};
								
								class T7 : T1 {
									position[] = {4593.18, 9682.56};
									direction = -127.049;
									upTime = 4;
									side = TEast;
									spawn = 0;
									positionTrigger[] = {4603.64, 9688.61};
								};
								
								class T7A : T7 {
									position[] = {4593.15, 9681.68, -0.3};
									direction = -127.049;
									side = TWest;
									spawn = 1;
									positionTrigger[] = {};
								};
								
								class T7B : T7A {
									position[] = {4592.78, 9683.82, -0.3};
									direction = -106.355;
									spawn = 0;
								};
								
								class T8 : T1 {
									position[] = {4608.29, 9676.64};
									direction = -210.795;
									upTime = 5;
									side = TGuerrila;
									spawn = 1;
									positionTrigger[] = {4602.85, 9682.78};
								};
								
								class T9 : T1 {
									position[] = {4610.67, 9666.25};
									direction = -226.667;
									upTime = 6;
									side = TEast;
									positionTrigger[] = {4600.94, 9670.16};
								};
								
								class T10 : T1 {
									position[] = {4590.1, 9659.61};
									direction = -168.727;
									upTime = 7;
									positionMove[] = {4595.65, 9658.33};
									moveTime = 2;
									type = VArmor;
									positionTrigger[] = {4599.33, 9661.6};
								};
								
								class T11 : T1 {
									position[] = {4605.17, 9623.73};
									direction = -218.344;
									upTime = 5;
									side = TEast;
									positionTrigger[] = {4595.86, 9632.64};
								};
								
								class T11A : T1 {
									position[] = {4605.8, 9637.13};
									direction = -256.126;
									side = TWest;
									positionTrigger[] = {};
								};
								
								class T11B : T11A {
									position[] = {4605.75, 9635.98};
									direction = -243.239;
									spawn = 1;
								};
								
								class T11C : T11A {
									position[] = {4604.82, 9635.07};
									direction = -220.679;
								};
								
								class T12 : T1 {
									position[] = {4612.56, 9623.34};
									direction = -247.592;
									upTime = 4;
									side = TEast;
									spawn = 1;
									positionTrigger[] = {4595.83, 9631.47};
								};
								
								class T13 : T1 {
									position[] = {4586.47, 9609.68};
									direction = -98.0054;
									upTime = 7;
									side = TEast;
									spawn = 0;
									positionTrigger[] = {4595.24, 9620.3};
								};
								
								class T14 : T1 {
									position[] = {4587, 9599.77};
									direction = -148.175;
									upTime = 6;
									side = TGuerrila;
									positionTrigger[] = {4595.73, 9615.29};
								};
								
								class T15 : T1 {
									position[] = {4590.33, 9602.83};
									direction = -173.984;
									upTime = 7;
									spawn = 1;
									positionTrigger[] = {4594.53, 9615.33};
								};
								
								class T16 : T1 {
									position[] = {4612.99, 9606.23};
									direction = -252.048;
									upTime = 5;
									positionTrigger[] = {4600.94, 9602.38};
								};
								
								class T16A : T1 {
									position[] = {4612.5, 9606.76, -0.3};
									direction = -252.048;
									side = TWest;
									positionTrigger[] = {};
								};
								
								class T17 : T1 {
									position[] = {4614.69, 9603.25, 1.5};
									direction = -266.955;
									upTime = 6;
									positionTrigger[] = {4601.56, 9602.86};
								};
								
								class T18 : T1 {
									position[] = {4602.33, 9585.21};
									direction = -146.237;
									upTime = 7;
									positionMove[] = {4599.8, 9586.98};
									moveTime = 1.5;
									type = VArmor;
									spawn = 1;
									positionTrigger[] = {4598.87, 9589.58};
								};
								
								class T19 : T1 {
									position[] = {4590.47, 9585.49};
									direction = -231.518;
									upTime = 3;
									positionTrigger[] = {4588.71, 9586.44};
									radiusTrigger = 5;
								};
								
								class T20 : T19 {
									position[] = {4591.6, 9586.09};
									direction = -237.219;
									positionTrigger[] = {4588.9, 9586.43};
								};
								
								class T21 : T1 {
									position[] = {4626.68, 9556.54};
									direction = -234.642;
									upTime = 6;
									spawn = 1;
									positionTrigger[] = {4607.05, 9567.2};
								};
								
								class T22 : T1 {
									position[] = {4649.19, 9592.89};
									direction = -260.003;
									upTime = 5;
									positionTrigger[] = {4638.27, 9590.96};
								};
								
								class T22A : T1 {
									position[] = {4637.74, 9591.89};
									direction = -275.895;
									side = TWest;
									spawn = 1;
									positionTrigger[] = {};
								};
								
								class T22B : T22A {
									position[] = {4637.32, 9590.41};
									direction = -231.068;
									spawn = 0;
								};
								
								class T22C : T22A {
									position[] = {4654.05, 9594.47};
									direction = -277.051;
								};
								
								class T23 : T1 {
									position[] = {4648, 9587.15};
									direction = -245.411;
									upTime = 6;
									positionTrigger[] = {4638.17, 9590.38};
								};
								
								class T24 : T1 {
									position[] = {4668.75, 9576.74};
									direction = -218.422;
									upTime = 7;
									positionMove[] = {4660.85, 9571.12};
									moveTime = 3;
									type = VArmor;
									spawn = 1;
									side = TGuerrila;
									positionTrigger[] = {4651.26, 9582.77};
								};
								
								class T25 : T1 {
									position[] = {4675.39, 9607.92};
									direction = -343.508;
									upTime = 4;
									spawn = 1;
									positionTrigger[] = {4672.22, 9592.77};
								};
								
								class T26 : T1 {
									position[] = {4683.13, 9597.62};
									direction = -304.14;
									upTime = 5;
									positionTrigger[] = {4673.46, 9592.7};
								};
							};
						};
					};
					
					class Large {
						positionStart[] = {{2094.56, 5142.6}};
						directionStart[] = {90.3508};
						positionEnd[] = {{1734.36, 5093.21}};
						objectSet[] = {"ca\chernarus\data\scripts\armory\killHouseLarge1.sqf"};
						positionAnchor[] = {{2011.88, 5144.04}};
						waypoints[] = {{{2195.27, 5161.7}, {2244.85, 5138.3}, {2299.79, 5202.5}, {2271.17, 5242.95}, {2304.75, 5299.43}, {1918.26, 5294.6}}};
						
						class Targets {
							class Set1 {
								class T1 {
									position[] = {2226.84, 5169.03};
									direction = 428.31;
									upTime = 7;
									positionMove[] = {};
									moveTime = 0;
									type = VSoft;
									side = TEast;
									size = 0;
									spawn = 0;
									positionTrigger[] = {2189, 5158.99};
									radiusTrigger = 20;
								};
								
								class T1A : T1 {
									position[] = {2223.28, 5171.04};
									direction = 420.029;
									upTime = 6;
									size = 1;
									positionTrigger[] = {2189, 5158.99};
								};
								
								class T2 : T1 {
									position[] = {2208.26, 5142.22};
									direction = 546.34;
									upTime = 8;
									spawn = 1;
									positionTrigger[] = {2215.68, 5150.12};
								};
								
								class T2A : T2 {
									position[] = {2211.53, 5142.73};
									direction = 521.097;
									upTime = 6;
									spawn = 0;
								};
								
								class T2B : T2 {
									position[] = {2215.95, 5141.41};
									direction = 498.881;
									upTime = 8;
									spawn = 0;
								};
								
								class T3 : T1 {
									position[] = {2218.57, 5138.31};
									direction = 498.881;
									upTime = 8;
									positionMove[] = {2221.69, 5141.63};
									moveTime = 1.5;
									type = VArmor;
									spawn = 1;
									positionTrigger[] = {2217.45, 5148.79};
								};
								
								class T4 : T1 {
									position[] = {2244.8, 5145.16};
									direction = 481.229;
									upTime = 6;
									positionMove[] = {2241.02, 5137.93};
									moveTime = 2.5;
									type = VArmor;
									size = 1;
									positionTrigger[] = {2235.92, 5139.98};
								};
								
								class T5 : T1 {
									position[] = {2258.17, 5143.34, 1.2};
									direction = 457.784;
									upTime = 8;
									spawn = 1;
									positionTrigger[] = {2243.68, 5137.97};
								};
								
								class T5A : T5 {
									position[] = {2257.62, 5141.07, 7.3};
									direction = 463.099;
									upTime = 10;
									spawn = 0;
								};
								
								class T5B : T5 {
									position[] = {2253.78, 5137.69, 1.2};
									direction = 475.085;
									upTime = 9;
									spawn = 0;
								};
								
								class T5C : T5 {
									position[] = {2250.66, 5133.66, 4.3};
									direction = 486.949;
									upTime = 9;
								};
								
								class T6 : T1 {
									position[] = {2247.83, 5159.91};
									direction = 387.54;
									upTime = 7;
									positionMove[] = {2255.28, 5156.5};
									moveTime = 1.5;
									type = VArmor;
									positionTrigger[] = {2255.28, 5154.53};
								};
								
								class T7 : T1 {
									position[] = {2270.36, 5184.73};
									direction = 396.126;
									upTime = 7;
									positionMove[] = {2274.05, 5182.81};
									moveTime = 2;
									type = VArmor;
									positionTrigger[] = {2274.41, 5177.05};
								};
								
								class T7A : T7 {
									position[] = {2283.31, 5177.03};
									direction = 396.126;
									upTime = 8;
									positionMove[] = {2280.29, 5179.21};
									moveTime = 2.5;
									spawn = 1;
								};
								
								class T8 : T1 {
									position[] = {2315.9, 5216.26};
									direction = 423.249;
									upTime = 8;
									positionTrigger[] = {2299.86, 5210.85};
								};
								
								class T8A : T8 {
									position[] = {2315.42, 5220.45};
									direction = 376.954;
									upTime = 6;
									spawn = 1;
								};
								
								class T8B : T8 {
									position[] = {2318.11, 5215.72};
									direction = 417.938;
									upTime = 8;
									spawn = 1;
									size = 1;
								};
								
								class T9 : T1 {
									position[] = {2266.47, 5246.29};
									direction = 302.317;
									upTime = 6;
									side = TGuerrila;
									spawn = 1;
									positionTrigger[] = {2272.9, 5240.45};
								};
								
								class T9A : T9 {
									position[] = {2269.15, 5249.92};
									direction = 338.726;
									upTime = 7;
									side = TGuerrila;
								};
								
								class T10 : T1 {
									position[] = {2270.27, 5330.64};
									direction = 339.581;
									upTime = 9;
									side = TEast;
									positionTrigger[] = {2294.45, 5304.98};
								};
								
								class T10A : T10 {
									position[] = {2275.55, 5333.93};
									direction = 376.441;
									upTime = 8;
									spawn = 1;
								};
								
								class T10B : T10 {
									position[] = {2271.62, 5335};
									direction = 365.838;
									upTime = 8;
									spawn = 1;
								};
								
								class T10C : T10 {
									position[] = {2274.47, 5331.99};
									direction = 0.756105;
									side = TWest;
									spawn = 1;
									positionTrigger[] = {};
								};
								
								class T10D : T10C {
									position[] = {2272.2, 5331.99};
									direction = -16.8946;
								};
								
								class T10E : T10C {
									position[] = {2273.06, 5333.44};
									direction = 15.0818;
									spawn = 0;
								};
								
								class T10F : T10C {
									position[] = {2270.75, 5332.85};
									direction = 1.92643;
									spawn = 0;
								};
								
								class T11 : T1 {
									position[] = {2076.06, 5287.85};
									direction = 288.088;
									upTime = 8;
									side = TEast;
									size = 1;
									positionTrigger[] = {2142.92, 5294.2};
									radiusTrigger = 40;
								};
								
								class T12 : T1 {
									position[] = {2018.54, 5276.12};
									direction = 229.045;
									upTime = 10;
									positionTrigger[] = {2031.09, 5288.01};
									radiusTrigger = 40;
								};
								
								class T12A : T12 {
									position[] = {2016.62, 5277.59};
									direction = 248.49;
									upTime = 12;
									spawn = 1;
								};
								
								class T12B : T12 {
									position[] = {2009.93, 5279.49};
									direction = 255.209;
									upTime = 8;
									spawn = 1;
								};
								
								class T12C : T12 {
									position[] = {2016.7, 5271.45};
									direction = 255.084;
									upTime = 8;
								};
								
								class T13 : T1 {
									position[] = {1830.04, 5269.21};
									direction = 281.054;
									upTime = 10;
									positionMove[] = {1858.29, 5299.51};
									moveTime = 4;
									size = 1;
									type = VArmor;
									positionTrigger[] = {1927.31, 5295};
									radiusTrigger = 40;
								};
								
								class T14 : T1 {
									position[] = {1860.31, 5193.49};
									direction = 230.029;
									upTime = 13;
									positionTrigger[] = {1875.47, 5208.27};
									radiusTrigger = 40;
								};
								
								class T14A : T14 {
									position[] = {1871.89, 5186.69};
									direction = 200.36;
									upTime = 11;
									spawn = 1;
								};
								
								class T14B : T14 {
									position[] = {1856.77, 5182.97};
									direction = 256.342;
									upTime = 20;
								};
								
								class T15 : T1 {
									position[] = {1806.01, 5091.16};
									direction = 200.036;
									upTime = 8;
									positionTrigger[] = {1827.73, 5117.99};
									radiusTrigger = 40;
								};
								
								class T15A : T15 {
									position[] = {1806.56, 5089.46};
									direction = 192.134;
									side = TWest;
									spawn = 1;
									positionTrigger[] = {};
								};
								
								class T15B : T15A {
									position[] = {1804.36, 5089.97};
									direction = 223.993;
									spawn = 0;
								};
							};
						};
					};
					
					class Water {
						positionStart[] = {{13265.8, 9374.16}};
						directionStart[] = {-32.2588};
						positionEnd[] = {{13354.5, 10221.9}};
						objectSet[] = {"ca\chernarus\data\scripts\armory\killHouseWater1.sqf"};
						positionAnchor[] = {{13302.9, 9781.72}};
						waypoints[] = {{{13085.5, 9598.67}, {13240.2, 9773.74}, {13063, 9773.86}, {13268.6, 9898.62}}};
						
						class Targets {
							class Set1 {
								class T1 {
									position[] = {13029.7, 9654.73};
									direction = 345.354;
									upTime = 7;
									positionMove[] = {};
									moveTime = 0;
									type = VSoft;
									side = TEast;
									size = 0;
									spawn = 0;
									positionTrigger[] = {13084.3, 9608.92};
									radiusTrigger = 60;
								};
								
								class T1A : T1 {
									position[] = {13034.9, 9655.12};
									direction = 346.135;
									upTime = 8;
									spawn = 1;
								};
								
								class T1B : T1 {
									position[] = {13039.1, 9668.67};
									direction = 351.301;
									upTime = 7;
								};
								
								class T1C : T1 {
									position[] = {13043.7, 9668.42};
									direction = 353.415;
									upTime = 8;
									spawn = 1;
								};
								
								class T1D : T1 {
									position[] = {13048.4, 9671.82};
									direction = 345.703;
									upTime = 10;
								};
								
								class T2 : T1 {
									position[] = {13106.5, 9706.59};
									direction = 325.726;
									upTime = 8;
									positionMove[] = {13112.8, 9695.03};
									moveTime = 2;
									type = VArmor;
									positionTrigger[] = {13142.4, 9664.88};
								};
								
								class T2A : T2 {
									position[] = {13110.5, 9710.24};
									direction = 328.887;
									upTime = 10;
									positionMove[] = {13114.5, 9697.77};
									moveTime = 2;
								};
								
								class T3 : T2 {
									position[] = {13131, 9721.36};
									direction = 323.098;
									upTime = 12;
									positionMove[] = {13140.1, 9726.16};
									moveTime = 3;
									positionTrigger[] = {13173.5, 9681.7};
								};
								
								class T3A : T3 {
									position[] = {13135.7, 9721.33};
									direction = 333.766;
									upTime = 8;
									positionMove[] = {};
									type = VSoft;
									spawn = 1;
									side = TGuerrila;
								};
								
								class T4 : T1 {
									position[] = {13196.5, 9752.76};
									direction = 307.533;
									side = TWest;
									positionTrigger[] = {};
								};
								
								class T4A : T4 {
									position[] = {13197, 9754.3};
									direction = 273.802;
									spawn = 1;
								};
								
								class T5 : T1 {
									position[] = {13010.2, 9753.83, 5.8};
									direction = 274.867;
									upTime = 7;
									size = 1;
									positionTrigger[] = {13055.9, 9773.8};
								};
								
								class T5A : T5 {
									position[] = {13010.5, 9756.23, 5.8};
									direction = 276.549;
									upTime = 9;
									size = 0;
									spawn = 1;
								};
								
								class T5B : T5 {
									position[] = {13011.1, 9758.27, 5.8};
									direction = 276.361;
									upTime = 10;
									size = 0;
								};
								
								class T6 : T1 {
									position[] = {13013, 9790.19, 5.8};
									direction = 262.598;
									upTime = 10;
									spawn = 1;
									side = TGuerrila;
									positionTrigger[] = {13032, 9798.21};
								};
								
								class T6A : T6 {
									position[] = {13012.8, 9791.93, 5.8};
									direction = 295.817;
								};
								
								class T7 : T1 {
									position[] = {13144.4, 9847.66, 5.8};
									direction = 399.089;
									upTime = 10;
									side = TGuerrila;
									positionTrigger[] = {13139.8, 9813.26};
								};
								
								class T7A : T7 {
									position[] = {13146.3, 9851.37, 6.6};
									direction = 357.755;
									upTime = 11;
									side = TEast;
								};
								
								class T7B : T7 {
									position[] = {13145.4, 9853.25, 6.6};
									direction = 403.987;
									upTime = 12;
									side = TEast;
									spawn = 1;
								};
								
								class T8 : T2 {
									position[] = {13174.5, 9903.92, -0.4};
									direction = 335.307;
									upTime = 15;
									positionMove[] = {13221.3, 9922.51, -0.4};
									moveTime = 5;
									size = 1;
									positionTrigger[] = {13238.9, 9865.97};
								};
								
								class T9 : T1 {
									position[] = {13257.3, 9932.39};
									direction = 338.875;
									upTime = 14;
									positionTrigger[] = {13284.8, 9896.29};
								};
								
								class T9A : T9 {
									position[] = {13258.6, 9932.83};
									direction = 343.983;
									upTime = 13;
									spawn = 1;
								};
								
								class T9B : T9 {
									position[] = {13261.6, 9936.56};
									direction = 351.336;
									upTime = 8;
								};
								
								class T10 : T1 {
									position[] = {13266.6, 9981.59};
									direction = 294.114;
									upTime = 8;
									positionTrigger[] = {13304, 9983.04};
								};
								
								class T10A : T10 {
									position[] = {13263.9, 9978.06};
									direction = 273.371;
									upTime = 9;
									spawn = 1;
								};
								
								class T10B : T10 {
									position[] = {13263.9, 9978.06};
									direction = 273.371;
									side = TWest;
									positionTrigger[] = {};
								};
								
								class T10C : T10B {
									position[] = {13264.4, 9983.05};
									direction = 287.217;
								};
								
								class T10D : T10B {
									position[] = {13265, 9984.71};
									direction = 309.309;
									spawn = 1;
								};
								
								class T11 : T1 {
									position[] = {13280.7, 10047.7};
									direction = 306.055;
									upTime = 8;
									spawn = 1;
									positionTrigger[] = {13324.9, 10049.9};
								};
								
								class T11A : T11 {
									position[] = {13281.4, 10048.8};
									direction = 329.551;
									upTime = 9;
								};
								
								class T12 : T2 {
									position[] = {13307.4, 10159.9, -0.4};
									direction = 354.346;
									upTime = 10;
									positionMove[] = {13310.5, 10121.1, -0.4};
									moveTime = 3;
									size = 1;
									spawn = 1;
									positionTrigger[] = {13332.5, 10108.1};
								};
								
								class T13 : T1 {
									position[] = {13267.2, 9802.07, -0.4};
									direction = 391.664;
									upTime = 7;
									spawn = 1;
									size = 1;
									positionTrigger[] = {13248.6, 9752.04};
								};
								
								class T13A : T13 {
									position[] = {13278.4, 9793.03, -0.4};
									direction = 416.294;
									upTime = 9;
								};
							};
						};
					};
				};
			};
		};
		safePositionAnchor[] = {9122.17, 5178.92};
		safePositionRadius = 8500;
	};
};
