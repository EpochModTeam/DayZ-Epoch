// (c) facoptere@gmail.com, licensed to DayZMod for the community
//
// Linear Congruential Generator
// http://en.wikipedia.org/wiki/Linear_congruential_generator
// X_{n+1} = ( a X_n + c) mod m
psrnd_period = 4096; // m
 
// single precision float has 23 bit mantissa, so if m is 13bit long, then a is 10bit long and a/4 is 8bit long 
// so don't pick primes number so much further 256
psrnd_primes = [ 
101, 103, 107, 109, 113,  127, 131, 137, 139, 149,  
151, 157, 163, 167, 173,  179, 181, 191, 193, 197,  
199, 211, 223, 227, 229,  233, 239, 241, 251, 257 ];

psrnd_init = {
	// init pseudo random generator. seeds will be chosen randomly if you don't set them
	private [ "_offx", "_offy", "_wx", "_wy", "_seeda", "_seedc" ]; 
	_offx = _this select 0;
	_offy = _this select 1;
	_wx = _this select 2;
	_wy = _this select 3;
	_seeda = nil;
	_seedc = nil;
	if (count _this > 4) then {
		_seeda = _this select 4; // prime number <~ 256
		_seedc = _this select 5; // must be odd
	}
	else {
		_seeda = psrnd_primes select floor random count psrnd_primes;
		_seedc = psrnd_primes select floor random count psrnd_primes;
	};	
	[ _seedc, _offx, _offy, _wx / psrnd_period, _wy / psrnd_period, _seeda * 4 + 1, _seedc ]
};

psrnd = {
	// _this = array returned by psrnd_init
	private [ "_px", "_py", "_pz", "_pr" ];
	_pr = ((_this select 0) * (_this select 5) + (_this select 6)) mod psrnd_period;
	_px = (_this select 1) + _pr * (_this select 3);
	_pr = (_pr * (_this select 5) + (_this select 6)) mod psrnd_period;
	_py = (_this select 2) + _pr * (_this select 4);
	_pr = (_pr * (_this select 5) + (_this select 6)) mod psrnd_period;
	_this set [0, _pr];
	
	[_px, _py, _pr]
};
