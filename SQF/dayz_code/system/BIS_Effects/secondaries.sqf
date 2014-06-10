//Small secondary fuel explosions
//By Maddmatt for ArmA 2
_v=_this select 0;
_int=_this select 1;
_list=[];
_lifecheck=true;

 //if true then script will only run while unit is 'dead'
if (count _this > 2) then {_lifecheck=_this select 2};

_int = _int min 3;

if (!((_v isKindOf "Air")||{((_v isKindOf "LandVehicle")||{(_v isKindOf "Ship")})})) exitWith {};

_effect2pos = _v selectionposition "destructionEffect2";

//Generate intervals between explosions
while {_int>1} do 
	{
		_int=_int-1;_t=(random 45)+1;_list=_list+[_t];
	};

{
	sleep _x;
	if((_lifecheck&&(alive _v))||(isnull _v)||(((getposASL _v)select 2)<0))exitwith{};
	createVehicle ["SmallSecondary", (_v modelToWorld _effect2pos), [], 0, "CAN_COLLIDE"];
}forEach(_list);