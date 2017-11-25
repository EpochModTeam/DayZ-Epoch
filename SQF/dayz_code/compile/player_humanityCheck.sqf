private ["_humanity","_model","_isMen","_isMenH","_isMenB","_isWomen","_isWomenH","_isWomenB"];

_humanity = _this select 0;

//add humanity cap both ways
//if (_humanity < 500000) then { player setVariable["humanity",-500000,true]; }; //Hive adds/removes diffrence
//if (_humanity > 500000) then { player setVariable["humanity",500000,true]; }; //Hive adds/removes diffrence

_model = typeOf player;

//if model will not be changed by humanity
if !(_model in ["Survivor1_DZ","Survivor2_DZ","Survivor3_DZ","SurvivorW2_DZ","SurvivorW3_DZ","Bandit1_DZ","BanditW1_DZ"]) exitWith {};

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