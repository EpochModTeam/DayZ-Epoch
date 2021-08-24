/*
    File: player_regularSave.sqf
    Organisation Author: DayZMod Team
	
    Email: N/A
    Creation date: 2020-12-30 17:20:00
    Last modified time: 2021-04-16 09:20:00
    Description:
        Requests a simple save for the player object. Does not save the ammo count but it does not interrupt actions like shooting.
    Example:
        call player_regularSave;
    Return:
        Nothing
*/

local _magazineArray = (magazines player) - ["CSGAS","Hatchet_Swing","Crowbar_Swing","Machete_Swing","Bat_Swing","BatBarbed_Swing","BatNails_Swing","Fishing_Swing","Sledge_Swing"];

PVDZ_plr_Save = [player,_magazineArray];
publicVariableServer "PVDZ_plr_Save";