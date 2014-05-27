private ["_refObj","_size","_vel","_speed","_hunger","_thirst","_result","_factor","_distance","_lastTemp","_rnd","_listTalk","_id","_messTimer","_combatdisplay","_combatcontrol","_timeleft","_inVehicle","_lastUpdate","_foodVal","_thirstVal","_lowBlood","_startcombattimer","_combattimeout","_isPZombie","_outsideMap","_radsound","_bloodloss","_radTimer","_currentBlood","_wpnType"];
disableSerialization;

_messTimer = 0;
_radTimer = 0;
_lastTemp = dayz_temperatur;

_isPZombie = player isKindOf "PZombie_VB";

player setVariable ["temperature",dayz_temperatur,true];
player setVariable["friendlies",DZE_Friends,true];

dayz_myLoad = (((count dayz_myBackpackMags) * 0.2) + (count dayz_myBackpackWpns)) +  (((count dayz_myMagazines) * 0.1) + (count dayz_myWeapons * 0.5));

while {true} do {

	//Initialize
	_refObj = 	vehicle player;
	_factor = 0.6;
	_inVehicle = (_refObj != player);
	// _size = 	(sizeOf typeOf _refObj) * _factor;
	_vel = 		velocity player;
	_speed = 	(round((_vel distance [0,0,0]) * 3.5)) min 18;

	// dayz_areaAffect = _size;

	//Record Check
	_lastUpdate = 	time - dayZ_lastPlayerUpdate;
	if (_lastUpdate > 8) then {
		//POSITION?
		_distance = dayz_myPosition distance _refObj;
		if (_distance > 10) then {
			//Player has moved
			dayz_myPosition = getPosATL _refObj;

			// Check for radiation
			DZE_InRadiationZone = false;

			_outsideMap = ((dayz_myPosition select 0) < dayz_minpos || (dayz_myPosition select 1) < dayz_minpos || (dayz_myPosition select 0) > dayz_maxpos || (dayz_myPosition select 1) > dayz_maxpos);

			if((_outsideMap || DZE_Quarantine) && !r_player_dead && !isNull (findDisplay 46)) then {
				DZE_InRadiationZone = true;
			};

			player setVariable["posForceUpdate",true,true];
			dayz_unsaved = true;
			dayZ_lastPlayerUpdate = time;
		};
	};

	//Hunger
	_hunger = +((((r_player_bloodTotal - r_player_blood) / r_player_bloodTotal) * 5) + _speed + dayz_myLoad) * 3;
	if (time - dayz_panicCooldown < 120) then {
		_hunger = _hunger * 2;
	};
	dayz_hunger = dayz_hunger + (_hunger / 60);

	//Thirst
	_thirst = 2;
	if (!_inVehicle) then {
		_thirst = (_speed + 4) * 3;
	};
	dayz_thirst = dayz_thirst + (_thirst / 60) * (dayz_temperatur / dayz_temperaturnormal);	//TeeChange Temperatur effects added Max Effects: -25% && + 16.6% waterloss

	//Temperatur
	2 call player_temp_calculation; //2 = sleep time of this loop		//TeeChange
	if ((_lastTemp - dayz_temperatur) > 0.75 || (_lastTemp - dayz_temperatur) < -0.75 ) then {
		player setVariable ["temperature",dayz_temperatur,true];
		_lastTemp = dayz_temperatur;
	};

	//can get nearby infection
	if (!r_player_infected && !_isPZombie) then {
		//Infectionriskstart
		if (dayz_temperatur < ((80 / 100) * (dayz_temperaturnormal - dayz_temperaturmin) + dayz_temperaturmin)) then {	//TeeChange
			_listTalk = (getPosATL _refObj) nearEntities ["CAManBase",8];
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
			} count _listTalk;
			if (dayz_temperatur < ((50 / 100) * (dayz_temperaturnormal - dayz_temperaturmin) + dayz_temperaturmin)) then {	//TeeChange
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

	//If has infection reduce blood cough && add shake
	if (r_player_infected) then {
		if !(player getVariable["USEC_infected",false]) then {
			player setVariable["USEC_infected",true,true];
		};

		_rnd = ceil (random 8);
		[player,"cough",_rnd,false,9] call dayz_zombieSpeak;

		if (_rnd < 3) then {
			addCamShake [2, 1, 25];
		};
		if (r_player_blood > 3000) then {
			r_player_blood = r_player_blood - 3;
		};
	};

	//Pain Shake Effects
	if (r_player_inpain && !r_player_unconscious) then {
		playSound "breath_1";
		addCamShake [2, 1, 25];
	};

	//Hunger Effect
	_foodVal = 		dayz_statusArray select 0;
	_thirstVal = 	dayz_statusArray select 1;
	if (_thirstVal <= 0) then {
		_result = r_player_blood - 10;
		if (_result < 0) then {
			_id = [player,"dehyd"] spawn player_death;
		} else {
			r_player_blood = _result;
		};
	};
	if (_foodVal <= 0) then {
		_result = r_player_blood - 10;
		if (_result < 0) then {
			_id = [player,"starve"] spawn player_death;
		} else {
			r_player_blood = _result;
		};
	};

	// Radiation zones rapid blood loss
	if (DZE_InRadiationZone) then {

		_radsound = "radzone1";
		_bloodloss = 10;
		if(_radTimer > 5 && _radTimer < 10) then {
			_radsound = "radzone2";
			_bloodloss = 20;
		};
		if(_radTimer > 10) then {
			_radsound = "radzone3";
			_bloodloss = 30;
		};
		if(_radTimer > 15) then {
			_radsound = "radzone4";
			_bloodloss = 50;
		};
		_result = r_player_blood - _bloodloss;
		if (_result < 0) then {
			_id = [player,"rad"] spawn player_death;
		} else {
			r_player_blood = _result;
		};
		addCamShake [2, 1, 25];
		[player,_radsound,0,true] call dayz_zombieSpeak;
		_radTimer = _radTimer + 1;
	} else {
		_radTimer = 0;
	};

	// Health uptick when healty not thirsty || hungry
	if (_foodVal >= 0.9 && _thirstVal >= 0.9) then {
		if (!r_player_infected && !r_player_inpain && !r_player_injured && !DZE_InRadiationZone) then {
			_result = r_player_blood + 10;
			if (_result >= r_player_bloodTotal) then {
				r_player_blood = r_player_bloodTotal;
			} else {
				r_player_blood = _result;
			};
		};
	};

	//Record low blood
	_lowBlood = player getVariable ["USEC_lowBlood", false];
	if ((r_player_blood < r_player_bloodTotal) && !_lowBlood) then {
		player setVariable["USEC_lowBlood",true,true];
	};

	//Broadcast Hunger/Thirst
	_messTimer = _messTimer + 1;
	if (_messTimer > 15) then {
		_messTimer = 0;
		player setVariable ["messing",[dayz_hunger,dayz_thirst],true];
	};

	// Update blood only if PVAR does not match GVAR.
	_currentBlood = player getVariable ["USEC_BloodQty", 12000];
	if (_currentBlood != r_player_blood) then {
		player setVariable["USEC_BloodQty",r_player_blood,true];
	};

	//Save Checker
	if (dayz_unsaved) then {
		if ((time - dayz_lastSave) > DZE_SaveTime) then {
			PVDZE_plr_Save = [player,dayz_Magazines,false,false];
			publicVariableServer "PVDZE_plr_Save";
			dayz_unsaved = false;
			dayz_lastSave = time;
			dayz_Magazines = [];
		};
	};

	// If in combat, display counter && restrict logout
	_startcombattimer      = player getVariable["startcombattimer",0];
	if (_startcombattimer == 1) then {
		player setVariable["combattimeout", time + 30, true];
		player setVariable["startcombattimer", 0];
		dayz_combat = 1;
	};

	_combattimeout = player getVariable["combattimeout",0];
	if (_combattimeout > 0) then {
		_timeleft = _combattimeout - time;
		if (_timeleft > 0) then {
			//hintSilent format["In Combat: %1",round(_timeleft)];
		} else {
			//hintSilent "Not in Combat";
			player setVariable["combattimeout", 0, true];
			dayz_combat = 0;
			_combatdisplay = uiNamespace getVariable 'DAYZ_GUI_display';
			_combatcontrol = 	_combatdisplay displayCtrl 1307;
			_combatcontrol ctrlShow true;
		};
	} else {
		//hintSilent "Not in Combat";
		dayz_combat = 0;
		_combatdisplay = uiNamespace getVariable 'DAYZ_GUI_display';
		_combatcontrol = 	_combatdisplay displayCtrl 1307;
		_combatcontrol ctrlShow true;
	};

	//Melee Weapons ammo fix
        if(isNil {login_ammochecked}) then {
                login_ammochecked = true;
                 _wpnType = primaryWeapon player;
                _ismelee = (gettext (configFile >> "CfgWeapons" >> _wpnType >> "melee"));
                if (_ismelee == "true") then {
                        call dayz_meleeMagazineCheck;
                };
        };

	// Blood Effects
	"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, (r_player_blood/r_player_bloodTotal)],  [1, 1, 1, 0.0]];
	"colorCorrections" ppEffectCommit 0;

	sleep 2;
};
