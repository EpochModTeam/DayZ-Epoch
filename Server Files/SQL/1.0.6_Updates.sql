/*
	DayZ Epoch 1.0.6 Updates
	
	ONLY RUN THIS FILE IF UPDATING AN EXISTING 1051 DATABASE TO 1061.
	NEW DATABASES SHOULD USE EPOCH.SQL INSTEAD.
	EXISTING 106 DATABASES SHOULD USE 1.0.6.1_UPDATES.SQL INSTEAD.
*/


-- ----------------------------
-- Prevent hitpoints from overflooding and causing errors
-- ----------------------------
ALTER TABLE `Object_DATA` CHANGE `Hitpoints` `Hitpoints` VARCHAR(1024) CHARACTER SET latin1 COLLATE latin1_swedish_ci NOT NULL DEFAULT '[]';

-- ----------------------------
-- Update Object_DATA to support longer CharacterID and hitpoints
-- ----------------------------
ALTER TABLE Object_DATA MODIFY COLUMN CharacterID bigint(20);
ALTER TABLE Object_DATA MODIFY COLUMN Hitpoints varchar(1024);

-- ----------------------------
-- Update Object_DATA to support single currency
-- ----------------------------
ALTER TABLE `Object_DATA` ADD `StorageCoins` bigint(20) NOT NULL DEFAULT '0';

-- ----------------------------
-- Update character_data to support single currency
-- ----------------------------
SET @s = (SELECT IF(
    (SELECT COUNT(*)
        FROM INFORMATION_SCHEMA.COLUMNS
        WHERE TABLE_NAME = 'character_data'
        AND table_schema = DATABASE()
        AND COLUMN_NAME = 'CashMoney'
    ) > 0,
    'SELECT 1',
    "ALTER TABLE `character_data` ADD `CashMoney` bigint(20) NOT NULL DEFAULT '0'"
));

PREPARE stmt FROM @s;
EXECUTE stmt;
DEALLOCATE PREPARE stmt;

ALTER TABLE `character_data` CHANGE `CashMoney` `Coins` bigint(20) NOT NULL DEFAULT '0';

-- ----------------------------
-- Update player_data to support group system with ~100 players per group
-- Also add single currency support
-- ----------------------------
ALTER TABLE Player_DATA ADD playerGroup varchar(2048) NOT NULL DEFAULT '[]';
ALTER TABLE Player_DATA ADD PlayerCoins bigint(20) NOT NULL DEFAULT '0';
ALTER TABLE Player_DATA ADD BankCoins bigint(20) NOT NULL DEFAULT '0';

-- ----------------------------
-- Remove CZ_VestPouch_EP1 from traders and inventories. It is the same model as DZ_Czech_Vest_Pouch with half the slots.
-- ----------------------------
DELETE FROM `Traders_DATA` WHERE item = '["CZ_VestPouch_EP1",2]';
UPDATE character_data SET Backpack = REPLACE(Backpack, 'CZ_VestPouch_EP1', 'DZ_Czech_Vest_Pouch') WHERE INSTR(Backpack, 'CZ_VestPouch_EP1') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, 'CZ_VestPouch_EP1', 'DZ_Czech_Vest_Pouch') WHERE INSTR(Inventory, 'CZ_VestPouch_EP1') > 0;

-- ----------------------------
-- Fix typo from 1.0.5.1 and rename DZ_Czech_Vest_Puch to DZ_Czech_Vest_Pouch.
-- ----------------------------
UPDATE `Traders_DATA` SET `item` = '["DZ_Czech_Vest_Pouch",2]' WHERE `item` = '["DZ_Czech_Vest_Puch",2]';
UPDATE character_data SET Backpack = REPLACE(Backpack, 'DZ_Czech_Vest_Puch', 'DZ_Czech_Vest_Pouch') WHERE INSTR(Backpack, 'DZ_Czech_Vest_Puch') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, 'DZ_Czech_Vest_Puch', 'DZ_Czech_Vest_Pouch') WHERE INSTR(Inventory, 'DZ_Czech_Vest_Puch') > 0;

-- ----------------------------
-- Fix typo from 1.0.5.1 updates causing Merlin and CH53 to show as magazines instead of vehicles
-- ----------------------------
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["CH53_DZE",2]', 2, '[2,"ItemBriefcase100oz",1]', '[1,"ItemBriefcase100oz",1]', 0, 493, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["CH53_DZE",2]', 2, '[3,"ItemBriefcase100oz",1]', '[2,"ItemBriefcase100oz",1]', 0, 512, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["BAF_Merlin_DZE",2]', 2, '[2,"ItemBriefcase100oz",1]', '[1,"ItemBriefcase100oz",1]', 0, 519, 'trade_any_vehicle');
DELETE FROM `Traders_DATA` WHERE item = '["CH53_DZE",1]';
DELETE FROM `Traders_DATA` WHERE item = '["BAF_Merlin_DZE",1]';

-- ----------------------------
-- Swap ArmoredSUV to upgraded version since transportMaxMagazines was decreased on default version (400 --> 150). Upgraded has 400.
-- ----------------------------
UPDATE `object_data` SET `Classname` = 'ArmoredSUV_PMC_DZE3' WHERE `Classname` = 'ArmoredSUV_PMC_DZ';
UPDATE `object_data` SET `Classname` = 'ArmoredSUV_PMC_DZE3' WHERE `Classname` = 'ArmoredSUV_PMC_DZE';

-- ----------------------------
-- Swap datsun, Kamaz and hilux to upgradeable _DZE versions
-- ----------------------------
UPDATE `object_data` SET `Classname` = 'hilux1_civil_1_open_DZE' WHERE `Classname` = 'hilux1_civil_1_open';
UPDATE `object_data` SET `Classname` = 'hilux1_civil_2_covered_DZE' WHERE `Classname` = 'hilux1_civil_2_covered';
UPDATE `object_data` SET `Classname` = 'hilux1_civil_3_open_DZE' WHERE `Classname` = 'hilux1_civil_3_open';
UPDATE `object_data` SET `Classname` = 'datsun1_civil_1_open_DZE' WHERE `Classname` = 'datsun1_civil_1_open';
UPDATE `object_data` SET `Classname` = 'datsun1_civil_2_covered_DZE' WHERE `Classname` = 'datsun1_civil_2_covered';
UPDATE `object_data` SET `Classname` = 'datsun1_civil_3_open_DZE' WHERE `Classname` = 'datsun1_civil_3_open';
UPDATE `object_data` SET `Classname` = 'Kamaz_DZE' WHERE `Classname` = 'Kamaz';
DELETE FROM `Traders_DATA` WHERE item = '["hilux1_civil_1_open"]';
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_1_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 495, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_1_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 535, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_1_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 590, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_1_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 659, 'trade_any_vehicle');
DELETE FROM `Traders_DATA` WHERE item = '["hilux1_civil_2_covered"]';
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_2_covered_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 495, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_2_covered_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 535, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_2_covered_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 590, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_2_covered_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 659, 'trade_any_vehicle');
DELETE FROM `Traders_DATA` WHERE item = '["hilux1_civil_3_open"]';
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_3_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 495, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_3_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 535, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_3_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 590, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["hilux1_civil_3_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 659, 'trade_any_vehicle');
DELETE FROM `Traders_DATA` WHERE item = '["datsun1_civil_1_open"]';
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_1_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 495, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_1_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 535, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_1_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 590, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_1_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 659, 'trade_any_vehicle');
DELETE FROM `Traders_DATA` WHERE item = '["datsun1_civil_2_covered"]';
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_2_covered_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 495, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_2_covered_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 535, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_2_covered_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 590, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_2_covered_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 659, 'trade_any_vehicle');
DELETE FROM `Traders_DATA` WHERE item = '["datsun1_civil_3_open"]';
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_3_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 495, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_3_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 535, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_3_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 590, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["datsun1_civil_3_open_DZE",2]', 2, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 659, 'trade_any_vehicle');
DELETE FROM `Traders_DATA` WHERE item = '["Kamaz"]';
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["Kamaz_DZE",2]', 2, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 564, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["Kamaz_DZE",2]', 2, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 570, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["Kamaz_DZE",2]', 2, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 586, 'trade_any_vehicle');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["Kamaz_DZE",2]', 2, '[2,"ItemGoldBar10oz",1]', '[1,"ItemGoldBar10oz",1]', 0, 653, 'trade_any_vehicle');

-- ----------------------------
-- Add new attachments category to DB traders
-- ----------------------------
INSERT INTO `trader_tids` VALUES(693, 'Attachments', 165);
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_ACOG",1]', 10, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_BELT",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_CCO",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_FL",1]', 10, '[2,"ItemGoldBar",1]', '[1,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_FL_Pist",1]', 10, '[2,"ItemGoldBar",1]', '[1,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_Ghillie",1]', 10, '[2,"ItemGoldBar",1]', '[1,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_GP25",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_Holo",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_Kobra",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_M203",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_PSO1",1]', 10, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_SA58RIS",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_SCOPED",1]', 10, '[6,"ItemGoldBar",1]', '[3,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_Sup9",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_Sup545",1]', 10, '[6,"ItemGoldBar",1]', '[3,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_Sup556",1]', 10, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_MFL",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_MFL_Pist",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');

-- ----------------------------
-- ItemMatchbox_DZE was removed because it was identical to ItemMatchbox, use dayz_matchboxCount config variable for match stick count
-- ----------------------------
UPDATE `Traders_DATA` SET `item` = '["ItemMatchbox",3]' WHERE `item` = '["ItemMatchbox_DZE",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemMatchbox_DZE"', '"ItemMatchbox"') WHERE INSTR(Backpack, '"ItemMatchbox_DZE"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemMatchbox_DZE"', '"ItemMatchbox"') WHERE INSTR(Inventory, '"ItemMatchbox_DZE"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemMatchbox_DZE"', '"ItemMatchbox"') WHERE INSTR(Inventory, '"ItemMatchbox_DZE"') > 0;

-- ----------------------------
-- ItemHatchet_DZE was removed because it was identical to ItemHatchet
-- ----------------------------
UPDATE `Traders_DATA` SET `item` = '["ItemHatchet",3]' WHERE `item` = '["ItemHatchet_DZE",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemHatchet_DZE"', '"ItemHatchet"') WHERE INSTR(Backpack, '"ItemHatchet_DZE"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemHatchet_DZE"', '"ItemHatchet"') WHERE INSTR(Inventory, '"ItemHatchet_DZE"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemHatchet_DZE"', '"ItemHatchet"') WHERE INSTR(Inventory, '"ItemHatchet_DZE"') > 0;

-- ----------------------------
-- MeleeHatchet_DZE was removed because it was identical to MeleeHatchet
-- ----------------------------
UPDATE character_data SET Backpack = REPLACE(Backpack, '"MeleeHatchet_DZE"', '"MeleeHatchet"') WHERE INSTR(Backpack, '"MeleeHatchet_DZE"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"MeleeHatchet_DZE"', '"MeleeHatchet"') WHERE INSTR(Inventory, '"MeleeHatchet_DZE"') > 0;
UPDATE character_data SET CurrentState = REPLACE(CurrentState, '"MeleeHatchet_DZE"', '"MeleeHatchet"') WHERE INSTR(CurrentState, '"MeleeHatchet_DZE"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"MeleeHatchet_DZE"', '"MeleeHatchet"') WHERE INSTR(Inventory, '"MeleeHatchet_DZE"') > 0;

-- ----------------------------
-- ItemTentOld and ItemTentDomed2 were removed because they were identical to ItemTent and ItemDomeTent
-- ----------------------------
UPDATE `Traders_DATA` SET `item` = '["ItemTent",1]' WHERE `item` = '["ItemTentOld",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemTentOld"', '"ItemTent"') WHERE INSTR(Backpack, '"ItemTentOld"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemTentOld"', '"ItemTent"') WHERE INSTR(Inventory, '"ItemTentOld"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemTentOld"', '"ItemTent"') WHERE INSTR(Inventory, '"ItemTentOld"') > 0;

UPDATE `Traders_DATA` SET `item` = '["ItemDomeTent",1]' WHERE `item` = '["ItemTentDomed2",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemTentDomed2"', '"ItemDomeTent"') WHERE INSTR(Backpack, '"ItemTentDomed2"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemTentDomed2"', '"ItemDomeTent"') WHERE INSTR(Inventory, '"ItemTentDomed2"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemTentDomed2"', '"ItemDomeTent"') WHERE INSTR(Inventory, '"ItemTentDomed2"') > 0;

-- ----------------------------
-- ItemTentDomed was renamed to ItemDesertTent and made upgradeable
-- ----------------------------
UPDATE `Traders_DATA` SET `item` = '["ItemDesertTent",1]' WHERE `item` = '["ItemTentDomed",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemTentDomed"', '"ItemDesertTent"') WHERE INSTR(Backpack, '"ItemTentDomed"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemTentDomed"', '"ItemDesertTent"') WHERE INSTR(Inventory, '"ItemTentDomed"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemTentDomed"', '"ItemDesertTent"') WHERE INSTR(Inventory, '"ItemTentDomed"') > 0;

update object_Data set classname = 'DesertTentStorage1' where classname = 'TentStorageDomed';
update object_Data set classname = 'DomeTentStorage1' where classname = 'TentStorageDomed2';

-- ----------------------------
-- Updated fish names from 1.8.7
-- ----------------------------
UPDATE `Traders_DATA` SET `item` = '["FishRawTrout",1]' WHERE `item` = '["ItemTrout",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemTrout"', '"FishRawTrout"') WHERE INSTR(Backpack, '"ItemTrout"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemTrout"', '"FishRawTrout"') WHERE INSTR(Inventory, '"ItemTrout"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemTrout"', '"FishRawTrout"') WHERE INSTR(Inventory, '"ItemTrout"') > 0;

UPDATE `Traders_DATA` SET `item` = '["FishRawSeaBass",1]' WHERE `item` = '["ItemSeaBass",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemSeaBass"', '"FishRawSeaBass"') WHERE INSTR(Backpack, '"ItemSeaBass"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemSeaBass"', '"FishRawSeaBass"') WHERE INSTR(Inventory, '"ItemSeaBass"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemSeaBass"', '"FishRawSeaBass"') WHERE INSTR(Inventory, '"ItemSeaBass"') > 0;

UPDATE `Traders_DATA` SET `item` = '["FishRawTuna",1]' WHERE `item` = '["ItemTuna",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemTuna"', '"FishRawTuna"') WHERE INSTR(Backpack, '"ItemTuna"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemTuna"', '"FishRawTuna"') WHERE INSTR(Inventory, '"ItemTuna"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemTuna"', '"FishRawTuna"') WHERE INSTR(Inventory, '"ItemTuna"') > 0;

UPDATE `Traders_DATA` SET `item` = '["FishCookedTrout",1]' WHERE `item` = '["ItemTroutCooked",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemTroutCooked"', '"FishCookedTrout"') WHERE INSTR(Backpack, '"ItemTroutCooked"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemTroutCooked"', '"FishCookedTrout"') WHERE INSTR(Inventory, '"ItemTroutCooked"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemTroutCooked"', '"FishCookedTrout"') WHERE INSTR(Inventory, '"ItemTroutCooked"') > 0;

UPDATE `Traders_DATA` SET `item` = '["FishCookedSeaBass",1]' WHERE `item` = '["ItemSeaBassCooked",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemSeaBassCooked"', '"FishCookedSeaBass"') WHERE INSTR(Backpack, '"ItemSeaBassCooked"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemSeaBassCooked"', '"FishCookedSeaBass"') WHERE INSTR(Inventory, '"ItemSeaBassCooked"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemSeaBassCooked"', '"FishCookedSeaBass"') WHERE INSTR(Inventory, '"ItemSeaBassCooked"') > 0;

UPDATE `Traders_DATA` SET `item` = '["FishCookedTuna",1]' WHERE `item` = '["ItemTunaCooked",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"ItemTunaCooked"', '"FishCookedTuna"') WHERE INSTR(Backpack, '"ItemTunaCooked"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"ItemTunaCooked"', '"FishCookedTuna"') WHERE INSTR(Inventory, '"ItemTunaCooked"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"ItemTunaCooked"', '"FishCookedTuna"') WHERE INSTR(Inventory, '"ItemTunaCooked"') > 0;
-- ----------------------------
-- Update new half cinderblock wall class
-- ----------------------------

UPDATE `Traders_DATA` SET `item` = '["cinder_wall_kit",1]' WHERE `item` = '["half_cinder_wall_kit",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"cinder_wall_kit"', '"half_cinder_wall_kit"') WHERE INSTR(Backpack, '"cinder_wall_kit"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"cinder_wall_kit"', '"half_cinder_wall_kit"') WHERE INSTR(Inventory, '"cinder_wall_kit"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"cinder_wall_kit"', '"half_cinder_wall_kit"') WHERE INSTR(Inventory, '"cinder_wall_kit"') > 0;

-- ----------------------------
-- 30m_plot_kit was renamed to plot_pole_kit for sanity
-- ----------------------------

UPDATE `Traders_DATA` SET `item` = '["plot_pole_kit",1]' WHERE `item` = '["30m_plot_kit",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"30m_plot_kit"', '"plot_pole_kit"') WHERE INSTR(Backpack, '"30m_plot_kit"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"30m_plot_kit"', '"plot_pole_kit"') WHERE INSTR(Inventory, '"30m_plot_kit"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"30m_plot_kit"', '"plot_pole_kit"') WHERE INSTR(Inventory, '"30m_plot_kit"') > 0;

-- ----------------------------
-- Updated shotgun ammo names from 1.8.7
-- ----------------------------
UPDATE `Traders_DATA` SET `item` = '["2Rnd_12Gauge_Slug",1]' WHERE `item` = '["2Rnd_shotgun_74Slug",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"2Rnd_shotgun_74Slug"', '"2Rnd_12Gauge_Slug"') WHERE INSTR(Backpack, '"2Rnd_shotgun_74Slug"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"2Rnd_shotgun_74Slug"', '"2Rnd_12Gauge_Slug"') WHERE INSTR(Inventory, '"2Rnd_shotgun_74Slug"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"2Rnd_shotgun_74Slug"', '"2Rnd_12Gauge_Slug"') WHERE INSTR(Inventory, '"2Rnd_shotgun_74Slug"') > 0;

UPDATE `Traders_DATA` SET `item` = '["2Rnd_12Gauge_Buck",1]' WHERE `item` = '["2Rnd_shotgun_74Pellets",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"2Rnd_shotgun_74Pellets"', '"2Rnd_12Gauge_Buck"') WHERE INSTR(Backpack, '"2Rnd_shotgun_74Pellets"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"2Rnd_shotgun_74Pellets"', '"2Rnd_12Gauge_Buck"') WHERE INSTR(Inventory, '"2Rnd_shotgun_74Pellets"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"2Rnd_shotgun_74Pellets"', '"2Rnd_12Gauge_Buck"') WHERE INSTR(Inventory, '"2Rnd_shotgun_74Pellets"') > 0;

UPDATE `Traders_DATA` SET `item` = '["8Rnd_12Gauge_Slug",1]' WHERE `item` = '["8Rnd_B_Beneli_74Slug",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"8Rnd_B_Beneli_74Slug"', '"8Rnd_12Gauge_Slug"') WHERE INSTR(Backpack, '"8Rnd_B_Beneli_74Slug"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"8Rnd_B_Beneli_74Slug"', '"8Rnd_12Gauge_Slug"') WHERE INSTR(Inventory, '"8Rnd_B_Beneli_74Slug"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"8Rnd_B_Beneli_74Slug"', '"8Rnd_12Gauge_Slug"') WHERE INSTR(Inventory, '"8Rnd_B_Beneli_74Slug"') > 0;

UPDATE `Traders_DATA` SET `item` = '["8Rnd_12Gauge_Buck",1]' WHERE `item` = '["8Rnd_B_Beneli_Pellets",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"8Rnd_B_Beneli_Pellets"', '"8Rnd_12Gauge_Buck"') WHERE INSTR(Backpack, '"8Rnd_B_Beneli_Pellets"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"8Rnd_B_Beneli_Pellets"', '"8Rnd_12Gauge_Buck"') WHERE INSTR(Inventory, '"8Rnd_B_Beneli_Pellets"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"8Rnd_B_Beneli_Pellets"', '"8Rnd_12Gauge_Buck"') WHERE INSTR(Inventory, '"8Rnd_B_Beneli_Pellets"') > 0;

-- ----------------------------
-- Updated arrow and quiver names from 1.8.7
-- ----------------------------
UPDATE `Traders_DATA` SET `item` = '["1Rnd_Arrow_Wood",1]' WHERE `item` = '["WoodenArrow",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"WoodenArrow"', '"1Rnd_Arrow_Wood"') WHERE INSTR(Backpack, '"WoodenArrow"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"WoodenArrow"', '"1Rnd_Arrow_Wood"') WHERE INSTR(Inventory, '"WoodenArrow"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"WoodenArrow"', '"1Rnd_Arrow_Wood"') WHERE INSTR(Inventory, '"WoodenArrow"') > 0;

UPDATE `Traders_DATA` SET `item` = '["12Rnd_Quiver_Wood",1]' WHERE `item` = '["Quiver",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"Quiver"', '"12Rnd_Quiver_Wood"') WHERE INSTR(Backpack, '"Quiver"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"Quiver"', '"12Rnd_Quiver_Wood"') WHERE INSTR(Inventory, '"Quiver"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"Quiver"', '"12Rnd_Quiver_Wood"') WHERE INSTR(Inventory, '"Quiver"') > 0;

-- ----------------------------
-- Updated CZ550 and Lee-Enfield ammo names from 1.8.7
-- ----------------------------
UPDATE `Traders_DATA` SET `item` = '["5Rnd_17HMR",1]' WHERE `item` = '["5x_22_LR_17_HMR",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"5x_22_LR_17_HMR"', '"5Rnd_17HMR"') WHERE INSTR(Backpack, '"5x_22_LR_17_HMR"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"5x_22_LR_17_HMR"', '"5Rnd_17HMR"') WHERE INSTR(Inventory, '"5x_22_LR_17_HMR"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"5x_22_LR_17_HMR"', '"5Rnd_17HMR"') WHERE INSTR(Inventory, '"5x_22_LR_17_HMR"') > 0;

UPDATE `Traders_DATA` SET `item` = '["10Rnd_303British",1]' WHERE `item` = '["10x_303",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"10x_303"', '"10Rnd_303British"') WHERE INSTR(Backpack, '"10x_303"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"10x_303"', '"10Rnd_303British"') WHERE INSTR(Inventory, '"10x_303"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"10x_303"', '"10Rnd_303British"') WHERE INSTR(Inventory, '"10x_303"') > 0;

-- ----------------------------
-- Updated raw and cooked meat names from 1.8.7
-- ----------------------------
UPDATE `Traders_DATA` SET `item` = '["FoodBeefRaw",1]' WHERE `item` = '["FoodSteakRaw",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"FoodSteakRaw"', '"FoodBeefRaw"') WHERE INSTR(Backpack, '"FoodSteakRaw"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"FoodSteakRaw"', '"FoodBeefRaw"') WHERE INSTR(Inventory, '"FoodSteakRaw"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"FoodSteakRaw"', '"FoodBeefRaw"') WHERE INSTR(Inventory, '"FoodSteakRaw"') > 0;

UPDATE `Traders_DATA` SET `item` = '["FoodBeefCooked",1]' WHERE `item` = '["FoodSteakCooked",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"FoodSteakCooked"', '"FoodBeefCooked"') WHERE INSTR(Backpack, '"FoodSteakCooked"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"FoodSteakCooked"', '"FoodBeefCooked"') WHERE INSTR(Inventory, '"FoodSteakCooked"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"FoodSteakCooked"', '"FoodBeefCooked"') WHERE INSTR(Inventory, '"FoodSteakCooked"') > 0;

UPDATE `Traders_DATA` SET `item` = '["FoodBeefRaw",1]' WHERE `item` = '["FoodMeatRaw",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"FoodMeatRaw"', '"FoodBeefRaw"') WHERE INSTR(Backpack, '"FoodMeatRaw"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"FoodMeatRaw"', '"FoodBeefRaw"') WHERE INSTR(Inventory, '"FoodMeatRaw"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"FoodMeatRaw"', '"FoodBeefRaw"') WHERE INSTR(Inventory, '"FoodMeatRaw"') > 0;

UPDATE `Traders_DATA` SET `item` = '["FoodBeefCooked",1]' WHERE `item` = '["FoodMeatCooked",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"FoodMeatCooked"', '"FoodBeefCooked"') WHERE INSTR(Backpack, '"FoodMeatCooked"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"FoodMeatCooked"', '"FoodBeefCooked"') WHERE INSTR(Inventory, '"FoodMeatCooked"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"FoodMeatCooked"', '"FoodBeefCooked"') WHERE INSTR(Inventory, '"FoodMeatCooked"') > 0;

-- ----------------------------
-- ----------------------------
-- ----------------------------
-- ----------------------------
-- Updated weapon names with attachment support from 1.8.7
-- ----------------------------
-- ----------------------------
-- ----------------------------
-- ----------------------------

UPDATE `Traders_DATA` SET `item` = '["AK74_DZ",3]' WHERE `item` = '["AK_74",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"AK_74"', '"AK74_DZ"') WHERE INSTR(Backpack, '"AK_74"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"AK_74"', '"AK74_DZ"') WHERE INSTR(Inventory, '"AK_74"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"AK_74"', '"AK74_DZ"') WHERE INSTR(Inventory, '"AK_74"') > 0;

UPDATE `Traders_DATA` SET `item` = '["AKM_DZ",3]' WHERE `item` = '["AK_47_M",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"AK_47_M"', '"AKM_DZ"') WHERE INSTR(Backpack, '"AK_47_M"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"AK_47_M"', '"AKM_DZ"') WHERE INSTR(Inventory, '"AK_47_M"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"AK_47_M"', '"AKM_DZ"') WHERE INSTR(Inventory, '"AK_47_M"') > 0;

UPDATE `Traders_DATA` SET `item` = '["AKS74U_DZ",3]' WHERE `item` = '["AKS_74_U",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"AKS_74_U"', '"AKS74U_DZ"') WHERE INSTR(Backpack, '"AKS_74_U"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"AKS_74_U"', '"AKS74U_DZ"') WHERE INSTR(Inventory, '"AKS_74_U"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"AKS_74_U"', '"AKS74U_DZ"') WHERE INSTR(Inventory, '"AKS_74_U"') > 0;

UPDATE `Traders_DATA` SET `item` = '["AK74_Kobra_DZ",3]' WHERE `item` = '["AKS_74_kobra",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"AKS_74_kobra"', '"AK74_Kobra_DZ"') WHERE INSTR(Backpack, '"AKS_74_kobra"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"AKS_74_kobra"', '"AK74_Kobra_DZ"') WHERE INSTR(Inventory, '"AKS_74_kobra"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"AKS_74_kobra"', '"AK74_Kobra_DZ"') WHERE INSTR(Inventory, '"AKS_74_kobra"') > 0;

UPDATE `Traders_DATA` SET `item` = '["Bizon_DZ",3]' WHERE `item` = '["bizon",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"bizon"', '"Bizon_DZ"') WHERE INSTR(Backpack, '"bizon"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"bizon"', '"Bizon_DZ"') WHERE INSTR(Inventory, '"bizon"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"bizon"', '"Bizon_DZ"') WHERE INSTR(Inventory, '"bizon"') > 0;

UPDATE `Traders_DATA` SET `item` = '["Bizon_SD_DZ",3]' WHERE `item` = '["bizon_silenced",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"bizon_silenced"', '"Bizon_SD_DZ"') WHERE INSTR(Backpack, '"bizon_silenced"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"bizon_silenced"', '"Bizon_SD_DZ"') WHERE INSTR(Inventory, '"bizon_silenced"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"bizon_silenced"', '"Bizon_SD_DZ"') WHERE INSTR(Inventory, '"bizon_silenced"') > 0;

UPDATE `Traders_DATA` SET `item` = '["CZ550_DZ",3]' WHERE `item` = '["huntingrifle",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"huntingrifle"', '"CZ550_DZ"') WHERE INSTR(Backpack, '"huntingrifle"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"huntingrifle"', '"CZ550_DZ"') WHERE INSTR(Inventory, '"huntingrifle"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"huntingrifle"', '"CZ550_DZ"') WHERE INSTR(Inventory, '"huntingrifle"') > 0;

UPDATE `Traders_DATA` SET `item` = '["DMR_DZ",3]' WHERE `item` = '["DMR",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"DMR"', '"DMR_DZ"') WHERE INSTR(Backpack, '"DMR"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"DMR"', '"DMR_DZ"') WHERE INSTR(Inventory, '"DMR"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"DMR"', '"DMR_DZ"') WHERE INSTR(Inventory, '"DMR"') > 0;

UPDATE `Traders_DATA` SET `item` = '["FN_FAL_ANPVS4_DZE",3]' WHERE `item` = '["FN_FAL_ANPVS4",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"FN_FAL_ANPVS4"', '"FN_FAL_ANPVS4_DZE"') WHERE INSTR(Backpack, '"FN_FAL_ANPVS4"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"FN_FAL_ANPVS4"', '"FN_FAL_ANPVS4_DZE"') WHERE INSTR(Inventory, '"FN_FAL_ANPVS4"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"FN_FAL_ANPVS4"', '"FN_FAL_ANPVS4_DZE"') WHERE INSTR(Inventory, '"FN_FAL_ANPVS4"') > 0;

UPDATE `Traders_DATA` SET `item` = '["FNFAL_DZ",3]' WHERE `item` = '["FN_FAL",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"FN_FAL"', '"FNFAL_DZ"') WHERE INSTR(Backpack, '"FN_FAL"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"FN_FAL"', '"FNFAL_DZ"') WHERE INSTR(Inventory, '"FN_FAL"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"FN_FAL"', '"FNFAL_DZ"') WHERE INSTR(Inventory, '"FN_FAL"') > 0;

UPDATE `Traders_DATA` SET `item` = '["G17_FL_DZ",3]' WHERE `item` = '["glock17_EP1",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"glock17_EP1"', '"G17_FL_DZ"') WHERE INSTR(Backpack, '"glock17_EP1"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"glock17_EP1"', '"G17_FL_DZ"') WHERE INSTR(Inventory, '"glock17_EP1"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"glock17_EP1"', '"G17_FL_DZ"') WHERE INSTR(Inventory, '"glock17_EP1"') > 0;

UPDATE `Traders_DATA` SET `item` = '["G36A_Camo_DZ",3]' WHERE `item` = '["G36A_camo",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"G36A_camo"', '"G36A_Camo_DZ"') WHERE INSTR(Backpack, '"G36A_camo"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"G36A_camo"', '"G36A_Camo_DZ"') WHERE INSTR(Inventory, '"G36A_camo"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"G36A_camo"', '"G36A_Camo_DZ"') WHERE INSTR(Inventory, '"G36A_camo"') > 0;

UPDATE `Traders_DATA` SET `item` = '["G36C_DZ",3]' WHERE `item` = '["G36C",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"G36C"', '"G36C_DZ"') WHERE INSTR(Backpack, '"G36C"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"G36C"', '"G36C_DZ"') WHERE INSTR(Inventory, '"G36C"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"G36C"', '"G36C_DZ"') WHERE INSTR(Inventory, '"G36C"') > 0;

UPDATE `Traders_DATA` SET `item` = '["G36K_Camo_DZ",3]' WHERE `item` = '["G36K_camo",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"G36K_camo"', '"G36K_Camo_DZ"') WHERE INSTR(Backpack, '"G36K_camo"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"G36K_camo"', '"G36K_Camo_DZ"') WHERE INSTR(Inventory, '"G36K_camo"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"G36K_camo"', '"G36K_Camo_DZ"') WHERE INSTR(Inventory, '"G36K_camo"') > 0;

UPDATE `Traders_DATA` SET `item` = '["L85_Holo_DZ",3]' WHERE `item` = '["BAF_L85A2_RIS_Holo",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"BAF_L85A2_RIS_Holo"', '"L85_Holo_DZ"') WHERE INSTR(Backpack, '"BAF_L85A2_RIS_Holo"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"BAF_L85A2_RIS_Holo"', '"L85_Holo_DZ"') WHERE INSTR(Inventory, '"BAF_L85A2_RIS_Holo"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"BAF_L85A2_RIS_Holo"', '"L85_Holo_DZ"') WHERE INSTR(Inventory, '"BAF_L85A2_RIS_Holo"') > 0;

UPDATE `Traders_DATA` SET `item` = '["LeeEnfield_DZ",3]' WHERE `item` = '["LeeEnfield",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"LeeEnfield"', '"LeeEnfield_DZ"') WHERE INSTR(Backpack, '"LeeEnfield"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"LeeEnfield"', '"LeeEnfield_DZ"') WHERE INSTR(Inventory, '"LeeEnfield"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"LeeEnfield"', '"LeeEnfield_DZ"') WHERE INSTR(Inventory, '"LeeEnfield"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M1014_DZ",3]' WHERE `item` = '["M1014",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M1014"', '"M1014_DZ"') WHERE INSTR(Backpack, '"M1014"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M1014"', '"M1014_DZ"') WHERE INSTR(Inventory, '"M1014"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M1014"', '"M1014_DZ"') WHERE INSTR(Inventory, '"M1014"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M14_CCO_DZ",3]' WHERE `item` = '["M14_EP1",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M14_EP1"', '"M14_CCO_DZ"') WHERE INSTR(Backpack, '"M14_EP1"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M14_EP1"', '"M14_CCO_DZ"') WHERE INSTR(Inventory, '"M14_EP1"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M14_EP1"', '"M14_CCO_DZ"') WHERE INSTR(Inventory, '"M14_EP1"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M16A2_DZ",3]' WHERE `item` = '["M16A2",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M16A2"', '"M16A2_DZ"') WHERE INSTR(Backpack, '"M16A2"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M16A2"', '"M16A2_DZ"') WHERE INSTR(Inventory, '"M16A2"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M16A2"', '"M16A2_DZ"') WHERE INSTR(Inventory, '"M16A2"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M16A2_GL_DZ",3]' WHERE `item` = '["M16A2GL",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M16A2GL"', '"M16A2_GL_DZ"') WHERE INSTR(Backpack, '"M16A2GL"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M16A2GL"', '"M16A2_GL_DZ"') WHERE INSTR(Inventory, '"M16A2GL"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M16A2GL"', '"M16A2_GL_DZ"') WHERE INSTR(Inventory, '"M16A2GL"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M16A4_ACOG_DZ",3]' WHERE `item` = '["M16A4_ACG",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M16A4_ACG"', '"M16A4_ACOG_DZ"') WHERE INSTR(Backpack, '"M16A4_ACG"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M16A4_ACG"', '"M16A4_ACOG_DZ"') WHERE INSTR(Inventory, '"M16A4_ACG"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M16A4_ACG"', '"M16A4_ACOG_DZ"') WHERE INSTR(Inventory, '"M16A4_ACG"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M1911_DZ",3]' WHERE `item` = '["Colt1911",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"Colt1911"', '"M1911_DZ"') WHERE INSTR(Backpack, '"Colt1911"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"Colt1911"', '"M1911_DZ"') WHERE INSTR(Inventory, '"Colt1911"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"Colt1911"', '"M1911_DZ"') WHERE INSTR(Inventory, '"Colt1911"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M24_DZ",3]' WHERE `item` = '["M24",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M24"', '"M24_DZ"') WHERE INSTR(Backpack, '"M24"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M24"', '"M24_DZ"') WHERE INSTR(Inventory, '"M24"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M24"', '"M24_DZ"') WHERE INSTR(Inventory, '"M24"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M249_DZ",3]' WHERE `item` = '["M249_EP1_DZ",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M249_EP1_DZ"', '"M249_DZ"') WHERE INSTR(Backpack, '"M249_EP1_DZ"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M249_EP1_DZ"', '"M249_DZ"') WHERE INSTR(Inventory, '"M249_EP1_DZ"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M249_EP1_DZ"', '"M249_DZ"') WHERE INSTR(Inventory, '"M249_EP1_DZ"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M40A3_Gh_DZ",3]' WHERE `item` = '["M40A3",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M40A3"', '"M40A3_Gh_DZ"') WHERE INSTR(Backpack, '"M40A3"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M40A3"', '"M40A3_Gh_DZ"') WHERE INSTR(Inventory, '"M40A3"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M40A3"', '"M40A3_Gh_DZ"') WHERE INSTR(Inventory, '"M40A3"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M4A1_CCO_DZ",3]' WHERE `item` = '["M4A1_Aim",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M4A1_Aim"', '"M4A1_CCO_DZ"') WHERE INSTR(Backpack, '"M4A1_Aim"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M4A1_Aim"', '"M4A1_CCO_DZ"') WHERE INSTR(Inventory, '"M4A1_Aim"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M4A1_Aim"', '"M4A1_CCO_DZ"') WHERE INSTR(Inventory, '"M4A1_Aim"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M4A1_DZ",3]' WHERE `item` = '["M4A1",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M4A1"', '"M4A1_DZ"') WHERE INSTR(Backpack, '"M4A1"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M4A1"', '"M4A1_DZ"') WHERE INSTR(Inventory, '"M4A1"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M4A1"', '"M4A1_DZ"') WHERE INSTR(Inventory, '"M4A1"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M9_DZ",3]' WHERE `item` = '["M9",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M9"', '"M9_DZ"') WHERE INSTR(Backpack, '"M9"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M9"', '"M9_DZ"') WHERE INSTR(Inventory, '"M9"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M9"', '"M9_DZ"') WHERE INSTR(Inventory, '"M9"') > 0;

UPDATE `Traders_DATA` SET `item` = '["M9_SD_DZ",3]' WHERE `item` = '["M9SD",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"M9SD"', '"M9_SD_DZ"') WHERE INSTR(Backpack, '"M9SD"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"M9SD"', '"M9_SD_DZ"') WHERE INSTR(Inventory, '"M9SD"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"M9SD"', '"M9_SD_DZ"') WHERE INSTR(Inventory, '"M9SD"') > 0;

UPDATE `Traders_DATA` SET `item` = '["Makarov_DZ",3]' WHERE `item` = '["Makarov",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"Makarov"', '"Makarov_DZ"') WHERE INSTR(Backpack, '"Makarov"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"Makarov"', '"Makarov_DZ"') WHERE INSTR(Inventory, '"Makarov"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"Makarov"', '"Makarov_DZ"') WHERE INSTR(Inventory, '"Makarov"') > 0;

UPDATE `Traders_DATA` SET `item` = '["Makarov_SD_DZ",3]' WHERE `item` = '["MakarovSD",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"MakarovSD"', '"Makarov_SD_DZ"') WHERE INSTR(Backpack, '"MakarovSD"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"MakarovSD"', '"Makarov_SD_DZ"') WHERE INSTR(Inventory, '"MakarovSD"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"MakarovSD"', '"Makarov_SD_DZ"') WHERE INSTR(Inventory, '"MakarovSD"') > 0;

UPDATE `Traders_DATA` SET `item` = '["Mk48_CCO_DZ",3]' WHERE `item` = '["Mk_48_DZ",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"Mk_48_DZ"', '"Mk48_CCO_DZ"') WHERE INSTR(Backpack, '"Mk_48_DZ"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"Mk_48_DZ"', '"Mk48_CCO_DZ"') WHERE INSTR(Inventory, '"Mk_48_DZ"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"Mk_48_DZ"', '"Mk48_CCO_DZ"') WHERE INSTR(Inventory, '"Mk_48_DZ"') > 0;

UPDATE `Traders_DATA` SET `item` = '["MP5_DZ",3]' WHERE `item` = '["MP5A5",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"MP5A5"', '"MP5_DZ"') WHERE INSTR(Backpack, '"MP5A5"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"MP5A5"', '"MP5_DZ"') WHERE INSTR(Inventory, '"MP5A5"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"MP5A5"', '"MP5_DZ"') WHERE INSTR(Inventory, '"MP5A5"') > 0;

UPDATE `Traders_DATA` SET `item` = '["MP5_SD_DZ",3]' WHERE `item` = '["MP5SD",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"MP5SD"', '"MP5_SD_DZ"') WHERE INSTR(Backpack, '"MP5SD"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"MP5SD"', '"MP5_SD_DZ"') WHERE INSTR(Inventory, '"MP5SD"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"MP5SD"', '"MP5_SD_DZ"') WHERE INSTR(Inventory, '"MP5SD"') > 0;

UPDATE `Traders_DATA` SET `item` = '["MR43_DZ",3]' WHERE `item` = '["MR43",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"MR43"', '"MR43_DZ"') WHERE INSTR(Backpack, '"MR43"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"MR43"', '"MR43_DZ"') WHERE INSTR(Inventory, '"MR43"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"MR43"', '"MR43_DZ"') WHERE INSTR(Inventory, '"MR43"') > 0;

UPDATE `Traders_DATA` SET `item` = '["PDW_DZ",3]' WHERE `item` = '["UZI_EP1",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"UZI_EP1"', '"PDW_DZ"') WHERE INSTR(Backpack, '"UZI_EP1"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"UZI_EP1"', '"PDW_DZ"') WHERE INSTR(Inventory, '"UZI_EP1"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"UZI_EP1"', '"PDW_DZ"') WHERE INSTR(Inventory, '"UZI_EP1"') > 0;

UPDATE `Traders_DATA` SET `item` = '["PKM_DZ",3]' WHERE `item` = '["PK_DZ",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"PK_DZ"', '"PKM_DZ"') WHERE INSTR(Backpack, '"PK_DZ"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"PK_DZ"', '"PKM_DZ"') WHERE INSTR(Inventory, '"PK_DZ"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"PK_DZ"', '"PKM_DZ"') WHERE INSTR(Inventory, '"PK_DZ"') > 0;

UPDATE `Traders_DATA` SET `item` = '["Remington870_FL_DZ",3]' WHERE `item` = '["Remington870_lamp",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"Remington870_lamp"', '"Remington870_FL_DZ"') WHERE INSTR(Backpack, '"Remington870_lamp"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"Remington870_lamp"', '"Remington870_FL_DZ"') WHERE INSTR(Inventory, '"Remington870_lamp"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"Remington870_lamp"', '"Remington870_FL_DZ"') WHERE INSTR(Inventory, '"Remington870_lamp"') > 0;

UPDATE `Traders_DATA` SET `item` = '["Revolver_DZ",3]' WHERE `item` = '["revolver_EP1",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"revolver_EP1"', '"Revolver_DZ"') WHERE INSTR(Backpack, '"revolver_EP1"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"revolver_EP1"', '"Revolver_DZ"') WHERE INSTR(Inventory, '"revolver_EP1"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"revolver_EP1"', '"Revolver_DZ"') WHERE INSTR(Inventory, '"revolver_EP1"') > 0;

UPDATE `Traders_DATA` SET `item` = '["RPK74_DZ",3]' WHERE `item` = '["RPK_74",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"RPK_74"', '"RPK74_DZ"') WHERE INSTR(Backpack, '"RPK_74"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"RPK_74"', '"RPK74_DZ"') WHERE INSTR(Inventory, '"RPK_74"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"RPK_74"', '"RPK74_DZ"') WHERE INSTR(Inventory, '"RPK_74"') > 0;

UPDATE `Traders_DATA` SET `item` = '["SA58_DZ",3]' WHERE `item` = '["Sa58P_EP1",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"Sa58P_EP1"', '"SA58_DZ"') WHERE INSTR(Backpack, '"Sa58P_EP1"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"Sa58P_EP1"', '"SA58_DZ"') WHERE INSTR(Inventory, '"Sa58P_EP1"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"Sa58P_EP1"', '"SA58_DZ"') WHERE INSTR(Inventory, '"Sa58P_EP1"') > 0;

delete from `Traders_DATA` WHERE `item` = '["Sa58V_EP1",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"Sa58V_EP1"', '"SA58_DZ"') WHERE INSTR(Backpack, '"Sa58V_EP1"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"Sa58V_EP1"', '"SA58_DZ"') WHERE INSTR(Inventory, '"Sa58V_EP1"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"Sa58V_EP1"', '"SA58_DZ"') WHERE INSTR(Inventory, '"Sa58V_EP1"') > 0;

UPDATE `Traders_DATA` SET `item` = '["SVD_DZ",3]' WHERE `item` = '["SVD",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"SVD"', '"SVD_DZ"') WHERE INSTR(Backpack, '"SVD"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"SVD"', '"SVD_DZ"') WHERE INSTR(Inventory, '"SVD"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"SVD"', '"SVD_DZ"') WHERE INSTR(Inventory, '"SVD"') > 0;

UPDATE `Traders_DATA` SET `item` = '["SVD_Gh_DZ",3]' WHERE `item` = '["SVD_CAMO",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"SVD_CAMO"', '"SVD_Gh_DZ"') WHERE INSTR(Backpack, '"SVD_CAMO"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"SVD_CAMO"', '"SVD_Gh_DZ"') WHERE INSTR(Inventory, '"SVD_CAMO"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"SVD_CAMO"', '"SVD_Gh_DZ"') WHERE INSTR(Inventory, '"SVD_CAMO"') > 0;

UPDATE `Traders_DATA` SET `item` = '["Winchester1866_DZ",3]' WHERE `item` = '["Winchester1866",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"Winchester1866"', '"Winchester1866_DZ"') WHERE INSTR(Backpack, '"Winchester1866"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"Winchester1866"', '"Winchester1866_DZ"') WHERE INSTR(Inventory, '"Winchester1866"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"Winchester1866"', '"Winchester1866_DZ"') WHERE INSTR(Inventory, '"Winchester1866"') > 0;

-- ----------------------------
-- Fix M24 and DMR ammo prices so a profit can not be made by combining M24 rounds
-- ----------------------------
DELETE FROM `Traders_DATA` WHERE item = '["20Rnd_762x51_DMR"]';
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["20Rnd_762x51_DMR",1]', 10, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 482, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["20Rnd_762x51_DMR",1]', 10, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 614, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["20Rnd_762x51_DMR",1]', 10, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 624, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["20Rnd_762x51_DMR",1]', 10, '[8,"ItemGoldBar",1]', '[4,"ItemGoldBar",1]', 0, 647, 'trade_items');
DELETE FROM `Traders_DATA` WHERE item = '["5Rnd_762x51_M24"]';
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["5Rnd_762x51_M24",1]', 10, '[2,"ItemGoldBar",1]', '[1,"ItemGoldBar",1]', 0, 482, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["5Rnd_762x51_M24",1]', 10, '[2,"ItemGoldBar",1]', '[1,"ItemGoldBar",1]', 0, 527, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["5Rnd_762x51_M24",1]', 10, '[2,"ItemGoldBar",1]', '[1,"ItemGoldBar",1]', 0, 614, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["5Rnd_762x51_M24",1]', 10, '[2,"ItemGoldBar",1]', '[1,"ItemGoldBar",1]', 0, 624, 'trade_items');
INSERT IGNORE INTO `Traders_DATA` VALUES (NULL, '["5Rnd_762x51_M24",1]', 10, '[2,"ItemGoldBar",1]', '[1,"ItemGoldBar",1]', 0, 647, 'trade_items');


-- ----------------------------
-- Uncomment the below queries to update new columns if you previously used a custom single currency hive with a banking_Data table
-- ----------------------------
/*
UPDATE player_data t1, banking_data t2
SET t1.`PlayerCoins` = t2.BankSaldo,
WHERE t1.PlayerUID = t2.PlayerUID
*/

-- ----------------------------
-- Run to replace legacy bloodbag with universal type if using dayz_classicBloodBagSystem = false;
-- ----------------------------
/*
UPDATE `Traders_DATA` SET `item` = '["bloodBagONEG",1]' WHERE `item` = '["ItemBloodbag",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, 'ItemBloodbag', 'bloodBagONEG') WHERE INSTR(Backpack, 'ItemBloodbag') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, 'ItemBloodbag', 'bloodBagONEG') WHERE INSTR(Inventory, 'ItemBloodbag') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, 'ItemBloodbag', 'bloodBagONEG') WHERE INSTR(Inventory, 'ItemBloodbag') > 0;
*/

-- ----------------------------
-- Run to update to v1.0.5 of Precise Base Building by @Mikeeeyy only if you had v1.0.4 installed
-- ----------------------------
/*
DELIMITER ;;
CREATE FUNCTION `RemoveQuotes`(`ws` VARCHAR(128))
       RETURNS VARCHAR(128)
       DETERMINISTIC
BEGIN
       DECLARE dir VARCHAR(128);
       DECLARE pos VARCHAR(128);
      
       IF SUBSTRING_INDEX(ws, '"', 4) = ws THEN
               RETURN ws;
       END IF;
      
       SET dir = TRIM(LEADING '["' FROM SUBSTRING_INDEX(ws, '"', 2));
       SET pos = TRIM(LEADING CONCAT('["', dir, '","') FROM SUBSTRING_INDEX(ws, '"', 4));
      
       SET ws = REPLACE(ws, CONCAT('"', dir, '"'), dir);
       SET ws = REPLACE(ws, CONCAT('"', pos, '"'), pos);
      
       RETURN ws;
END;;
DELIMITER ;

UPDATE object_data SET Worldspace = RemoveQuotes(Worldspace);
DROP FUNCTION `RemoveQuotes`;
*/

-- ----------------------------
-- Run to update existing inventory coins in object_data to the new coin DB format in the 1.0.6 HiveExt - by @ndavalos
-- ----------------------------
/*
update object_data t1,
(
SELECT objectid,
Cast(CASE WHEN Substring_index(inventory, ']', -2) = ']' THEN 0 WHEN
Locate('e',REPLACE(REPLACE(REPLACE(Substring_index(inventory, ']', -2), ']', ''),'[', ''),',', '')) > 0 THEN 
    Cast(LEFT(REPLACE(REPLACE(REPLACE(Substring_index(inventory,']', -2), ']', ''), '[', ''), ',', ''), 
    Length(REPLACE(REPLACE(REPLACE(Substring_index(inventory, ']', -2), ']', ''), '[', ''), ',', '')) - 
    Locate('e',Reverse(REPLACE(REPLACE(REPLACE(Substring_index(inventory, ']', -2), ']',''),'[', ''), ',', '')))) AS DECIMAL(11, 2)) * 
    Pow(10, Cast(Substring_index(REPLACE( REPLACE(REPLACE(Substring_index(inventory, ']', -2), ']', ''), '[', ''), ',','' ), 'e', -1) AS UNSIGNED)) 
ELSE Cast(REPLACE(REPLACE(REPLACE(Substring_index(inventory, ']', -2), ']', ''), '[', ''), ',', '') AS UNSIGNED INTEGER)
end AS UNSIGNED) AS thedata
FROM object_data
where inventory <> '[]' 
and inventory <> '[[[],[]],[[],[]],[[],[]]]'
and classname not like '%plastic%' and classname not like '%door%' 
) t2
set t1.StorageCoins = t2.thedata
WHERE t1.objectid = t2.objectid;

update object_data set inventory = concat(LEFT(inventory, LENGTH(inventory) - LOCATE(',', REVERSE(inventory))),']') 
where inventory <> '[]' 
and inventory <> '[[[],[]],[[],[]],[[],[]]]'
and inventory not like '%]]]'
and classname not like '%plastic%' and classname not like '%door%';

update object_Data set inventory = '[[[],[]],[[],[]],[[],[]]]'
where inventory = '[[[],[]],[[],[]],[[],[]],0]';

SELECT * FROM epoch.object_data WHERE Inventory REGEXP '\]\]\,\[0-9]+\]';
*/

-- ----------------------------
-- The above select query returns objects not properly updated, you will need to update them manually by removing the last number in the inventory array and the preceding comma (see below for example)
-- [[[],[]],[["ItemHotwireKit","ItemLockbox"],[28,14]],[["DZ_TerminalPack_EP1","DZ_TK_Assault_Pack_EP1","DZ_CompactPack_EP1","DZ_LargeGunBag_EP1"],[1,1,1,1]],0]
-- BECOMES
-- [[[],[]],[["ItemHotwireKit","ItemLockbox"],[28,14]],[["DZ_TerminalPack_EP1","DZ_TK_Assault_Pack_EP1","DZ_CompactPack_EP1","DZ_LargeGunBag_EP1"],[1,1,1,1]]]
-- ----------------------------