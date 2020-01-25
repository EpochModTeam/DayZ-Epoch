private ["_item","_regen","_isAnimal","_animalType","_isMan","_config","_isListed","_qty","_ctrlBlood","_rnd","_move","_display","_control","_bloodVal"];
_item = _this select 3;
// _ent = _item;

disableSerialization;

if !(alive _item) then {

    _rnd = (round(random 4)) + 1;
	_move = "ZombieFeed" + str(_rnd);
	player playMoveNow _move;

	uiSleep 1;

	// player playActionNow "PutDown";
	[player,50,true,(getPosATL player)] spawn player_alertZombies;

	[player,"gut",0,false] call dayz_zombieSpeak;

	_item setVariable["meatHarvested",true,true];

	uiSleep 1;

	_regen = 200;

	_isAnimal = _item isKindOf "Animal";
	_animalType = typeOf _item;
	_isMan = _item isKindOf "Man";

	if(_isAnimal) then {
		_config = 		configFile >> "CfgSurvival" >> "Meat" >> _animalType;
		_isListed =		isClass (_config);

		_qty = 1;	
		if (_isListed) then {
			_qty =	getNumber (_config >> "yield");
			_regen = _qty * 200;
		};

	} else {

		if(_isMan) then { 
			_regen = 12000; 
		};
	};


	r_player_blood = r_player_blood + _regen;
	if (r_player_blood > r_player_bloodTotal) then {
		r_player_blood = r_player_bloodTotal;
	};

	//Publish messing
	player setVariable ["messing",[dayz_hunger,dayz_thirst,dayz_nutrition],false]; //No need to be sent to everyplayer
	PVDZ_serverStoreVar = [player,"messing",[dayz_hunger,dayz_thirst,dayz_nutrition]]; //update server side only
	publicVariableServer "PVDZ_serverStoreVar";
	
	player setVariable["USEC_BloodQty",r_player_blood,true];

	dayz_lastDrink = time;
	dayz_thirst = 0;

	dayz_lastMeal =	time;
	dayz_hunger = 0;

	PVDZ_plr_Save = [player,nil,true];
	publicVariableServer "PVDZ_plr_Save";

	[player,"eat",0,false] call dayz_zombieSpeak;

	// todo: dump loot on ground and then remove

	//Ensure Control is visible
	_display = uiNamespace getVariable 'DAYZ_GUI_display';
	_control = 	_display displayCtrl 1301;
	_control ctrlShow true;

    _ctrlBlood = 	_display displayCtrl 1300;
	_bloodVal =		r_player_blood / r_player_bloodTotal;
	if (_bloodVal >= 0.2) then {
		_ctrlBlood ctrlShow true;
	};

	//Ensure Control is visible
	_display = uiNamespace getVariable 'DAYZ_GUI_display';
	_control = 	_display displayCtrl 1302;
	_control ctrlShow true;


	format[localize "str_player_consumed",getText(configFile >> "CfgVehicles" >> _animalType >> "displayName")] call dayz_rollingMessages;
	player switchmove "";
};
