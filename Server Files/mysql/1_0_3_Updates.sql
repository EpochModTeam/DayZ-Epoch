-- ----------------------------
-- Add New Weapons and Ammo to trader items
-- ----------------------------
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'KSVK_DZE', 3, 'Rifle Sniper', 'trade_weapons');
INSERT IGNORE INTO `trader_items` VALUES(NULL, '5Rnd_127x108_KSVK', 1, 'Ammo Rifle Sniper', 'trade_items');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'Saiga12K', 3, 'Shotgun', 'trade_weapons');
INSERT IGNORE INTO `trader_items` VALUES(NULL, '8Rnd_B_Saiga12_74Slug', 1, 'Ammo Shotgun', 'trade_items');
INSERT IGNORE INTO `trader_items` VALUES(NULL, '8Rnd_B_Saiga12_74Pellets', 1, 'Ammo Shotgun', 'trade_items');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'bizon', 3, 'Sub Machine Gun', 'trade_weapons');
INSERT IGNORE INTO `trader_items` VALUES(NULL, '64Rnd_9x19_Bizon', 1, 'Ammo SMG', 'trade_items');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'M8_SAW', 3, 'Machine Gun', 'trade_weapons');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'MG36', 3, 'Machine Gun', 'trade_weapons');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'RPK_74', 3, 'Machine Gun', 'trade_weapons');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'M60A4_EP1_DZE', 3, 'Machine Gun', 'trade_weapons');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'm240_scoped_EP1_DZE', 3, 'Machine Gun', 'trade_weapons');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'M249_m145_EP1_DZE', 3, 'Machine Gun', 'trade_weapons');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'MG36_camo', 3, 'Machine Gun', 'trade_weapons');
INSERT IGNORE INTO `trader_items` VALUES(NULL, '100Rnd_556x45_BetaCMag', 1, 'Ammo - Light Machine Gun', 'trade_items');
INSERT IGNORE INTO `trader_items` VALUES(NULL, '75Rnd_545x39_RPK', 1, 'Ammo - Light Machine Gun', 'trade_items');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'M4A1_HWS_GL_SD_Camo', 3, 'Rifle', 'trade_items');

-- -------------------------------------------------------------------------------------------------------------
-- Add New Weapons to Black Market Vendors
-- -------------------------------------------------------------------------------------------------------------
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M8_SAW",3]', 10, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 526, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MG36",3]', 8, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 526, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["RPK_74",3]', 10, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 526, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M60A4_EP1_DZE",3]', 5, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 526, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["m240_scoped_EP1_DZE",3]', 5, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 526, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M249_m145_EP1_DZE",3]', 5, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 526, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MG36_camo",3]', 8, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 526, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["bizon",3]', 10, '[1,"ItemGoldBar10oz",1]', '[5,"ItemGoldBar",1]', 0, 526, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M4A1_HWS_GL_SD_Camo",3]', 10, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 526, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["KSVK_DZE",3]', 10, '[3,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 526, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M8_SAW",3]', 10, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 452, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MG36",3]', 8, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 452, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["RPK_74",3]', 10, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 452, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M60A4_EP1_DZE",3]', 5, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 452, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["m240_scoped_EP1_DZE",3]', 5, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 452, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M249_m145_EP1_DZE",3]', 5, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 452, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MG36_camo",3]', 8, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 452, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["bizon",3]', 10, '[1,"ItemGoldBar10oz",1]', '[5,"ItemGoldBar",1]', 0, 452, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M4A1_HWS_GL_SD_Camo",3]', 10, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 452, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["KSVK_DZE",3]', 10, '[3,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 452, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M8_SAW",3]', 10, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 455, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MG36",3]', 8, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 455, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["RPK_74",3]', 10, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 455, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M60A4_EP1_DZE",3]', 5, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 455, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["m240_scoped_EP1_DZE",3]', 5, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 455, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M249_m145_EP1_DZE",3]', 5, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 455, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MG36_camo",3]', 8, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 455, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["bizon",3]', 10, '[1,"ItemGoldBar10oz",1]', '[5,"ItemGoldBar",1]', 0, 455, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M4A1_HWS_GL_SD_Camo",3]', 10, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 455, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["KSVK_DZE",3]', 10, '[3,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 455, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M8_SAW",3]', 10, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 459, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MG36",3]', 8, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 459, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["RPK_74",3]', 10, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 459, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M60A4_EP1_DZE",3]', 5, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 459, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["m240_scoped_EP1_DZE",3]', 5, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 459, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M249_m145_EP1_DZE",3]', 5, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 459, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MG36_camo",3]', 8, '[1,"ItemGoldBar10oz",1]', '[6,"ItemGoldBar",1]', 0, 459, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["bizon",3]', 10, '[1,"ItemGoldBar10oz",1]', '[5,"ItemGoldBar",1]', 0, 459, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["M4A1_HWS_GL_SD_Camo",3]', 10, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 459, 'trade_weapons');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["KSVK_DZE",3]', 10, '[3,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 459, 'trade_weapons');

-- -------------------------------------------------------------------------------------------------------------
-- Adding new ammo to Black Market Vendors
-- -------------------------------------------------------------------------------------------------------------
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["100Rnd_556x45_BetaCMag",1]', 10, '[3,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 527, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["75Rnd_545x39_RPK",1]', 10, '[3,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 527, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["64Rnd_9x19_Bizon",1]', 10, '[2,"ItemSilverBar",1]', '[1,"ItemSilverBar",1]', 0, 527, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["5Rnd_127x108_KSVK",1]', 10, '[1,"ItemSilverBar10oz",1]', '[5,"ItemSilverBar",1]', 0, 527, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["100Rnd_556x45_BetaCMag",1]', 10, '[3,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 453, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["75Rnd_545x39_RPK",1]', 10, '[3,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 453, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["64Rnd_9x19_Bizon",1]', 10, '[2,"ItemSilverBar",1]', '[1,"ItemSilverBar",1]', 0, 453, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["5Rnd_127x108_KSVK",1]', 10, '[1,"ItemSilverBar10oz",1]', '[5,"ItemSilverBar",1]', 0, 453, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["100Rnd_556x45_BetaCMag",1]', 10, '[3,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 456, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["75Rnd_545x39_RPK",1]', 10, '[3,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 456, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["64Rnd_9x19_Bizon",1]', 10, '[2,"ItemSilverBar",1]', '[1,"ItemSilverBar",1]', 0, 456, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["5Rnd_127x108_KSVK",1]', 10, '[1,"ItemSilverBar10oz",1]', '[5,"ItemSilverBar",1]', 0, 456, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["100Rnd_556x45_BetaCMag",1]', 10, '[3,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 460, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["75Rnd_545x39_RPK",1]', 10, '[3,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 460, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["64Rnd_9x19_Bizon",1]', 10, '[2,"ItemSilverBar",1]', '[1,"ItemSilverBar",1]', 0, 460, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["5Rnd_127x108_KSVK",1]', 10, '[1,"ItemSilverBar10oz",1]', '[5,"ItemSilverBar",1]', 0, 460, 'trade_items');

-- -------------------------------------------------------------------------------------------------------------
-- Fixing SVD ammo sell prices to match 1/2 purchase price
-- -------------------------------------------------------------------------------------------------------------
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar10oz",1]' WHERE `item`='["10Rnd_762x54_SVD",1]';

-- -------------------------------------------------------------------------------------------------------------
-- Adding building supplies to trader items
-- -------------------------------------------------------------------------------------------------------------
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'CinderBlocks', 1, 'Wholesale Crates', 'trade_items');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'PartPlywoodPack', 1, 'Wholesale Crates', 'trade_items');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'MortarBucket', 1, 'Wholesale Crates', 'trade_items');
INSERT IGNORE INTO `trader_items` VALUES(NULL, 'PartPlankPack', 1, 'Wholesale Crates', 'trade_items');

-- -------------------------------------------------------------------------------------------------------------
-- Adding building supplies to Wholesalers
-- -------------------------------------------------------------------------------------------------------------
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["CinderBlocks",1]', 50, '[1,"ItemGoldBar10oz",1]', '[5,"ItemGoldBar",1]', 0, 555, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["PartPlywoodPack",1]', 200, '[2,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 555, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MortarBucket",1]', 50, '[1,"ItemGoldBar10oz",1]', '[5,"ItemGoldBar",1]', 0, 555, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["PartPlankPack",1]', 200, '[1,"ItemSilverBar10oz",1]', '[5,"ItemSilverBar",1]', 0, 555, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["CinderBlocks",1]', 50, '[1,"ItemGoldBar10oz",1]', '[5,"ItemGoldBar",1]', 0, 636, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["PartPlywoodPack",1]', 200, '[2,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 636, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MortarBucket",1]', 50, '[1,"ItemGoldBar10oz",1]', '[5,"ItemGoldBar",1]', 0, 636, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["PartPlankPack",1]', 200, '[1,"ItemSilverBar10oz",1]', '[5,"ItemSilverBar",1]', 0, 636, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["CinderBlocks",1]', 50, '[1,"ItemGoldBar10oz",1]', '[5,"ItemGoldBar",1]', 0, 675, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["PartPlywoodPack",1]', 200, '[2,"ItemSilverBar10oz",1]', '[1,"ItemSilverBar10oz",1]', 0, 675, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["MortarBucket",1]', 50, '[1,"ItemGoldBar10oz",1]', '[5,"ItemGoldBar",1]', 0, 675, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES(NULL, '["PartPlankPack",1]', 200, '[1,"ItemSilverBar10oz",1]', '[5,"ItemSilverBar",1]', 0, 675, 'trade_items');
