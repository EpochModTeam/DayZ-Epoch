private["_onLadder","_item","_hasfooditem","_rawfood","_cookedfood","_config","_text","_regen","_id","_display"];
disableserialization;
call gear_ui_init;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {cutText ["You may not eat while in a vehicle", "PLAIN DOWN"]};

//Force players to wait 3 mins to eat again
//if (dayz_lastMeal < 180) exitWith {cutText ["You may not eat, you're already full", "PLAIN DOWN"]};

_item = _this;
_hasfooditem = _item in magazines player;

//_rawfood = _item in ["FoodSteakRaw","FoodmeatRaw","FoodbeefRaw","FoodmuttonRaw","FoodchickenRaw","FoodrabbitRaw","FoodbaconRaw"];
//_cookedfood = _item in ["FoodSteakCooked","FoodmeatCooked","FoodbeefCooked","FoodmuttonCooked","FoodchickenCooked","FoodrabbitCooked","FoodbaconCooked"];
_rawfood = _item in meatraw;
_cookedfood = item in meatcooked;

_config =	configFile >> "CfgMagazines" >> _item;
_text = 	getText (_config >> "displayName");
_regen = 	getNumber (_config >> "bloodRegen");

if (!_hasfooditem) exitWith {cutText [format[(localize "str_player_31"),_text,"consume"] , "PLAIN DOWN"]};

player playActionNow "PutDown";
player removeMagazine _item;
sleep 1;

if (dayz_lastMeal < 3600) then { 
	if (_item == "FoodSteakCooked") then {
		//_regen = _regen * (10 - (10 max ((time - _Cookedtime) / 3600)));
	};
};

if ( _rawfood and (random 15 < 1)) then {
	r_player_infected = true;
	player setVariable["USEC_infected",true];
};

[player,"eat",0,false] call dayz_zombieSpeak;

if (!_rawfood and !_cookedfood) then{
	player addMagazine "TrashTinCan";
};

r_player_blood = r_player_blood + _regen;
if (r_player_blood > r_player_bloodTotal) then {
	r_player_blood = r_player_bloodTotal;
};

player setVariable ["messing",[dayz_hunger,dayz_thirst],true];
player setVariable["USEC_BloodQty",r_player_blood,true];
player setVariable["medForceUpdate",true];

["dayzPlayerSave",[player,[],true]] call callRpcProcedure;

dayz_lastMeal =	time;
dayz_hunger = 0;

_id = [player,5,true,(getPosATL player)] spawn player_alertZombies;

//Ensure Control is visible
_display = uiNamespace getVariable 'DAYZ_GUI_display';
(_display displayCtrl 1301) ctrlShow true;

if (r_player_blood / r_player_bloodTotal >= 0.2) then {
	(_display displayCtrl 1300) ctrlShow true;
};
cutText [format[(localize  "str_player_consumed"),_text], "PLAIN DOWN"];