private["_list","_Pos","_randrefpoint","_PosList","_PosSelect","_Pos","_list","_animalssupported","_type","_root","_favouritezones"];
_list = getposATL player nearEntities [["CAAnimalBase"],dayz_animalDistance];

if (count _list < dayz_maxAnimals) then {
	//Find where animal likes
	_animalssupported = ["hen","Cow","Sheep","WildBoar","WildBoar","WildBoar","Goat","Rabbit","Rabbit","Fin", "Pastor"];
	_type =  (_animalssupported select floor(random(count _animalssupported)));
	if (_type == "Cow") then {
		_animalssupported = ["Cow01","Cow02","Cow03","Cow04"];
		_type =  (_animalssupported select floor(random(count _animalssupported)));
	};
	_root = configFile >> "CfgVehicles" >> _type;
	_favouritezones = getText ( _root >> "favouritezones");
	
	//_randrefpoint = [position player, 10, dayz_animalDistance, 1, 0, 50, 0] call BIS_fnc_findSafePos;
	_randrefpoint = getposATL player;
	_PosList = 		selectbestplaces [_randrefpoint,dayz_animalDistance,_favouritezones,10,5];
	_PosSelect = 	_PosList select (floor random (count _PosList));
	_Pos =  		_PosSelect select 0;
	_list = 		_Pos nearEntities [["CAAnimalBase","Man"],50];
	
	if (player distance _Pos < dayz_animalDistance and NOT surfaceIsWater _Pos and (count _list == 0)) then {		
		//Create Marker
		/*
		DAYZ_agentnumber = DAYZ_agentnumber + 1;
		_GroupMarker = "animal_" + (str DAYZ_agentnumber) + "_" + str(dayz_characterID);
		createMarker [_GroupMarker, _Pos ];
		_GroupMarker setMarkerType "Dot";
		_GroupMarker setMarkerColor "ColorRed";
		_GroupMarker setMarkerText _type; 
		*/		
		_agent = createAgent [_type, _Pos, [], 0, "FORM"];
		_agent setpos _Pos;
		_id = [_pos,_agent] execFSM "\z\addons\dayz_code\system\animal_agent.fsm";
		if (_type == "Fin" || _type == "Pastor") then {
			_tame = _agent addAction ["Tame Dog", "\z\addons\dayz_code\compile\player_tameDog.sqf"];
		};
	};
	sleep 1;
};z