-- ----------------------------
-- Set any buy value of copper to 2 silver
-- ----------------------------
UPDATE `Traders_DATA` SET `buy`= '[4,"ItemSilverBar10oz",1]' WHERE `buy`='[2,"ItemCopperBar10oz",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar10oz",1]' WHERE `buy`='[1,"ItemCopperBar10oz",1]';
UPDATE `Traders_DATA` SET `buy`= '[9,"ItemSilverBar",1]' WHERE `buy`='[9,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[8,"ItemSilverBar",1]' WHERE `buy`='[8,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[7,"ItemSilverBar",1]' WHERE `buy`='[7,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[6,"ItemSilverBar",1]' WHERE `buy`='[6,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[5,"ItemSilverBar",1]' WHERE `buy`='[5,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[4,"ItemSilverBar",1]' WHERE `buy`='[4,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[3,"ItemSilverBar",1]' WHERE `buy`='[3,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[2,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `buy`= '[2,"ItemSilverBar",1]' WHERE `buy`='[1,"ItemCopperBar",1]';

-- ----------------------------
-- Set any sell value of copper to 1 silver only run if not updating
-- ----------------------------
UPDATE `Traders_DATA` SET `sell`= '[2,"ItemSilverBar10oz",1]' WHERE `sell`='[2,"ItemCopperBar10oz",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar10oz",1]' WHERE `sell`='[1,"ItemCopperBar10oz",1]';
UPDATE `Traders_DATA` SET `sell`= '[9,"ItemSilverBar",1]' WHERE `sell`='[9,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[8,"ItemSilverBar",1]' WHERE `sell`='[8,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[7,"ItemSilverBar",1]' WHERE `sell`='[7,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[6,"ItemSilverBar",1]' WHERE `sell`='[6,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[5,"ItemSilverBar",1]' WHERE `sell`='[5,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[4,"ItemSilverBar",1]' WHERE `sell`='[4,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[3,"ItemSilverBar",1]' WHERE `sell`='[3,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[2,"ItemSilverBar",1]' WHERE `sell`='[2,"ItemCopperBar",1]';
UPDATE `Traders_DATA` SET `sell`= '[1,"ItemSilverBar",1]' WHERE `sell`='[1,"ItemCopperBar",1]';

-- ----------------------------
-- WEAPON UPDATE
-- ----------------------------
UPDATE `Traders_DATA` SET `item`= '["M249_EP1_DZ",3]' WHERE `item`='["M249_DZ",3]';
UPDATE `Character_DATA` SET `Inventory` = REPLACE(`Inventory`, '"M249_DZ"', '"M249_EP1_DZ"') WHERE `Inventory` LIKE '%"M249_DZ"%';
UPDATE `Character_DATA` SET `Backpack` = REPLACE(`Backpack`, '"M249_DZ"', '"M249_EP1_DZ"') WHERE `Backpack` LIKE '%"M249_DZ"%';
UPDATE `Character_DATA` SET `CurrentState` = '["","",42,[]]' WHERE `CurrentState` LIKE '%"M249_DZ"%';
UPDATE `Object_DATA` SET `Inventory` = REPLACE(`Inventory`, '"M249_DZ"', '"M249_EP1_DZ"') WHERE `Inventory` LIKE '%"M249_DZ"%';
