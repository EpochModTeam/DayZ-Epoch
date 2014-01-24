-- ----------------------------
-- Set any buy value of copper to 2 silver
-- ----------------------------
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[2,"ItemCopperBar10oz",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[1,"ItemCopperBar10oz",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[9,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[8,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[7,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[6,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[5,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[4,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[3,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[2,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[1,"ItemCopperBar",1]';


-- ----------------------------
-- Set any sell value of copper to 1 silver
-- ----------------------------
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[2,"ItemCopperBar10oz",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[1,"ItemCopperBar10oz",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[9,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[8,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[7,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[6,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[5,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[4,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[3,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[2,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[1,"ItemCopperBar",1]';

-- ----------------------------
-- PRICE REVIEW
-- ----------------------------

UPDATE `Traders_DATA` SET `buy`= '[4,"ItemGoldBar10oz",1]' WHERE `item`='["BAF_LRR_scoped",3]';
UPDATE `Traders_DATA` SET `buy`= '[5,"ItemGoldBar",1]' WHERE `item`='["5Rnd_86x70_L115A1",1]';
UPDATE `Traders_DATA` SET `buy`= '[3,"ItemGoldBar10oz",1]' WHERE `item`='["VSS_vintorez",3]';
UPDATE `Traders_DATA` SET `buy`= '[3,"ItemGoldBar",1]' WHERE `item`='["20Rnd_9x39_SP5_VSS",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["MK_48_DZ",3]';
UPDATE `Traders_DATA` SET `buy`= '[3,"ItemGoldBar",1]' WHERE `item`='["100Rnd_762x51_M240",1]';
UPDATE `Traders_DATA` SET `buy`= '[3,"ItemGoldBar",1]' WHERE `item`='["100Rnd_762x54_PK",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["m240_scoped_EP1_DZE",3]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["M249_m145_EP1_DZE",3]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar",1]' WHERE `item`='["200Rnd_556x45_M249",1]';

UPDATE `Traders_DATA` SET `buy`= '[6,"ItemBriefcase100oz",1]' WHERE `item`='["HMMWV_M1151_M2_CZ_DES_EP1_DZE",2]';
UPDATE `Traders_DATA` SET `buy`= '[7,"ItemGoldBar10oz",1]' WHERE `item`='["GAZ_Vodnik_DZE",2]' and `buy`='[6,"ItemGoldBar10oz",1]';
UPDATE `Traders_DATA` SET `sell`= '[5,"ItemGoldBar10oz",1]' WHERE `item`='["GAZ_Vodnik_DZE",2]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["SUV_TK_CIV_EP1",2]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["SUV_Blue",2]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["SUV_Charcoal",2]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["SUV_Green",2]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["SUV_Orange",2]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["SUV_Pink",2]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["SUV_Red",2]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["SUV_Silver",2]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["SUV_White",2]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar10oz",1]' WHERE `item`='["SUV_Yellow",2]';


UPDATE `Traders_DATA` SET `buy`= '[5,"ItemGoldBar",1]' WHERE `item`='["PartEngine",1]';
UPDATE `Traders_DATA` SET `buy`= '[5,"ItemGoldBar",1]' WHERE `item`='["PartVRotor",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar",1]' WHERE `item`='["PartWheel",1]';
UPDATE `Traders_DATA` SET `buy`= '[1,"ItemGoldBar",1]' WHERE `item`='["PartGlass",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar",1]' WHERE `item`='["PartGeneric",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar",1]' WHERE `item`='["PartFueltank",1]';


UPDATE `Traders_DATA` SET `buy`= '[4,"ItemGoldBar",1]' WHERE `item`='["Binocular_Vector",3]';
UPDATE `Traders_DATA` SET `buy`= '[4,"ItemGoldBar",1]' WHERE `item`='["NVGoggles",3]';

UPDATE `Traders_DATA` SET `buy`= '[1,"ItemGoldBar",1]' WHERE `item`='["FoodrabbitCooked",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemGoldBar",1]' WHERE `item`='["ItemTroutCooked",1]';
UPDATE `Traders_DATA` SET `buy`= '[3,"ItemGoldBar",1]' WHERE `item`='["ItemSeaBassCooked",1]';
UPDATE `Traders_DATA` SET `buy`= '[4,"ItemGoldBar",1]' WHERE `item`='["ItemTunaCooked",1]';
UPDATE `Traders_DATA` SET `buy`= '[1,"ItemSilverBar10oz",1]' WHERE `item`='["FoodMRE",1]';

-- ----------------------------
-- WEAPON UPDATE
-- ----------------------------
UPDATE `Traders_DATA` SET `item`= '["M249_EP1_DZ",3]' WHERE `item`='["M249_DZ",3]';
UPDATE `Character_DATA` SET `Inventory` = REPLACE(`Inventory`, '"M249_DZ"', '"M249_EP1_DZ"') WHERE `Inventory` LIKE '%"M249_DZ"%';
UPDATE `Character_DATA` SET `Backpack` = REPLACE(`Backpack`, '"M249_DZ"', '"M249_EP1_DZ"') WHERE `Backpack` LIKE '%"M249_DZ"%';
UPDATE `Character_DATA` SET `CurrentState` = '["","",42,[]]' WHERE `CurrentState` LIKE '%"M249_DZ"%';
UPDATE `Object_DATA` SET `Inventory` = REPLACE(`Inventory`, '"M249_DZ"', '"M249_EP1_DZ"') WHERE `Inventory` LIKE '%"M249_DZ"%';