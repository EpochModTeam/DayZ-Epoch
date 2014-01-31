--
-- http://dayzepoch.com/wiki/index.php?title=Server_Installation_Instructions_Extended
--
DROP EVENT IF EXISTS updateStockDaily;
CREATE EVENT updateStockDaily
    ON SCHEDULE EVERY 1 DAY
    COMMENT 'Updates out of stock vendors'
    DO
      UPDATE `traders_data` SET qty=10 WHERE qty=0 AND afile<>'trade_any_vehicle' AND afile<>'trade_any_boat';
;
DROP EVENT IF EXISTS removeDamagedVehicles;
CREATE EVENT removeDamagedVehicles
    ON SCHEDULE EVERY 1 DAY
    COMMENT 'Removes damaged vehicles'
    DO
      DELETE FROM `object_data` WHERE Damage = 1;
;
DROP EVENT IF EXISTS removeObjectEmpty;
CREATE EVENT removeObjectEmpty
    ON SCHEDULE EVERY 1 DAY
    COMMENT 'Removes abandoned storage objects and vehicles'
    DO
      DELETE FROM `object_data` WHERE `LastUpdated` < DATE_SUB(CURRENT_TIMESTAMP, INTERVAL 14 DAY) AND `Datestamp` < DATE_SUB(CURRENT_TIMESTAMP, INTERVAL 24 DAY) AND ( (`Inventory` IS NULL) OR (`Inventory` = '[]') OR (`Inventory` = '[[[],[]],[[],[]],[[],[]]]') )
;
DROP EVENT IF EXISTS removeObjectOld;
CREATE EVENT removeObjectOld
    ON SCHEDULE EVERY 1 DAY
    COMMENT 'Removes old objects and vehicles'
    DO
      DELETE FROM `object_data` WHERE `LastUpdated` < DATE_SUB(CURRENT_TIMESTAMP, INTERVAL 24 DAY) AND `Datestamp` < DATE_SUB(CURRENT_TIMESTAMP, INTERVAL 42 DAY)
;
DROP EVENT IF EXISTS setDamageOnAge;
CREATE EVENT setDamageOnAge
    ON SCHEDULE EVERY 1 DAY
    COMMENT 'This sets damage on a wall so that it can be maintained'
    DO
      UPDATE `object_data` SET `Damage`=0.1 WHERE `ObjectUID` <> 0 AND `CharacterID` <> 0 AND `Datestamp` < DATE_SUB(CURRENT_TIMESTAMP, INTERVAL 3 DAY) AND ( (`Inventory` IS NULL) OR (`Inventory` = '[]') )
;

-- Find Vehicle Key Fund
-- SELECT FindVehicleKeys(CharID/KeyID);
DELIMITER $$
DROP FUNCTION IF EXISTS `FindVehicleKeysCount`$$
CREATE FUNCTION `FindVehicleKeysCount` (`keyId` INT) RETURNS INT
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
END$$
DELIMITER ;

-- Unlock
DROP EVENT `UnlockNonKeyVehicles`;
CREATE EVENT `UnlockNonKeyVehicles`
	ON SCHEDULE AT NOW()
	ON COMPLETION NOT PRESERVE
	ENABLE
	DO
		UPDATE
			object_data
		SET
			object_data.CharacterID = 0
		WHERE
			object_data.CharacterID <> 0
			AND object_data.CharacterID <= 12500
			AND object_data.Classname NOT LIKE 'Tent%'
			AND object_data.Classname NOT LIKE '%Locked'
			AND object_data.Classname NOT LIKE 'Land%'
			AND object_data.Classname NOT LIKE 'Cinder%'
			AND object_data.Classname NOT LIKE 'Wood%'
			AND object_data.Classname NOT LIKE 'Metal%'
			AND object_data.Classname NOT LIKE '%Storage%'
			AND object_data.Classname NOT IN ('OutHouse_DZ', 'GunRack_DZ', 'WorkBench_DZ', 'Sandbag1_DZ', 'FireBarrel_DZ', 'DesertCamoNet_DZ', 'StickFence_DZ', 'LightPole_DZ', 'DeerStand_DZ', 'ForestLargeCamoNet_DZ', 'Plastic_Pole_EP1_DZ', 'Hedgehog_DZ', 'FuelPump_DZ', 'Fort_RazorWire', 'SandNest_DZ', 'ForestCamoNet_DZ', 'Fence_corrugated_DZ', 'CanvasHut_DZ', 'Generator_DZ')
			AND FindVehicleKeys(object_data.CharacterID) = 0
;

-- Delete
DROP EVENT `DeleteNonKeyVehicles`;
CREATE EVENT `DeleteNonKeyVehicles`
	ON SCHEDULE AT NOW()
	ON COMPLETION NOT PRESERVE
	ENABLE
	DO
		DELETE FROM
			object_data
		WHERE
			object_data.CharacterID <> 0
			AND object_data.CharacterID <= 12500
			AND object_data.Classname NOT LIKE 'Tent%'
			AND object_data.Classname NOT LIKE '%Locked'
			AND object_data.Classname NOT LIKE 'Land%'
			AND object_data.Classname NOT LIKE 'Cinder%'
			AND object_data.Classname NOT LIKE 'Wood%'
			AND object_data.Classname NOT LIKE 'Metal%'
			AND object_data.Classname NOT LIKE '%Storage%'
			AND object_data.Classname NOT IN ('OutHouse_DZ', 'GunRack_DZ', 'WorkBench_DZ', 'Sandbag1_DZ', 'FireBarrel_DZ', 'DesertCamoNet_DZ', 'StickFence_DZ', 'LightPole_DZ', 'DeerStand_DZ', 'ForestLargeCamoNet_DZ', 'Plastic_Pole_EP1_DZ', 'Hedgehog_DZ', 'FuelPump_DZ', 'Fort_RazorWire', 'SandNest_DZ', 'ForestCamoNet_DZ', 'Fence_corrugated_DZ', 'CanvasHut_DZ', 'Generator_DZ')
			AND FindVehicleKeys(object_data.CharacterID) = 0
;