private ["_animalssupported","_type","_agent","_favouritezones","_randrefpoint","_PosList","_PosSelect","_Pos","_list"];
_list = (getposATL player) nearEntities [["CAAnimalBase"],dayz_animalDistance];
if ((count _list) < dayz_maxAnimals) then {
	_animalssupported = ["Chicken","Cow","Sheep","WildBoar","WildBoar","WildBoar","Goat","Rabbit","Rabbit","Dog"];
	_type =  (_animalssupported select (floor(random(count _animalssupported))));
	Switch (_type) do {
		case "Cow" : {
			_animalssupported = ["Cow01","Cow02","Cow03","Cow04","Cow01_EP1"];
			_type =  (_animalssupported select (floor(random(count _animalssupported))));
		};
		case "Goat" : {
			_animalssupported = ["Goat01_EP1","Goat02_EP1","Goat"];
			_type =  (_animalssupported select (floor(random(count _animalssupported))));
		};
		case "Sheep" : {
			_animalssupported = ["Sheep","Sheep02_EP1","Sheep01_EP1"];
			_type =  (_animalssupported select (floor(random(count _animalssupported))));
		};
		case "Chicken" : {
			_animalssupported = ["Hen","Cock"];
			_type =  (_animalssupported select (floor(random(count _animalssupported))));
		};
		case "Dog" : {
			_animalssupported = ["DZ_Fin","DZ_Pastor"];
			_type =  (_animalssupported select (floor(random(count _animalssupported))));
		};
	};
	_favouritezones = getText (configFile >> "CfgVehicles" >> _type >> "favouritezones");
	_randrefpoint = getposATL player;
	_PosList = 		selectBestPlaces [_randrefpoint,dayz_animalDistance,_favouritezones,10,5];
	_PosSelect = 	_PosList select (floor(random(count _PosList)));
	_Pos =  		_PosSelect select 0;
	_list = 		_Pos nearEntities [["CAAnimalBase","Man"],50];
	
	
	if (((player distance _Pos) < dayz_animalDistance) && {!(surfaceIsWater _Pos)} && {(count _list) <= 1}) then {
		if (_type == "DZ_Pastor") then { _agent = createAgent [_type, _Pos, [], 0, "NONE"]; } else { _agent = createAgent [_type, _Pos, [], 0, "FORM"]; };
		sleep 0.001;
		_agent setPos _Pos;
		_id = [_pos,_agent] execFSM "\z\addons\dayz_code\system\animal_agent.fsm";
		PVDZE_zed_Spawn = [_agent];
		publicVariableServer "PVDZE_zed_Spawn";
	};
	sleep 1;
};
