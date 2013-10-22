private ["_v","_int","_t","_b"];
_v=_this select 0;
if (_v iskindof "helicopter" || _v iskindof "plane")
	then
	{
		//_v setVehicleInit "[this] spawn BIS_Effects_AirDestruction";
		//processInitCommands; //ClearvehicleInit done at end of burn script
		["AirDestruction", _v] call BIS_Effects_globalEvent;
	};
if (_v iskindof "tank")
	then
	{
	     	_int = (fuel _v)*(2+random 2);
		_t=time;
		//_v setVehicleInit format ["[this, %1, %2]spawn BIS_Effects_Burn",_int, _t];   - disabled to prepaire for move into engine
		//processInitCommands; //ClearvehicleInit done at end of burn script
		[_v,_int] spawn BIS_Effects_Secondaries;
	};
if (_v iskindof "car" || _v iskindof "ship")
	then
	{
		_int = (fuel _v)*(2 + random 1);
		_t=time;

		//_v setVehicleInit format ["[this, %1, %2]spawn BIS_Effects_Burn; ",_int, _t];  - disabled to prepaire for move into engine
		//processInitCommands; //ClearvehicleInit done at end of burn script
		[_v,_int] spawn BIS_Effects_Secondaries;

		//Possible initial explosion
		if ((random _int)>2.2) then
		{
				_b="SmallSecondary" createvehicle (getpos _v);
		};
	};
