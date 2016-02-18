#include "config\basicDefines.hpp"

class CfgPatches
{
	class dayz
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_anim"};
	};
};

class CfgVehicleClasses
{
	class zombie
	{
		displayName = "Zombie";
	};
};

class RscPicture;
class RscStandardDisplay;
#include "config\Rsc.hpp"

#include "config\DutyDefines.hpp"
#include "config\CfgMovesBasic.hpp"
#include "config\CfgMovesMaleSdr.hpp"
#include "config\CfgMovesZombie.hpp"

#include "config\CfgTownGenerator.hpp"
#include "config\CfgTownGeneratorUtes.hpp"

#include "config\CfgVehicles.hpp"

class CfgFaces
{
	class Default;
	
	class Man : Default
	{
		class Default;
		
		class Zombie1 : Default
		{
			name = "Zombie 1";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"Zombie1"};
			disabled = 0;
		};
		
		class Zombie2 : Default
		{
			name = "Zombie 2";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"Zombie2"};
			disabled = 0;
		};
	};
};

class CfgVoice
{
	class NoVoice
	{
		protocol = "RadioProtocolBase";
		variants[] = {1};
		directories[] = {"", ""};
		identityTypes[] = {"Default", "Zombie1", "Zombie2"};
	};
};

class CfgIdentities
{
	class Zombie1
	{
		name = "Zombie";
		face = "Zombie1";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	
	class Zombie2
	{
		name = "Zombie";
		face = "Zombie2";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
};

class cfgBody
{
	class head_hit
	{
		memoryPoint = "pilot";
		variation = 0.08;
	};
	
	class body
	{
		memoryPoint = "aimPoint";
		variation = 0.15;
	};
	
	class Spine2 : body {};
	
	class LeftArm
	{
		memoryPoint = "lelbow";
		variation = 0.1;
	};
	
	class RightArm
	{
		memoryPoint = "relbow";
		variation = 0.04;
	};
	
	class LeftForeArm
	{
		memoryPoint = "lwrist";
		variation = 0.04;
	};
	
	class RightForeArm
	{
		memoryPoint = "rwrist";
		variation = 0.04;
	};
	
	class LeftHand
	{
		memoryPoint = "LeftHandMiddle1";
		variation = 0.04;
	};
	
	class RightHand
	{
		memoryPoint = "RightHandMiddle1";
		variation = 0.04;
	};
	
	class legs
	{
		memoryPoint = "pelvis";
		variation = 0.15;
	};
	
	class LeftLeg : legs {};
	
	class LeftUpLeg : legs {};
	
	class RightLeg : legs {};
	
	class RightUpLeg : legs {};
};