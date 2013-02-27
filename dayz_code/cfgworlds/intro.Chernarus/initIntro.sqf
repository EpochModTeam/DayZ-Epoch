titleCut ["","BLACK FADED",10e10];

setViewDistance 3000;
setTerrainGrid 3.125;

0 fadeMusic 0;
playMusic ["dayz_track_death_1",16];
5 fadeMusic 0.5;

_target = [7377,2738,4];
_position = [8323,2483,33];

_camera = "camera" camCreate position player;
_camera cameraEffect ["internal","back"];

_camera camPrepareTarget _target;
_camera camPreparePos _position;
_camera camPrepareFov 0.5;
_camera camCommitPrepared 0;

sleep 0.01;
showCinemaBorder false;

waitUntil {preloadCamera _position};

titleCut ["","BLACK IN",3];