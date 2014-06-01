DELETE FROM `Traders_DATA` WHERE `item` = '["ItemFuelBarrelEmpty",1]';
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["ItemFuelBarrelEmpty",1]', 250, '[1,"ItemGoldBar",1]', '[5,"ItemSilverBar10oz",1]', 0, 675, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["ItemFuelBarrelEmpty",1]', 250, '[1,"ItemGoldBar",1]', '[5,"ItemSilverBar10oz",1]', 0, 636, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["ItemFuelBarrelEmpty",1]', 250, '[1,"ItemGoldBar",1]', '[5,"ItemSilverBar10oz",1]', 0, 555, 'trade_items');

INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["CH53_DZE",1]', 6, '[2,"ItemBriefcase100oz",1]', '[1,"ItemBriefcase100oz",1]', 0, 493, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["CH53_DZE",1]', 10, '[3,"ItemBriefcase100oz",1]', '[2,"ItemBriefcase100oz",1]', 0, 512, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["BAF_Merlin_DZE",1]', 10, '[2,"ItemBriefcase100oz",1]', '[1,"ItemBriefcase100oz",1]', 0, 519, 'trade_any_vehicle');


UPDATE `Traders_DATA` SET `item` = '["C130J_US_EP1_DZ",2]' WHERE `item` = '["C130J_US_EP1",2]';

--
-- Normalize trader stock
--

UPDATE `Traders_DATA` SET `qty` = '10' WHERE `afile` = 'trade_items';
UPDATE `Traders_DATA` SET `qty` = '10' WHERE `afile` = 'trade_weapons';
UPDATE `Traders_DATA` SET `qty` = '10' WHERE `afile` = 'trade_backpacks';
UPDATE `Traders_DATA` SET `qty` = '2' WHERE `afile` = 'trade_any_vehicle';
UPDATE `Traders_DATA` SET `qty` = '2' WHERE `afile` = 'trade_any_boat';
UPDATE `Traders_DATA` SET `qty` = '10' WHERE `afile` = 'trade_any_bicycle';
