/*
	DayZ Epoch 1.0.6.1 Updates
	
	RUN THIS FILE IF UPDATING AN EXISTING 106 DATABASE TO 1061.
	NEW DATABASES SHOULD USE EPOCH.SQL INSTEAD.
	EXISTING 1051 DATABASES SHOULD RUN 1.0.6_UPDATES.SQL FIRST, THEN RUN THIS FILE.
*/

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
-- Add military flashlight attachments to DB traders
-- ----------------------------
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_MFL",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');
INSERT INTO `Traders_DATA` VALUES(null, '["Attachment_MFL_Pist",1]', 10, '[4,"ItemGoldBar",1]', '[2,"ItemGoldBar",1]', 0, 693, 'trade_items');