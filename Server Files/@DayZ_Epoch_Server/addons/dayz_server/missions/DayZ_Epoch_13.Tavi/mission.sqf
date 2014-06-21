if (isServer) then {

  //Bandit Vendors
  call compile preProcessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Epoch_13.Tavi\bandit.sqf";
  //Bilgrad City
  call compile preProcessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Epoch_13.Tavi\bilgrad.sqf";
  //Branibor City
  call compile preProcessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Epoch_13.Tavi\branibor.sqf";
  //Hero Vendors
  call compile preProcessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Epoch_13.Tavi\hero.sqf";
  //Lyepenstok City
  call compile preProcessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Epoch_13.Tavi\lyepestok.sqf";
  //Misc. Vendors
  call compile preProcessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Epoch_13.Tavi\miscvendors.sqf";
  //Sabina City
  call compile preProcessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Epoch_13.Tavi\sabina.sqf";
  //Wholesalers
  call compile preProcessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Epoch_13.Tavi\wholesalers.sqf";

};

/*---------------------------------------------------------------------------

                        BEGIN TRADER PLACEMENT
                        AUTHOR: AVendettaForYou
                            Date: 12/11/2013

---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------

                        BEGIN BRANIBOR TRADERS

---------------------------------------------------------------------------*/

_unit_112 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Soldier_3", [7344.2422, 4301.9624], [], 0, "CAN_COLLIDE"];
  _unit_112 = _this;
  _this setDir 70.416916;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

/*---------------------------------------------------------------------------

                        END BRANIBOR TRADERS
                                &
                        BEGIN HERO TRADERS

---------------------------------------------------------------------------*/

_unit_128 = objNull;
if (true) then
{
  _this = createAgent ["Soldier_Sniper_PMC", [15598.164, 16402.732, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _unit_128 = _this;
  _this setDir -94.840897;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_131 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Woodlander3", [15579.386, 16376.245], [], 0, "CAN_COLLIDE"];
  _unit_131 = _this;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

/*---------------------------------------------------------------------------

                        END HERO TRADERS
                                &
                       BEGIN MISC. TRADERS

---------------------------------------------------------------------------*/

_unit_133 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Soldier_Pilot", [16555.693, 10161.202, -2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _unit_133 = _this;
  _this setDir -4.1776338;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_140 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Worker2", [17503.697, 7155.4609, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _unit_140 = _this;
  _this setDir -88.219208;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_143 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Worker2", [4075.8738, 7263.9927, -0.15314865], [], 0, "CAN_COLLIDE"];
  _unit_143 = _this;
  _this setDir -94.388802;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_145 = objNull;
if (true) then
{
  _this = createAgent ["Reynolds_PMC", [9864.4287, 7471.3115, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _unit_144 = _this;
  _this setDir -76.576241;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};


/*---------------------------------------------------------------------------

                        END MISC. TRADERS

---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------

                        BEGIN LYEPESTOK TRADERS

---------------------------------------------------------------------------*/

_unit_100 = objNull;
if (true) then
{
  _this = createAgent ["Doctor", [11710.82, 15222.83, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _unit_27 = _this;
  _this setDir 230.87508;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_101 = objNull;
if (true) then
{
  _this = createAgent ["Soldier_Sniper_KSVK_PMC", [11686.63, 15193.147, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _unit_101 = _this;
  _this setDir 19.652651;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_102 = objNull;
if (true) then
{
  _this = createAgent ["Soldier_GL_PMC", [11684.132, 15195.753, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _unit_102 = _this;
  _this setDir -299.2114;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_103 = objNull;
if (true) then
{
  _this = createAgent ["Citizen3", [11707.938, 15225.799], [], 0, "CAN_COLLIDE"];
  _unit_103 = _this;
  _this setDir 222.93503;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_104 = objNull;
if (true) then
{
  _this = createAgent ["RU_Worker4", [11701.782, 15231.117, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _unit_104 = _this;
  _this setDir 222.73032;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_105 = objNull;
if (true) then
{
  _this = createAgent ["RU_Woodlander4", [11687.524, 15226.847, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _unit_105 = _this;
  _this setDir -50.854939;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

/*---------------------------------------------------------------------------

                        END LYEPESTOK TRADERS
                                &
                        BEGIN BILGRAD TRADERS

---------------------------------------------------------------------------*/

_unit_106 = objNull;
if (true) then
{
  _this = createAgent ["RU_Woodlander4", [5552.4077, 8770.1514, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _unit_106 = _this;
  _this setDir -379.36389;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_107 = objNull;
if (true) then
{
  _this = createAgent ["RU_Worker4", [5542.8452, 8758.9189, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _unit_107 = _this;
  _this setDir -20.602602;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_108 = objNull;
if (true) then
{
  _this = createAgent ["Citizen3", [5538.1587, 8755.9873, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _unit_108 = _this;
  _this setDir -25.471672;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_109 = objNull;
if (true) then
{
  _this = createAgent ["Soldier_Sniper_KSVK_PMC", [5531.3525, 8754.4307, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _unit_109 = _this;
  _this setDir -55.216373;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_110 = objNull;
if (true) then
{
  _this = createAgent ["Soldier_GL_PMC", [5528.4814, 8753.5547, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _unit_110 = _this;
  _this setDir 16.056473;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_111 = objNull;
if (true) then
{
  _this = createAgent ["Doctor", [5523.5796, 8750.2285, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _unit_111 = _this;
  _this setDir -18.214668;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

/*---------------------------------------------------------------------------

                        END LYEPESTOK TRADERS
                                &
                        BEGIN BRANIBOR TRADERS

---------------------------------------------------------------------------*/

_unit_113 = objNull;
if (true) then
{
  _this = createAgent ["Citizen3", [7357.0015, 4325.874, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _unit_113 = _this;
  _this setDir 27.519766;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_114 = objNull;
if (true) then
{
  _this = createAgent ["RU_Worker4", [7350.311, 4331.0913, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _unit_114 = _this;
  _this setDir 51.095901;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_115 = objNull;
if (true) then
{
  _this = createAgent ["Soldier_GL_PMC", [7361.0786, 4331.8047, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _unit_115 = _this;
  _this setDir -158.64336;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_116 = objNull;
if (true) then
{
  _this = createAgent ["Soldier_Sniper_KSVK_PMC", [7358.4722, 4332.5903, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _unit_116 = _this;
  _this setDir 170.36325;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_117 = objNull;
if (true) then
{
  _this = createAgent ["Doctor", [7398.853, 4296.9365, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _unit_117 = _this;
  _this setDir -106.97213;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

/*---------------------------------------------------------------------------

                        END BRANIBOR TRADERS
                                &
                        BEGIN SABINA TRADERS

---------------------------------------------------------------------------*/

_unit_118 = objNull;
if (true) then
{
  _this = createAgent ["Doctor", [15295.845, 9287.3516, 1.7166138e-005], [], 0, "CAN_COLLIDE"];
  _unit_118 = _this;
  _this setDir 82.842331;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_119 = objNull;
if (true) then
{
  _this = createAgent ["Soldier_Sniper_KSVK_PMC", [15318.384, 9304.9199, -4.7683716e-005], [], 0, "CAN_COLLIDE"];
  _unit_119 = _this;
  _this setDir 186.42917;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_120 = objNull;
if (true) then
{
  _this = createAgent ["Soldier_GL_PMC", [15313.905, 9304.9209, -5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _unit_120 = _this;
  _this setDir -180.25139;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_121 = objNull;
if (true) then
{
  _this = createAgent ["RU_Woodlander4", [15318.999, 9260.8164, 1.7166138e-005], [], 0, "CAN_COLLIDE"];
  _unit_121 = _this;
  _this setDir -92.110161;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_122 = objNull;
if (true) then
{
  _this = createAgent ["Citizen3", [15299.092, 9303.5088, 1.6212463e-005], [], 0, "CAN_COLLIDE"];
  _unit_122 = _this;
  _this setDir 180.97282;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_123 = objNull;
if (true) then
{
  _this = createAgent ["RU_Worker4", [15306.199, 9303.7803, 2.9563904e-005], [], 0, "CAN_COLLIDE"];
  _unit_123 = _this;
  _this setDir -179.09961;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

/*---------------------------------------------------------------------------

                        END SABINA TRADERS
                                &
                        BEGIN BANDIT TRADERS

---------------------------------------------------------------------------*/

_unit_124 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Woodlander1", [10938.677, 651.23663, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _unit_124 = _this;
  _this setDir 28.1598;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_125 = objNull;
if (true) then
{
  _this = createAgent ["RU_Worker1", [10966.954, 654.58276, 0.97554183], [], 0, "CAN_COLLIDE"];
  _unit_125 = _this;
  _this setDir 224.19429;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_126 = objNull;
if (true) then
{
  _this = createAgent ["RU_Farmwife5", [10954.223, 658.16821, 0.22649978], [], 0, "CAN_COLLIDE"];
  _unit_126 = _this;
  _this setDir 124.9443;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_127 = objNull;
if (true) then
{
  _this = createAgent ["Dr_Hladik_EP1", [10958.092, 663.19617, 2.0027161e-005], [], 0, "CAN_COLLIDE"];
  _unit_127 = _this;
  _this setDir 138.0876;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

/*---------------------------------------------------------------------------

                        END BANDIT TRADERS
                                &
                        BEGIN HERO TRADERS

---------------------------------------------------------------------------*/

_unit_129 = objNull;
if (true) then
{
  _this = createAgent ["RU_Damsel5", [15595.011, 16378.547, 0.10890254], [], 0, "CAN_COLLIDE"];
  _unit_129 = _this;
  _this setDir -43.61562;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_130 = objNull;
if (true) then
{
  _this = createAgent ["RU_Doctor", [15576.031, 16377.422, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _unit_130 = _this;
  _this setDir 33.437065;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

/*---------------------------------------------------------------------------

                        END HERO TRADERS
                              &
                      BEGIN MISC. TRADERS

---------------------------------------------------------------------------*/

_unit_132 = objNull;
if (true) then
{
  _this = createAgent ["UN_CDF_Soldier_Pilot_EP1", [6813.0103, 8539.0498, 0.24721491], [], 0, "CAN_COLLIDE"];
  _unit_132 = _this;
  _this setDir -139.99222;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_134 = objNull;
if (true) then
{
  _this = createAgent ["Profiteer2_EP1", [5418.9609, 9503.3301, -8.1300735e-005], [], 0, "CAN_COLLIDE"];
  _unit_134 = _this;
  _this setDir 96.513527;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_135 = objNull;
if (true) then
{
  _this = createAgent ["Worker4", [10577.302, 16777.303, 0.00029063225], [], 0, "CAN_COLLIDE"];
  _unit_135 = _this;
  _this setDir 30.918655;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_136 = objNull;
if (true) then
{
  _this = createAgent ["Worker4", [17331.977, 12930.315, 0.026711226], [], 0, "CAN_COLLIDE"];
  _unit_136 = _this;
  _this setDir -50.771896;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_137 = objNull;
if (true) then
{
  _this = createAgent ["Profiteer2_EP1", [10698.253, 5983.9556, 1.2587931], [], 0, "CAN_COLLIDE"];
  _unit_137 = _this;
  _this setDir -40.017792;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_138 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Commander", [17503.266, 7163.0801], [], 0, "CAN_COLLIDE"];
  _unit_138 = _this;
  _this setDir -120.11973;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_139 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Soldier_CO", [17503.395, 7159.9517, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _unit_139 = _this;
  _this setDir -70.523041;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_141 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Commander", [4073.061, 7257.9731, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _unit_141 = _this;
  _this setDir -36.958515;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_142 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Soldier_CO", [4074.7593, 7260.0825, -0.062282562], [], 0, "CAN_COLLIDE"];
  _unit_142 = _this;
  _this setDir -83.040123;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

_unit_144 = objNull;
if (true) then
{
  _this = createAgent ["GUE_Soldier_2", [13340.847, 8610.9043], [], 0, "CAN_COLLIDE"];
  _unit_144 = _this;
  _this setDir 38.779274;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
  _this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};

/*---------------------------------------------------------------------------

                        END MISC. TRADERS BEGIN CAVE

---------------------------------------------------------------------------*/

_vehicle_0 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_RockWall", [7459.1753, 5563.689, -15.935781], [], 0, "CAN_COLLIDE"];
  _vehicle_0 = _this;
  _this setDir 22.532007;
  _this setPos [7459.1753, 5563.689, -15.935781];
};

_vehicle_6 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_Rock1", [7483.6265, 5563.1006, 9.3879547], [], 0, "CAN_COLLIDE"];
  _vehicle_6 = _this;
  _this setDir -20.742775;
  _this setPos [7483.6265, 5563.1006, 9.3879547];
};

_vehicle_8 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_RockWall", [7448.2822, 5577.2886, -12.513324], [], 0, "CAN_COLLIDE"];
  _vehicle_8 = _this;
  _this setDir 53.176468;
  _this setPos [7448.2822, 5577.2886, -12.513324];
};

_vehicle_10 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_RockWall", [7488.5293, 5601.2173, -16.799936], [], 0, "CAN_COLLIDE"];
  _vehicle_10 = _this;
  _this setDir 60.169662;
  _this setPos [7488.5293, 5601.2173, -16.799936];
};

_vehicle_13 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_Rock1", [7501.6338, 5586.0762, -15.271233], [], 0, "CAN_COLLIDE"];
  _vehicle_13 = _this;
  _this setDir -13.327832;
  _this setPos [7501.6338, 5586.0762, -15.271233];
};

_vehicle_16 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_Rock1", [7485.7813, 5613.438, -20.542929], [], 0, "CAN_COLLIDE"];
  _vehicle_16 = _this;
  _this setDir -37.718872;
  _this setPos [7485.7813, 5613.438, -20.542929];
};

_vehicle_19 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_RockWall", [7460.3696, 5589.6309, 11.182141], [], 0, "CAN_COLLIDE"];
  _vehicle_19 = _this;
  _this setDir -28.261766;
  _this setPos [7460.3696, 5589.6309, 11.182141];
};

_vehicle_21 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_RockTower", [7438.165, 5591.9888, -16.44178], [], 0, "CAN_COLLIDE"];
  _vehicle_21 = _this;
  _this setDir 114.6241;
  _this setPos [7438.165, 5591.9888, -16.44178];
};

_vehicle_23 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_RockWall", [7471.6938, 5572.3574, 11.46374], [], 0, "CAN_COLLIDE"];
  _vehicle_23 = _this;
  _this setDir 171.5014;
  _this setPos [7471.6938, 5572.3574, 11.46374];
};

_vehicle_26 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_Rock1", [7500.0537, 5573.8809, -12.877781], [], 0, "CAN_COLLIDE"];
  _vehicle_26 = _this;
  _this setDir -123.37493;
  _this setPos [7500.0537, 5573.8809, -12.877781];
};

_vehicle_31 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_RockWall", [7440.1509, 5567.709, -20.477165], [], 0, "CAN_COLLIDE"];
  _vehicle_31 = _this;
  _this setDir 112.72851;
  _this setPos [7440.1509, 5567.709, -20.477165];
};

_vehicle_33 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_RockWall", [7494.5361, 5608.7144, -20.709425], [], 0, "CAN_COLLIDE"];
  _vehicle_33 = _this;
  _this setDir 290.17264;
  _this setPos [7494.5361, 5608.7144, -20.709425];
};

_vehicle_35 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_R2_RockWall", [7512.4141, 5583.6958, -12.249199], [], 0, "CAN_COLLIDE"];
  _vehicle_35 = _this;
  _this setDir 171.5014;
  _this setPos [7512.4141, 5583.6958, -12.249199];
};

/*---------------------------------------------------------------------------

                               END CAVE.

---------------------------------------------------------------------------*/
processInitCommands;
