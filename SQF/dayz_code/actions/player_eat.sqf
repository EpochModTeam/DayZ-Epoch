private ["_onLadder","_itemorignal","_hasfooditem","_rawfood","_hasoutput","_config","_text","_regen","_dis","_sfx","_itemtodrop","_nearByPile","_item","_display","_rawexceptions","_badfood"];
disableserialization;
call gear_ui_init;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

//if (vehicle player != player) exitWith {cutText ["\n\nYou may not eat while in a vehicle", "PLAIN DOWN"]};

//Force players to wait 3 mins to eat again
//if (dayz_lastMeal < 180) exitWith {cutText ["You may not eat, you're already full", "PLAIN DOWN"]};

_itemorignal = _this;
_hasfooditem = _itemorignal in magazines player;

_rawfood = _itemorignal in meatraw;
_rawexceptions = _itemorignal in exceptionsraw;
//_cookedfood = _itemorignal in meatcooked;
_hasoutput = _itemorignal in food_with_output;

_badfood = _itemorignal in badfood;

_config =   configFile >> "CfgMagazines" >> _itemorignal;
_text = 	getText (_config >> "displayName");
_regen = 	getNumber (_config >> "bloodRegen");

if (!_hasfooditem) exitWith {cutText [format[(localize "str_player_31"),_text,"consume"] , "PLAIN DOWN"]};

player playActionNow "PutDown";
player removeMagazine _itemorignal;

_invehicle = false;
if (vehicle player != player) then {
	_display = findDisplay 106;
	_display closeDisplay 0;
	_invehicle = true;
};

sleep 1;

_dis=6;
_sfx = "eat";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

if (dayz_lastMeal < 3600) then { 
    if (_itemorignal == "FoodSteakCooked") then {
		//_regen = _regen * (10 - (10 max ((time - _Cookedtime) / 3600)));
	};
};

if (_hasoutput and !_invehicle) then {
    // Selecting output
    _itemtodrop = food_output select (food_with_output find _itemorignal);

    sleep 3;
    _nearByPile= nearestObjects [(position player), ["WeaponHolder","WeaponHolderBase"],2];
    if (count _nearByPile ==0) then { 
        _item = createVehicle ["WeaponHolder", position player, [], 0.0, "CAN_COLLIDE"];
    } else {
        _item = _nearByPile select 0;
    };
    _item addMagazineCargoGlobal [_itemtodrop,1];
};

if (_rawfood and !_rawexceptions and (random 15 < 1)) then {
	r_player_infected = true;
	player setVariable["USEC_infected",true,true];
};

if (_badfood and (random 2 < 1)) then {
	r_player_infected = true;
	player setVariable["USEC_infected",true,true];
};

r_player_blood = r_player_blood + _regen;
if (r_player_blood > r_player_bloodTotal) then {
	r_player_blood = r_player_bloodTotal;
};

player setVariable ["messing",[dayz_hunger,dayz_thirst],true];
player setVariable["USEC_BloodQty",r_player_blood,true];
player setVariable["medForceUpdate",true];

//["PVDZE_plr_Save",[player,[],true]] call callRpcProcedure;
PVDZE_plr_Save = [player,[],true,true];
publicVariableServer "PVDZE_plr_Save";

dayz_lastMeal =	time;
dayz_hunger = 0;

//Ensure Control is visible
_display = uiNamespace getVariable 'DAYZ_GUI_display';
(_display displayCtrl 1301) ctrlShow true;

if (r_player_blood / r_player_bloodTotal >= 0.2) then {
	(_display displayCtrl 1300) ctrlShow true;
};
cutText [format[(localize  "str_player_consumed"),_text], "PLAIN DOWN"];