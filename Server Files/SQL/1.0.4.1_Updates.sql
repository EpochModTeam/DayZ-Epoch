UPDATE `Traders_DATA` SET `buy` = '[4,"ItemBriefcase100oz",1]', `sell` = '[2,"ItemGoldBar10oz",1]' WHERE `item` LIKE  '%pipebomb%';
UPDATE `Traders_DATA` SET `buy` = '[4,"ItemBriefcase100oz",1]', `sell` = '[1,"ItemBriefcase100oz",1]' WHERE `item` LIKE  '%HMMWV_M1151_M2_CZ_DES_EP1%';
UPDATE `Traders_DATA` SET `buy` = '[1,"ItemBriefcase100oz",1]', `sell` = '[5,"ItemGoldBar10oz",1]' WHERE `item` LIKE  '%HMMWV_M998A2_SOV_DES_EP1%';
UPDATE `Traders_DATA` SET `buy` = '[1,"ItemBriefcase100oz",1]', `sell` = '[5,"ItemGoldBar10oz",1]' WHERE `item` LIKE  '%LandRover_Special_CZ_EP1%';
UPDATE `Traders_DATA` SET `buy` = '[6,"ItemGoldBar10oz",1]', `sell` = '[3,"ItemGoldBar10oz",1]' WHERE `item` LIKE  '%LandRover_MG_TK_EP1%';
UPDATE `Traders_DATA` SET `buy` = '[6,"ItemGoldBar10oz",1]', `sell` = '[3,"ItemGoldBar10oz",1]' WHERE `item` LIKE  '%UAZ_MG_TK_EP1%';
UPDATE `Traders_DATA` SET `buy` = '[4,"ItemBriefcase100oz",1]', `sell` = '[1,"ItemBriefcase100oz",1]' WHERE `item` LIKE  '%CH_47F_EP1%';
UPDATE `Traders_DATA` SET `buy` = '[2,"ItemBriefcase100oz",1]', `sell` = '[1,"ItemBriefcase100oz",1]' WHERE `item` LIKE  '%Mi17%';
UPDATE `Traders_DATA` SET `buy` = '[2,"ItemBriefcase100oz",1]', `sell` = '[1,"ItemBriefcase100oz",1]' WHERE `item` LIKE  '%GAZ_Vodnik_DZE%';
UPDATE `Traders_DATA` SET `buy` = '[1,"ItemBriefcase100oz",1]', `sell` = '[5,"ItemGoldBar10oz",1]' WHERE `item` LIKE  '%GAZ_Vodnik_MedEvac%';

INSERT IGNORE INTO `Traders_DATA` (`id`, `item`, `qty`, `buy`, `sell`, `order`, `tid`, `afile`) VALUES (NULL,'["BAF_Merlin_DZE",2]', 261, '[2,"ItemBriefcase100oz",1]]', '[1,"ItemBriefcase100oz",1]]', 0, 517, 'trade_any_vehicle');
