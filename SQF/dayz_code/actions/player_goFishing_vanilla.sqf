/*
	DayZ Fishing
	Usage: spawn player_goFishing;
	Made for DayZ Mod please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
	fixed by facoptere@gmail.com for dayzmod
*/
private ["_linecastmax","_linecastmin","_num","_position","_ispond","_objectsPond","_isPondNearBy","_isOk","_counter",
"_vehicle","_inVehicle","_rnd","_itemOut","_text","_item","_itemtodrop","_result", "_elevation"];

//if (!isNil "faco_goFishing") exitWith { _this call faco_goFishing };

_vehicle = _this select 3;
_vehicle removeAction (_this select 2);
s_player_fishing = -1;
s_player_fishing_veh = -1;

if(dayz_fishingInprogress) exitWith { cutText [localize "str_fishing_inprogress", "PLAIN DOWN"];};
dayz_fishingInprogress = true;

//line distance
_linecastmax = 67;

_isOk = false;
_inBoat = (player != vehicle player) and {((vehicle player) isKindOf "Ship")};
for "_i" from 1 to 10 do {
    _num = floor(random (2 * _linecastmax / 3) + _linecastmax / 3);
    _position = if (_inBoat) then { (vehicle player) modeltoworld [-_num, 0 ,0] } else { player modeltoworld [0,_num,0] };
    _elevation = _position select 2;
    /*  
        _position set [ 2, 1 ];
        _position = ASLToATL _position;
        if (_position select 2 < 1) then { _position set [2, 1];};
        if (isNil "tutu") then {
            tutu = "Sign_sphere100cm_EP1" createVehicleLocal _position;
        }
        else {
            tutu setPosATL _position;
        };
    */
    _ispond = if (_elevation < 0.5 or surfaceIsWater _position) then { false } else { // riverbed must be at 0.5 m depth at least
        private [ "_ret","_bb","_w2m" ];
        _position set [ 2, _elevation - 0.5 ];
        _ret = false;
        {
            {
                _w2m = _x worldToModel _position;
                _bb = (boundingbox _x) select 1;
                _linecastmax = _linecastmax min ((_bb select 0) min (_bb select 1));
                //_dir = [player, _x] call BIS_fnc_relativeDirTo; if (_dir > 180) then {_dir = _dir - 360};
                if ((("" == typeOf _x) and ((_w2m select 2) < 0.5)) and {((abs(_w2m select 0) < (_bb select 0)) and (abs(_w2m select 1) < (_bb select 1)))}) exitWith { // ponds
                    _ret = true;
                };
            } count (nearestObjects [_x, [], 2]); // find ponds
            if (_ret) exitWith {};
        } foreach nearestObjects [_position, ["waterHoleProxy"], 45]; // find waterholeproxy close to pond centers
        _ret
    };
//    diag_log [ _position, _elevation, surfaceIsWater _position, _linecastmax, _ispond, "=>",  ((surfaceIsWater _position or _ispond) and ((player == vehicle player) or {((vehicle player) isKindOf "Ship")})) ];
    if ((surfaceIsWater _position or _ispond) and ((player == vehicle player) or {((vehicle player) isKindOf "Ship")})) exitWith {
        _isOk = true;
    };
};

if (!_isOk) exitWith {
    dayz_fishingInprogress = false;
    cutText [localize "str_fishing_watercheck" , "PLAIN DOWN"];
};

_counter = 0;

// swing fishingpole
player playActionNow "GestureSwing";

// Alert zeds
[player,3,true,(getPosATL player)] call player_alertZombies;

r_interrupt = false;

while {_isOk} do {
    if(dayz_isSwimming) exitWith {cutText [localize "str_player_26", "PLAIN DOWN"];_isOk = false;};
    if !((currentWeapon player) in Dayz_fishingItems or (player != vehicle player and !((vehicle player) isKindOf "Ship"))) exitwith {
        cutText [localize "str_fishing_canceled", "PLAIN DOWN"];
        _isOk = false;
    };
    if (r_interrupt) then {
        _isOk = false;
        cutText [localize "str_fishing_canceled", "PLAIN DOWN"];
    } else {
        //make sure the player isnt swimming

        // wait for animation
        sleep 2;

        // check if player is in boat
        _vehicle = vehicle player;
        if ((_vehicle != player) and (_vehicle isKindOf "Ship")) then {
            _inVehicle = true;
            _rnd = 75;
        } else {
            _inVehicle = false;
            _rnd = 100;
        };
        //Check for rain fish are more active during the rain.
        if (rain > 0) then {_rnd = _rnd / 2;};

        // 1% chance to catch anything
        if((random _rnd) <= 5) then {
            // Just the one fish for now
            _itemOut = [];
            _itemOut = switch (true) do {
                case ((_num > 30) and (_num <= 45)) : { ["FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout"]; };
                case ((_num > 45) and (_num <= 60)) : { ["FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawSeaBass","FishRawSeaBass"]; };
                case ((_num > 60)) : { ["FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawSeaBass","FishRawSeaBass","FishRawTuna"]; };                
                default { ["FishRawTrout"]; };
            };
            _itemOut = _itemOut call BIS_fnc_selectRandom;
            _text = getText (configFile >> "CfgMagazines" >> _itemOut >> "displayName");
            if(_inVehicle) then { 
                _item = _vehicle;
                _itemtodrop = _itemOut;
                _item addMagazineCargoGlobal [_itemtodrop,1];
                //Let the player know what he caught
                cutText [format [localize "str_fishing_success",_text], "PLAIN DOWN"];
            } else {
                call gear_ui_init;
                //Remove melee magazines (BIS_fnc_invAdd fix) 
                {player removeMagazines _x} forEach MeleeMagazines;
                _result = [player,_itemOut] call BIS_fnc_invAdd;
                if (_result) then {
                    //Let the player know what he caught
                    cutText [format [localize "str_fishing_success",_text], "PLAIN DOWN"];
                } else {
                    cutText [format [localize "str_fishing_noroom",_text], "PLAIN DOWN"];
                };
                //adding melee mags back if needed
                call dayz_meleeMagazineCheck;
            };
            
            //"Working",0,[cal,thirst,hunger]
            ["Working",0,[3,2,8,0]] call dayz_NutritionSystem;
            _isOk = false;
        } else {

            switch (true) do {
                case (_counter == 0) : { cutText [format [localize "str_fishing_cast",_num], "PLAIN DOWN"]; }; 
                case (_counter == 4) : { cutText [localize "str_fishing_pull", "PLAIN DOWN"]; player playActionNow "GesturePoint"; }; 
                case (_counter == 8) : { cutText [localize "str_fishing_pull", "PLAIN DOWN"]; player playActionNow "GesturePoint"; };
                default { cutText [localize "str_fishing_nibble", "PLAIN DOWN"]; };
            }; 
            _counter = _counter + 1;

            if(_counter == 12) then {
                _isOk = false;
                sleep 1;
                cutText [localize "str_fishing_failed", "PLAIN DOWN"];
            };
        };
    };
};
dayz_fishingInprogress = false;
