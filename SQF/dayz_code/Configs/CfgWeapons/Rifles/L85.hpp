class L85_Holo_DZ : BAF_L85A2_RIS_Holo
{
	/*
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
	};
	*/
};
class BAF_L85A2_RIS_CWS;
class BAF_L85A2_RIS_TWS_DZ : BAF_L85A2_RIS_CWS
{
	visionMode[] = {"Normal","NVG","Ti"};
	thermalMode[] = {6};
	discretefov[] = {0.0755,0.0249};
	discreteInitIndex = 0;
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;
	displayName = "L85A2 TWS";
};