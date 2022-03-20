/*
	DayZ Epoch 1.0.7.1
	
	ONLY RUN THIS FILE IF CREATING A NEW DATABASE.
	EXISTING 1.0.7 DATABASES SHOULD USE update epoch 1.0.7 to 1.0.7.1.sql INSTEAD.
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `character_data`
-- ----------------------------

CREATE TABLE IF NOT EXISTS `Character_DATA` (
  `CharacterID` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `PlayerUID` varchar(20) NOT NULL DEFAULT '0',
  `InstanceID` int(11) NOT NULL DEFAULT '0',
  `Datestamp` datetime DEFAULT NULL,
  `LastLogin` datetime NOT NULL,
  `Inventory` longtext,
  `Backpack` longtext,
  `Worldspace` varchar(128) NOT NULL DEFAULT '[]',
  `Medical` varchar(300) NOT NULL DEFAULT '[]',
  `Alive` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `Generation` int(11) unsigned NOT NULL DEFAULT '1',
  `LastAte` datetime NOT NULL,
  `LastDrank` datetime NOT NULL,
  `KillsZ` int(11) unsigned NOT NULL DEFAULT '0',
  `HeadshotsZ` int(11) unsigned NOT NULL DEFAULT '0',
  `DistanceFoot` int(11) NOT NULL DEFAULT '0',
  `Duration` int(11) NOT NULL DEFAULT '0',
  `CurrentState` varchar(200) NOT NULL DEFAULT '[]',
  `KillsH` int(11) unsigned NOT NULL DEFAULT '0',
  `Model` varchar(50) NOT NULL DEFAULT '"Survivor2_DZ"',
  `KillsB` int(11) unsigned NOT NULL DEFAULT '0',
  `Humanity` int(11) NOT NULL DEFAULT '2500',
  `Infected` tinyint(3) DEFAULT '0',
  `Coins` bigint(20) NOT NULL DEFAULT '0',
  PRIMARY KEY (`CharacterID`),
  KEY `PlayerUID` (`PlayerUID`) USING BTREE,
  KEY `Alive` (`Alive`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of character_data
-- ----------------------------

-- ----------------------------
-- Table structure for `object_data`
-- ----------------------------
CREATE TABLE IF NOT EXISTS `Object_DATA` (
  `ObjectID` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `ObjectUID` bigint(24) NOT NULL DEFAULT '0',
  `Instance` int(11) unsigned NOT NULL,
  `Classname` varchar(50) DEFAULT NULL,
  `Datestamp` datetime NOT NULL,
  `LastUpdated` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `CharacterID` bigint(20) unsigned NOT NULL DEFAULT '0',
  `Worldspace` varchar(128) NOT NULL DEFAULT '[]',
  `Inventory` longtext,
  `Hitpoints` varchar(1024) NOT NULL DEFAULT '[]',
  `Fuel` double(13,5) NOT NULL DEFAULT '1.00000',
  `Damage` double(13,5) NOT NULL DEFAULT '0.00000',
  `StorageCoins` bigint(20) NOT NULL DEFAULT '0',
  PRIMARY KEY (`ObjectID`),
  KEY `ObjectUID` (`ObjectUID`) USING BTREE,
  KEY `Instance` (`Instance`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of object_data
-- ----------------------------

-- ----------------------------
-- Table structure for `player_data`
-- ----------------------------

CREATE TABLE IF NOT EXISTS `Player_DATA` (
  `PlayerUID` varchar(20) NOT NULL DEFAULT '0',
  `PlayerName` varchar(128) CHARACTER SET utf8 NOT NULL DEFAULT 'Null',
  `PlayerMorality` int(11) NOT NULL DEFAULT '0',
  `PlayerSex` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `playerGroup` varchar(2048) NOT NULL DEFAULT '[]',
  `PlayerCoins` bigint(20) NOT NULL DEFAULT '0',
  `BankCoins` bigint(20) NOT NULL DEFAULT '0',
  PRIMARY KEY (`PlayerUID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of player_data
-- ----------------------------

-- ----------------------------
-- Table structure for `player_login`
-- ----------------------------

CREATE TABLE IF NOT EXISTS `Player_LOGIN` (
  `LoginID` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `PlayerUID` varchar(20) NOT NULL,
  `CharacterID` int(11) unsigned NOT NULL DEFAULT '0',
  `Datestamp` datetime NOT NULL,
  `Action` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`LoginID`)
) ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of player_login
-- ----------------------------

-- ----------------------------
-- Table structure for `garage`
-- ----------------------------

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

-- ----------------------------
-- Records of garage
-- ----------------------------

/*
THIS PROCEDURE IS REQUIRED FOR 1071 AND RETURNS THE OBJECT ID MUCH MORE EFFICENTLY THAN THE METHOD IN 1061 SQF
*/
DROP procedure IF EXISTS `retObjID`;

DELIMITER $$
CREATE PROCEDURE `retObjID`(
    IN objTableName VARCHAR(256),
    IN SID INT(11),
    IN UID bigint(24),
    OUT OID INT(11)unsigned
)
BEGIN
 DECLARE x INT;
 declare sqlstr VARCHAR(256);
 
 SET @OID = 0;
 SET @x = 1;
 SET @sqlstr = CONCAT('SELECT `ObjectID` from `', objTableName ,'` where `Instance` = ', SID ,' AND `ObjectUID` = ', UID ,' INTO @OID');
 PREPARE stmt FROM @sqlstr;

 WHILE (@x <= 5) DO
  EXECUTE stmt;
  IF (@OID > 0) then 
   SET @x = 6;
  else
   SET  @x = @x + 1;
   DO sleep(0.1);
  END IF;
 END WHILE;
 DEALLOCATE PREPARE stmt;
 SET OID = @OID;
 SELECT @OID;
END;$$

DELIMITER ;