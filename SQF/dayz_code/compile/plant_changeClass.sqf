private ["_Object","_ClassName","_ObjectID","_ObjectUID","_CharacterID","_dir","_location","_worldspace","_classname"];
_Object = _this select 0;
_ClassName = _this select 1;

_ObjectID = _Object getVariable ["ObjectID","0"];
_ObjectUID = _Object getVariable ["ObjectUID","0"];
_CharacterID = "0";

if(_ObjectID != "0" || _ObjectUID != "0") then {
	_dir = getDir _Object;
	// fix direction
	if (_ClassName == "MAP_pumpkin2") then {
		_dir = _dir - 90;
	};
	if (_ClassName == "Grave") then {
		_dir = _dir + 90;
	};

	_location = getPosATL _Object;
	_worldspace = [_dir,_location];

	PVDZE_obj_Delete = [_objectID,_objectUID,player];
	publicVariableServer "PVDZE_obj_Delete";

	PVDZE_veh_Publish = [_Object,_worldspace,_ClassName,true,_CharacterID];
	publicVariableServer  "PVDZE_veh_Publish";

	_Object setVariable ["isWatered", true, true];
}
