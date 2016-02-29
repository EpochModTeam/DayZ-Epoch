// (c) facoptere@gmail.com, licensed to DayZMod for the community

// Restore the "RscDisplayMultiplayerSetup" dialog that is shortly displayed when the player is joining the game.

#define DEF_CA_MP_roles_Title 1001
#define DEF_CA_TextVotingTimeLeft 121
#define DEF_TextMission 1002
#define DEF_ValueMission 101
#define DEF_CA_TextDescription 1004
#define DEF_CA_ValueDescription 103
#define DEF_TextIsland 1003
#define DEF_ValueIsland 102
#define DEF_TextSide 1005
#define DEF_CA_B_West 104
#define DEF_CA_B_East 105
#define DEF_CA_B_Guerrila 106
#define DEF_CA_B_Civilian 107
#define DEF_TextRoles 1007
#define DEF_CA_ValueRoles 109
#define DEF_TextPool 1006
#define DEF_CA_ValuePool 114
#define DEF_CA_B_EnableAll 117
#define DEF_CA_B_Lock 118
#define DEF_CA_B_Params 128
#define DEF_CA_B_DSinterface 1012
#define DEF_CA_B_Kick 116
#define DEF_CA_ButtonContinue 1
#define DEF_CA_ButtonCancel 2

#define DEF_dayz_black 1017
#define DEF_MP_roles_TitleBorder 1008
#define DEF_SidesBack 1009
#define DEF_SidesBorder 1010
#define DEF_TextBack 1011
#define DEF_TextBorder 1012
#define DEF_ValuePoolBack 1013
#define DEF_ValuePoolBorder 1014
#define DEF_ValueRolesBack 1015
#define DEF_ValueRolesBorder 1016


disableSerialization;
_d = uiNameSpace getVariable 'RscDisplayMultiplayerSetup';
{
    _c = _d displayCtrl _x;
    _p = ctrlPosition _c;
    _c ctrlshow true;
    _y = ((_p select 1)-SafeZoneY)/SafeZoneH;
    if (_y > 1) then { // widgets over 100% are the hidden ones
        _y = _y - 1; // move the widget 100% upward so that it's visible
        _y = _y * SafeZoneH + SafeZoneY; _p set [1, _y];
        _c ctrlSetPosition _p; _c ctrlCommit 0;
    };
} count [
    DEF_CA_MP_roles_Title,
    DEF_CA_TextVotingTimeLeft,
    DEF_TextMission,
    DEF_ValueMission,
    DEF_CA_TextDescription,
    DEF_CA_ValueDescription,
    DEF_TextIsland,
    DEF_ValueIsland,
    DEF_TextSide,
    DEF_CA_B_West,
    DEF_CA_B_East,
    DEF_CA_B_Guerrila,
    DEF_CA_B_Civilian,
    DEF_CA_ValueRoles,
    DEF_TextPool,
    DEF_CA_ValuePool,
    //DEF_CA_B_EnableAll,
    //DEF_CA_B_Lock,
    DEF_CA_B_Params,
    DEF_CA_B_DSinterface,
    //DEF_CA_B_Kick,
    DEF_CA_ButtonContinue,
    DEF_CA_ButtonCancel,
    DEF_TextRoles,

	DEF_MP_roles_TitleBorder,
	DEF_SidesBack,
	DEF_SidesBorder,
	DEF_TextBack,
	DEF_TextBorder,
	DEF_ValuePoolBack,
	DEF_ValuePoolBorder,
	DEF_ValueRolesBack,
	DEF_ValueRolesBorder
];

{
    _c = _d displayCtrl _x;
    _p = ctrlPosition _c;
    _c ctrlshow true;
    _xx = ((_p select 0)-SafeZoneX)/SafeZoneW;
    if (_xx != 0.6) then { // "Pool" widgets should be at 60%
        _xx = 0.60 *SafeZoneW + SafeZoneX; _p set [0, _xx];
        _w = (38/100) * SafeZoneW; _p set [2, _w];
        _c ctrlSetPosition _p; _c ctrlCommit 0;
    };
} count [
    DEF_TextPool,
    DEF_CA_ValuePool
];

// TODO: hide DEF_dayz_black