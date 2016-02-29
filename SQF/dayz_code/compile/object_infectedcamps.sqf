/*
	Created exclusively for ArmA2:OA - DayZMod.
	Please request permission to use/alter from R4Z0R49.
*/

//"Infected Camps: [[[7020.76,4072.34,0],40],[[10066.8,12114.3,0],20],[[10033.4,12525,0],20],[[9125.71,7742.72,0],40],[[6057.93,2655.66,0],40]]"
//Server_InfectedCamps, [[[_basePos],_amount,_radius]]

//diag_log(str(__FILE__));

private ["_markerstr","_counter","_camp","_campName","_campPos","_campAmount","_campRadius","_trigger","_trgcode","_array"];
_array = _this;
_counter = 0;

{
	_counter = _counter + 1;
	_camp = _x;
	_campName = format["BaseCamp_%1",_counter];
//diag_log ("Camp: " +str(_x));
	_campPos = _camp select 0;
//diag_log ("CampPos: " +str(_campPos));
	_campAmount = _camp select 1;
//diag_log ("CampAmont: " +str(_campAmount));
	_campRadius = _camp select 2;
//diag_log ("CampRadius: " +str(_campRadius));
/*
	_trigger = createTrigger["EmptyDetector",_campPos];
	_trigger setTriggerArea[_campRadius,_campRadius+100,false];
	_trigger setTriggerActivation["ANY","PRESENT",false];
	_trgcode = format["[%1,%2] call camp_spawnZombies;",_campPos,_campAmount];
	_trigger setTriggerStatements["player in thislist", _trgcode, ""];
	//_trigger setTriggerTimeout [0, 5, 3, false];
*/
	
	if ("ItemMap_Debug" in items player) then {
		_markerstr = createMarker [_campName,_campPos];
		_markerstr setMarkerColor "ColorRed";
		_markerstr setMarkerShape "ELLIPSE";
		_markerstr setMarkerBrush "Border";
		_markerstr setMarkerSizeLocal [_campRadius, _campRadius];
	};
	
} foreach _array;