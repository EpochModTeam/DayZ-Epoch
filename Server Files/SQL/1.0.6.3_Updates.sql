/*
	DayZ Epoch 1.0.6.3 Updates
	
	RUN THIS FILE IF UPDATING AN EXISTING 1062 DATABASE TO 1063.
	NEW DATABASES SHOULD USE EPOCH.SQL INSTEAD.
*/


/* 45Rnd_545x39_RPK was removed in the latest A2OA CorePatch */
UPDATE `Traders_DATA` SET `item` = '["75Rnd_545x39_RPK",1]' WHERE `item` = '["45Rnd_545x39_RPK",1]';
UPDATE character_data SET Backpack = REPLACE(Backpack, '"45Rnd_545x39_RPK"', '"75Rnd_545x39_RPK"') WHERE INSTR(Backpack, '"45Rnd_545x39_RPK"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"45Rnd_545x39_RPK"', '"75Rnd_545x39_RPK"') WHERE INSTR(Inventory, '"45Rnd_545x39_RPK"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"45Rnd_545x39_RPK"', '"75Rnd_545x39_RPK"') WHERE INSTR(Inventory, '"45Rnd_545x39_RPK"') > 0;