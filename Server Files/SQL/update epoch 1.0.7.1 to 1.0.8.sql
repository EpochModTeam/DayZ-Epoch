UPDATE character_data SET Backpack = REPLACE(Backpack, '"GPMG_TriPod_GrenadeLauncher_Static_kit"', '"GPMG_TriPod_MG_Static_kit"') WHERE INSTR(Backpack, '"GPMG_TriPod_GrenadeLauncher_Static_kit"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"GPMG_TriPod_GrenadeLauncher_Static_kit"', '"GPMG_TriPod_MG_Static_kit"') WHERE INSTR(Inventory, '"GPMG_TriPod_GrenadeLauncher_Static_kit"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"GPMG_TriPod_GrenadeLauncher_Static_kit"', '"GPMG_TriPod_MG_Static_kit"') WHERE INSTR(Inventory, '"GPMG_TriPod_GrenadeLauncher_Static_kit"') > 0;

UPDATE character_data SET Backpack = REPLACE(Backpack, '"GMG_Tripod_MG_Static_kit"', '"GMG_Tripod_GrenadeLauncher_Static_kit"') WHERE INSTR(Backpack, '"GMG_Tripod_MG_Static_kit"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"GMG_Tripod_MG_Static_kit"', '"GMG_Tripod_GrenadeLauncher_Static_kit"') WHERE INSTR(Inventory, '"GMG_Tripod_MG_Static_kit"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"GMG_Tripod_MG_Static_kit"', '"GMG_Tripod_GrenadeLauncher_Static_kit"') WHERE INSTR(Inventory, '"GMG_Tripod_MG_Static_kit"') > 0;

UPDATE object_data SET Classname = 'GPMG_TriPod_MG_Static_DZ' WHERE Classname = 'GPMG_TriPod_GrenadeLauncher_Static_DZ';
UPDATE object_data SET Classname = 'GMG_Tripod_GrenadeLauncher_Static_DZ' WHERE Classname = 'GMG_Tripod_MG_Static_DZ';