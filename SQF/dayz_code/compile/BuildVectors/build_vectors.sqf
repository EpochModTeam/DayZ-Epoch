/*-----------------------------------*/
// by Raymix						//
// July 10 2014					   //
/*--------------------------------*/

private ["_object","_objectSnapGizmo","_objColorActive","_objColorInactive","_classname","_whitelist","_radius","_cfg","_cnt","_pos","_findWhitelisted","_nearbyObject","_posNearby","_selectedAction","_newPos","_pointsNearby","_onWater","_waterBase"];
//Args
_todo = _this select 3 select 2;
if(_todo == 0) then{
	vectorActionState = _this select 3 select 0;
	degreeActionState = _this select 3 select 1;
}else{
	if(_todo == 1) then{
		vectorActionState = _this select 3 select 0;
	}else{
		degreeActionState = _this select 3 select 1;
	};
};
_selected = _this select 3 select 3;
_staticRotate = ["Pitch Forward","Pitch Back","Bank Left","Bank Right","Reset"];
fnc_vectorActionCleanup = {
	private ["_s1","_s2"];
	_s1 = _this select 0;
	_s2 = _this select 1;
	player removeAction s_player_toggleVector; s_player_toggleVector = -1;
	if (count s_player_toggleVectors != 0) then {{player removeAction _x;} count s_player_toggleVectors; s_player_toggleVectors=[]; vectorActions = -1;};
	if (_s1 > 0) then {
		s_player_toggleVector = player addaction [format[("<t color=""#ff8800"">" + ("Vectors: %1") +"</t>"),vectorActionState],DZE_build_vector_file,[vectorActionState,degreeActionState,1],7,false,false];
	};
	if (_s2 > 0) then {
		s_player_toggleVectors=[];
		{
			vectorActions = player addaction [format[("<t color=""#ffffff"">" + ("    %1") +"</t>"),_x],DZE_build_vector_file,[_x,degreeActionState,1],6,false,false];
			s_player_toggleVectors set [count s_player_toggleVectors,vectorActions];
		}count _staticRotate;
	};
};

fnc_degreeActionCleanup = {
	private ["_s1","_s2"];
	_s1 = _this select 0;
	_s2 = _this select 1;
	player removeAction s_player_toggleDegree; s_player_toggleDegree = -1;
	if (count s_player_toggleDegrees != 0) then {{player removeAction _x;} count s_player_toggleDegrees; s_player_toggleDegrees=[]; degreeActions = -1;};
	if (_s1 > 0) then {
		s_player_toggleDegree = player addaction [format[("<t color=""#ff8800"">" + ("Degrees: %1") +"</t>"),degreeActionState],DZE_build_vector_file,[vectorActionState,degreeActionState,2],5,false,false];
	};
	if (_s2 > 0) then {
		s_player_toggleDegrees=[];
		{
			if(DZE_curDegree == _x) then{
				degreeActions = player addaction [format[("<t color=""#ff0000"">" + ("    Select: %1") +"</t>"),_x],DZE_build_vector_file,[vectorActionState,"SELECT",2,_x],4,false,false];
			}else{
				degreeActions = player addaction [format[("<t color=""#ffffff"">" + ("    Select: %1") +"</t>"),_x],DZE_build_vector_file,[vectorActionState,"SELECT",2,_x],4,false,false];
			};
			
			s_player_toggleDegrees set [count s_player_toggleDegrees,degreeActions];
		}count DZE_vectorDegrees;
	};
};

if(_todo == 1 || _todo == 0) then{
	switch (vectorActionState) do {
		case "Init": {
			vectorActionState = "OPEN";
			[1,0] call fnc_vectorActionCleanup;
			[] spawn {
			while {true} do {
				if(!DZE_ActionInProgress || DZE_cancelBuilding) exitWith {[0,0] call fnc_vectorActionCleanup; vectorActionState = "CLOSE";};
				sleep 2;
				};
			};
		};
		case "OPEN": {
			vectorActionState = "CLOSE";
			[1,1] call fnc_vectorActionCleanup;
		};
		
		case "CLOSE":{
			vectorActionState = "OPEN";
			[1,0] call fnc_vectorActionCleanup;
		};
		case "Pitch Forward":{
			vectorActionState = "CLOSE";
			[1,1] call fnc_vectorActionCleanup;
			DZE_updateVec = true;
			DZE_memForBack = DZE_memForBack + (DZE_curDegree * -1);
		};
		case "Pitch Back":{
			vectorActionState = "CLOSE";
			[1,1] call fnc_vectorActionCleanup;
			DZE_updateVec = true;
			DZE_memForBack = DZE_memForBack + DZE_curDegree;
		};
		case "Bank Left":{
			vectorActionState = "CLOSE";
			[1,1] call fnc_vectorActionCleanup;
			DZE_updateVec = true;
			DZE_memLeftRight = DZE_memLeftRight + (DZE_curDegree * -1);
		};
		case "Bank Right":{
			vectorActionState = "CLOSE";
			[1,1] call fnc_vectorActionCleanup;
			DZE_updateVec = true;
			DZE_memLeftRight = DZE_memLeftRight + DZE_curDegree;
		};
		case "Reset":{
			vectorActionState = "CLOSE";
			[1,1] call fnc_vectorActionCleanup;
			DZE_memForBack = 0;
			DZE_memLeftRight = 0;
			DZE_memDir = 0;
			DZE_updateVec = true;
		};
	};
};

if(_todo == 2 || _todo == 0) then{
	switch (degreeActionState) do {
		case "Init": {
			degreeActionState = "OPEN";
			[1,0] call fnc_degreeActionCleanup;
			[] spawn {
			while {true} do {
				if(!DZE_ActionInProgress || DZE_cancelBuilding) exitWith {[0,0] call fnc_degreeActionCleanup; degreeActionState = "CLOSE";};
				sleep 2;
				};
			};
		};
		case "OPEN": {
			degreeActionState = "CLOSE";
			[1,1] call fnc_degreeActionCleanup;
		};
		
		case "CLOSE":{
			degreeActionState = "OPEN";
			[1,0] call fnc_degreeActionCleanup;
		};
		case "SELECT":{
			degreeActionState = "CLOSE";
			DZE_curDegree = _selected;
			[1,1] call fnc_degreeActionCleanup;
		};
	};
};
