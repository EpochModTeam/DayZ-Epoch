UPDATE character_data SET Backpack = REPLACE(Backpack, '"Skin_gsc_cloth_loner_head_DZ"', '"Skin_Survivor2_DZ"') WHERE INSTR(Backpack, '"Skin_gsc_cloth_loner_head_DZ"') > 0;
UPDATE character_data SET Inventory = REPLACE(Inventory, '"Skin_gsc_cloth_loner_head_DZ"', '"Skin_Survivor2_DZ"') WHERE INSTR(Inventory, '"Skin_gsc_cloth_loner_head_DZ"') > 0;
UPDATE object_data SET Inventory = REPLACE(Inventory, '"Skin_gsc_cloth_loner_head_DZ"', '"Skin_Survivor2_DZ"') WHERE INSTR(Inventory, '"Skin_gsc_cloth_loner_head_DZ"') > 0;
UPDATE character_data SET Model = "Survivor2_DZ" WHERE Model = "gsc_cloth_loner_head_DZ";
