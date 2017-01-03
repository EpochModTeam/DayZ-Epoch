private ["_item","_result","_dis","_sfx","_num","_breaking","_counter","_rocks","_findNearestRock",
"_objName","_countOut","_isOk","_proceed","_animState","_started","_finished","_isMedic","_itemOut","_wpPos","_nearByPile"];

_item = _this;
call gear_ui_init;
closeDialog 1;

if(dayz_workingInprogress) exitWith { localize "STR_MINING_IN_PROGRESS" call dayz_rollingMessages; };
dayz_workingInprogress = true;

// allowed rocks list move this later
_rocks = ["r2_boulder1.p3d","r2_boulder2.p3d","r2_rock1.p3d","r2_rock2.p3d","r2_rocktower.p3d","r2_rockwall.p3d","r2_stone.p3d"];
_findNearestRock = objNull;

{
    _objName = _x call fn_getModelName;
    // Exit since we found a rock
    if (_objName in _rocks) exitWith { _findNearestRock = _x; };
} foreach nearestObjects [getPosATL player, [], 8];


if (!isNull _findNearestRock) then {
    _countOut = 2 + floor(random 3);

    //Remove melee magazines (BIS_fnc_invAdd fix) (add new melee ammo to array if needed)
    {player removeMagazines _x} forEach ["Hatchet_Swing","Crowbar_Swing","Machete_Swing","Fishing_Swing","Sledge_Swing"];

    // Start stone mining loop
    _counter = 0;
    _isOk = true;
    _proceed = false;

    while {_isOk} do {
        //play action   
        player playActionNow "Medic";

        //setup alert and speak
        _dis=20;
        _sfx = "minestone";
        [player,_sfx,0,false,_dis] call dayz_zombieSpeak;
        [player,_dis,true,(getPosATL player)] call player_alertZombies;
        
        // Working-Factor for mining stone.
        ["Working",0,[100,15,10,0]] call dayz_NutritionSystem;

        r_interrupt = false;
        _animState = animationState player;
        r_doLoop = true;
        _started = false;
        _finished = false;

        while {r_doLoop} do {
            _animState = animationState player;
            _isMedic = ["medic",_animState] call fnc_inString;
            if (_isMedic) then {
                _started = true;
            };
            if (_started and !_isMedic) then {
                r_doLoop = false;
                _finished = true;
            };
            if (r_interrupt) then {
                r_doLoop = false;
            };

            uiSleep 0.1;
        };

        if(!_finished) exitWith {
            _isOk = false;
            _proceed = false;
        };

        if(_finished) then {                
            _breaking = false;
			if (dayz_toolBreaking && {[0.09] call fn_chance}) then {
                _breaking = true;
                if ("MeleePickaxe" in weapons player) then {
                    player removeWeapon "MeleePickaxe";
                } else {
                    if ("ItemPickaxe" in weapons player) then {
                        player removeWeapon "ItemPickaxe";
                    } else {
                        if (dayz_onBack == "MeleePickaxe") then {
                            dayz_onBack = "";
                        };
                    };
                };
                if (!("ItemPickaxeBroken" in weapons player)) then {
                    player addWeapon "ItemPickaxeBroken";
                };
            };
            
            _counter = _counter + 1;
            _itemOut = "ItemStone";
			
			//Drop Item to ground
			[_itemOut,1,1] call fn_dropItem;
        };
            
        if ((_counter >= _countOut) || _breaking) exitWith {
            if (_breaking) then {
                localize "str_PickAxeHandleBreaks" call dayz_rollingMessages;
            } else {
				localize "str_mining_finished" call dayz_rollingMessages;
            };
            _isOk = false;
            _proceed = true;
            uiSleep 1;
        };
		format[localize "str_mining_progress", _counter,(_countOut - _counter)] call dayz_rollingMessages;
    };

    if (!_proceed) then {            
        localize "str_mining_canceled" call dayz_rollingMessages;

        r_interrupt = false;

        if (vehicle player == player) then {
            [objNull, player, rSwitchMove,""] call RE;
            player playActionNow "stop";
        };
    };
	
    //adding melee mags back if needed
    switch (primaryWeapon player) do {
        case "MeleeHatchet": {player addMagazine 'Hatchet_Swing';};
        case "MeleeCrowbar": {player addMagazine 'Crowbar_Swing';};
        case "MeleeMachete": {player addMagazine 'Machete_Swing';};
        case "MeleeFishingPole": {player addMagazine 'Fishing_Swing';};
		case "MeleeSledge": {player addMagazine 'Sledge_Swing';};
    };
} else {
	localize "str_mining_no_rocks" call dayz_rollingMessages;
};

dayz_workingInprogress = false;