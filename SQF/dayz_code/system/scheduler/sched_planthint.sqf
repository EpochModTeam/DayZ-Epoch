// (c) facoptere@gmail.com, licensed to DayZMod for the community

// grasshopper sound near gatherable plants

sched_plantHint = {
	{	
		(getPosATL _x) spawn {
			sleep random 10;
			_sound=format["Sound_Crickets%1",1+floor random 3];
			//diag_log [ _sound ];
			_x = createSoundSource [_sound, _this, [], 0];
			sleep 2;
			deleteVehicle _x;
		};
		false
	} count (nearestObjects [getPosATL player, ["Plant_Base"], 15]);

	objNull
};