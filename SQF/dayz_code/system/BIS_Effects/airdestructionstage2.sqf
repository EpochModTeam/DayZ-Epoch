private ["_v","_pos", "_int","_t","_smoke","_fire","_dirt","_i","_xv","_yv","_zv","_dir","_Crater","_speed","_velz","_tv","_dr"];
_v=_this select 0;
_int=_this select 1;
_t=_this select 2;
_pos=getPosATL _v;
if(!isDedicated)then{
	_smoke="#particlesource"createVehicleLocal _pos;
	_smoke attachto[_v,[0,0,0],"destructionEffect1"];
	_smoke setParticleParams[["\ca\Data\ParticleEffects\Universal\Universal",16,7,48],"","Billboard",1,15,[0,0,0],[0,0,0],1,1.275,1,0,[8,14],[[0.1,0.1,0.1,1],[0.1,0.1,0.1,0]],[0.5],0.1,0.1,"","",_v];
	_smoke setParticleRandom[4,[2,2,2],[0,0,0],0,0,[0,0,0,0],0,0];
	_smoke setDropInterval 0.02;
	_fire="#particlesource"createVehicleLocal _pos;
	_fire attachto[_v,[0,0,0],"destructionEffect2"];
	_fire setParticleParams[["\ca\Data\ParticleEffects\Universal\Universal",16,2,80],"","Billboard",1,2,[0,1,0],[0,0,0],1,1.275,1,0,[7,13],[[1,1,1,-1],[1,1,1,0]],[0.5],0.01,0.01,"","",_v,360];
	_fire setParticleRandom[0.5,[0.5,0.5,0.5],[0,0,0],0,0,[0,0,0,0],0,0];
	_fire setDropInterval 0.01;
	_dirt="#particlesource"createVehicleLocal _pos;
	_dirt attachto[_v,[0,0,0],"destructionEffect1"];
	_dirt setParticleParams[["\ca\Data\ParticleEffects\Universal\Universal",16,12,9,0],"","Billboard",1,5,[0,0,0],[0,0,5],0,5,1,0,[10,20],[[0.1,0.1,0.1,1],[0.1,0.1,0.1,0.7],[0.1,0.1,0.1,0]],[1000],0,0,"","",_v,360];
	_dirt setParticleRandom[0,[1,1,1],[1,1,2.5],0,0,[0,0,0,0.5],0,0];
	_dirt setDropInterval 0.05;
	_i=0;
	while{(speed _v)>0.1}do{
		_pos=getPosATL _v;
		_xv=velocity _v select 0;
		_yv=velocity _v select 1;
		_zv=velocity _v select 2;
		_dir=abs(_xv atan2 _yv);
		_Crater="CraterLong"createvehiclelocal[_pos select 0,_pos select 1,0];
		_Crater setdir(_dir+(180*_i));
		_Crater setpos[_pos select 0,_pos select 1,0];
		_Crater setPos[_pos select 0,_pos select 1,((0-_i)/13)];
		_speed=(speed _v);
		_velz=velocity _v select 2;
		if(_velz>1)then{
			_v setvelocity[_xv/1.3,_yv/1.3,0]
		}
		else{
			_v setvelocity[_xv/1.2,_yv/1.2,velocity _v select 2]
		};
		_tv=abs(_xv)+abs(_yv)+abs(_zv);
		_dr=if(_tv>2)then{1/_tv}else{1};
		_smoke setDropInterval _dr*1.5;
		_fire setDropInterval _dr*1.5;
		_dirt setDropInterval _dr;
		sleep(0.25-(_speed/1000));
		_i=_i+1;
	};
	deleteVehicle _smoke;
	deleteVehicle _fire;
	deleteVehicle _dirt;
};
_v setvelocity[0,0,-0.1];
if(local _v)then{
	["Burn",_v,_int,_t]call BIS_Effects_globalEvent;
	[_v,_int,false]spawn BIS_Effects_Secondaries;
};
sleep 0.5;
_v setvelocity[0,0,-0.01];
