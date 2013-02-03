private["_onLadder","_item","_hasdrinkitem","_config","_text","_sfx","_id","_display"];
disableserialization;
call gear_ui_init;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {cutText ["You may not drink while in a vehicle", "PLAIN DOWN"]};

//Force players to wait 3 mins to drink again
//if (dayz_lastDrink < 180) exitWith {cutText ["You may not drink, your not thirsty", "PLAIN DOWN"]};

_item = _this;
_hasdrinkitem = _item in magazines player;

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");
_sfx = 	getText (_config >> "sfx");

if (!_hasdrinkitem) exitWith {cutText [format[(localize "str_player_31"),_text,"drink"] , "PLAIN DOWN"]};

player playActionNow "PutDown";
player removeMagazine _item;
sleep 1;
[player,_sfx,0,false] call dayz_zombieSpeak;

if (_item == "ItemWaterbottle" or  _item == "ItemWaterbottleBoiled") then {
	player addMagazine "ItemWaterbottleUnfilled";
	if ((random 15 < 1) and (_item == "ItemWaterbottle")) then {
		r_player_infected = true;
		player setVariable["USEC_infected",true];
	};
	//_id = [player,5,true,(getPosATL player)] spawn player_alertZombies;
} else {
	player addMagazine "ItemSodaEmpty";
	_id = [player,10,true,(getPosATL player)] spawn player_alertZombies;
};
player setVariable ["messing",[dayz_hunger,dayz_thirst],true];

dayz_lastDrink = time;
dayz_thirst = 0;

//Ensure Control is visible
_display = uiNamespace getVariable 'DAYZ_GUI_display';
(_display displayCtrl 1302) ctrlShow true;

cutText [format[(localize  "str_player_consumed"),_text], "PLAIN DOWN"];