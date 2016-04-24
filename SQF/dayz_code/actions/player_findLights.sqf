/*
	DayZ Find lights
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_objName","_lights","_findNearestlight"];

// allowed lights list move this later
_lights = ["lampa_ind_zebr.p3d","lampa_ind.p3d","lampa_sidl_3.p3d","lampa_sidl_2.p3d","lampa_sidl.p3d","powlines_concl.p3d","powlines_woodl.p3d"];

_findNearestlight = [];
{
	if("" == typeOf _x) then {
			
		if (alive _x) then {
				
			_objName = _x call fn_getModelName;

			if (_objName in _lights) then { 
				_findNearestlight set [(count _findNearestlight),_x];
			};
		};
	};

} count nearestObjects [([player] call FNC_getPos), [], 20];
