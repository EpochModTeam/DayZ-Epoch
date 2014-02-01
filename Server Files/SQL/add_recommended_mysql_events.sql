--
-- http://dayzepoch.com/wiki/index.php?title=Server_Installation_Instructions_Extended
--

-- ----------------------------
-- Function structure for FindVehicleKeysCount
-- ----------------------------
DROP FUNCTION IF EXISTS `FindVehicleKeysCount`;
DELIMITER ;;
CREATE FUNCTION `FindVehicleKeysCount`(`keyId` INT) RETURNS int(11)
BEGIN
    DECLARE totalKeys INT DEFAULT 0;
    DECLARE keyName VARCHAR(32) DEFAULT "";
    DECLARE keysInChar INT DEFAULT 0;
    DECLARE keysInObj INT DEFAULT 0;

    SET keyName = (CASE
        WHEN `keyId` < 2501 THEN CONCAT('ItemKeyGreen', `keyId`)
        WHEN `keyId` < 5001 THEN CONCAT('ItemKeyRed', `keyId` - 2500)
        WHEN `keyId` < 7501 THEN CONCAT('ItemKeyBlue', `keyId` - 5000)
        WHEN `keyId` < 10001 THEN CONCAT('ItemKeyYellow', `keyId` - 7500)
        WHEN `keyId` < 12501 THEN CONCAT('ItemKeyBlack', `keyId` - 10000)
        ELSE 'ERROR'
    END);

    SET keysInChar = (SELECT COUNT(*) FROM `Character_DATA` WHERE `Alive` = '1' AND (`Inventory` LIKE CONCAT('%', keyName, '%') OR `Backpack` LIKE CONCAT('%', keyName, '%')));
    SET keysInObj = (SELECT COUNT(*) FROM `Object_DATA` WHERE `Inventory` LIKE CONCAT('%', keyName, '%'));

    RETURN (keysInChar + keysInObj);
END
;;
DELIMITER ;

-- ----------------------------
-- Function structure for DeleteNonKeyVehicles
-- Example usage: SELECT DeleteNonKeyVehicles();
-- ----------------------------
DROP FUNCTION IF EXISTS `DeleteNonKeyVehicles`;
DELIMITER ;;
CREATE FUNCTION `DeleteNonKeyVehicles`() RETURNS int(11)
BEGIN
	DELETE FROM
		`Object_DATA`
	WHERE
		`Object_DATA`.`CharacterID` <> 0
		AND `Object_DATA`.`CharacterID` <= 12500
		AND `Object_DATA`.`Classname` NOT LIKE 'Tent%'
		AND `Object_DATA`.`Classname` NOT LIKE '%Locked'
		AND `Object_DATA`.`Classname` NOT LIKE 'Land%'
		AND `Object_DATA`.`Classname` NOT LIKE 'Cinder%'
		AND `Object_DATA`.`Classname` NOT LIKE 'Wood%'
		AND `Object_DATA`.`Classname` NOT LIKE 'Metal%'
		AND `Object_DATA`.`Classname` NOT LIKE '%Storage%'
		AND `Object_DATA`.`Classname` NOT IN ('OutHouse_DZ', 'GunRack_DZ', 'WorkBench_DZ', 'Sandbag1_DZ', 'FireBarrel_DZ', 'DesertCamoNet_DZ', 'StickFence_DZ', 'LightPole_DZ', 'DeerStand_DZ', 'ForestLargeCamoNet_DZ', 'Plastic_Pole_EP1_DZ', 'Hedgehog_DZ', 'FuelPump_DZ', 'Fort_RazorWire', 'SandNest_DZ', 'ForestCamoNet_DZ', 'Fence_corrugated_DZ', 'CanvasHut_DZ', 'Generator_DZ')
		AND FindVehicleKeysCount(Object_DATA.CharacterID) = 0;

	RETURN ROW_COUNT();
END
;;
DELIMITER ;

-- ----------------------------
-- Event structure for removeDamagedVehicles
-- ----------------------------
DROP EVENT IF EXISTS `removeDamagedVehicles`;
DELIMITER ;;
CREATE EVENT `removeDamagedVehicles` ON SCHEDULE EVERY 1 DAY COMMENT 'Removes damaged vehicles' DO DELETE FROM `Object_DATA` WHERE Damage = 1
;;
DELIMITER ;

-- ----------------------------
-- Event structure for removeObjectEmpty
-- ----------------------------
DROP EVENT IF EXISTS `removeObjectEmpty`;
DELIMITER ;;
CREATE EVENT `removeObjectEmpty` ON SCHEDULE EVERY 1 DAY COMMENT 'Removes abandoned storage objects and vehicles' DO DELETE FROM `Object_DATA` WHERE `LastUpdated` < DATE_SUB(CURRENT_TIMESTAMP, INTERVAL 14 DAY) AND `Datestamp` < DATE_SUB(CURRENT_TIMESTAMP, INTERVAL 24 DAY) AND ( (`Inventory` IS NULL) OR (`Inventory` = '[]') OR (`Inventory` = '[[[],[]],[[],[]],[[],[]]]') )
;;
DELIMITER ;

-- ----------------------------
-- Event structure for removeObjectOld
-- ----------------------------
DROP EVENT IF EXISTS `removeObjectOld`;
DELIMITER ;;
CREATE EVENT `removeObjectOld` ON SCHEDULE EVERY 1 DAY COMMENT 'Removes old objects and vehicles' DO DELETE FROM `Object_DATA` WHERE `LastUpdated` < DATE_SUB(CURRENT_TIMESTAMP, INTERVAL 24 DAY) AND `Datestamp` < DATE_SUB(CURRENT_TIMESTAMP, INTERVAL 42 DAY)
;;
DELIMITER ;

-- ----------------------------
-- Event structure for setDamageOnAge
-- ----------------------------
DROP EVENT IF EXISTS `setDamageOnAge`;
DELIMITER ;;
CREATE EVENT `setDamageOnAge` ON SCHEDULE EVERY 1 DAY COMMENT 'This sets damage on a wall so that it can be maintained' DO UPDATE `Object_DATA` SET `Damage`=0.1 WHERE `ObjectUID` <> 0 AND `CharacterID` <> 0 AND `Datestamp` < DATE_SUB(CURRENT_TIMESTAMP, INTERVAL 3 DAY) AND ( (`Inventory` IS NULL) OR (`Inventory` = '[]') )
;;
DELIMITER ;

-- ----------------------------
-- Event structure for updateStockDaily
-- ----------------------------
DROP EVENT IF EXISTS `updateStockDaily`;
DELIMITER ;;
CREATE EVENT `updateStockDaily` ON SCHEDULE EVERY 1 DAY COMMENT 'Updates out of stock vendors' DO UPDATE `Traders_DATA` SET qty=10 WHERE qty=0 AND afile<>'trade_any_vehicle' AND afile<>'trade_any_boat'
;;
DELIMITER ;

-- ----------------------------
-- Event structure for UnlockNonKeyVehicles
-- ----------------------------
DROP EVENT IF EXISTS `UnlockNonKeyVehicles`;
DELIMITER ;;
CREATE EVENT `UnlockNonKeyVehicles` ON SCHEDULE EVERY 1 DAY DO UPDATE
			`Object_DATA`
		SET
			`Object_DATA`.`CharacterID` = 0
		WHERE
			`Object_DATA`.`CharacterID` <> 0
			AND `Object_DATA`.`CharacterID` <= 12500
			AND `Object_DATA`.`Classname` NOT LIKE 'Tent%'
			AND `Object_DATA`.`Classname` NOT LIKE '%Locked'
			AND `Object_DATA`.`Classname` NOT LIKE 'Land%'
			AND `Object_DATA`.`Classname` NOT LIKE 'Cinder%'
			AND `Object_DATA`.`Classname` NOT LIKE 'Wood%'
			AND `Object_DATA`.`Classname` NOT LIKE 'Metal%'
			AND `Object_DATA`.`Classname` NOT LIKE '%Storage%'
			AND `Object_DATA`.`Classname` NOT IN ('OutHouse_DZ', 'GunRack_DZ', 'WorkBench_DZ', 'Sandbag1_DZ', 'FireBarrel_DZ', 'DesertCamoNet_DZ', 'StickFence_DZ', 'LightPole_DZ', 'DeerStand_DZ', 'ForestLargeCamoNet_DZ', 'Plastic_Pole_EP1_DZ', 'Hedgehog_DZ', 'FuelPump_DZ', 'Fort_RazorWire', 'SandNest_DZ', 'ForestCamoNet_DZ', 'Fence_corrugated_DZ', 'CanvasHut_DZ', 'Generator_DZ')
			AND FindVehicleKeysCount(Object_DATA.CharacterID) = 0
;;
DELIMITER ;