
private ["_item","_result","_dis","_sfx","_num","_breaking","_countOut","_findNearestTree","_objName","_counter","_isOk","_proceed","_animState","_started","_finished","_isMedic","_itemOut","_tree","_distance2d"];

_item = _this;
call gear_ui_init;
closeDialog 1;
_countOut = floor(random 3) + 2;

_findNearestTree = [];
{
	if (("" == typeOf _x) && {alive _x}) then {
		_objName = _x call fn_getModelName;
		// Exit since we found a tree
		if (_objName in dayz_trees) exitWith { _findNearestTree set [count _findNearestTree,_x]; };
	};
} count nearestObjects [getPosATL player, [], 20];

//if (["forest",dayz_surfaceType] call fnc_inString) then {// Need tree object for PVDZ_objgather_Knockdown
if (count _findNearestTree > 0) then {
	_tree = _findNearestTree select 0;
	_distance2d = [player, _tree] call BIS_fnc_distance2D;	
	if (_distance2d > 5) exitWith {localize "str_player_23" call dayz_rollingMessages;};
    //Remove melee magazines (BIS_fnc_invAdd fix) (add new melee ammo to array if needed)
    {player removeMagazines _x} forEach ["Hatchet_Swing","Crowbar_Swing","Machete_Swing","Fishing_Swing"];

    // Start chop tree loop
    _counter = 0;
    _isOk = true;
    _proceed = false;

    while {_isOk} do {
        //play action   
        player playActionNow "Medic";

        //setup alert and speak
        _dis=20;
        _sfx = "chopwood";
        [player,_sfx,0,false,_dis] call dayz_zombieSpeak;
        [player,_dis,true,(getPosATL player)] call player_alertZombies;
        
        // Working-Factor for chopping wood.
		["Working",0,[50,10,5,0]] call dayz_NutritionSystem;

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
                if ("MeleeHatchet" in weapons player) then {
                    player removeWeapon "MeleeHatchet";
                } else {
                    if ("ItemHatchet" in weapons player) then {
                        player removeWeapon "ItemHatchet";
                    } else {
                        if (dayz_onBack == "MeleeHatchet") then {
                            dayz_onBack = "";
                        };
                    };
                };
                if (!("ItemHatchetBroken" in weapons player)) then {
                    player addWeapon "ItemHatchetBroken";
                };
            };
            
            _counter = _counter + 1;
            _itemOut = "PartWoodPile";
			//Drop Item to ground
			[_itemOut,1,1] call fn_dropItem;
        };
            
        if ((_counter == _countOut) || _breaking) exitWith {
            if (_breaking) then {
                localize "str_HatchetHandleBreaks" call dayz_rollingMessages;
            } else {
                localize "str_player_24_Stoped" call dayz_rollingMessages;
            };
            _isOk = false;
            _proceed = true;
            uiSleep 1;
        };
        format[localize "str_player_24_progress", _counter,_countOut] call dayz_rollingMessages;
    };

   if (_proceed ||(_counter > 0) ) then {            
		//remove vehicle, Need to ask server to remove.
		PVDZ_objgather_Knockdown = [_tree,player];
		publicVariableServer "PVDZ_objgather_Knockdown";         
        //"Chopping down tree." call dayz_rollingMessages;
        //localize "str_player_25" call dayz_rollingMessages;
    };
    if !(_proceed) then {            
        localize "str_player_24_Stoped" call dayz_rollingMessages;

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
    };
} else {
	localize "str_player_23" call dayz_rollingMessages;
};
