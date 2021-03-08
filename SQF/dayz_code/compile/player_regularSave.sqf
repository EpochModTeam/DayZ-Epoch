/*
    File: player_regularSave.sqf
    Organisation Author: DayZMod Team
	
    Email: N/A
    Creation date: 2020-12-30 17:20:00
    Last modified time: 2021-03-08 14:04:00
    Description:
        Requests a simple save for the player object.
    Example:
        call player_regularSave;
    Return:
        Nothing
*/

PVDZ_plr_Save = [player,nil,dayz_onBack,weapons player];
publicVariableServer "PVDZ_plr_Save";