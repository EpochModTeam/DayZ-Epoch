UPDATE character_data SET Backpack = REPLACE(Backpack, '"Skin_gsc_cloth_loner_head_DZ"', '"Skin_Survivor2_DZ"') WHERE INSTR(Backpack, '"Skin_gsc_cloth_loner_head_DZ"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"Skin_gsc_cloth_loner_head_DZ"', '"Skin_Survivor2_DZ"') WHERE INSTR(Inventory, '"Skin_gsc_cloth_loner_head_DZ"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"Skin_gsc_cloth_loner_head_DZ"', '"Skin_Survivor2_DZ"') WHERE INSTR(Inventory, '"Skin_gsc_cloth_loner_head_DZ"') > 0;
UPDATE character_data SET Model = "Survivor2_DZ" WHERE Model = "gsc_cloth_loner_head_DZ";

CREATE TABLE IF NOT EXISTS `garage` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `PlayerUID` varchar(20) NOT NULL DEFAULT '0',
  `Name` varchar(50) NOT NULL DEFAULT '',
  `DisplayName` varchar(50) NOT NULL DEFAULT '',
  `Classname` varchar(50) DEFAULT NULL,
  `Datestamp` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  `DateStored` varchar(10) NOT NULL DEFAULT 'old',
  `DateMaintained` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `CharacterID` bigint(20) unsigned NOT NULL DEFAULT '0',
  `StorageCounts` varchar(30) NOT NULL DEFAULT '[0,0,0]',
  `Inventory` mediumtext,
  `Hitpoints` mediumtext,
  `Fuel` double(13,5) NOT NULL DEFAULT '1.00000',
  `Damage` double(13,5) NOT NULL DEFAULT '0.00000',
  `Colour` varchar(50) NOT NULL,
  `Colour2` varchar(50) NOT NULL,
  `serverKey` varchar(10) NOT NULL DEFAULT 'old',
  `ObjUID` varchar(20) NOT NULL DEFAULT 'old',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=utf8;