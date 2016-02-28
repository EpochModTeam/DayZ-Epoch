/**
 * ArmA 2 Chernarus Map Addition
 * Static Trains And Wagons On Chernarus Rails
 * SQF version 1.0
 * 
 * mission.sqm created by allavett
 * trains_wagons.sqf created* and edited by Mr.Weegley 
 * *.sqf created using SQM2Biedi converter
 *
 *
 * http://opendayz.net/threads/trains-and-wagons-to-chernarus-rails.17499/
 * allavett - http://opendayz.net/members/allavett.6155/
 * Mr.Weegley - http://opendayz.net/members/mr-weegley.14613/
 */

if (isServer) then {


{
  _p=(nearestObject _x) setDamage 1;
} forEach [
  [7158.09,3179.44], [7157.34,3180.52], [7156.56,3181.75], [7156.99,3181.48], [7161.91,3172.63], [7154.69,3185.93], [7132.54,3178.82],
  [7101.17,3178.3], [7104.24,3174.3], [7105.87,3171.97], [7113.37,3176.82], [7111.22,3182.5], [7124.8,3162.29], [7124.8,3162.29], [7236.87,3211.72],
  [7241.08,3214.2], [7245.5,3216.57]
];




_vehicle_1 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10320.4,2097.65,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_1 = _this;
  _this setDir 75.8932;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10320.4,2097.65,0];
};

_vehicle_2 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10297,2091.73,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_2 = _this;
  _this setDir 75.7489;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10297,2091.73,0];
};

_vehicle_3 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10308.6,2094.65,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_3 = _this;
  _this setDir 255.905;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10308.6,2094.65,0];
};

_vehicle_4 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10210.7,2084.2,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_4 = _this;
  _this setDir 75.9351;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10210.7,2084.2,0];
};

_vehicle_5 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10282.7,2088.11,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_5 = _this;
  _this setDir 75.6848;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10282.7,2088.11,0];
};

_vehicle_6 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10212.2,2070.33,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_6 = _this;
  _this setDir 75.7936;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10212.2,2070.33,0];
};

_vehicle_7 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10201.2,2067.56,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_7 = _this;
  _this setDir 75.9703;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10201.2,2067.56,0];
};

_vehicle_8 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10226,2073.78,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_8 = _this;
  _this setDir 75.8529;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10226,2073.78,0];
};

_vehicle_9 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10242.6,2077.98,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_9 = _this;
  _this setDir 75.935;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10242.6,2077.98,0];
};

_vehicle_10 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10209.6,1956.79,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_10 = _this;
  _this setDir 185.741;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10209.6,1956.79,0];
};

_vehicle_11 = objNull;
if (true) then
{
  _this = "Land_loco_742_red" createVehicle [10210.9,1968.99,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_11 = _this;
  _this setDir 6.31329;
  _this setPos [10210.9,1968.99,0];
};

_vehicle_12 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10268.6,2084.53,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_12 = _this;
  _this setDir 75.9063;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10268.6,2084.53,0];
};

_vehicle_13 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10256.9,2081.58,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_13 = _this;
  _this setDir 75.9183;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10256.9,2081.58,0];
};

_vehicle_14 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10190,2064.7,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_14 = _this;
  _this setDir 75.8851;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10190,2064.7,0];
};

_vehicle_15 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10071.4,2007.54,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_15 = _this;
  _this setDir 75.8851;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10071.4,2007.54,0];
};

_vehicle_16 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10175.7,2061.11,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_16 = _this;
  _this setDir 75.8529;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10175.7,2061.11,0];
};

_vehicle_17 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10161.9,2057.66,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_17 = _this;
  _this setDir 75.7936;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10161.9,2057.66,0];
};

_vehicle_18 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10150.9,2054.9,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_18 = _this;
  _this setDir 75.9703;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10150.9,2054.9,0];
};

_vehicle_19 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10196.8,2080.7,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_19 = _this;
  _this setDir 75.8748;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10196.8,2080.7,0];
};

_vehicle_20 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10182.7,2077.18,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_20 = _this;
  _this setDir 75.9063;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10182.7,2077.18,0];
};

_vehicle_21 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10171,2074.23,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_21 = _this;
  _this setDir 75.9183;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10171,2074.23,0];
};

_vehicle_22 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10159.3,2071.3,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_22 = _this;
  _this setDir 75.8932;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10159.3,2071.3,0];
};

_vehicle_23 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10147.6,2068.36,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_23 = _this;
  _this setDir 75.9448;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10147.6,2068.36,0];
};

_vehicle_24 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10151.6,2064.59,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_24 = _this;
  _this setDir 75.7456;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10151.6,2064.59,0];
};

_vehicle_25 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10140.7,2061.83,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_25 = _this;
  _this setDir 75.7646;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10140.7,2061.83,0];
};

_vehicle_26 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10165.5,2068.04,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_26 = _this;
  _this setDir 75.8194;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10165.5,2068.04,0];
};

_vehicle_27 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10182.1,2072.25,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_27 = _this;
  _this setDir 75.887;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10182.1,2072.25,0];
};

_vehicle_28 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10196.4,2075.86,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_28 = _this;
  _this setDir 75.8704;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10196.4,2075.86,0];
};

_vehicle_29 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10129.5,2058.96,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_29 = _this;
  _this setDir 75.8372;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10129.5,2058.96,0];
};

_vehicle_30 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10115.2,2055.35,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_30 = _this;
  _this setDir 75.8049;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10115.2,2055.35,0];
};

_vehicle_31 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10101.4,2051.88,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_31 = _this;
  _this setDir 75.7662;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10101.4,2051.88,0];
};

_vehicle_32 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10090.5,2049.15,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_32 = _this;
  _this setDir 75.9223;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10090.5,2049.15,0];
};

_vehicle_33 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10210.5,2079.41,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_33 = _this;
  _this setDir 75.8529;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10210.5,2079.41,0];
};

_vehicle_34 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10135.9,2065.42,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_34 = _this;
  _this setDir 75.9448;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10135.9,2065.42,0];
};

_vehicle_35 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10168.7,2054.86,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_35 = _this;
  _this setDir 75.9938;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10168.7,2054.86,0];
};

_vehicle_36 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10154.9,2051.41,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_36 = _this;
  _this setDir 75.9375;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10154.9,2051.41,0];
};

_vehicle_37 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10143.9,2048.69,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_37 = _this;
  _this setDir 75.9703;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10143.9,2048.69,0];
};

_vehicle_38 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10185.3,2059.04,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_38 = _this;
  _this setDir 75.8459;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10185.3,2059.04,0];
};

_vehicle_39 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10202,2063.21,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_39 = _this;
  _this setDir 75.935;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10202,2063.21,0];
};

_vehicle_40 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10132.9,2045.94,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_40 = _this;
  _this setDir 75.9678;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10132.9,2045.94,0];
};

_vehicle_41 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10121.9,2043.18,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_41 = _this;
  _this setDir 75.9703;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10121.9,2043.18,0];
};

_vehicle_42 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10137.1,2051.41,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_42 = _this;
  _this setDir 75.8529;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10137.1,2051.41,0];
};

_vehicle_43 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10215.8,2066.71,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_43 = _this;
  _this setDir 75.7936;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10215.8,2066.71,0];
};

_vehicle_44 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10229.6,2070.15,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_44 = _this;
  _this setDir 75.935;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10229.6,2070.15,0];
};

_vehicle_45 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10276.3,2081.89,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_45 = _this;
  _this setDir 75.9375;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10276.3,2081.89,0];
};

_vehicle_46 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10265.4,2079.14,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_46 = _this;
  _this setDir 75.9703;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10265.4,2079.14,0];
};

_vehicle_47 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10254.4,2076.39,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_47 = _this;
  _this setDir 75.9678;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10254.4,2076.39,0];
};

_vehicle_48 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10243.4,2073.63,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_48 = _this;
  _this setDir 75.9703;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10243.4,2073.63,0];
};

_vehicle_49 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10320.2,2092.91,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_49 = _this;
  _this setDir 75.9375;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10320.2,2092.91,0];
};

_vehicle_50 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10309.2,2090.14,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_50 = _this;
  _this setDir 75.9703;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10309.2,2090.14,0];
};

_vehicle_51 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10298.3,2087.39,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_51 = _this;
  _this setDir 75.9678;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10298.3,2087.39,0];
};

_vehicle_52 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10287.3,2084.65,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_52 = _this;
  _this setDir 75.9703;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10287.3,2084.65,0];
};

_vehicle_53 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10331.5,2095.69,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_53 = _this;
  _this setDir 255.993;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [10331.5,2095.69,0];
};

_vehicle_54 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10342.9,2098.59,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_54 = _this;
  _this setDir 75.9375;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10342.9,2098.59,0];
};

_vehicle_55 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10224.5,1778.98,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_55 = _this;
  _this setDir 89.9098;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.19];}; };
  _this setPos [10224.5,1778.98,0];
};

_vehicle_56 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10241.7,1779.02,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_56 = _this;
  _this setDir 89.9149;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.19];}; };
  _this setPos [10241.7,1779.02,0];
};

_vehicle_57 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [10258.9,1779.04,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_57 = _this;
  _this setDir 89.8509;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.19];}; };
  _this setPos [10258.9,1779.04,0];
};

_vehicle_58 = objNull;
if (true) then
{
  _this = "Misc_Cargo1Bo_military" createVehicle [10226.3,1796.87,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_58 = _this;
  _this setDir -90.8482;
  _this setPos [10226.3,1796.87,0];
};

_vehicle_59 = objNull;
if (true) then
{
  _this = "Land_Misc_Cargo1Eo_EP1" createVehicle [10247,1802.73,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_59 = _this;
  _this setDir -323.696;
  _this setPos [10247,1802.73,0];
};

_vehicle_60 = objNull;
if (true) then
{
  _this = "Misc_Cargo1Bo_military" createVehicle [10238.3,1796.53,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_60 = _this;
  _this setDir -96.8035;
  _this setPos [10238.3,1796.53,0];
};

_vehicle_61 = objNull;
if (true) then
{
  _this = "Land_Misc_Cargo1Eo_EP1" createVehicle [10231.5, 1807.3101];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_61 = _this;
  _this setDir -259.845;
  _this setPos [10231.5, 1807.3101];
};

_vehicle_62 = objNull;
if (true) then
{
  _this = "Land_Misc_Cargo1Eo_EP1" createVehicle [10254.2,1779.13,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_62 = _this;
  _this setDir -270.189;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [10254.2,1779.13,0];
};

_vehicle_63 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10207.3,1934.35,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_63 = _this;
  _this setDir 185.938;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10207.3,1934.35,0];
};

_vehicle_64 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [10208.5,1945.61,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_64 = _this;
  _this setDir 185.94;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [10208.5,1945.61,0];
};

_vehicle_65 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10831.7,2655.71,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_65 = _this;
  _this setDir 20.7185;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [10831.7,2655.71,0];
};

_vehicle_66 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10836,2667.02,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_66 = _this;
  _this setDir 20.7185;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [10836,2667.02,0];
};

_vehicle_67 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10840.2,2678.31,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_67 = _this;
  _this setDir 20.6669;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [10840.2,2678.31,0];
};

_vehicle_68 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10844.5,2689.61,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_68 = _this;
  _this setDir 20.692;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [10844.5,2689.61,0];
};

_vehicle_69 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [10848.8,2700.91,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_69 = _this;
  _this setDir 20.68;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [10848.8,2700.91,0];
};

_vehicle_70 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [12671.4,3657.35,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_70 = _this;
  _this setDir 65.7905;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [12671.4,3657.35,0];
};

_vehicle_71 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [12682.5,3662.32,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_71 = _this;
  _this setDir 65.7771;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [12682.5,3662.32,0];
};

_vehicle_72 = objNull;
if (true) then
{
  _this = "Land_loco_742_blue" createVehicle [13365.1,6200.56,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_72 = _this;
  _this setDir -1.726;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.91]; _this setvectordirandup [[-0.1,4,-0.055],[0,0,1]];}; };
  _this setPos [13365.1,6200.56,0];
};

_vehicle_73 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13366.3,6158.73,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_73 = _this;
  _this setDir -1.83542;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.32];}; };
  _this setPos [13366.3,6158.73,0];
};

_vehicle_74 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13370.2,6024.76,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_74 = _this;
  _this setDir -1.66878;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13370.2,6024.76,0];
};

_vehicle_75 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13367.8,6107.19,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_75 = _this;
  _this setDir -1.61082;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13367.8,6107.19,0];
};

_vehicle_76 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13370.6,6010.2,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_76 = _this;
  _this setDir -1.65283;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13370.6,6010.2,0];
};

_vehicle_77 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13365.5,6185.31,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_77 = _this;
  _this setDir -1.72675;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.34];}; };
  _this setPos [13365.5,6185.31,0];
};

_vehicle_78 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13367.1,6129.8,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_78 = _this;
  _this setDir -1.72828;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13367.1,6129.8,0];
};

_vehicle_79 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13365.9,6170.78,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_79 = _this;
  _this setDir -1.70484;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.31];}; };
  _this setPos [13365.9,6170.78,0];
};

_vehicle_80 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13366.7,6144.05,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_80 = _this;
  _this setDir -1.66526;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.34];}; };
  _this setPos [13366.7,6144.05,0];
};

_vehicle_81 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13367.4,6118.5,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_81 = _this;
  _this setDir -1.63602;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13367.4,6118.5,0];
};

_vehicle_82 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13371,5997.94,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_82 = _this;
  _this setDir -181.671;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13371,5997.94,0];
};

_vehicle_83 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13369.7,6041.92,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_83 = _this;
  _this setDir -1.62039;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13369.7,6041.92,0];
};

_vehicle_84 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13368.8,6073.3,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_84 = _this;
  _this setDir -1.69969;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13368.8,6073.3,0];
};

_vehicle_85 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13371.3,5985.9,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_85 = _this;
  _this setDir 178.315;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13371.3,5985.9,0];
};

_vehicle_86 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13369.2,6059.07,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_86 = _this;
  _this setDir -1.75524;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13369.2,6059.07,0];
};

_vehicle_87 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13368.1,6095.92,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_87 = _this;
  _this setDir -1.61497;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13368.1,6095.92,0];
};

_vehicle_88 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13369.8,5891.87,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_88 = _this;
  _this setDir 3.50865;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13369.8,5891.87,0];
};

_vehicle_89 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13372,5962.98,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_89 = _this;
  _this setDir -1.50273;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13372,5962.98,0];
};

_vehicle_90 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13368.9,5877.37,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_90 = _this;
  _this setDir 3.43258;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13368.9,5877.37,0];
};

_vehicle_91 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13368.1,5865.12,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_91 = _this;
  _this setDir -176.595;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13368.1,5865.12,0];
};

_vehicle_92 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13370.8,5909.01,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_92 = _this;
  _this setDir 3.56523;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13370.8,5909.01,0];
};

_vehicle_93 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13372.4,5940.43,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_93 = _this;
  _this setDir 0.541619;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13372.4,5940.43,0];
};

_vehicle_94 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13367.4,5853.06,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_94 = _this;
  _this setDir 183.507;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13367.4,5853.06,0];
};

_vehicle_95 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13371.8,5926.17,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_95 = _this;
  _this setDir 3.31062;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13371.8,5926.17,0];
};

_vehicle_96 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13372.3,5951.67,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_96 = _this;
  _this setDir -1.42689;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13372.3,5951.67,0];
};

_vehicle_97 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13366.7,5841.19,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_97 = _this;
  _this setDir 3.50865;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13366.7,5841.19,0];
};

_vehicle_98 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13365.9,5828.98,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_98 = _this;
  _this setDir -176.403;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13365.9,5828.98,0];
};

_vehicle_99 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13365.2,5816.93,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_99 = _this;
  _this setDir 183.452;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13365.2,5816.93,0];
};

_vehicle_100 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13364.5,5805.36,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_100 = _this;
  _this setDir 3.65769;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13364.5,5805.36,0];
};

_vehicle_101 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13362.4,5771.5,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_101 = _this;
  _this setDir 3.46276;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13362.4,5771.5,0];
};

_vehicle_102 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13361.6,5757.31,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_102 = _this;
  _this setDir 3.53349;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13361.6,5757.31,0];
};

_vehicle_103 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13363.8,5794.07,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_103 = _this;
  _this setDir 3.46518;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13363.8,5794.07,0];
};

_vehicle_104 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13360,5731.86,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_104 = _this;
  _this setDir 3.4403;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13360,5731.86,0];
};

_vehicle_105 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13360.7,5743.12,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_105 = _this;
  _this setDir 3.46518;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13360.7,5743.12,0];
};

_vehicle_106 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13358.6,5709.3,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_106 = _this;
  _this setDir 3.46276;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13358.6,5709.3,0];
};

_vehicle_107 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13359.3,5720.58,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_107 = _this;
  _this setDir 3.50071;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13359.3,5720.58,0];
};

_vehicle_108 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13357.9,5697.53,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_108 = _this;
  _this setDir 183.417;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13357.9,5697.53,0];
};

_vehicle_109 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13357.2,5685.63,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_109 = _this;
  _this setDir 2.9396;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13357.2,5685.63,0];
};

_vehicle_110 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13356.8,5673.43,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_110 = _this;
  _this setDir -179.362;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [13356.8,5673.43,0];
};

_vehicle_111 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13368.4,6084.61,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_111 = _this;
  _this setDir -1.61742;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13368.4,6084.61,0];
};

_vehicle_112 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13371.7,5974.28,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_112 = _this;
  _this setDir -1.46178;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13371.7,5974.28,0];
};

_vehicle_113 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13363.1,5782.79,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_113 = _this;
  _this setDir 3.48919;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [13363.1,5782.79,0];
};

_vehicle_114 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13127.1,7142.86,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_114 = _this;
  _this setDir -17.1187;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21];}; };
  _this setPos [13127.1,7142.86,0];
};

_vehicle_115 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13131.4,7129.02,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_115 = _this;
  _this setDir -17.1947;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13131.4,7129.02,0];
};

_vehicle_116 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13135,7117.26,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_116 = _this;
  _this setDir -197.223;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13135,7117.26,0];
};

_vehicle_117 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13122.1,7159.27,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_117 = _this;
  _this setDir -17.0611;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21];}; };
  _this setPos [13122.1,7159.27,0];
};

_vehicle_118 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13138.6,7105.71,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_118 = _this;
  _this setDir 162.88;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13138.6,7105.71,0];
};

_vehicle_119 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13142.1,7094.34,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_119 = _this;
  _this setDir -17.1187;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13142.1,7094.34,0];
};

_vehicle_120 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13145.7,7082.65,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_120 = _this;
  _this setDir -197.03;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13145.7,7082.65,0];
};

_vehicle_121 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13149.2,7071.12,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_121 = _this;
  _this setDir 162.824;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13149.2,7071.12,0];
};

_vehicle_122 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13152.6,7060.03,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_122 = _this;
  _this setDir -16.9696;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21];}; };
  _this setPos [13152.6,7060.03,0];
};

_vehicle_123 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13155.9,7049.21,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_123 = _this;
  _this setDir -17.1621;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21];}; };
  _this setPos [13155.9,7049.21,0];
};

_vehicle_124 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13159.3,7038.42,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_124 = _this;
  _this setDir -17.1381;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21];}; };
  _this setPos [13159.3,7038.42,0];
};

_vehicle_125 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [13151.5,7110.7,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_125 = _this;
  _this setDir -17.1601;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21];}; };
  _this setPos [13151.5,7110.7,0];
};

_vehicle_126 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13155.7,7096.79,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_126 = _this;
  _this setDir -17.1737;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13155.7,7096.79,0];
};

_vehicle_127 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13159.3,7085.25,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_127 = _this;
  _this setDir -17.1704;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13159.3,7085.25,0];
};

_vehicle_128 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13162.9,7073.7,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_128 = _this;
  _this setDir -17.1955;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13162.9,7073.7,0];
};

_vehicle_129 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13166.4,7062.17,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_129 = _this;
  _this setDir -17.1439;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13166.4,7062.17,0];
};

_vehicle_130 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13248.4,6766.7,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_130 = _this;
  _this setDir -17.1318;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13248.4,6766.7,0];
};

_vehicle_131 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [12908.6,9963.84,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_131 = _this;
  _this setDir 8.72928;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21];}; };
  _this setPos [12908.6,9963.84,0];
};

_vehicle_132 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [12906.9,9952.43,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_132 = _this;
  _this setDir 8.81977;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [12906.9,9952.43,0];
};

_vehicle_133 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [12999,10218,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_133 = _this;
  _this setDir 19.0526;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [12999,10218,0];
};

_vehicle_134 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13022.1,10284.6,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_134 = _this;
  _this setDir 19.0979;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.205];}; };
  _this setPos [13022.1,10284.6,0];
};

_vehicle_135 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [12991.2,10195.5,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_135 = _this;
  _this setDir 19.0436;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.205];}; };
  _this setPos [12991.2,10195.5,0];
};

_vehicle_136 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13018.4,10273.9,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_136 = _this;
  _this setDir 19.1208;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.205];}; };
  _this setPos [13018.4,10273.9,0];
};

_vehicle_137 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13025.8,10295.3,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_137 = _this;
  _this setDir 19.1883;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.205];}; };
  _this setPos [13025.8,10295.3,0];
};

_vehicle_138 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13006.7,10240.4,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_138 = _this;
  _this setDir 19.1417;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.205];}; };
  _this setPos [13006.7,10240.4,0];
};

_vehicle_139 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [12987.4,10184.5,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_139 = _this;
  _this setDir 19.0537;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [12987.4,10184.5,0];
};

_vehicle_140 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13003,10229.4,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_140 = _this;
  _this setDir 19.1331;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13003,10229.4,0];
};

_vehicle_141 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13010.6,10251.4,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_141 = _this;
  _this setDir 199.046;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13010.6,10251.4,0];
};

_vehicle_142 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13014.5,10262.8,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_142 = _this;
  _this setDir 199.109;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13014.5,10262.8,0];
};

_vehicle_143 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [12995.1,10206.6,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_143 = _this;
  _this setDir 19.1871;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [12995.1,10206.6,0];
};

_vehicle_144 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13029.5,10306,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_144 = _this;
  _this setDir 19.1883;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.205];}; };
  _this setPos [13029.5,10306,0];
};

_vehicle_145 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13033.4,10317.1,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_145 = _this;
  _this setDir 379.168;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16];}; };
  _this setPos [13033.4,10317.1,0];
};

_vehicle_146 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13114,10507.9,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_146 = _this;
  _this setDir 199.036;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.18];}; };
  _this setPos [13114,10507.9,0];
};

_vehicle_147 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13090.9,10441.3,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_147 = _this;
  _this setDir 199.081;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.205];}; };
  _this setPos [13090.9,10441.3,0];
};

_vehicle_148 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13121.8,10530.4,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_148 = _this;
  _this setDir 199.2;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.205];}; };
  _this setPos [13121.8,10530.4,0];
};

_vehicle_149 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13094.6,10452,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_149 = _this;
  _this setDir 199.104;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.205];}; };
  _this setPos [13094.6,10452,0];
};

_vehicle_150 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13087.2,10430.6,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_150 = _this;
  _this setDir 199.011;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.22];}; };
  _this setPos [13087.2,10430.6,0];
};

_vehicle_151 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13106.2,10485.5,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_151 = _this;
  _this setDir 199.125;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.205];}; };
  _this setPos [13106.2,10485.5,0];
};

_vehicle_152 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13125.6,10541.4,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_152 = _this;
  _this setDir 199.015;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.18];}; };
  _this setPos [13125.6,10541.4,0];
};

_vehicle_153 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13110,10496.5,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_153 = _this;
  _this setDir 199.117;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.18];}; };
  _this setPos [13110,10496.5,0];
};

_vehicle_154 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13102.4,10474.5,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_154 = _this;
  _this setDir 379.029;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.18];}; };
  _this setPos [13102.4,10474.5,0];
};

_vehicle_155 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13098.5,10463.1,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_155 = _this;
  _this setDir 379.092;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.18];}; };
  _this setPos [13098.5,10463.1,0];
};

_vehicle_156 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13117.9,10519.3,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_156 = _this;
  _this setDir 199.171;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.18];}; };
  _this setPos [13117.9,10519.3,0];
};

_vehicle_157 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [13083.5,10419.9,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_157 = _this;
  _this setDir 198.96;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.22];}; };
  _this setPos [13083.5,10419.9,0];
};

_vehicle_158 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13079.7,10408.8,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_158 = _this;
  _this setDir 559.152;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.18];}; };
  _this setPos [13079.7,10408.8,0];
};

_vehicle_159 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13102.7,10503,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_159 = _this;
  _this setDir 19.1541;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.18];}; };
  _this setPos [13102.7,10503,0];
};

_vehicle_160 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [13106.6,10514.4,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_160 = _this;
  _this setDir 19.115;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.18];}; };
  _this setPos [13106.6,10514.4,0];
};

_vehicle_161 = objNull;
if (true) then
{
  _this = "Land_loco_742_red" createVehicle [13098.5,10491,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_161 = _this;
  _this setDir -160.837;
  _this setPos [13098.5,10491,0];
};

/* Colliding with Chernogorsk Traintracks / Roadblock
_vehicle_162 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [6548.56,2651.34,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_162 = _this;
  _this setDir 40.6864;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21 ];}; };
  _this setPos [6548.56,2651.34,0];
};
*/

/* Colliding with Chernogorsk Traintracks / Roadblock
_vehicle_163 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6533.65,2633.95,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_163 = _this;
  _this setDir 40.6281;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16 ];}; };
  _this setPos [6533.65,2633.95,0];
};
*/

_vehicle_164 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6517.91,2615.62,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_164 = _this;
  _this setDir 40.6412;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16 ];}; };
  _this setPos [6517.91,2615.62,0];
};

_vehicle_165 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6525.69,2624.66,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_165 = _this;
  _this setDir 220.639;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16 ];}; };
  _this setPos [6525.69,2624.66,0];
};

/* Colliding with Chernogorsk Traintracks / Roadblock
_vehicle_166 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [6541.2,2642.78,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_166 = _this;
  _this setDir 40.6699;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21 ];}; };
  _this setPos [6541.2,2642.78,0];
};
*/

_vehicle_167 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [6508.3,2604.47,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_167 = _this;
  _this setDir 40.7534;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2 ];}; };
  _this setPos [6508.3,2604.47,0];
};

/* Colliding with Chernogorsk Traintracks / Roadblock
_vehicle_168 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [6546.45,2627.71,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_168 = _this;
  _this setDir 40.72;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21 ];}; };
  _this setPos [6546.45,2627.71,0];
};
*/

_vehicle_169 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [6539.11,2619.12,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_169 = _this;
  _this setDir 40.5307;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21 ];}; };
  _this setPos [6539.11,2619.12,0];
};

/* Colliding with Chernogorsk Traintracks / Roadblock
_vehicle_170 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [6555.74,2638.48,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_170 = _this;
  _this setDir 40.6135;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21 ];}; };
  _this setPos [6555.74,2638.48,0];
};
*/

/* Colliding with Chernogorsk Traintracks / Roadblock
_vehicle_171 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [6566.93,2651.51,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_171 = _this;
  _this setDir 40.7265;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21 ];}; };
  _this setPos [6566.93,2651.51,0];
};
*/

_vehicle_172 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [6533.01,2587.37,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_172 = _this;
  _this setDir 40.7015;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.21 ];}; };
  _this setPos [6533.01,2587.37,0];
};

_vehicle_173 = objNull;
if (true) then
{
  _this = "Land_loco_742_red" createVehicle [6525.06,2578.03,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_173 = _this;
  _this setDir -139.265;
  _this setPos [6525.06,2578.03,0];
};

_vehicle_174 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6498.84,2593.43,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_174 = _this;
  _this setDir 40.6412;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16 ];}; };
  _this setPos [6498.84,2593.43,0];
};

_vehicle_175 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6490.97,2584.29,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_175 = _this;
  _this setDir 40.6412;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16 ];}; };
  _this setPos [6490.97,2584.29,0];
};

_vehicle_176 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [6975.78,2709.83,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_176 = _this;
  _this setDir -39.1664;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2 ];}; };
  _this setPos [6975.78,2709.83,0];
};

_vehicle_177 = objNull;
if (true) then
{
  _this = "Land_loco_742_red" createVehicle [6990.01,2706.97,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_177 = _this;
  _this setDir -39.1795;
  _this setPos [6990.01,2706.97,0];
};

_vehicle_178 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [6982.92,2701.08,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_178 = _this;
  _this setDir 320.932;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [6982.92,2701.08,0];
};

_vehicle_179 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [6968.65,2718.6,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_179 = _this;
  _this setDir -38.9921;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2 ];}; };
  _this setPos [6968.65,2718.6,0];
};

_vehicle_180 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6977.53,2715.06,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_180 = _this;
  _this setDir -39.0062;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.144];}; };
  _this setPos [6977.53,2715.06,0];
};

_vehicle_181 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6992.76,2696.31,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_181 = _this;
  _this setDir -39.1552;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.144];}; };
  _this setPos [6992.76,2696.31,0];
};

_vehicle_182 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6985.15,2705.68,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_182 = _this;
  _this setDir -39.2022;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.144];}; };
  _this setPos [6985.15,2705.68,0];
};

_vehicle_183 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6969.91,2724.43,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_183 = _this;
  _this setDir -39.1852;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.147];}; };
  _this setPos [6969.91,2724.43,0];
};

_vehicle_184 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [6940.98,2395.26,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_184 = _this;
  _this setDir 52.0169;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.173];}; };
  _this setPos [6940.98,2395.26,0];
};

_vehicle_185 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [6954.5,2405.83,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_185 = _this;
  _this setDir 52.0778;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.173];}; };
  _this setPos [6954.5,2405.83,0];
};

_vehicle_186 = objNull;
if (true) then
{
  _this = "Land_Misc_Cargo1E_EP1" createVehicle [6950.61,2402.79,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_186 = _this;
  _this setDir -127.844;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [6950.61,2402.79,0];
};

_vehicle_187 = objNull;
if (true) then
{
  _this = "Misc_Cargo1B_military" createVehicle [6955.99,2406.99,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_187 = _this;
  _this setDir 52.2078;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [6955.99,2406.99,0];
};

_vehicle_188 = objNull;
if (true) then
{
  _this = "Misc_cargo_cont_small_EP1" createVehicle [6959.6,2409.72,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_188 = _this;
  _this setDir 232.525;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [6959.6,2409.72,0];
};

_vehicle_189 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [6927.51,2384.74,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_189 = _this;
  _this setDir 52.0169;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.173];}; };
  _this setPos [6927.51,2384.74,0];
};

_vehicle_190 = objNull;
if (true) then
{
  _this = "Land_Misc_Cargo1Eo_EP1" createVehicle [6943.61,2397.3,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_190 = _this;
  _this setDir 51.9726;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [6943.61,2397.3,0];
};

_vehicle_191 = objNull;
if (true) then
{
  _this = "Misc_Cargo1B_military" createVehicle [6938.71,2393.39,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_191 = _this;
  _this setDir 52.2078;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [6938.71,2393.39,0];
};

_vehicle_192 = objNull;
if (true) then
{
  _this = "Misc_Cargo1Bo_military" createVehicle [7069.49,2507.18,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_192 = _this;
  _this setDir 33.1085;
  _this setPos [7069.49,2507.18,0];
};

_vehicle_193 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6531.57,2610.31,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_193 = _this;
  _this setDir 40.4888;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.16 ];}; };
  _this setPos [6531.57,2610.31,0];
};

_vehicle_194 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [6939.54,2388.32,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_194 = _this;
  _this setDir 232.087;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.147];}; };
  _this setPos [6939.54,2388.32,0];
};

_vehicle_195 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [3623.7,2171.53,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_195 = _this;
  _this setDir 17.7007;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.155];}; };
  _this setPos [3623.7,2171.53,0];
};

_vehicle_196 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [3627.4,2183.16,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_196 = _this;
  _this setDir 17.7007;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.155];}; };
  _this setPos [3627.4,2183.16,0];
};

_vehicle_197 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [3631.05,2194.64,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_197 = _this;
  _this setDir 17.7007;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.155];}; };
  _this setPos [3631.05,2194.64,0];
};

_vehicle_198 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [3634.73,2206.28,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_198 = _this;
  _this setDir 17.7007;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.155];}; };
  _this setPos [3634.73,2206.28,0];
};

_vehicle_199 = objNull;
if (true) then
{
  _this = "Land_loco_742_blue" createVehicle [7102.12,3174.18,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_199 = _this;
  _this setDir 110.911;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 1.3 ]; _this setvectordirandup [[-1,-1,0],[-5,0,-1]];}; };
  _this setPos [7102.12,3174.18,0];
};

_vehicle_200 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7107.71,3170.25,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_200 = _this;
  _this setDir 185;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 1.2 ]; _this setvectordirandup [[0,0.1,0],[-100,0,0]];}; };
  _this setPos [7107.71,3170.25,0];
};

_vehicle_201 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7110.45,3178.59,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_201 = _this;
  _this setDir 1.35996;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.6 ]; _this setvectordirandup [[-0.8,-0.9,0.3],[0,0.9,0.9]];}; };
  _this setPos [7110.45,3178.59,0];
};

_vehicle_202 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7157.28,3185.96,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_202 = _this;
  _this setDir 267.443;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7157.28,3185.96,0];
};

_vehicle_203 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7132.42,3165.21,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_203 = _this;
  _this setDir -151.81;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.3];}; };
  _this setPos [7132.42,3165.21,0];
};

_vehicle_204 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7246.22,3214.1,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_204 = _this;
  _this setDir -94.937;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7246.22,3214.1,0];
};

_vehicle_205 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7347.18,3252.48,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_205 = _this;
  _this setDir -103.959;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.14];}; };
  _this setPos [7347.18,3252.48,0];
};

_vehicle_206 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7361.46,3256.02,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_206 = _this;
  _this setDir 76.1935;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.45];}; };
  _this setPos [7361.46,3256.02,0];
};

_vehicle_207 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7391.89,3263.52,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_207 = _this;
  _this setDir 76.2594;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.395]; _this setvectordirandup [[1,0.24,0.023],[0,0,0.1]];}; };
  _this setPos [7391.89,3263.52,0];
};

_vehicle_208 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7426.81,3271.69,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_208 = _this;
  _this setDir 79.0538;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3];}; };
  _this setPos [7426.81,3271.69,0];
};

_vehicle_209 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7565.06,3286.06,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_209 = _this;
  _this setDir 86.4748;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7565.06,3286.06,0];
};

_vehicle_210 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7533.75,3284.17,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_210 = _this;
  _this setDir 86.3477;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7533.75,3284.17,0];
};

_vehicle_211 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7266.51,3220.54,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_211 = _this;
  _this setDir 71.8477;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.85];}; };
  _this setPos [7266.51,3220.54,0];
};

_vehicle_212 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7300.95,3235.73,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_212 = _this;
  _this setDir 66.2679;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.72]; _this setvectordirandup [[-1,-0.444,0.016],[0,0,0.1]];}; };
  _this setPos [7300.95,3235.73,0];
};

_vehicle_213 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7324.47,3245.84,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_213 = _this;
  _this setDir 69.3402;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [7324.47,3245.84,0];
};

_vehicle_214 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7621.82,3289.54,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_214 = _this;
  _this setDir 86.5142;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7621.82,3289.54,0];
};

_vehicle_215 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7590.48,3287.64,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_215 = _this;
  _this setDir 86.332;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7590.48,3287.64,0];
};

_vehicle_216 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7123.26,3159.89,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_216 = _this;
  _this setDir 96.9888;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 1]; _this setvectordirandup [[-1,0,0],[5,-5,-1]];}; };
  _this setPos [7123.26,3159.89,0];
};

_vehicle_217 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7234.76,3208.31,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_217 = _this;
  _this setDir 40.9211;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1]; _this setvectordirandup [[-0.9,-0.9,0.02],[0,0.005,0.1]];}; };
  _this setPos [7234.76,3208.31,0];
};

_vehicle_218 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7314,3241.5,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_218 = _this;
  _this setDir 66.2006;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.3];  _this setvectordirandup [[1,0.44,-0.015],[0,0,0.1]];}; };
  _this setPos [7314,3241.5,0];
};

_vehicle_219 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7116.92,3184.8,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_219 = _this;
  _this setDir 114.526;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 1.2 ]; _this setvectordirandup [[-5.8,-0.9,0.2],[0,-0.9,0.2]];}; };
  _this setPos [7116.92,3184.8,0];
};

_vehicle_220 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7210.89,3196.77,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_220 = _this;
  _this setDir -115.266;
  _this setPos [7210.89,3196.77,0];
};

_vehicle_221 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7223.67,3201.53,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_221 = _this;
  _this setDir -96.6494;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7223.67,3201.53,0];
};

_vehicle_222 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7403.32,3266.33,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_222 = _this;
  _this setDir 76.1952;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.9]; _this setvectordirandup [[1,0.24,0.023],[0,0,0.1]];}; };
  _this setPos [7403.32,3266.33,0];
};

_vehicle_223 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7547.91,3285.01,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_223 = _this;
  _this setDir 86.4514;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7547.91,3285.01,0];
};

_vehicle_224 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7579.27,3286.91,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_224 = _this;
  _this setDir -93.5671;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7579.27,3286.91,0];
};

_vehicle_225 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7414.9,3269.16,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_225 = _this;
  _this setDir 256.565;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.3]; _this setvectordirandup [[-1,-0.234,-0.003],[0,0,0.1]];}; };
  _this setPos [7414.9,3269.16,0];
};

_vehicle_226 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7378.12,3260.13,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_226 = _this;
  _this setDir 76.1244;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.2];}; };
  _this setPos [7378.12,3260.13,0];
};

_vehicle_227 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7438.25,3273.66,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_227 = _this;
  _this setDir 81.1056;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7438.25,3273.66,0];
};

_vehicle_228 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7169.23,3180.84,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_228 = _this;
  _this setDir 13.7257;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7169.23,3180.84,0];
};

_vehicle_229 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7127.4,3182.17,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_229 = _this;
  _this setDir 61.8182;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7127.4,3182.17,0];
};

_vehicle_230 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7256.01,3216.84,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_230 = _this;
  _this setDir 30;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.4]; _this setvectordirandup [[0.1,0.04,0],[0,0.1,0.5]];}; };
  _this setPos [7256.01,3216.84,0];
};

_vehicle_231 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7276.77,3224.81,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_231 = _this;
  _this setDir 62.2029;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.9];}; };
  _this setPos [7276.77,3224.81,0];
};

_vehicle_232 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7287.65,3229.83,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_232 = _this;
  _this setDir 69.6055;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.93];  _this setvectordirandup [[1,0.44,0.016],[0,0,0.1]];}; };
  _this setPos [7287.65,3229.83,0];
};

_vehicle_233 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7449.4,3275.38,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_233 = _this;
  _this setDir 81.0941;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7449.4,3275.38,0];
};

_vehicle_234 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7460.57,3277.09,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_234 = _this;
  _this setDir 81.4058;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7460.57,3277.09,0];
};

_vehicle_235 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7471.73,3278.79,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_235 = _this;
  _this setDir 81.4323;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7471.73,3278.79,0];
};

_vehicle_236 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7482.89,3280.38,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_236 = _this;
  _this setDir 82.6699;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7482.89,3280.38,0];
};

_vehicle_237 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7494.1,3281.6,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_237 = _this;
  _this setDir 84.9623;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7494.1,3281.6,0];
};

_vehicle_238 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7522.48,3283.45,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_238 = _this;
  _this setDir 86.5176;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7522.48,3283.45,0];
};

_vehicle_239 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7701.24,3294.42,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_239 = _this;
  _this setDir 86.4458;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.18];}; };
  _this setPos [7701.24,3294.42,0];
};

_vehicle_240 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7669.9,3292.46,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_240 = _this;
  _this setDir 86.5497;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.24]; _this setvectordirandup [[1,0.06,-0.001],[0,0,0.1]];}; };
  _this setPos [7669.9,3292.46,0];
};

_vehicle_241 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7726.66,3295.97,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_241 = _this;
  _this setDir 86.4875;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.19];}; };
  _this setPos [7726.66,3295.97,0];
};

_vehicle_242 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7684.1,3293.35,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_242 = _this;
  _this setDir 86.4589;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.2];}; };
  _this setPos [7684.1,3293.35,0];
};

_vehicle_243 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7715.44,3295.24,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_243 = _this;
  _this setDir -93.4031;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.18];}; };
  _this setPos [7715.44,3295.24,0];
};

_vehicle_244 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7636.04,3290.42,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_244 = _this;
  _this setDir 86.6897;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7636.04,3290.42,0];
};

_vehicle_245 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7647.33,3291.12,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_245 = _this;
  _this setDir 86.4755;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7647.33,3291.12,0];
};

_vehicle_246 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7658.61,3291.72,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_246 = _this;
  _this setDir 86.4554;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.29]; _this setvectordirandup [[1,0.064,-0.001],[0,0,0.1]];}; };
  _this setPos [7658.61,3291.72,0];
};

_vehicle_247 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7121.97,3181.71,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_247 = _this;
  _this setDir -132.027;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.3];}; };
  _this setPos [7121.97,3181.71,0];
};

_vehicle_248 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7160.86,3179.13,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_248 = _this;
  _this setDir -50.3757;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1]; _this setvectordirandup [[-1,0.8,0],[-0.1,0,1]];}; };
  _this setPos [7160.86,3179.13,0];
};

_vehicle_249 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7141.34,3172.62,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_249 = _this;
  _this setDir 71.8785;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.3];}; };
  _this setPos [7141.34,3172.62,0];
};

_vehicle_250 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7151.17,3178.25,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_250 = _this;
  _this setDir 37.7236;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.3];}; };
  _this setPos [7151.17,3178.25,0];
};

_vehicle_251 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7190.67,3185.98,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_251 = _this;
  _this setDir 18.081;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7190.67,3185.98,0];
};

_vehicle_252 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7112.81,3160.71,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_252 = _this;
  _this setDir 56.5019;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7112.81,3160.71,0];
};

_vehicle_253 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7116.03,3166.55,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_253 = _this;
  _this setDir 137.568;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.6 ]; _this setvectordirandup [[-1.8,3,0],[0,-0.1,0.1]];}; };
  _this setPos [7116.03,3166.55,0];
};

_vehicle_254 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7110.4,3169.71,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_254 = _this;
  _this setDir 29.0014;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.6 ]; _this setvectordirandup [[0.1,-0.9,0.1],[0,-5.2,0.1]];}; };
  _this setPos [7110.4,3169.71,0];
};

_vehicle_255 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7106,3162.41,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_255 = _this;
  _this setDir 138.884;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.3 ]; _this setvectordirandup [[0.5,0.1,0],[100,0,0]];}; };
  _this setPos [7106,3162.41,0];
};

_vehicle_256 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7145.63,3181.54,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_256 = _this;
  _this setDir -128.163;
  _this setPos [7145.63,3181.54,0];
};

_vehicle_257 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7173.86,3187.55,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_257 = _this;
  _this setDir 94.6955;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7173.86,3187.55,0];
};

_vehicle_258 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7198.27,3191.93,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_258 = _this;
  _this setDir 80.1429;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7198.27,3191.93,0];
};

_vehicle_259 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7183.31,3183.96,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_259 = _this;
  _this setDir 130.869;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7183.31,3183.96,0];
};

_vehicle_260 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7508.28,3282.56,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_260 = _this;
  _this setDir 86.4346;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7508.28,3282.56,0];
};

_vehicle_261 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7604.7,3288.48,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_261 = _this;
  _this setDir 86.742;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.35];}; };
  _this setPos [7604.7,3288.48,0];
};

_vehicle_262 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7740.88,3296.84,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_262 = _this;
  _this setDir 86.4998;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.208];}; };
  _this setPos [7740.88,3296.84,0];
};

_vehicle_263 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7758.04,3297.7,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_263 = _this;
  _this setDir 87.9836;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.222];}; };
  _this setPos [7758.04,3297.7,0];
};

_vehicle_264 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7775.25,3297.81,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_264 = _this;
  _this setDir 91.2598;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.225];}; };
  _this setPos [7775.25,3297.81,0];
};

_vehicle_265 = objNull;
if (true) then
{
  _this = "Land_wagon_flat" createVehicle [7792.42,3297.37,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_265 = _this;
  _this setDir 91.6922;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 1.205];}; };
  _this setPos [7792.42,3297.37,0];
};

_vehicle_266 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7335.53,3249.47,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_266 = _this;
  _this setDir -105.878;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.15];}; };
  _this setPos [7335.53,3249.47,0];
};

_vehicle_267 = objNull;
if (true) then
{
  _this = "BRDMWreck" createVehicle [7259.51,3214.84,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_267 = _this;
  _this setDir -272.392;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.5];}; };
  _this setPos [7259.51,3214.84,0];
};

_vehicle_268 = objNull;
if (true) then
{
  _this = "SKODAWreck" createVehicle [7369.42,3275.15,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_268 = _this;
  _this setDir -1153.34;
  _this setPos [7369.42,3275.15,0];
};

_vehicle_269 = objNull;
if (true) then
{
  _this = "ClutterCutter_small_EP1" createVehicle [7369.54,3275.15,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_269 = _this;
  _this setDir -919.288;
  _this setPos [7369.54,3275.15,0];
};

_vehicle_270 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7118.34,3172.56,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_270 = _this;
  _this setDir 13.7257;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.6 ]; _this setvectordirandup [[0.3,-5.9,0.3],[-0.1,0.9,0.6]];}; };
  _this setPos [7118.34,3172.56,0];
};

_vehicle_271 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7123.31,3163.96,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_271 = _this;
  _this setDir 117.366;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.3]; _this setvectordirandup [[1,-0.3,0],[0,-0.15,0.1]];}; };
  _this setPos [7123.31,3163.96,0];
};

_vehicle_272 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7123.23,3169.97,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_272 = _this;
  _this setDir -130.992;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7123.23,3169.97,0];
};

_vehicle_273 = objNull;
if (true) then
{
  _this = "Land_wagon_box" createVehicle [7116.3,3177.32,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_273 = _this;
  _this setDir -50.3435;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.6 ]; _this setvectordirandup [[0.1,-5.9,0.3],[-0.5,0.9,0.6]];}; };
  _this setPos [7116.3,3177.32,0];
};

_vehicle_274 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7123.95,3175.53,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_274 = _this;
  _this setDir 70.3041;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7123.95,3175.53,0];
};

_vehicle_275 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7128.32,3168.8,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_275 = _this;
  _this setDir -169.665;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1]; _this setvectordirandup [[0,-1,-0.1],[0,-0.05,1]];}; };
  _this setPos [7128.32,3168.8,0];
};

_vehicle_276 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7129.83,3177.81,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_276 = _this;
  _this setDir -69.0689;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7129.83,3177.81,0];
};

_vehicle_277 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7134.06,3173.39,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_277 = _this;
  _this setDir -123.337;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7134.06,3173.39,0];
};

_vehicle_278 = objNull;
if (true) then
{
  _this = "Land_wagon_tanker" createVehicle [7136.33,3180.78,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_278 = _this;
  _this setDir -251.253;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1];}; };
  _this setPos [7136.33,3180.78,0];
};

_vehicle_279 = objNull;
if (true) then
{
  _this = "Land_Misc_Cargo1E_EP1" createVehicle [7109.97,3181.77,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_279 = _this;
  _this setDir -92.7887;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.35]; _this setvectordirandup [[1,-0.2,0.25],[-5,2,1]];}; };
  _this setPos [7109.97,3181.77,0];
};

_vehicle_280 = objNull;
if (true) then
{
  _this = "Misc_Cargo1B_military" createVehicle [7162.27,3173.02,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_280 = _this;
  _this setDir 52.2078;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)+ 0.31];  _this setvectordirandup [[-1,-0.8,-0.3],[0.1,0,1]];}; };
  _this setPos [7162.27,3173.02,0];
};

_vehicle_281 = objNull;
if (true) then
{
  _this = "Land_Misc_Cargo1Eo_EP1" createVehicle [7103.13,3168.99,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_281 = _this;
  _this spawn { sleep 1;if (isServer) then {_this setvectordirandup [[-0.5,-1,-0.15],[0,0,1]];}; };
  _this setPos [7103.13,3168.99,0];
};

_vehicle_282 = objNull;
if (true) then
{
  _this = "Misc_Cargo1B_military" createVehicle [7156.41,3177.2,0];
_this setVariable ["", true]; // prevent network SV by loot/zeds spawner

  _vehicle_282 = _this;
  _this spawn { sleep 1;if (isServer) then {_this setpos [(getpos _this select 0), (getpos _this select 1), (getpos _this select 2)- 0.1]; _this setvectordirandup [[1,-1,0],[-15,0,-1]];}; };
  _this setPos [7156.41,3177.2,0];
};
processInitCommands;
};
