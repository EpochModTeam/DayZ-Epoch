class CfgBody
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