private["_onLadder","_item","_hasfoodmag","_config","_text","_regen","_update","_id","_display","_control","_bloodVal","_ctrlBlood"];
disableserialization;
call gear_ui_init;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {cutText ["You may not eat while in a vehicle", "PLAIN DOWN"]};
//Force players to wait 3 mins to eat again
if (dayz_lastMeal < 180) exitWith {cutText ["You may not eat, you're already full", "PLAIN DOWN"]};

_item = _this;
_hasfooditem = _this in magazines player;

_rndInfection = (random 15);
_EatInfection = (_rndInfection < 1);

_config =	configFile >> "CfgMagazines" >> _item;
_text = 	getText (_config >> "displayName");
_regen = 	getNumber (_config >> "bloodRegen");

if (!_hasfooditem) exitWith {cutText [format[(localize "str_player_31"),_text,"consume"] , "PLAIN DOWN"]};

if (_EatInfection) then {
   if (_item == "FoodSteakCooked" ) then {
		r_player_infected = true;
		player setVariable["USEC_infected",true];
	};
};

//Rawtime = getVarable _item
//_Cookedtime = _item getVariable ["timemeatCooked", time];

player playActionNow "PutDown";
player removeMagazine _item;
sleep 1;

if (dayz_lastMeal < 3600) then { 
	if (_item == "FoodSteakCooked") then {
		//_regen = _regen * (10 - (10 max ((time - _Cookedtime) / 3600)));
	};
};

r_player_blood = r_player_blood + _regen;
if (r_player_blood > r_player_bloodTotal) then {
	r_player_blood = r_player_bloodTotal;
};

player setVariable ["messing",[dayz_hunger,dayz_thirst],true];
player setVariable["USEC_BloodQty",r_player_blood,true];
player setVariable["medForceUpdate",true];

[player,"eat",0,false] call dayz_zombieSpeak;
/*
_update = player getVariable["updatePlayer",[false,false,false,false,false]];
_update set [3,true];
player setVariable["updatePlayer",_update,true];
*/
["dayzPlayerSave",[player,[],true]] call callRpcProcedure;

dayz_lastMeal =	time;
dayz_hunger = 0;

_id = [player,20,true,(getPosATL player)] spawn player_alertZombies;

//Ensure Control is visible
_display = uiNamespace getVariable 'DAYZ_GUI_display';
_control = 	_display displayCtrl 1301;
_control ctrlShow true;

_bloodVal =		r_player_blood / r_player_bloodTotal;
if (_bloodVal >= 0.2) then {
	_ctrlBlood ctrlShow true;
};
cutText [format[(localize  "str_player_consumed"),_text], "PLAIN DOWN"];