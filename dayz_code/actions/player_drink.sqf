private["_hasFood","_item","_text","_key","_config","_sfx"];
disableserialization;
call gear_ui_init;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {cutText ["You may not drink while in a vehicle", "PLAIN DOWN"]};

//Force players to wait 3 mins to drink again
//if (dayz_lastDrink < 180) exitWith {cutText ["You may not drink, your not thirsty", "PLAIN DOWN"]};

_item = _this;
_hasdrinkitem = _this in magazines player;

_rndInfection = (random 15);
_DrinkInfection = (_rndInfection < 1);

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");
_sfx = 	getText (_config >> "sfx");

if (!_hasdrinkitem) exitWith {cutText [format[(localize "str_player_31"),_text,"drink"] , "PLAIN DOWN"]};

player playActionNow "PutDown";
player removeMagazine _item;
sleep 1;
[player,_sfx,0,false] call dayz_zombieSpeak;


if (_item == "ItemWaterbottle") then {
	player addMagazine "ItemWaterbottleUnfilled";
	if (_DrinkInfection) then {
		r_player_infected = true;
		player setVariable["USEC_infected",true];
};
};


player setVariable ["messing",[dayz_hunger,dayz_thirst],true];

/*
_update = player getVariable["updatePlayer",[false,false,false,false,false]];
_update set [4,true];
player setVariable["updatePlayer",_update,true];
*/

_id = [player,20,true,(getPosATL player)] spawn player_alertZombies;

dayz_lastDrink = time;
dayz_thirst = 0;

//Ensure Control is visible
_display = uiNamespace getVariable 'DAYZ_GUI_display';
_control = 	_display displayCtrl 1302;
_control ctrlShow true;

cutText [format[(localize  "str_player_consumed"),_text], "PLAIN DOWN"];
