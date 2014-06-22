class Makarov;
class MakarovSD : Makarov { 
  fireLightDuration = 0; 
  fireLightIntensity = 0; 
  picture = "\CA\weapons\data\equip\w_makarovSD_ca.paa"; 
  begin1[] = {"ca\sounds\weapons\pistols\makarovSD_single1", 0.316228, 1, 200}; 
  soundBegin[] = {"begin1", 1}; 
  reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload", 0.0316228, 1, 20}; 
  minRange = 0; 
  minRangeProbab = 0.1; 
  midRange = 15; 
  midRangeProbab = 0.3; 
  maxRange = 20; 
  maxRangeProbab = 0.04; 
  descriptionShort = "Silenced semi-automatic pistol <br/>Caliber: 9x18mm"; 
  model = "ca\weapons_E\makarov\makarov_silenced"; 
  displayName = "Makarov SD"; 
  magazines[] = {"8Rnd_9x18_MakarovSD"}; 
};
