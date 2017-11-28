/*
	DayZ Epoch 1.0.6.2 Updates
	
	RUN THIS FILE IF UPDATING AN EXISTING 1061 DATABASE TO 1062.
	NEW DATABASES SHOULD USE EPOCH.SQL INSTEAD.
	EXISTING 1051 DATABASES SHOULD RUN 1.0.6_UPDATES.SQL FIRST, THEN RUN THIS FILE.
*/


/* Update L85 and SVD classnames */
UPDATE `Traders_DATA` SET `item` = '["L85A2_DZ",3]' WHERE `item` = '["L85_Holo_DZ",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"L85_Holo_DZ"', '"L85A2_Holo_DZ"') WHERE INSTR(Backpack, '"L85_Holo_DZ"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"L85_Holo_DZ"', '"L85A2_Holo_DZ"') WHERE INSTR(Inventory, '"L85_Holo_DZ"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"L85_Holo_DZ"', '"L85A2_Holo_DZ"') WHERE INSTR(Inventory, '"L85_Holo_DZ"') > 0;

UPDATE `Traders_DATA` SET `item` = '["L85A2_ACOG_DZ",3]' WHERE `item` = '["BAF_L85A2_RIS_ACOG",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"BAF_L85A2_RIS_ACOG"', '"L85A2_ACOG_DZ"') WHERE INSTR(Backpack, '"BAF_L85A2_RIS_ACOG"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"BAF_L85A2_RIS_ACOG"', '"L85A2_ACOG_DZ"') WHERE INSTR(Inventory, '"BAF_L85A2_RIS_ACOG"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"BAF_L85A2_RIS_ACOG"', '"L85A2_ACOG_DZ"') WHERE INSTR(Inventory, '"BAF_L85A2_RIS_ACOG"') > 0;

delete from `Traders_DATA` WHERE `item` = '["BAF_L85A2_RIS_SUSAT",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"BAF_L85A2_RIS_SUSAT"', '"L85A2_ACOG_DZ"') WHERE INSTR(Backpack, '"BAF_L85A2_RIS_SUSAT"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"BAF_L85A2_RIS_SUSAT"', '"L85A2_ACOG_DZ"') WHERE INSTR(Inventory, '"BAF_L85A2_RIS_SUSAT"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"BAF_L85A2_RIS_SUSAT"', '"L85A2_ACOG_DZ"') WHERE INSTR(Inventory, '"BAF_L85A2_RIS_SUSAT"') > 0;

UPDATE `Traders_DATA` SET `item` = '["SVD_PSO1_DZ",3]' WHERE `item` = '["SVD_DZ",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"SVD_DZ"', '"SVD_PSO1_DZ"') WHERE INSTR(Backpack, '"SVD_DZ"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"SVD_DZ"', '"SVD_PSO1_DZ"') WHERE INSTR(Inventory, '"SVD_DZ"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"SVD_DZ"', '"SVD_PSO1_DZ"') WHERE INSTR(Inventory, '"SVD_DZ"') > 0;

UPDATE `Traders_DATA` SET `item` = '["SVD_PSO1_Gh_DZ",3]' WHERE `item` = '["SVD_Gh_DZ",3]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"SVD_Gh_DZ"', '"SVD_PSO1_Gh_DZ"') WHERE INSTR(Backpack, '"SVD_Gh_DZ"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"SVD_Gh_DZ"', '"SVD_PSO1_Gh_DZ"') WHERE INSTR(Inventory, '"SVD_Gh_DZ"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"SVD_Gh_DZ"', '"SVD_PSO1_Gh_DZ"') WHERE INSTR(Inventory, '"SVD_Gh_DZ"') > 0;


/* PoliceCar was removed from dayz_vehicles */
UPDATE `object_data` SET `Classname` = 'car_sedan' WHERE `Classname` = 'policecar';
DELETE FROM `Traders_DATA` WHERE item = '["policecar"]';


/* THIS PROCEDURE IS REQUIRED FOR 1062 AND RETURNS THE OBJECT ID MUCH MORE EFFICIENTLY THAN THE METHOD IN 1061 SQF */
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