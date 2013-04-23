/*
Navicat MySQL Data Transfer

Source Server         : DAYZEPOCH
Source Server Version : 50610
Source Host           : localhost:3306
Source Database       : dayz_epoch

Target Server Type    : MYSQL
Target Server Version : 50610
File Encoding         : 65001

Date: 2013-04-23 16:16:01
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `server_traders`
-- ----------------------------
DROP TABLE IF EXISTS `server_traders`;
CREATE TABLE `server_traders` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `classname` varchar(128) NOT NULL,
  `instance` int(11) NOT NULL,
  `status` varchar(32) NOT NULL,
  `static` text,
  `desc` varchar(128) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=120 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of server_traders
-- ----------------------------
INSERT INTO `server_traders` VALUES ('1', 'CIV_EuroMan01_EP1', '11', 'friendly', null, 'Weapons Trader - Bash');
INSERT INTO `server_traders` VALUES ('2', 'Rocker4', '11', 'friendly', null, 'Weapons Trader - Klen');
INSERT INTO `server_traders` VALUES ('3', 'Woodlander3', '11', 'friendly', null, 'Parts Trader - Bash');
INSERT INTO `server_traders` VALUES ('4', 'Woodlander1', '11', 'friendly', '', 'Parts Trader - Klen');
INSERT INTO `server_traders` VALUES ('5', 'RU_WorkWoman1', '11', 'friendly', '[\"ItemCopperBar\",\"TrashJackDaniels\",1,1,\"buy\",\"Empty Wiskey Bottle\",\"Copper Bar\",101]', 'Can Trader - Klen');
INSERT INTO `server_traders` VALUES ('6', 'RU_WorkWoman5', '11', 'friendly', '[\"ItemCopperBar\",\"TrashJackDaniels\",1,1,\"buy\",\"Empty Wiskey Bottle\",\"Copper Bar\",101]', 'Can Trader - Bash');
INSERT INTO `server_traders` VALUES ('7', 'Rita_Ensler_EP1', '11', 'neutral', '[\"ItemCopperBar\",\"TrashJackDaniels\",1,1,\"buy\",\"Empty Wiskey Bottle\",\"Copper Bar\",101]', 'Can Trader - Stary');
INSERT INTO `server_traders` VALUES ('8', 'CIV_EuroMan02_EP1', '11', 'friendly', '', 'Ammo Trader - Bash');
INSERT INTO `server_traders` VALUES ('9', 'RU_Citizen3', '11', 'friendly', '', 'Ammo Trader - Klen');
INSERT INTO `server_traders` VALUES ('10', 'Pilot_EP1', '11', 'neutral', '', 'Ammo Trader - Stary');
INSERT INTO `server_traders` VALUES ('11', 'Worker3', '11', 'friendly', '', 'Auto Trader - Bash');
INSERT INTO `server_traders` VALUES ('12', 'Profiteer4', '11', 'friendly', '', 'Auto Trader - Klen');
INSERT INTO `server_traders` VALUES ('13', 'Dr_Hladik_EP1', '11', 'friendly', '[\"FoodBioMeat\",\"ItemZombieParts\",1,1,\"buy\",\"Zombie Parts\",\"Bio Meat\",101]', 'Doctor - Bash');
INSERT INTO `server_traders` VALUES ('14', 'Doctor', '11', 'friendly', '[\"FoodBioMeat\",\"ItemZombieParts\",1,1,\"buy\",\"Zombie Parts\",\"Bio Meat\",101]', 'Doctor - Klen');
INSERT INTO `server_traders` VALUES ('15', 'RU_Functionary1', '11', 'friendly', '', 'Hero Traders');
INSERT INTO `server_traders` VALUES ('16', 'RU_Villager3', '11', 'neutral', '', 'Boat Trader');
INSERT INTO `server_traders` VALUES ('17', 'TK_CIV_Takistani04_EP1', '11', 'neutral', '', 'High End Weapons');
INSERT INTO `server_traders` VALUES ('18', 'RU_Citizen4', '11', 'neutral', '', 'Wholesaler - Solnichniy');
INSERT INTO `server_traders` VALUES ('19', 'RU_Citizen1', '11', 'neutral', '', 'Wholesaler - Balota');
INSERT INTO `server_traders` VALUES ('20', 'Functionary1', '1', 'friendly', '', 'Hero Traders');
INSERT INTO `server_traders` VALUES ('21', 'RU_Profiteer3', '1', 'neutral', '', 'High End Weapons - Khush');
INSERT INTO `server_traders` VALUES ('22', 'Profiteer1', '1', 'neutral', '', 'High End Ammo - Khush');
INSERT INTO `server_traders` VALUES ('23', 'RU_Sportswoman5', '1', 'friendly', '[\"ItemCopperBar\",\"TrashJackDaniels\",1,1,\"buy\",\"Empty Wiskey Bottle\",\"Copper Bar\",101]', 'Can Trader - Khush');
INSERT INTO `server_traders` VALUES ('24', 'TK_CIV_Takistani05_EP1', '1', 'friendly', '', 'Parts Trader - Khush');
INSERT INTO `server_traders` VALUES ('25', 'Dr_Annie_Baker_EP1', '1', 'friendly', '[\"FoodBioMeat\",\"ItemZombieParts\",1,1,\"buy\",\"Zombie Parts\",\"Bio Meat\",101]', 'Doctor - Khush');
INSERT INTO `server_traders` VALUES ('26', 'Woodlander2', '1', 'friendly', '', 'Auto Trader - Khush');
INSERT INTO `server_traders` VALUES ('27', 'TK_CIV_Takistani03_EP1', '1', 'friendly', '', 'Car Parts - Nur');
INSERT INTO `server_traders` VALUES ('28', 'TK_CIV_Takistani06_EP1', '1', 'friendly', '', 'Weapons Trader - Nur');
INSERT INTO `server_traders` VALUES ('29', 'TK_CIV_Takistani04_EP1', '1', 'friendly', '', 'Ammo Trader - Nur');
INSERT INTO `server_traders` VALUES ('30', 'TK_CIV_Woman03_EP1', '1', 'friendly', '[\"ItemCopperBar\",\"TrashJackDaniels\",1,1,\"buy\",\"Empty Wiskey Bottle\",\"Copper Bar\",101]', 'Can Trader - Nur');
INSERT INTO `server_traders` VALUES ('31', 'TK_CIV_Woman02_EP1', '1', 'friendly', '[\"FoodBioMeat\",\"ItemZombieParts\",1,1,\"buy\",\"Zombie Parts\",\"Bio Meat\",101]', 'Doctor - Nur');
INSERT INTO `server_traders` VALUES ('32', 'RU_Profiteer2', '1', 'friendly', '', 'Auto Trader - Garm');
INSERT INTO `server_traders` VALUES ('33', 'TK_CIV_Takistani02_EP1', '1', 'friendly', '', 'Car Parts - Garm');
INSERT INTO `server_traders` VALUES ('34', 'RU_Damsel4', '1', 'friendly', '[\"ItemCopperBar\",\"TrashJackDaniels\",1,1,\"buy\",\"Empty Wiskey Bottle\",\"Copper Bar\",101]', 'Can Trader - Garm');
INSERT INTO `server_traders` VALUES ('35', 'RU_Woodlander3', '1', 'neutral', '', 'Wholesaler - South');
INSERT INTO `server_traders` VALUES ('36', 'RU_Citizen4', '1', 'neutral', '', 'Wholesaler - North');
INSERT INTO `server_traders` VALUES ('37', 'RU_Pilot', '1', 'neutral', '', 'Airplane Dealer');
INSERT INTO `server_traders` VALUES ('38', 'RU_Worker1', '6', 'neutral', '', 'Whiskey\'s Parts Shop');
INSERT INTO `server_traders` VALUES ('39', 'Dr_Annie_Baker_EP1', '6', 'friendly', '[\"FoodBioMeat\",\"ItemZombieParts\",1,1,\"buy\",\"Zombie Parts\",\"Bio Meat\",101]', 'Melly\'s Medical');
INSERT INTO `server_traders` VALUES ('40', 'CIV_EuroWoman01_EP1', '6', 'friendly', '', 'Alejandria\'s General Supplies');
INSERT INTO `server_traders` VALUES ('41', 'ibr_lingorman2s', '6', 'neutral', '', 'Blivion\'s Wholesale Items');
INSERT INTO `server_traders` VALUES ('42', 'Worker2', '6', 'friendly', '', 'Axle\'s Repair Shop');
INSERT INTO `server_traders` VALUES ('43', 'TK_CIV_Woman03_EP1', '6', 'friendly', '[\"ItemCopperBar\",\"TrashJackDaniels\",1,1,\"buy\",\"Empty Wiskey Bottle\",\"Copper Bar\",101]', 'Stella\'s General Goods');
INSERT INTO `server_traders` VALUES ('44', 'ibr_lingorman3s', '6', 'neutral', '', 'Clive\'s Wholesale');
INSERT INTO `server_traders` VALUES ('45', 'ibr_lingorman5s', '6', 'neutral', '', 'Big Bob\'s Boats');
INSERT INTO `server_traders` VALUES ('46', 'ibr_lingorman4s', '6', 'friendly', '', 'Juan\'s Tour Boats');
INSERT INTO `server_traders` VALUES ('47', 'ibr_lingorman2', '6', 'friendly', '', 'Jd\'z Armed Boats');
INSERT INTO `server_traders` VALUES ('48', 'Citizen2_EP1', '6', 'friendly', '', 'Green\'s Quality Cars');
INSERT INTO `server_traders` VALUES ('49', 'Worker1', '6', 'friendly', '', 'Lyle\'s Parts');
INSERT INTO `server_traders` VALUES ('50', 'RU_Madam3', '6', 'neutral', '[\"ItemCopperBar\",\"TrashJackDaniels\",1,1,\"buy\",\"Empty Wiskey Bottle\",\"Copper Bar\",101]', 'Bag Lady Gina');
INSERT INTO `server_traders` VALUES ('51', 'Pilot', '6', 'friendly', '', 'Chip\'s Choppers');
INSERT INTO `server_traders` VALUES ('52', 'CIV_EuroMan02_EP1', '6', 'friendly', '', 'Jim\'s Ammo');
INSERT INTO `server_traders` VALUES ('53', 'CIV_EuroMan01_EP1', '6', 'friendly', '', 'Joe\'s Weapons');
INSERT INTO `server_traders` VALUES ('54', 'ibr_lingorman7s', '6', 'friendly', '', 'Rodger\'s 4x4');
INSERT INTO `server_traders` VALUES ('55', 'Damsel3', '6', 'friendly', '[\"ItemCopperBar\",\"TrashJackDaniels\",1,1,\"buy\",\"Empty Wiskey Bottle\",\"Copper Bar\",101]', 'Tina\'s Tarts');
INSERT INTO `server_traders` VALUES ('56', 'Rocker4', '6', 'friendly', '', 'Sly\'s Moto');
INSERT INTO `server_traders` VALUES ('57', 'Worker4', '6', 'neutral', '', 'Jim\'s Used Cars');
INSERT INTO `server_traders` VALUES ('58', 'ibr_lingorman7', '6', 'neutral', '', 'Chucks Weapons');
INSERT INTO `server_traders` VALUES ('59', 'ibr_lingorman5', '6', 'neutral', '', 'Buck\'s Shot');
INSERT INTO `server_traders` VALUES ('60', 'Citizen3_EP1', '6', 'neutral', '', 'Santo\'s Wholesale');
INSERT INTO `server_traders` VALUES ('61', 'ibr_lingorman6', '6', 'friendly', '', 'Tire Guy');
INSERT INTO `server_traders` VALUES ('62', 'ibr_lingorman6s', '6', 'friendly', '', 'Raul\'s Parts');
INSERT INTO `server_traders` VALUES ('63', 'TK_CIV_Woman02_EP1', '6', 'neutral', '', 'Samish Shop');
INSERT INTO `server_traders` VALUES ('64', 'Pilot_EP1', '6', 'friendly', '', 'AWOL\'s Planes');
INSERT INTO `server_traders` VALUES ('65', 'TK_CIV_Worker01_EP1', '6', 'friendly', '', 'Rommelo\'s Raceway');
INSERT INTO `server_traders` VALUES ('66', 'RU_Doctor', '6', 'neutral', '[\"FoodBioMeat\",\"ItemZombieParts\",1,1,\"buy\",\"Zombie Parts\",\"Bio Meat\",101]', 'Mad Scientist ');
INSERT INTO `server_traders` VALUES ('67', 'TK_CIV_Woman02_EP1', '4', 'neutral', '', 'Farhah\'s General Supplies');
INSERT INTO `server_traders` VALUES ('68', 'TK_CIV_Takistani05_EP1', '4', 'neutral', '', 'Akwhell\'s Vehicles');
INSERT INTO `server_traders` VALUES ('69', 'TK_CIV_Takistani03_EP1', '4', 'neutral', '', 'Amjad\'s Ammunition');
INSERT INTO `server_traders` VALUES ('70', 'TK_CIV_Takistani02_EP1', '4', 'neutral', '', 'Hassan\'s Weapons');
INSERT INTO `server_traders` VALUES ('71', 'CIV_EuroMan01_EP1', '4', 'friendly', '', 'Dan\'s Parts');
INSERT INTO `server_traders` VALUES ('72', 'CIV_EuroMan02_EP1', '4', 'friendly', '', 'Darren\'s Auto');
INSERT INTO `server_traders` VALUES ('73', 'Dr_Hladik_EP1', '4', 'friendly', '[\"FoodBioMeat\",\"ItemZombieParts\",1,1,\"buy\",\"Zombie Parts\",\"Bio Meat\",101]', 'Dr. House');
INSERT INTO `server_traders` VALUES ('74', 'CIV_EuroWoman01_EP1', '4', 'friendly', '', 'Heather\'s General Supplies');
INSERT INTO `server_traders` VALUES ('76', 'Worker1', '4', 'friendly', '', 'Greg\'s Ammunition');
INSERT INTO `server_traders` VALUES ('77', 'Tanny_PMC', '4', 'friendly', '', 'Joe\'s Weapons');
INSERT INTO `server_traders` VALUES ('78', 'Profiteer4', '4', 'friendly', '', 'Steven\'s Hero Shop');
INSERT INTO `server_traders` VALUES ('79', 'GUE_Worker2', '13', 'friendly', '', 'Pete\'s Armed Choppers');
INSERT INTO `server_traders` VALUES ('80', 'Soldier_Sniper_KSVK_PMC', '13', 'friendly', '', 'Jacks Weapons');
INSERT INTO `server_traders` VALUES ('81', 'Soldier_GL_PMC', '13', 'friendly', '', 'Robby\'s Ammo Dump');
INSERT INTO `server_traders` VALUES ('82', 'GUE_Soldier_Pilot', '13', 'friendly', '', 'Hanz Unarmed Choppers');
INSERT INTO `server_traders` VALUES ('83', 'GUE_Woodlander3', '13', 'friendly', '', 'Scott\'s Repair Shop');
INSERT INTO `server_traders` VALUES ('84', 'Worker4', '13', 'neutral', '', 'Capt. Yak');
INSERT INTO `server_traders` VALUES ('85', 'Reynolds_PMC', '13', 'neutral', '', 'Wholesaler Reynolds');
INSERT INTO `server_traders` VALUES ('86', 'Soldier_Sniper_PMC', '13', 'friendly', '', 'Chucks Hero Shop');
INSERT INTO `server_traders` VALUES ('87', 'GUE_Soldier_3', '13', 'friendly', '', 'Tom\'s Armed Vehicles');
INSERT INTO `server_traders` VALUES ('88', 'RU_Doctor', '13', 'friendly', '', 'Dr. Hammond');
INSERT INTO `server_traders` VALUES ('89', 'Doctor', '13', 'friendly', '', 'Bones');
INSERT INTO `server_traders` VALUES ('90', 'UN_CDF_Soldier_Pilot_EP1', '13', 'friendly', '', 'Murdock\'s Planes');
INSERT INTO `server_traders` VALUES ('91', 'RU_Worker4', '13', 'neutral', '', 'Sven\'s Parts');
INSERT INTO `server_traders` VALUES ('92', 'RU_Woodlander4', '13', 'neutral', '', 'Slav\'s Vehicles');
INSERT INTO `server_traders` VALUES ('93', 'Citizen3', '13', 'neutral', '', 'Trin\'s General Supplies');
INSERT INTO `server_traders` VALUES ('94', 'RU_Damsel5', '13', 'friendly', '[\"FoodBioMeat\",\"ItemZombieParts\",1,1,\"buy\",\"Zombie Parts\",\"Bio Meat\",101]', 'Melissa\'s General Supplies');
INSERT INTO `server_traders` VALUES ('95', 'Dr_Hladik_EP1', '13', 'neutral', '[\"FoodBioMeat\",\"ItemZombieParts\",1,1,\"buy\",\"Zombie Parts\",\"Bio Meat\",101]', 'Dr. Vu');
INSERT INTO `server_traders` VALUES ('96', 'GUE_Commander', '13', 'neutral', '', 'Gabriel\'s Weapons');
INSERT INTO `server_traders` VALUES ('97', 'GUE_Soldier_CO', '13', 'neutral', '', 'Cohaagen\'s Ammunition');
INSERT INTO `server_traders` VALUES ('98', 'Profiteer2_EP1', '13', 'neutral', '', 'Chad\'s Armed Boats');
INSERT INTO `server_traders` VALUES ('99', 'RU_Farmwife5', '13', 'neutral', '', 'Mrs. Doubtfire');
INSERT INTO `server_traders` VALUES ('100', 'GUE_Woodlander1', '13', 'neutral', '', 'Dante\'s Bandit Choppers');
INSERT INTO `server_traders` VALUES ('101', 'RU_Worker1', '13', 'neutral', '', 'Javon\'s Parts');
INSERT INTO `server_traders` VALUES ('102', 'GUE_Soldier_2', '13', 'neutral', '', 'Wholesaler Darren');
INSERT INTO `server_traders` VALUES ('103', 'Worker2', '11', 'neutral', '', 'Airplane Dealer');
INSERT INTO `server_traders` VALUES ('104', 'GUE_Villager4', '15', 'friendly', '', 'Bastions Parts Supplies');
INSERT INTO `server_traders` VALUES ('105', 'RU_Farmwife4', '15', 'friendly', '', 'Alda\'s General Supplies');
INSERT INTO `server_traders` VALUES ('106', 'RU_Farmwife3', '15', 'neutral', '', 'Carole\'s General Supplies');
INSERT INTO `server_traders` VALUES ('107', 'Dr_Hladik_EP1', '15', 'friendly', '[\"FoodBioMeat\",\"ItemZombieParts\",1,1,\"buy\",\"Zombie Parts\",\"Bio Meat\",101]', 'Dr. Zoidberg');
INSERT INTO `server_traders` VALUES ('108', 'CIV_Contractor2_BAF', '15', 'friendly', '', 'High End Ammo');
INSERT INTO `server_traders` VALUES ('109', 'Soldier_Sniper_PMC', '15', 'friendly', '', 'High End Weapons');
INSERT INTO `server_traders` VALUES ('110', 'GUE_Soldier_Pilot', '15', 'friendly', '', 'Rutahn\'s Vehicles.');
INSERT INTO `server_traders` VALUES ('111', 'GUE_Soldier_2', '15', 'neutral', '', 'Rhven\'s Weapons');
INSERT INTO `server_traders` VALUES ('112', 'GUE_Soldier_1', '15', 'neutral', '', 'Merkaba\'s Ammo');
INSERT INTO `server_traders` VALUES ('113', 'GUE_Soldier_CO', '15', 'neutral', '', 'Robsyah\'s Choppers');
INSERT INTO `server_traders` VALUES ('114', 'GUE_Woodlander2', '15', 'friendly', '', 'Popeye\'s Boats ');
INSERT INTO `server_traders` VALUES ('115', 'GUE_Soldier_Crew', '15', 'neutral', '', 'Aaron\'s Vehicles');
INSERT INTO `server_traders` VALUES ('116', 'Woodlander2', '15', 'neutral', '', 'Staven\'s Repair Shop');
INSERT INTO `server_traders` VALUES ('117', 'UN_CDF_Soldier_MG_EP1', '15', 'friendly', '', 'Larz\'s Wholesale');
INSERT INTO `server_traders` VALUES ('118', 'UN_CDF_Soldier_EP1', '15', 'friendly', '', 'Dateu\'s Wholesale');
INSERT INTO `server_traders` VALUES ('119', 'Tanny_PMC', '15', 'hero', '', 'Tanner\'s Hero Supplies');
