/*
=====================================================================================================================
Get Loot Pos - by VBAWOL
Version: 1.0
Date: 10.19.2012 

Parameter:  nul = [] execVM "Make_lootPos.sqf";
=====================================================================================================================
*/
private	["_target","_type","_pos","_ppos","_veh","_worldPos"];



if (count _this > 2) then 
{
	_doSave = (_this select 3) select 0;
		
	if (_doSave == "save") then {
		
		_target = nearestObject [player, "HouseBase"];
			
		if (_target isKindOf "All") then {
		
			if (!(isNil ("_target"))) then {	
			
				_type = typeOf _target;
				_pos = getPosATL _target;
				
				_ppos = _target worldToModel (getPosATL player);
				
				_worldPos = _target modelToWorld _ppos;
				
				diag_log text format ["%1 : %2", _type,_ppos];	
				_veh = createVehicle ["Sign_arrow_down_EP1", _worldPos, [], 0, "CAN_COLLIDE"];
				_veh setPos _worldPos;
			
			} else {
				diag_log text format ["Target nil: %1", _target];
			};
		
		} else {
			diag_log text format ["Failed to get target: %1", _target];
		};
	
		
	} else {
		diag_log text format ["Save not passed: %1", _doSave];
	};	

} else {

	s_aveact = -1;
	_sleep = 1;
	sleep 60;

	While {true} do {
		if (s_aveact < 0) then {
			s_aveact = player addAction ["Save to arma2.rpt", "Make_lootPos.sqf", ["save"], 99, false, true, "",""];
		};
		sleep _sleep;
	};

};
