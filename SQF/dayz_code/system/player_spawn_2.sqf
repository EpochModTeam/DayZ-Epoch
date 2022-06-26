private ["_isOK", "_startcombattimer", "_myPos", "_wpnType", "_ismelee","_radsound", "_bloodloss","_NutritionLoss", "_Nutrition","_outsideMap","_lastUpdate","_tempPos","_lowBlood","_refObj", "_size", "_vel", "_speed","_isPZombie", "_radTimer", "_timer", "_timer150", "_hunger","_thirst","_result","_randomSpot","_distance","_mylastPos","_lastTemp","_rnd","_messTimer","_saveTime"];
disableSerialization;

_messTimer = 0;
_lastTemp = dayz_temperatur;
_isPZombie = player isKindOf "PZombie_VB";
_radTimer = 0;

_timer = diag_tickTime;
_timer150 = diag_ticktime;
//_timerMonitor = diag_ticktime;

player setVariable ["temperature",dayz_temperatur,true];
player setVariable["friendlies",DZE_Friends,true];

while {1 == 1} do {
	//_start = diag_tickTime;

	//Initialize
	_refObj = vehicle player;
	_size = (sizeOf typeOf _refObj) * 0.6;
	_vel = velocity player;
	_speed = round((_vel distance [0,0,0]) * 3.5);
	_saveTime = (playersNumber west * 2) + 10;

	//reset rating always
	if (((rating player) > 0) or ((rating player) < 0)) then {
		player setUnitRank "PRIVATE";
	};

	dayz_myLoad = (((count dayz_myBackpackMags) * 0.2) + (count dayz_myBackpackWpns)) + (((count dayz_myMagazines) * 0.1) + (count dayz_myWeapons * 0.5));

	//reset position
	_randomSpot = true;
	_tempPos = getPosATL player;
	_distance = respawn_west_original distance _tempPos;
	if (_distance < 2000) then {
		_randomSpot = false;
	};
	_distance = [0,0,0] distance _tempPos;
	if (_distance < 500) then {
		_randomSpot = false;
	};
	if (!isNil "_mylastPos") then {
		_distance = _mylastPos distance _tempPos;
		if (_distance > 400) then {
			_randomSpot = false;
		};
	};
	if (_randomSpot) then {
		_mylastPos = _tempPos;
	};

	dayz_areaAffect = _size;

	if ((diag_tickTime - _timer150) > 60) then {
		//Digest Food.
		if (r_player_foodstack > 0) then { r_player_foodstack = r_player_foodstack - 1; };

		_timer150 = diag_ticktime;
	};

	if ((diag_tickTime - _timer) > 300) then {
		_timer = diag_tickTime;
	};

	//Record Check
	_lastUpdate = diag_ticktime - dayZ_lastPlayerUpdate;
	if (_lastUpdate > 8) then {
		//POSITION?
		_distance = dayz_myPosition distance player;
		if (_distance > 10) then {
			//Player has moved
			dayz_myPosition = getPosATL player;

			// Check for radiation
			DZE_InRadiationZone = false;

			_outsideMap = ((dayz_myPosition select 0) < dayz_minpos || {(dayz_myPosition select 1) < dayz_minpos} || {(dayz_myPosition select 0) > dayz_maxpos} || {(dayz_myPosition select 1) > dayz_maxpos});

			if (_outsideMap && {!r_player_dead && (!isNull (findDisplay 46)) && {player distance (getMarkerPos "respawn_west") > 15}}) then {
				DZE_InRadiationZone = true;
			};
			player setVariable["posForceUpdate",true,true];
			dayz_unsaved = true;
			dayZ_lastPlayerUpdate = diag_ticktime;
		};
	};

	_hunger = (abs((((r_player_bloodTotal - r_player_blood) / r_player_bloodTotal) * 5) + _speed + dayz_myLoad) * 3);
	if (diag_ticktime - dayz_panicCooldown < 120) then {
		_hunger = _hunger * 2;
	};
	dayz_hunger = dayz_hunger + (_hunger / 70); //60 Updated to 80
	dayz_hunger = (dayz_hunger min SleepFood) max 0;

//Thirst
	_thirst = 2;
	if (_refObj == player) then {
		_thirst = (_speed + 4) * 3;
	};
	dayz_thirst = dayz_thirst + (_thirst / 60) * (dayz_temperatur / dayz_temperaturnormal);	//TeeChange Temperatur effects added Max Effects: -25% and + 16.6% waterloss
	dayz_thirst = (dayz_thirst min SleepWater) max 0;

	//diag_log format ["playerSpawn2 %1/%2",dayz_hunger,dayz_thirst];

	//Calories
	if (dayz_nutrition > 0) then {
		_Nutrition = dayz_nutrition;
		_hunger = (abs((((r_player_bloodTotal - r_player_blood) / r_player_bloodTotal) * 5) + _speed + dayz_myLoad) * 3);
		_thirst = 2; if (_refObj == player) then {_thirst = (_speed + 4) * 3;};
		_NutritionLoss = _Nutrition - (((_thirst / 1000) + (_hunger / 1000)) * (dayz_temperatur / dayz_temperaturnormal));
		r_player_Nutrition = _NutritionLoss;
	} else {
		r_player_Nutrition = 0;
	};
	dayz_nutrition = r_player_Nutrition;

	//Temperatur
	2 call player_temp_calculation; //2 = sleep time of this loop //TeeChange
	if ((_lastTemp - dayz_temperatur) > 0.75 || {(_lastTemp - dayz_temperatur) < -0.75}) then {
		player setVariable ["temperature",dayz_temperatur,false];

		PVDZ_serverStoreVar = [player,"temperature",dayz_temperatur];
		publicVariableServer "PVDZ_serverStoreVar";

		_lastTemp = dayz_temperatur;
	};
	dayz_temperatur = (dayz_temperatur min dayz_temperaturmax) max dayz_temperaturmin;

	//can get nearby infection
	if (!r_player_infected && !_isPZombie) then {
		//	Infectionriskstart
		if (dayz_temperatur < ((80 / 100) * (dayz_temperaturnormal - dayz_temperaturmin) + dayz_temperaturmin)) then { //TeeChange
			{
				if (_x getVariable["USEC_infected",false]) then {
					_rnd = (random 1) * (((dayz_temperaturnormal - dayz_temperatur) * (100 /(dayz_temperaturnormal - dayz_temperaturmin)))/ 50);	//TeeChange
					if (_rnd < 0.1) then {
						_rnd = random 1;
						if (_rnd > 0.7) then {
							r_player_infected = true;
							//player setVariable["USEC_infected",true];
						};
					};
				};
			} count (_mylastPos nearEntities ["CAManBase",12]);
			if (dayz_temperatur < ((50 / 100) * (dayz_temperaturnormal - dayz_temperaturmin) + dayz_temperaturmin)) then { //TeeChange
				_rnd = (random 1) * (((dayz_temperaturnormal - dayz_temperatur) * (100 /(dayz_temperaturnormal - dayz_temperaturmin)))/ 25);	//TeeChange
				if (_rnd < 0.05) then {
					_rnd = random 1;
					if (_rnd > 0.95) then {
						r_player_infected = true;
						//player setVariable["USEC_infected",true];
					};
				};
			};
		};
	};

	//If has infection reduce blood cough and add shake
	if (r_player_infected) then {
		if !(player getVariable["USEC_infected",false]) then {
			player setVariable["USEC_infected",true,true];
		};
	};

	// Radiation zones rapid blood loss
	if (DZE_InRadiationZone) then {
		_radsound = "radzone1";
		_bloodloss = 10;
		if (_radTimer > 5 && _radTimer < 10) then {
			_radsound = "radzone2";
			_bloodloss = 20;
		};
		if (_radTimer > 10) then {
			_radsound = "radzone3";
			_bloodloss = 30;
		};
		if (_radTimer > 15) then {
			_radsound = "radzone4";
			_bloodloss = 50;
		};
		_result = r_player_blood - _bloodloss;
		if (_result < 0) then {
			[player,"rad"] call player_death;
		} else {
			r_player_blood = _result;
		};
		addCamShake [2, 1, 25];
		[player,_radsound,0,true] call dayz_zombieSpeak;
		_radTimer = _radTimer + 1;
	} else {
		_radTimer = 0;
	};

	if (DZE_enableBloodRegen) then {
		// Regen some blood if player is well fed and resting
		// Attention: regen _result must not trigger the "up" arrow of the blood icon
		if (r_player_blood < r_player_bloodTotal && {(dayz_hunger < SleepFood) && (dayz_thirst < SleepWater) && !r_player_injured && !r_player_infected && !(r_player_Sepsis select 0) && !r_player_unconscious}) then {
			_result = (1-(dayz_hunger + dayz_thirst)/(SleepWater + SleepFood));

			call {
				if (_result < 0.25) exitWith {}; // not well fed
				if ((toArray(animationState player) select 5) == 112) exitWith { // prone
					_result = _result * (1 + 10 * (r_player_bloodTotal - r_player_blood) / r_player_bloodTotal);
				};
				if (speed player < 1) exitWith { // still
					_result = _result * (1 + 4 * sqrt((r_player_bloodTotal - r_player_blood) / r_player_bloodTotal));
				};
			};
			r_player_bloodregen = r_player_bloodregen + _result;
		};
	};
	r_player_blood = r_player_blood min r_player_bloodTotal;

	//Record low bloow
	_lowBlood = player getVariable ["USEC_lowBlood", false];
	if (r_player_blood < r_player_bloodTotal) then {
		if (!_lowBlood) then {
			player setVariable ["USEC_lowBlood",true,true];
		};
	} else {
		if (_lowBlood && !r_player_injured) then {
			player setVariable ["USEC_lowBlood",false,true];
			r_player_lowblood = false;
		};
	};

	//Broadcast Hunger/Thirst
	_messTimer = _messTimer + 1;
	if (_messTimer > 60) then {
		_messTimer = 0;
		player setVariable ["messing",[dayz_hunger,dayz_thirst,dayz_nutrition],false];

		PVDZ_serverStoreVar = [player,"messing",[dayz_hunger,dayz_thirst,dayz_nutrition]];
		publicVariableServer "PVDZ_serverStoreVar";
	};

	//Save Checker
	if (dayz_unsaved || {(diag_ticktime - dayz_lastSave) > 300}) then {
		if ((diag_ticktime - dayz_lastSave) > _saveTime) then {

			call player_regularSave;
			dayz_unsaved = false;
			dayz_lastSave = diag_ticktime;
		};
	};

	// sort out pickup actions
	_isOK = (pickupInit && !canPickup) || {!pickupInit && canPickup};

	if (_isOK) then {
		if (pickupInit && !canPickup) then {
			canPickup = true;
			pickupInit = false;
		};
	} else {
		// reset
		canPickup = false;
		pickupInit = true;
	};

	uiSleep 2;

	_myPos = player getVariable["lastPos",[]];
	if (count _myPos > 0) then {
		player setVariable["lastPos",_mylastPos, true];
		player setVariable["lastPos",[]];
	};

	//Melee Weapons ammo fix
	if(isNil "login_ammochecked") then {
		login_ammochecked = true;
		 _wpnType = primaryWeapon player;
		_ismelee = (getNumber (configFile >> "CfgWeapons" >> _wpnType >> "melee") == 1);
		if (_ismelee) then {
			call dayz_meleeMagazineCheck;
		};
	};

	//Two primary guns pickup exploit fix
	if ((DZE_TwoPrimaries < 2) && (primaryWeapon player != "") && (!(primaryWeapon player in MeleeWeapons)) && (dayz_onBack != "") && (!(dayz_onBack in MeleeWeapons)) && (isNull (findDisplay 106)) &&
	(animationState player != "amovpknlmstpslowwrfldnon_amovpknlmstpsraswrfldnon" OR animationState player != "amovpercmstpslowwrfldnon_amovpercmstpsraswrfldnon" OR animationState player != "amovpercmstpslowwrfldnon_amovpercmstpsraswrfldnon")) then {
		localize "str_player_ammo_2primary" call dayz_rollingMessages;
		player playActionNow "stop";
		player action ["dropWeapon", player, primaryWeapon player];
		//sleep 3;
		//["gear"] call player_switchWeapon;
		//sleep 1;
	};

	// Brake Fix for Motorcycles and Bicycles
	if (!DZE_isOnBike && {_refObj isKindOf "Motorcycle" && {driver _refObj == player}}) then {	// player just mounted a motorcycle or bicycle
		DZE_isOnBike = true;
		[_refObj] spawn fnc_brakeFix;
	};

	/*
	_stop = diag_tickTime;

	if ((diag_tickTime - _timerMonitor) > 60) then {
		diag_log format ["Loop Monitor - Spawn2: %1, DA: %2, SA: %3",(_stop - _start),(diag_tickTime - (player getVariable "damageActions")),(diag_tickTime - (player getVariable "selfActions"))];
		_timerMonitor = diag_ticktime;
	};
	*/
};
