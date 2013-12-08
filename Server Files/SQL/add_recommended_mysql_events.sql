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