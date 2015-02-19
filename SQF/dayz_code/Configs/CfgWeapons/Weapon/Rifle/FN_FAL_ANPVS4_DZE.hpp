class FN_FAL: M16A2 {
  afmax = 0;
  displayName = $STR_EP1_DN_FN_FAL;
  descriptionShort = $STR_EP1_DSS_FN_FAL;
  dexterity = 1.55;
  htmax = 480;
  htmin = 1;
  magazines[] = {"20Rnd_762x51_FNFAL"};
  mfact = 1;
  mfmax = 0;
  model = "\CA\weapons_E\FNFAL\fnFal";
  modes[] = {"Single", "Burst"};
  picture = "\ca\weapons_E\Data\icons\fnfal_CA.paa";
  scope = 2;
  tbody = 100;
};
class FN_FAL_ANPVS4_DZE: FN_FAL {
  visionMode[] = {"Normal", "NVG"};
};
