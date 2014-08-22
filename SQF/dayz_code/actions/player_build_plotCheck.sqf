if(!DZE_ActionInProgress) exitWith {};
//Check if nearby plotpoles exists
private ["_passArray","_isPole","_needText","_distance","_findNearestPoles","_findNearestPole","_IsNearPlot","_requireplot","_isLandFireDZ","_canBuildOnPlot","_nearestPole","_ownerID","_friendlies", "_playerUID"];

//defines
_isPole = _this select 0;
_requireplot = _this select 1;
_isLandFireDZ = _this select 2;

_needText = localize "str_epoch_player_246"; //text for when requirements not met
_canBuildOnPlot = false;
_nearestPole = objNull;
_ownerID = 0;
_friendlies = [];

if(_isPole) then { //check if object is plotpole and adjust distance accordingly 
	_distance = DZE_PlotPole select 1;
} else {
	_distance = DZE_PlotPole select 0;
};

// check for near plotpoles
_findNearestPoles = nearestObjects [(vehicle player), ["Plastic_Pole_EP1_DZ"], _distance]; //create an array of nearby objects that are plotpoles, nearest will always be first in array
_findNearestPole = []; //must define an empty array to avoid problems

{
	if (alive _x) then { //only look for non-destroyed plotpoles
		_findNearestPole set [(count _findNearestPole),_x]; //build an array of live plotpoles found nearby
	};
} count _findNearestPoles; //count each item in previously created array of nearby plotpoles

_IsNearPlot = count (_findNearestPole); //count our new array of non-destroyed plotpoles. Empty array will return 0

if(_IsNearPlot == 0) then { //No live plotpoles were found nearby
	// Allow building of plot
	if(_requireplot == 0 || _isLandFireDZ) then {
		_canBuildOnPlot = true;
	};
} else {
	// Since there are plots nearby we check for ownership && then for friend status
	// check nearby plots ownership && then for friend status
	_nearestPole = _findNearestPole select 0; //nearest is always first in array when using nearestObjects check

	// Find player / character
	if (DZE_APlotforLife) then {
		_playerUID = [player] call FNC_GetPlayerUID;
	}else{
		_playerUID = dayz_characterID;
	};
	
	// Find owner
	_ownerID = _nearestPole getVariable ["ownerPUID","0"];

	// check if friendly to owner
	if(_playerUID == _ownerID) then {  //Keep ownership
		// owner can build anything within his plot except other plots
		if(!_isPole) then {
			_canBuildOnPlot = true;
		};
	} else {
		// disallow building plot
		if(!_isPole) then {
			_friendlies		= player getVariable ["friendlyTo",[]];
			// check if friendly to owner
			if(_ownerID in _friendlies) then {
				_canBuildOnPlot = true;
			};
		};
	};
};

_passArray = [_IsNearPlot,_nearestPole,_ownerID,_friendlies]; //create new array and pass it to caller

// End script if item is plot pole and another one exists within defined radius
if(_isPole && _IsNearPlot > 0) exitWith { 
	DZE_ActionInProgress = false;
	cutText [(format [localize "str_epoch_player_44", DZE_PlotPole select 1]) , "PLAIN DOWN"];
	_passArray
};

if(!_canBuildOnPlot) exitWith { //end script if requirements were not met
	DZE_ActionInProgress = false;
	cutText [format[(localize "STR_EPOCH_PLAYER_135"),_needText,_distance] , "PLAIN DOWN"];
	_passArray
};
_passArray //[int,Obj,int,array]
