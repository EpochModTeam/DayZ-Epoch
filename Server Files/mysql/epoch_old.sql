/*
Navicat MySQL Data Transfer

Source Server         : SANC
Source Server Version : 50516
Source Host           : localhost:3366
Source Database       : dump_only

Target Server Type    : MYSQL
Target Server Version : 50516
File Encoding         : 65001

Date: 2013-01-21 11:24:16
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `character_data`
-- ----------------------------
DROP TABLE IF EXISTS `character_data`;
CREATE TABLE `character_data` (
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
  PRIMARY KEY (`CharacterID`),
  KEY `PlayerUID` (`PlayerUID`) USING BTREE,
  KEY `Alive` (`Alive`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=81 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of character_data
-- ----------------------------

-- ----------------------------
-- Table structure for `object_data`
-- ----------------------------
DROP TABLE IF EXISTS `object_data`;
CREATE TABLE `object_data` (
  `ObjectID` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `ObjectUID` bigint(20) NOT NULL DEFAULT '0',
  `Instance` int(11) unsigned NOT NULL,
  `Classname` varchar(50) DEFAULT NULL,
  `Datestamp` datetime NOT NULL,
  `CharacterID` int(11) unsigned NOT NULL DEFAULT '0',
  `Worldspace` varchar(128) NOT NULL DEFAULT '[]',
  `Inventory` longtext,
  `Hitpoints` varchar(512) NOT NULL DEFAULT '[]',
  `Fuel` double(13,5) NOT NULL DEFAULT '1.00000',
  `Damage` double(13,5) NOT NULL DEFAULT '0.00000',
  PRIMARY KEY (`ObjectID`),
  KEY `ObjectUID` (`ObjectUID`) USING BTREE,
  KEY `Instance` (`Instance`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=1188 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of object_data
-- ----------------------------

-- ----------------------------
-- Table structure for `player_data`
-- ----------------------------
DROP TABLE IF EXISTS `player_data`;
CREATE TABLE `player_data` (
  `PlayerUID` varchar(20) NOT NULL DEFAULT '0',
  `PlayerName` varchar(128) CHARACTER SET utf8 NOT NULL DEFAULT 'Null',
  `PlayerMorality` int(11) NOT NULL DEFAULT '0',
  `PlayerSex` tinyint(3) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`PlayerUID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of player_data
-- ----------------------------

-- ----------------------------
-- Table structure for `player_login`
-- ----------------------------
DROP TABLE IF EXISTS `player_login`;
CREATE TABLE `player_login` (
  `LoginID` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `PlayerUID` varchar(20) NOT NULL,
  `CharacterID` int(11) unsigned NOT NULL DEFAULT '0',
  `Datestamp` datetime NOT NULL,
  `Action` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`LoginID`)
) ENGINE=InnoDB AUTO_INCREMENT=1559 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of player_login
-- ----------------------------

-- ----------------------------
-- Table structure for `traders_data`
-- ----------------------------
DROP TABLE IF EXISTS `traders_data`;
CREATE TABLE `traders_data` (
  `id` int(8) NOT NULL AUTO_INCREMENT,
  `item` varchar(255) NOT NULL COMMENT '[Class Name,1 = CfgMagazines | 2 = Vehicle | 3 = Weapon]',
  `qty` int(8) NOT NULL COMMENT 'amount in stock available to buy',
  `buy` varchar(255) NOT NULL COMMENT '[[Qty,Class,Type],]',
  `sell` varchar(255) NOT NULL COMMENT '[[Qty,Class,Type],]',
  `order` int(2) NOT NULL DEFAULT '0' COMMENT '# sort order for addAction menu',
  `tid` int(8) NOT NULL COMMENT 'Trader Menu ID',
  `afile` varchar(64) NOT NULL DEFAULT 'trade_items',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=515 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of traders_data
-- ----------------------------
INSERT INTO `traders_data` VALUES ('1', '[\"10x_303\",1]', '25', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '2', 'trade_items');
INSERT INTO `traders_data` VALUES ('2', '[\"30rnd_9x19_MP5\",1]', '14', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '5', 'trade_items');
INSERT INTO `traders_data` VALUES ('4', '[\"PartEngine\",1]', '11', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '21', 'trade_items');
INSERT INTO `traders_data` VALUES ('11', '[\"PartWheel\",1]', '16', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '21', 'trade_items');
INSERT INTO `traders_data` VALUES ('12', '[\"PartVRotor\",1]', '21', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '21', 'trade_items');
INSERT INTO `traders_data` VALUES ('13', '[\"ItemJerrycan\",1]', '16', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '21', 'trade_items');
INSERT INTO `traders_data` VALUES ('14', '[\"PartFueltank\",1]', '18', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '21', 'trade_items');
INSERT INTO `traders_data` VALUES ('15', '[\"PartGeneric\",1]', '24', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '21', 'trade_items');
INSERT INTO `traders_data` VALUES ('16', '[\"PartGlass\",1]', '17', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '21', 'trade_items');
INSERT INTO `traders_data` VALUES ('17', '[\"CZ_VestPouch_EP1\",2]', '10', '[4,\"ItemCopperBar\",1]', '[2,\"ItemCopperBar\",1]', '0', '52', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('18', '[\"DZ_CivilBackpack_EP1\",2]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '52', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('19', '[\"DZ_ALICE_Pack_EP1\",2]', '9', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '52', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('20', '[\"DZ_Assault_Pack_EP1\",2]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '52', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('21', '[\"DZ_Patrol_Pack_EP1\",2]', '13', '[4,\"ItemCopperBar\",1]', '[2,\"ItemCopperBar\",1]', '0', '52', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('22', '[\"DZ_Backpack_EP1\",2]', '8', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '52', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('23', '[\"ItemBandage\",1]', '19', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '31', 'trade_items');
INSERT INTO `traders_data` VALUES ('24', '[\"ItemPainkiller\",1]', '11', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '31', 'trade_items');
INSERT INTO `traders_data` VALUES ('25', '[\"ItemMorphine\",1]', '14', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '31', 'trade_items');
INSERT INTO `traders_data` VALUES ('26', '[\"ItemEpinephrine\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '31', 'trade_items');
INSERT INTO `traders_data` VALUES ('27', '[\"ItemBloodbag\",1]', '3', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '31', 'trade_items');
INSERT INTO `traders_data` VALUES ('28', '[\"ItemAntibiotic\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '31', 'trade_items');
INSERT INTO `traders_data` VALUES ('29', '[\"ItemHeatPack\",1]', '24', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '31', 'trade_items');
INSERT INTO `traders_data` VALUES ('31', '[\"HandChemGreen\",1]', '12', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '32', 'trade_items');
INSERT INTO `traders_data` VALUES ('32', '[\"HandChemBlue\",1]', '13', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '32', 'trade_items');
INSERT INTO `traders_data` VALUES ('33', '[\"HandChemRed\",1]', '11', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '32', 'trade_items');
INSERT INTO `traders_data` VALUES ('34', '[\"HandRoadFlare\",1]', '37', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '32', 'trade_items');
INSERT INTO `traders_data` VALUES ('35', '[\"FlareWhite_M203\",1]', '10', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '32', 'trade_items');
INSERT INTO `traders_data` VALUES ('36', '[\"FlareGreen_M203\",1]', '10', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '32', 'trade_items');
INSERT INTO `traders_data` VALUES ('37', '[\"SmokeShell\",1]', '26', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '33', 'trade_items');
INSERT INTO `traders_data` VALUES ('38', '[\"SmokeShellRed\",1]', '10', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '33', 'trade_items');
INSERT INTO `traders_data` VALUES ('39', '[\"SmokeShellGreen\",1]', '9', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '33', 'trade_items');
INSERT INTO `traders_data` VALUES ('40', '[\"1Rnd_Smoke_M203\",1]', '10', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '33', 'trade_items');
INSERT INTO `traders_data` VALUES ('41', '[\"ItemSandbag\",1]', '7', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '22', 'trade_items');
INSERT INTO `traders_data` VALUES ('42', '[\"ItemTankTrap\",1]', '11', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '22', 'trade_items');
INSERT INTO `traders_data` VALUES ('43', '[\"ItemWire\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '22', 'trade_items');
INSERT INTO `traders_data` VALUES ('44', '[\"ItemTent\",1]', '9', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '22', 'trade_items');
INSERT INTO `traders_data` VALUES ('45', '[\"PartWoodPile\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '22', 'trade_items');
INSERT INTO `traders_data` VALUES ('46', '[\"ItemEtool\",3]', '8', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('47', '[\"ItemMatchbox\",3]', '12', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('48', '[\"ItemKnife\",3]', '13', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('49', '[\"ItemWatch\",3]', '37', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('50', '[\"ItemCompass\",3]', '12', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('51', '[\"ItemFlashlight\",3]', '17', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('52', '[\"Binocular\",3]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('53', '[\"Binocular_Vector\",3]', '9', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('54', '[\"ItemGPS\",3]', '8', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('55', '[\"ItemMap\",3]', '19', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('56', '[\"ItemFlashlightRed\",3]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('57', '[\"NVGoggles\",3]', '7', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('58', '[\"ItemToolbox\",3]', '16', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('69', '[\"Skin_Camo1_DZ\",1]', '9', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('70', '[\"Skin_Sniper1_DZ\",1]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('71', '[\"Skin_Rocket_DZ\",1]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('72', '[\"Skin_Soldier1_DZ\",1]', '8', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('73', '[\"Skin_Survivor2_DZ\",1]', '11', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('74', '[\"glock17_EP1\",3]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '11', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('75', '[\"M9\",3]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '11', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('76', '[\"M9SD\",3]', '8', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '11', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('77', '[\"Colt1911\",3]', '11', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '11', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('78', '[\"Makarov\",3]', '15', '[1,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '11', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('79', '[\"UZI_EP1\",3]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '11', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('80', '[\"revolver_EP1\",3]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '11', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('81', '[\"Crossbow\",3]', '9', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '13', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('82', '[\"Winchester1866\",3]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '13', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('83', '[\"MR43\",3]', '11', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '13', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('84', '[\"M1014\",3]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '13', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('85', '[\"Remington870_lamp\",3]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '13', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('86', '[\"bizon_silenced\",3]', '11', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '15', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('87', '[\"MP5A5\",3]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '15', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('88', '[\"MP5SD\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '15', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('89', '[\"Mk_48_DZ\",3]', '11', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '15', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('90', '[\"M249_DZ\",3]', '11', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '15', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('91', '[\"M240_DZ\",3]', '10', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '15', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('92', '[\"BAF_AS50_scoped\",3]', '11', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '16', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('93', '[\"huntingrifle\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '16', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('94', '[\"DMR\",3]', '12', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '16', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('95', '[\"M14_EP1\",3]', '12', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '16', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('96', '[\"M24\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '16', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('97', '[\"M107_DZ\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '16', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('98', '[\"SVD_CAMO\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '16', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('99', '[\"LeeEnfield\",3]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '12', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('100', '[\"AK_74\",3]', '13', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '12', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('101', '[\"AKS_74_U\",3]', '11', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '12', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('102', '[\"AKS_74_kobra\",3]', '11', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '12', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('103', '[\"AK_47_M\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '12', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('104', '[\"M4A1\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '12', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('105', '[\"FN_FAL\",3]', '11', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('106', '[\"FN_FAL_ANPVS4\",3]', '10', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('108', '[\"M4A1_Aim\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('109', '[\"M4A1_HWS_GL_camo\",3]', '10', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('110', '[\"M4A1_AIM_SD_camo\",3]', '10', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('111', '[\"M4A3_CCO_EP1\",3]', '8', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('112', '[\"M16A2\",3]', '11', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('113', '[\"M16A2GL\",3]', '11', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('114', '[\"M16A4_ACG\",3]', '10', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('115', '[\"17Rnd_9x19_glock17\",1]', '13', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1', 'trade_items');
INSERT INTO `traders_data` VALUES ('116', '[\"15Rnd_9x19_M9\",1]', '13', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '1', 'trade_items');
INSERT INTO `traders_data` VALUES ('117', '[\"15Rnd_9x19_M9SD\",1]', '2', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1', 'trade_items');
INSERT INTO `traders_data` VALUES ('118', '[\"7Rnd_45ACP_1911\",1]', '17', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '1', 'trade_items');
INSERT INTO `traders_data` VALUES ('119', '[\"6Rnd_45ACP\",1]', '7', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '1', 'trade_items');
INSERT INTO `traders_data` VALUES ('120', '[\"30Rnd_9x19_UZI\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1', 'trade_items');
INSERT INTO `traders_data` VALUES ('121', '[\"8Rnd_B_Beneli_74Slug\",1]', '15', '[4,\"ItemCopperBar\",1]', '[2,\"ItemCopperBar\",1]', '0', '3', 'trade_items');
INSERT INTO `traders_data` VALUES ('122', '[\"8Rnd_B_Beneli_Pellets\",1]', '12', '[4,\"ItemCopperBar\",1]', '[2,\"ItemCopperBar\",1]', '0', '3', 'trade_items');
INSERT INTO `traders_data` VALUES ('123', '[\"2Rnd_shotgun_74Slug\",1]', '16', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3', 'trade_items');
INSERT INTO `traders_data` VALUES ('124', '[\"2Rnd_shotgun_74Pellets\",1]', '15', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3', 'trade_items');
INSERT INTO `traders_data` VALUES ('125', '[\"15Rnd_W1866_Slug\",1]', '12', '[4,\"ItemCopperBar\",1]', '[2,\"ItemCopperBar\",1]', '0', '3', 'trade_items');
INSERT INTO `traders_data` VALUES ('126', '[\"BoltSteel\",1]', '10', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3', 'trade_items');
INSERT INTO `traders_data` VALUES ('127', '[\"64Rnd_9x19_SD_Bizon\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5', 'trade_items');
INSERT INTO `traders_data` VALUES ('128', '[\"30Rnd_9x19_MP5\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '5', 'trade_items');
INSERT INTO `traders_data` VALUES ('129', '[\"30Rnd_9x19_MP5SD\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5', 'trade_items');
INSERT INTO `traders_data` VALUES ('130', '[\"100Rnd_762x51_M240\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5', 'trade_items');
INSERT INTO `traders_data` VALUES ('131', '[\"200Rnd_556x45_M249\",1]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '5', 'trade_items');
INSERT INTO `traders_data` VALUES ('132', '[\"5Rnd_762x51_M24\",1]', '16', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '6', 'trade_items');
INSERT INTO `traders_data` VALUES ('133', '[\"10Rnd_127x99_m107\",1]', '11', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '6', 'trade_items');
INSERT INTO `traders_data` VALUES ('134', '[\"20Rnd_762x51_DMR\",1]', '23', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '6', 'trade_items');
INSERT INTO `traders_data` VALUES ('135', '[\"5x_22_LR_17_HMR\",1]', '15', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '6', 'trade_items');
INSERT INTO `traders_data` VALUES ('136', '[\"30Rnd_762x39_AK47\",1]', '17', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '2', 'trade_items');
INSERT INTO `traders_data` VALUES ('137', '[\"30Rnd_545x39_AK\",1]', '43', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '2', 'trade_items');
INSERT INTO `traders_data` VALUES ('138', '[\"30Rnd_556x45_Stanag\",1]', '11', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '4', 'trade_items');
INSERT INTO `traders_data` VALUES ('139', '[\"30Rnd_556x45_StanagSD\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '4', 'trade_items');
INSERT INTO `traders_data` VALUES ('140', '[\"20Rnd_762x51_FNFAL\",1]', '34', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '4', 'trade_items');
INSERT INTO `traders_data` VALUES ('141', '[\"PipeBomb\",1]', '10', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '23', 'trade_items');
INSERT INTO `traders_data` VALUES ('143', '[\"Mine\",1]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '23', 'trade_items');
INSERT INTO `traders_data` VALUES ('144', '[\"HandGrenade_west\",1]', '18', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '23', 'trade_items');
INSERT INTO `traders_data` VALUES ('145', '[\"1Rnd_HE_M203\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '23', 'trade_items');
INSERT INTO `traders_data` VALUES ('146', '[\"FoodCanFrankBeans\",1]', '9', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '51', 'trade_items');
INSERT INTO `traders_data` VALUES ('147', '[\"FoodCanPasta\",1]', '10', '[1,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '51', 'trade_items');
INSERT INTO `traders_data` VALUES ('148', '[\"FoodCanSardines\",1]', '12', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '51', 'trade_items');
INSERT INTO `traders_data` VALUES ('149', '[\"FoodCanBakedBeans\",1]', '10', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '51', 'trade_items');
INSERT INTO `traders_data` VALUES ('150', '[\"ItemSodaPepsi\",1]', '13', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '51', 'trade_items');
INSERT INTO `traders_data` VALUES ('151', '[\"ItemSodaCoke\",1]', '15', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '51', 'trade_items');
INSERT INTO `traders_data` VALUES ('152', '[\"ItemJerrycanEmpty\",1]', '13', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '21', 'trade_items');
INSERT INTO `traders_data` VALUES ('153', '[\"FoodSteakCooked\",1]', '17', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '2', '51', 'trade_items');
INSERT INTO `traders_data` VALUES ('154', '[\"8Rnd_9x18_Makarov\",1]', '37', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '1', 'trade_items');
INSERT INTO `traders_data` VALUES ('155', '[\"UAZ_RU\",2]', '2', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '46', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('156', '[\"UAZ_Unarmed_TK_EP1\",2]', '2', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '46', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('158', '[\"datsun1_civil_2_covered\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '42', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('159', '[\"Old_moto_TK_Civ_EP1\",2]', '0', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '43', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('160', '[\"Volha_1_TK_CIV_EP1\",2]', '4', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('161', '[\"hilux1_civil_3_open_EP1\",2]', '2', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '42', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('162', '[\"Mi17_Civilian\",2]', '3', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '44', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('165', '[\"datsun1_civil_3_open\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '42', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('166', '[\"SkodaRed\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('167', '[\"Lada2\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('169', '[\"Skoda\",2]', '2', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('170', '[\"MTVR_DES_EP1\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('171', '[\"HMMWV_DES_EP1\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('173', '[\"SkodaGreen\",2]', '3', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('174', '[\"ATV_CZ_EP1\",2]', '0', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '43', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('175', '[\"Octavia_ACR\",2]', '2', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('176', '[\"policecar\",2]', '2', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('177', '[\"MMT_Civ\",2]', '0', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '43', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('178', '[\"Old_bike_TK_INS_EP1\",2]', '0', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '43', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('179', '[\"TT650_Ins\",2]', '3', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '43', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('180', '[\"HMMWV_Ambulance\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('181', '[\"VWGolf\",2]', '1', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('185', '[\"LadaLM\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('186', '[\"Lada2_TK_CIV_EP1\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('188', '[\"car_sedan\",2]', '2', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('189', '[\"ItemRadio\",3]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '53', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('190', '[\"10Rnd_762x54_SVD\",1]', '26', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '6', 'trade_items');
INSERT INTO `traders_data` VALUES ('191', '[\"CSJ_GyroP\",2]', '1', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '44', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('192', '[\"KamazRefuel\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '47', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('193', '[\"MtvrRefuel_DES_EP1\",2]', '0', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '47', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('194', '[\"UralRefuel_TK_EP1\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '47', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('195', '[\"V3S_Refuel_TK_GUE_EP1\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '47', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('196', '[\"T810Refuel_Des_ACR\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '47', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('197', '[\"T810Refuel_ACR\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '47', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('200', '[\"roadrunner2\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '411', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('213', '[\"Lada1\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('217', '[\"SkodaBlue\",2]', '2', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('221', '[\"car_hatchback\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('223', '[\"Lada1_TK_CIV_EP1\",2]', '2', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('225', '[\"VolhaLimo_TK_CIV_EP1\",2]', '0', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('227', '[\"Volha_2_TK_CIV_EP1\",2]', '0', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('229', '[\"hilux1_civil_2_covered\",2]', '4', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '42', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('230', '[\"hilux1_civil_1_open\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '42', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('233', '[\"datsun1_civil_1_open\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '42', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('241', '[\"Ikarus\",2]', '0', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '467', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('242', '[\"Ikarus_TK_CIV_EP1\",2]', '2', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '467', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('243', '[\"S1203_TK_CIV_EP1\",2]', '4', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '467', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('244', '[\"S1203_ambulance_EP1\",2]', '1', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '467', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('245', '[\"tractor\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]s', '0', '467', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('246', '[\"Pickup_PK_TK_GUE_EP1\",2]', '2', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '422', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('247', '[\"Pickup_PK_GUE\",2]', '1', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '422', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('248', '[\"Pickup_PK_INS\",2]', '1', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '422', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('249', '[\"UAZ_CDF\",2]', '1', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '46', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('250', '[\"UAZ_INS\",2]', '1', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '46', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('252', '[\"UAZ_Unarmed_TK_CIV_EP1\",2]', '2', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '46', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('254', '[\"UAZ_Unarmed_UN_EP1\",2]', '1', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '46', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('259', '[\"SUV_Green\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '466', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('260', '[\"SUV_Silver\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '466', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('261', '[\"SUV_White\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '466', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('262', '[\"SUV_Charcoal\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '466', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('263', '[\"SUV_TK_CIV_EP1\",2]', '4', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '466', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('265', '[\"CSJ_GyroCover\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '44', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('266', '[\"CSJ_GyroC\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '44', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('268', '[\"MH6J_EP1\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '44', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('269', '[\"UH60M_MEV_EP1\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '44', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('270', '[\"UH1H_DZ\",2]', '1', '[12,\"ItemGoldBar\",1]', '[6,\"ItemGoldBar\",1]', '0', '444', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('272', '[\"CH_47F_EP1\",2]', '0', '[12,\"ItemGoldBar\",1]', '[6,\"ItemGoldBar\",1]', '0', '444', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('273', '[\"AH6X_DZ\",2]', '0', '[12,\"ItemGoldBar\",1]', '[6,\"ItemGoldBar\",1]', '0', '444', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('274', '[\"MH6J_DZ\",2]', '1', '[12,\"ItemGoldBar\",1]', '[6,\"ItemGoldBar\",1]', '0', '444', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('275', '[\"AN2_DZ\",2]', '0', '[12,\"ItemGoldBar\",1]', '[6,\"ItemGoldBar\",1]', '0', '444', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('277', '[\"Mi17_DZ\",2]', '1', '[12,\"ItemGoldBar\",1]', '[6,\"ItemGoldBar\",1]', '0', '444', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('279', '[\"M113Ambul_UN_EP1\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '48', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('280', '[\"M113Ambul_TK_EP1\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '48', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('281', '[\"BMP2_Ambul_CDF\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '48', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('282', '[\"BMP2_Ambul_INS\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '48', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('284', '[\"LandRover_CZ_EP1\",2]', '4', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('285', '[\"LandRover_TK_CIV_EP1\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('286', '[\"HMMWV\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('288', '[\"HMMWV_M1035_DES_EP1\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('289', '[\"GAZ_Vodnik_MedEvac\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('290', '[\"HMMWV_Ambulance_CZ_DES_EP1\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('291', '[\"Ural_TK_CIV_EP1\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('292', '[\"Ural_UN_EP1\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('293', '[\"V3S_Open_TK_CIV_EP1\",2]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('294', '[\"V3S_Open_TK_EP1\",2]', '0', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('296', '[\"Kamaz\",2]', '0', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('297', '[\"HMMWV_M998A2_SOV_DES_EP1\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '455', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('298', '[\"HMMWV_M1151_M2_CZ_DES_EP1\",2]', '0', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '455', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('299', '[\"LandRover_Special_CZ_EP1\",2]', '0', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '455', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('300', '[\"LandRover_MG_TK_EP1\",2]', '1', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '455', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('301', '[\"ArmoredSUV_PMC\",2]', '0', '[8,\"ItemGoldBar\",1]', '[4,\"ItemGoldBar\",1]', '0', '455', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('302', '[\"M1030_US_DES_EP1\",2]', '0', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '43', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('303', '[\"TT650_TK_CIV_EP1\",2]', '2', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '43', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('305', '[\"TT650_Civ\",2]', '1', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '43', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('307', '[\"ATV_US_EP1\",2]', '2', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '43', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('308', '[\"BAF_ATV_D\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '43', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('312', '[\"Fishing_Boat\",2]', '1', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '49', 'trade_any_boat');
INSERT INTO `traders_data` VALUES ('313', '[\"PBX\",2]', '1', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '49', 'trade_any_boat');
INSERT INTO `traders_data` VALUES ('314', '[\"PBX_ACR\",2]', '1', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '49', 'trade_any_boat');
INSERT INTO `traders_data` VALUES ('315', '[\"Smallboat_2\",2]', '1', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '49', 'trade_any_boat');
INSERT INTO `traders_data` VALUES ('316', '[\"Smallboat_1\",2]', '1', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '49', 'trade_any_boat');
INSERT INTO `traders_data` VALUES ('317', '[\"Zodiac\",2]', '1', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '49', 'trade_any_boat');
INSERT INTO `traders_data` VALUES ('318', '[\"RHIB\",2]', '0', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '499', 'trade_any_boat');
INSERT INTO `traders_data` VALUES ('319', '[\"RHIB2Turret\",2]', '0', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '499', 'trade_any_boat');
INSERT INTO `traders_data` VALUES ('321', '[\"ItemGenerator\",1]', '0', '[12,\"ItemGoldBar\",1]', '[6,\"ItemGoldBar\",1]', '0', '22', 'trade_items');
INSERT INTO `traders_data` VALUES ('322', '[\"Skin_RU_Policeman_DZ\",1]', '6', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('323', '[\"Skin_Pilot_EP1_DZ\",1]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('324', '[\"Skin_Haris_Press_EP1_DZ\",1]', '0', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('325', '[\"Skin_Ins_Soldier_GL_DZ\",1]', '4', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('326', '[\"Skin_GUE_Commander_DZ\",1]', '3', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('327', '[\"Skin_Functionary1_EP1_DZ\",1]', '2', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('328', '[\"Skin_Priest_DZ\",1]', '0', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('329', '[\"Skin_Rocker2_DZ\",1]', '3', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '54', 'trade_items');
INSERT INTO `traders_data` VALUES ('330', '[\"GLT_M300_ST\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('331', '[\"GLT_M300_LT\",2]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '41', 'trade_any_vehicle');
INSERT INTO `traders_data` VALUES ('332', '[\"G36C\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('333', '[\"G36C_camo\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('334', '[\"G36A_camo\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('335', '[\"G36K_camo\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '14', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('336', '[\"100Rnd_762x54_PK\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5', 'trade_items');
INSERT INTO `traders_data` VALUES ('337', '[\"Sa58P_EPI\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '12', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('338', '[\"Sa58V_EPI\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '12', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('339', '[\"30Rnd_762x39_SA58\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1', 'trade_items');
INSERT INTO `traders_data` VALUES ('340', '[\"M40A3\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '16', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('342', '[\"revolver_gold_EP1\",3]', '0', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '11', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('343', '[\"AKS\",3]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '12', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('344', '[\"BoltSteel4pack\",1]', '4', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '3', 'trade_items');
INSERT INTO `traders_data` VALUES ('346', '[\"Skin_RU_Policeman_DZ\",1]', '4', '[3,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '999', 'trade_items');
INSERT INTO `traders_data` VALUES ('347', '[\"Skin_Pilot_EP1_DZ\",1]', '9', '[3,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '999', 'trade_items');
INSERT INTO `traders_data` VALUES ('348', '[\"Skin_Rocker2_DZ\",1]', '7', '[3,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '999', 'trade_items');
INSERT INTO `traders_data` VALUES ('349', '[\"Skin_Haris_Press_EP1_DZ\",1]', '10', '[3,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '999', 'trade_items');
INSERT INTO `traders_data` VALUES ('350', '[\"Skin_Ins_Soldier_GL_DZ\",1]', '6', '[3,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '999', 'trade_items');
INSERT INTO `traders_data` VALUES ('351', '[\"Skin_GUE_Commander_DZ\",1]', '6', '[3,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '999', 'trade_items');
INSERT INTO `traders_data` VALUES ('352', '[\"Skin_Priest_DZ\",1]', '10', '[3,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '999', 'trade_items');
INSERT INTO `traders_data` VALUES ('353', '[\"Skin_Functionary1_EP1_DZ\",1]', '8', '[3,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '999', 'trade_items');
INSERT INTO `traders_data` VALUES ('354', '[\"ItemGenerator\",1]', '0', '[3,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '999', 'trade_items');
INSERT INTO `traders_data` VALUES ('355', '[\"PartGlass\",1]', '17', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '2121', 'trade_items');
INSERT INTO `traders_data` VALUES ('356', '[\"PartGeneric\",1]', '23', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '2121', 'trade_items');
INSERT INTO `traders_data` VALUES ('357', '[\"PartFueltank\",1]', '19', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '2121', 'trade_items');
INSERT INTO `traders_data` VALUES ('358', '[\"ItemJerrycan\",1]', '172', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '2121', 'trade_items');
INSERT INTO `traders_data` VALUES ('359', '[\"PartVRotor\",1]', '21', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '2121', 'trade_items');
INSERT INTO `traders_data` VALUES ('360', '[\"PartWheel\",1]', '17', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '2121', 'trade_items');
INSERT INTO `traders_data` VALUES ('361', '[\"PartEngine\",1]', '11', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '2121', 'trade_items');
INSERT INTO `traders_data` VALUES ('362', '[\"ItemJerrycanEmpty\",1]', '11', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '2121', 'trade_items');
INSERT INTO `traders_data` VALUES ('363', '[\"ItemTankTrap\",1]', '11', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '2222', 'trade_items');
INSERT INTO `traders_data` VALUES ('364', '[\"PartWoodPile\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '2222', 'trade_items');
INSERT INTO `traders_data` VALUES ('365', '[\"ItemTent\",1]', '9', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '2222', 'trade_items');
INSERT INTO `traders_data` VALUES ('366', '[\"ItemWire\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '2222', 'trade_items');
INSERT INTO `traders_data` VALUES ('367', '[\"ItemSandbag\",1]', '7', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '2222', 'trade_items');
INSERT INTO `traders_data` VALUES ('368', '[\"ItemGenerator\",1]', '10', '[12,\"ItemGoldBar\",1]', '[6,\"ItemGoldBar\",1]', '0', '2222', 'trade_items');
INSERT INTO `traders_data` VALUES ('369', '[\"PipeBomb\",1]', '10', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '2323', 'trade_items');
INSERT INTO `traders_data` VALUES ('370', '[\"Mine\",1]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '2323', 'trade_items');
INSERT INTO `traders_data` VALUES ('371', '[\"HandGrenade_west\",1]', '13', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '2323', 'trade_items');
INSERT INTO `traders_data` VALUES ('372', '[\"1Rnd_HE_M203\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '2323', 'trade_items');
INSERT INTO `traders_data` VALUES ('373', '[\"revolver_gold_EP1\",3]', '0', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1111', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('374', '[\"UZI_EP1\",3]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '1111', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('375', '[\"glock17_EP1\",3]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '1111', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('376', '[\"M9\",3]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1111', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('377', '[\"M9SD\",3]', '8', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1111', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('378', '[\"Colt1911\",3]', '11', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '1111', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('379', '[\"Makarov\",3]', '15', '[1,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1111', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('380', '[\"revolver_EP1\",3]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '1111', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('381', '[\"LeeEnfield\",3]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '1212', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('382', '[\"AK_74\",3]', '11', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1212', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('383', '[\"AK_47_M\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1212', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('384', '[\"AKS_74_kobra\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1212', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('385', '[\"M4A1\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1212', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('386', '[\"AKS_74_U\",3]', '11', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1212', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('387', '[\"Sa58P_EPI\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1212', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('388', '[\"Sa58V_EPI\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1212', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('389', '[\"AKS\",3]', '1', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '1212', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('390', '[\"Winchester1866\",3]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1313', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('391', '[\"Crossbow\",3]', '9', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '1313', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('392', '[\"MR43\",3]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '1313', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('393', '[\"M1014\",3]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1313', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('394', '[\"Remington870_lamp\",3]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '1313', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('395', '[\"M16A2GL\",3]', '11', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('396', '[\"M16A4_ACG\",3]', '10', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('397', '[\"M4A1_Aim\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('398', '[\"M16A2\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('399', '[\"FN_FAL_ANPVS4\",3]', '10', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('400', '[\"FN_FAL\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('401', '[\"G36A_camo\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('402', '[\"M4A1_HWS_GL_camo\",3]', '10', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('403', '[\"M4A1_AIM_SD_camo\",3]', '9', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('404', '[\"M4A3_CCO_EP1\",3]', '8', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('405', '[\"G36C\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('406', '[\"G36C_camo\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('407', '[\"G36K_camo\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1414', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('408', '[\"M240_DZ\",3]', '10', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '1515', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('409', '[\"Mk_48_DZ\",3]', '11', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '1515', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('410', '[\"MP5SD\",3]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '1515', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('411', '[\"MP5A5\",3]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '1515', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('412', '[\"M249_DZ\",3]', '11', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '1515', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('413', '[\"bizon_silenced\",3]', '11', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1515', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('414', '[\"SVD_CAMO\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1616', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('415', '[\"M107_DZ\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1616', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('416', '[\"M24\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1616', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('417', '[\"M14_EP1\",3]', '12', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1616', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('418', '[\"DMR\",3]', '12', '[4,\"ItemGoldBar\",1]', '[2,\"ItemGoldBar\",1]', '0', '1616', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('419', '[\"huntingrifle\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1616', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('420', '[\"BAF_AS50_scoped\",3]', '11', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '1616', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('421', '[\"M40A3\",3]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '1616', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('422', '[\"ItemSodaCoke\",1]', '15', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '5151', 'trade_items');
INSERT INTO `traders_data` VALUES ('424', '[\"FoodCanBakedBeans\",1]', '9', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '5151', 'trade_items');
INSERT INTO `traders_data` VALUES ('425', '[\"FoodCanFrankBeans\",1]', '15', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '5151', 'trade_items');
INSERT INTO `traders_data` VALUES ('426', '[\"FoodSteakCooked\",1]', '18', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '2', '5151', 'trade_items');
INSERT INTO `traders_data` VALUES ('427', '[\"FoodCanPasta\",1]', '10', '[1,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '5151', 'trade_items');
INSERT INTO `traders_data` VALUES ('428', '[\"FoodCanSardines\",1]', '12', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '5151', 'trade_items');
INSERT INTO `traders_data` VALUES ('429', '[\"ItemSodaPepsi\",1]', '13', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '1', '5151', 'trade_items');
INSERT INTO `traders_data` VALUES ('430', '[\"DZ_Patrol_Pack_EP1\",2]', '13', '[4,\"ItemCopperBar\",1]', '[2,\"ItemCopperBar\",1]', '0', '5252', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('431', '[\"CZ_VestPouch_EP1\",2]', '10', '[4,\"ItemCopperBar\",1]', '[2,\"ItemCopperBar\",1]', '0', '5252', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('432', '[\"DZ_CivilBackpack_EP1\",2]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '5252', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('433', '[\"DZ_ALICE_Pack_EP1\",2]', '9', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5252', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('434', '[\"DZ_Assault_Pack_EP1\",2]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '5252', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('435', '[\"DZ_Backpack_EP1\",2]', '8', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5252', 'trade_backpacks');
INSERT INTO `traders_data` VALUES ('436', '[\"Binocular_Vector\",3]', '9', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('437', '[\"ItemRadio\",3]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('438', '[\"ItemMap\",3]', '21', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('439', '[\"Binocular\",3]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('440', '[\"ItemToolbox\",3]', '16', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('441', '[\"NVGoggles\",3]', '7', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('442', '[\"ItemFlashlightRed\",3]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('443', '[\"ItemKnife\",3]', '13', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('444', '[\"ItemEtool\",3]', '8', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('445', '[\"ItemMatchbox\",3]', '13', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('446', '[\"ItemGPS\",3]', '8', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('447', '[\"ItemWatch\",3]', '43', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('448', '[\"ItemCompass\",3]', '13', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('449', '[\"ItemFlashlight\",3]', '18', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '5353', 'trade_weapons');
INSERT INTO `traders_data` VALUES ('450', '[\"Skin_RU_Policeman_DZ\",1]', '6', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('451', '[\"Skin_Haris_Press_EP1_DZ\",1]', '0', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('452', '[\"Skin_Soldier1_DZ\",1]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('453', '[\"Skin_Rocket_DZ\",1]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('454', '[\"Skin_Pilot_EP1_DZ\",1]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('455', '[\"Skin_Ins_Soldier_GL_DZ\",1]', '4', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('456', '[\"Skin_Camo1_DZ\",1]', '9', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('457', '[\"Skin_Sniper1_DZ\",1]', '10', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('458', '[\"Skin_Rocker2_DZ\",1]', '3', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('459', '[\"Skin_Priest_DZ\",1]', '0', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('460', '[\"Skin_Functionary1_EP1_DZ\",1]', '1', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('461', '[\"Skin_GUE_Commander_DZ\",1]', '3', '[2,\"ItemGoldBar\",1]', '[1,\"ItemGoldBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('462', '[\"Skin_Survivor2_DZ\",1]', '11', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '5454', 'trade_items');
INSERT INTO `traders_data` VALUES ('463', '[\"30Rnd_9x19_UZI\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1001', 'trade_items');
INSERT INTO `traders_data` VALUES ('464', '[\"17Rnd_9x19_glock17\",1]', '12', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1001', 'trade_items');
INSERT INTO `traders_data` VALUES ('465', '[\"8Rnd_9x18_Makarov\",1]', '27', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '1001', 'trade_items');
INSERT INTO `traders_data` VALUES ('466', '[\"15Rnd_9x19_M9\",1]', '12', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '1001', 'trade_items');
INSERT INTO `traders_data` VALUES ('467', '[\"15Rnd_9x19_M9SD\",1]', '2', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1001', 'trade_items');
INSERT INTO `traders_data` VALUES ('468', '[\"30Rnd_762x39_SA58\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '1001', 'trade_items');
INSERT INTO `traders_data` VALUES ('469', '[\"7Rnd_45ACP_1911\",1]', '14', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '1001', 'trade_items');
INSERT INTO `traders_data` VALUES ('470', '[\"6Rnd_45ACP\",1]', '6', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '1001', 'trade_items');
INSERT INTO `traders_data` VALUES ('471', '[\"30Rnd_545x39_AK\",1]', '12', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '2002', 'trade_items');
INSERT INTO `traders_data` VALUES ('472', '[\"10x_303\",1]', '25', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '2002', 'trade_items');
INSERT INTO `traders_data` VALUES ('473', '[\"30Rnd_762x39_AK47\",1]', '15', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '2002', 'trade_items');
INSERT INTO `traders_data` VALUES ('474', '[\"8Rnd_B_Beneli_74Slug\",1]', '15', '[4,\"ItemCopperBar\",1]', '[2,\"ItemCopperBar\",1]', '0', '3003', 'trade_items');
INSERT INTO `traders_data` VALUES ('475', '[\"8Rnd_B_Beneli_Pellets\",1]', '12', '[4,\"ItemCopperBar\",1]', '[2,\"ItemCopperBar\",1]', '0', '3003', 'trade_items');
INSERT INTO `traders_data` VALUES ('476', '[\"2Rnd_shotgun_74Slug\",1]', '15', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3003', 'trade_items');
INSERT INTO `traders_data` VALUES ('477', '[\"2Rnd_shotgun_74Pellets\",1]', '13', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3003', 'trade_items');
INSERT INTO `traders_data` VALUES ('478', '[\"BoltSteel\",1]', '12', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3003', 'trade_items');
INSERT INTO `traders_data` VALUES ('479', '[\"15Rnd_W1866_Slug\",1]', '12', '[4,\"ItemCopperBar\",1]', '[2,\"ItemCopperBar\",1]', '0', '3003', 'trade_items');
INSERT INTO `traders_data` VALUES ('480', '[\"BoltSteel4pack\",1]', '6', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '3003', 'trade_items');
INSERT INTO `traders_data` VALUES ('481', '[\"30Rnd_556x45_Stanag\",1]', '11', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '4004', 'trade_items');
INSERT INTO `traders_data` VALUES ('482', '[\"20Rnd_762x51_FNFAL\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '4004', 'trade_items');
INSERT INTO `traders_data` VALUES ('483', '[\"30Rnd_556x45_StanagSD\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '4004', 'trade_items');
INSERT INTO `traders_data` VALUES ('484', '[\"100Rnd_762x54_PK\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5005', 'trade_items');
INSERT INTO `traders_data` VALUES ('485', '[\"30rnd_9x19_MP5\",1]', '14', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '5005', 'trade_items');
INSERT INTO `traders_data` VALUES ('486', '[\"30Rnd_9x19_MP5SD\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5005', 'trade_items');
INSERT INTO `traders_data` VALUES ('487', '[\"200Rnd_556x45_M249\",1]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '5005', 'trade_items');
INSERT INTO `traders_data` VALUES ('488', '[\"100Rnd_762x51_M240\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5005', 'trade_items');
INSERT INTO `traders_data` VALUES ('489', '[\"30Rnd_9x19_MP5\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '5005', 'trade_items');
INSERT INTO `traders_data` VALUES ('490', '[\"64Rnd_9x19_SD_Bizon\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '5005', 'trade_items');
INSERT INTO `traders_data` VALUES ('491', '[\"5Rnd_762x51_M24\",1]', '16', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '6006', 'trade_items');
INSERT INTO `traders_data` VALUES ('492', '[\"10Rnd_762x54_SVD\",1]', '16', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '6006', 'trade_items');
INSERT INTO `traders_data` VALUES ('493', '[\"10Rnd_127x99_m107\",1]', '10', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '6006', 'trade_items');
INSERT INTO `traders_data` VALUES ('494', '[\"5x_22_LR_17_HMR\",1]', '11', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '6006', 'trade_items');
INSERT INTO `traders_data` VALUES ('495', '[\"20Rnd_762x51_DMR\",1]', '21', '[4,\"ItemSilverBar\",1]', '[2,\"ItemSilverBar\",1]', '0', '6006', 'trade_items');
INSERT INTO `traders_data` VALUES ('496', '[\"ItemBandage\",1]', '19', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '3131', 'trade_items');
INSERT INTO `traders_data` VALUES ('497', '[\"ItemPainkiller\",1]', '10', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '3131', 'trade_items');
INSERT INTO `traders_data` VALUES ('498', '[\"ItemBloodbag\",1]', '3', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '3131', 'trade_items');
INSERT INTO `traders_data` VALUES ('499', '[\"ItemAntibiotic\",1]', '10', '[1,\"ItemGoldBar\",1]', '[3,\"ItemSilverBar\",1]', '0', '3131', 'trade_items');
INSERT INTO `traders_data` VALUES ('500', '[\"ItemHeatPack\",1]', '21', '[1,\"ItemSilverBar\",1]', '[3,\"ItemCopperBar\",1]', '0', '3131', 'trade_items');
INSERT INTO `traders_data` VALUES ('501', '[\"ItemEpinephrine\",1]', '10', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '3131', 'trade_items');
INSERT INTO `traders_data` VALUES ('502', '[\"ItemMorphine\",1]', '14', '[2,\"ItemSilverBar\",1]', '[1,\"ItemSilverBar\",1]', '0', '3131', 'trade_items');
INSERT INTO `traders_data` VALUES ('503', '[\"HandChemRed\",1]', '11', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3232', 'trade_items');
INSERT INTO `traders_data` VALUES ('504', '[\"HandChemBlue\",1]', '13', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3232', 'trade_items');
INSERT INTO `traders_data` VALUES ('505', '[\"HandChemGreen\",1]', '12', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3232', 'trade_items');
INSERT INTO `traders_data` VALUES ('506', '[\"HandRoadFlare\",1]', '30', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3232', 'trade_items');
INSERT INTO `traders_data` VALUES ('507', '[\"FlareGreen_M203\",1]', '10', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3232', 'trade_items');
INSERT INTO `traders_data` VALUES ('508', '[\"FlareWhite_M203\",1]', '10', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3232', 'trade_items');
INSERT INTO `traders_data` VALUES ('509', '[\"1Rnd_Smoke_M203\",1]', '10', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3333', 'trade_items');
INSERT INTO `traders_data` VALUES ('510', '[\"SmokeShellGreen\",1]', '9', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3333', 'trade_items');
INSERT INTO `traders_data` VALUES ('511', '[\"SmokeShellRed\",1]', '10', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3333', 'trade_items');
INSERT INTO `traders_data` VALUES ('512', '[\"SmokeShell\",1]', '21', '[2,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '3333', 'trade_items');
INSERT INTO `traders_data` VALUES ('513', '[\"ItemJerrycanEmpty\",1]', '838', '[1,\"ItemCopperBar\",1]', '[1,\"ItemCopperBar\",1]', '0', '999', 'trade_items');
INSERT INTO `traders_data` VALUES ('514', '[\"Ural_CDF\",2]', '0', '[6,\"ItemGoldBar\",1]', '[3,\"ItemGoldBar\",1]', '0', '45', 'trade_any_vehicle');
