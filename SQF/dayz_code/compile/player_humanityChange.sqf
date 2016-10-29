private ["_change","_wait","_humanity","_model","_isMen","_isMenH","_isMenB","_isWomen","_isWomenH","_isWomenB"];
_change = _this select 0;
_wait = _this select 1;

_humanity = (player getVariable["humanity",0]) + _change;
player setVariable["humanity",_humanity,true];

if (_change < 0) then { //non-bandit player can be "punished" in next "_wait" seconds w/o loosing humanity
	if ((_humanity > -2000) and (_wait > 0)) then {
//			player setVariable ["freeTarget",true,true];
		player setVariable ["FTcounter",((player getVariable ["FTcounter",0]) + _wait)];
		[_wait] spawn {
			private ["_endtime","_wait"];
			_wait = _this select 0;
			_endTime = diag_tickTime + _wait;
			waitUntil { uiSleep 1; diag_tickTime > _endTime };
			player setVariable ["FTcounter",((player getVariable ["FTcounter",0]) - _wait)];
			if ((player getVariable ["FTcounter",0]) <= 0) then {
				player setVariable ["FTcounter",0];
//					player setVariable ["freeTarget",false,true];
			};
		};
	};
};
/* Humanity morphing disabled on Epoch to avoid loss of purchased clothing

//add humanity cap both ways
//if (_humanity < 500000) then { player setVariable["humanity",-500000,true]; }; //Hive adds/removes diffrence
//if (_humanity > 500000) then { player setVariable["humanity",500000,true]; }; //Hive adds/removes diffrence

_model = typeOf player;

//if model will not be changed by humanity
if !(_model in ["Survivor1_DZ","Survivor2_DZ","Survivor3_DZ","SurvivorW2_DZ","SurvivorW3_DZ","Bandit1_DZ","BanditW1_DZ"]) exitWith {};
//don't switch model when in a vehicle (ejects player)
if (vehicle player != player) exitWith {};

//Not sure if this will work needs testing
_isMen =		_model == "Survivor1_DZ" || _model == "Survivor2_DZ";
_isMenH =		_model == "Survivor3_DZ";
_isMenB =		_model == "Bandit1_DZ";
_isWomen =		_model == "SurvivorW2_DZ";
_isWomenH =		_model == "SurvivorW3_DZ"; //TODO
_isWomenB =		_model == "BanditW1_DZ";

// Bandit
if (_humanity <= -2000) then {
	if (_isMen || _isMenH) then {
		[dayz_playerUID,dayz_characterID,"Bandit1_DZ"] spawn player_humanityMorph;
	};
	if (_isWomen || _isWomenH) then {
		[dayz_playerUID,dayz_characterID,"BanditW1_DZ"] spawn player_humanityMorph;
	};
};
//Survivor
if (_humanity > -2000 && _humanity <= 5000) then {
	if (_isMenH || _isMenB) then {
		[dayz_playerUID,dayz_characterID,"Survivor2_DZ"] spawn player_humanityMorph;
	};
	if (_isWomenH || _isWomenB) then {
		[dayz_playerUID,dayz_characterID,"SurvivorW2_DZ"] spawn player_humanityMorph;
	};
};

// Hero
if (_humanity > 5000) then {
	if (_isMen || _isMenB) then {
		[dayz_playerUID,dayz_characterID,"Survivor3_DZ"] spawn player_humanityMorph;
	};
	if (_isWomenB) then { 
		[dayz_playerUID,dayz_characterID,"SurvivorW2_DZ"] spawn player_humanityMorph;
	};
};

*/