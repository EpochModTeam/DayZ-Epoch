private ["_weather","_windX","_windY","_weatherOptions","_numWeatherOptions","_forcastTime"];
 
//[overCast,Fog,wind,rain]
//wind is split randomly in to east-west/north-south direction
_weatherOptions =
[   
	[0,		0,		5,		0],          
    [0,		0,		4,		0],			 
    [0,		0,		3,		0],          
	[0,		0.1,	2,		0],          
    [0,		0.2,	1,		0],			 
    [0,		0.3,	2,		0],        
    [0,		0.4,	3,		0],        
    [0,		0.5,	4,		0],        
    [0,		0.4,	5,		0],          
    [0,		0.3,	5,		0],          
    [0,		0.2,	4,		0],        
    [0.1,	0.1,	3,		0.1],		 
	[0.2,	0.1,	2,		0.2],        
    [0.3,	0,		1,		0.3],        
    [0.4,	0,		2,		0.4],      
    [0.5,	0,		3,		0.5],      
	[0.6,	0,		4,		0.6],           
    [0.7,	0,		5,		0.7],			  
    [0.8,	0,		6,		0.8],          
	[0.9,	0,		7,		0.9],          
    [1,		0,		8,		1],			
    [0.9,	0,		9,		0.9],    
    [0.8,	0,		8,		0.8],         
    [0.7,	0.1,	7,		0.7],      
    [0.6,	0.2,	6,		0.6],          
    [0.5,	0.3,	5,		0.5],          
    [0.4,	0.4,	4,		0.4],     
    [0.3,	0.5,	3,		0.3],		
	[0.2,	0.4,	3,		0.2], 
    [0.1,	0.3,	4,		0.1],		
    [0.2,	0.2,	5,		0.2],        
    [0.3,	0.1,	6,		0.3],           
	[0.4,	0.2,	7,		0.4],           
	[0.5,	0.3,	8,		0.5],           
	[0.5,	0.4,	9,		0.6],           
	[0.6,	0.5,	10,		0.7],           
	[0.5,	0.6,	11,		0.8],           
	[0.4,	0.7,	12,		0.8],           
	[0.3,	0.8,	13,		0.9],           
	[0.2,	0.9,	14,		0.9],           
	[0.1,	1,		15,		1]
];
_numWeatherOptions = count _weatherOptions;

// get inital weather forcast for the next 60 minutes
_forcastTime = 3600;
if (isNil "WeatherForcast" and isNil "WeatherForcastTime") then {
	WeatherForcast = floor(random(_numWeatherOptions));
	WeatherForcastTime = diag_tickTime;
} else {
	// after 60 minutes get a new forcast
	if (WeatherForcastTime >= _forcastTime) then {
		WeatherForcast = floor(random(_numWeatherOptions));
		WeatherForcastTime = diag_tickTime;
	};
};

if (isNil "CurrentWeatherOption") then {
	// set inital weather to current forcast
	CurrentWeatherOption = WeatherForcast;
} else {
	if(CurrentWeatherOption < WeatherForcast) then {
		// start transition up if forcast is higher in the array than current weather
		CurrentWeatherOption = ((CurrentWeatherOption + 1) min _weatherOptions);
	} else {
		// start transition down if forcast is lower in the array than current weather
		if (CurrentWeatherOption != WeatherForcast and WeatherForcastTime >= _forcastTime) then {
			CurrentWeatherOption = ((CurrentWeatherOption - 1) max 0) ;
		};
	};
};

// current weather 
_weather = _weatherOptions select CurrentWeatherOption;

_windX = floor(random(_weather select 2));
_windY = (_weather select 2) - _windX;
_weather set [2,[_windX,_windY]];

diag_log format["Weather %1", _weather];
 
PVDZE_plr_SetWeather = _weather;
publicVariable "PVDZE_plr_SetWeather";