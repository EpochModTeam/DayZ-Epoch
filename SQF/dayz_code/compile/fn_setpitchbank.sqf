/************************************************************
Set Pitch and Bank
By General Barron ([EMAIL=aw_barron@hotmail.com]aw_barron@hotmail.com[/EMAIL]) and vektorboson

Parameters: [object, pitch, bank]
Returns: nothing

Rotates an object, giving it the specified pitch and bank,
in degrees.

Pitch is 0 when the object is level; 90 when pointing straight
up; and -90 when pointing straight down.

Bank is 0 when level; 90 when the object is rolled to the right,
-90 when rolled to the left, and 180 when rolled upside down.

Note that the object's yaw can be set with the setdir command,
which should be issued before using this function, if required.

The pitch/bank can be leveled out (set to 0) by using the
setdir command.
************************************************************/
private["_obj","_pitch","_bank","_yaw","_sign","_vdir","_vup"];

_obj = _this select 0;
_pitch = _this select 1;
_bank = _this select 2;

//find the yaw (direction) of the object
//map compass directions go CW, while coordinate (vector) directions go CCW, so we need to flip this
//if we don't flip this, the object will face backwards
_yaw = 360-(getdir _obj);


//----------------------------
//function to rotate a 2d vector around the origin
//----------------------------

_rotate = {
	private ["_vec","_dir","_xpos","_ypos"];

	//extract parameters
	_vec = +(_this select 0); //we don't want to modify the originally passed vector
	_dir = _this select 1;

	//extract old x/y values
	_xpos = _vec select 0;
	_ypos = _vec select 1;

	//if vector is 3d, we don't want to mess up the last element
	_vec set [0, (cos _dir)*_xpos - (sin _dir)*_ypos];
	_vec set [1, (sin _dir)*_xpos + (cos _dir)*_ypos];

	//return new vector
	_vec
};


//----------------------------
//find vector dir (pitch)
//----------------------------

//find sign of pitch
_sign = [1,-1] select (_pitch < 0);

//cut off numbers above 180
while {abs _pitch > 180} do {_pitch = _sign*(abs (_pitch - 180))};

//we can't use pitch that is exactly equal to 90, because then the engine doesn't know what 2d compass direction the object is facing
if(abs _pitch == 90) then {_pitch = _sign*(89.9)};

//we can't pitch beyond 90 degrees without changing the facing of our object
//(pitching beyond 90 degrees means that the object's eyes will point in the 2d compass direction that its back used to point)
if(abs _pitch > 90) then
{
//we are rolling upside down; flip our direction (yaw)
_obj setdir (getdir _obj)-180;
_yaw = 360-(getdir _obj);

//use bank to flip upside down
_bank = _bank + 180;

//and adjust our original pitch
_pitch = (180 - abs _pitch)*_sign;
};

//find appropriate vdir according to our pitch, as if we were facing north
_vdir = [0, cos _pitch, sin _pitch];

//then rotate X & Y around the origin according to object's yaw (direction)
_vdir = [_vdir, _yaw] call _rotate;


//----------------------------
//find vector up (bank)
//----------------------------

//find sign of bank
_sign = [1,-1] select (_bank < 0);

//cut off numbers above 360
while {abs _bank > 360} do {_bank = _sign*(abs (_bank - 360))};

//reflect numbers above 180
if(abs _bank > 180) then {_sign = -1*_sign; _bank = (360-_bank)*_sign};

//find appropriate vup according to our bank, as if we were facing north
_vup = [sin _bank, 0, cos _bank];

//rotate Y & Z elements according to pitch
_vup = [_vup select 0] + ([[_vup select 1, _vup select 2], _pitch] call _rotate);

//rotate X & Y around origin according to yaw
_vup = [_vup,  _yaw] call _rotate;


//----------------------------
//apply the vectors
//----------------------------

_obj setVectorDirAndUp [_vdir, _vup];