class AKS_Gold_DZ: AKM_DZ {
	displayName = $STR_DZ_WPN_AKS_GOLD_NAME;
	model = "\RH_aks\RH_aks47g.p3d";
	picture = "\RH_aks\inv\aks47g.paa";	
	class Attachments {};
};

class AKS_Silver_DZ: AKM_DZ {
	displayName = $STR_DZ_WPN_AKS_SILVER_NAME;
	model = "\RH_aks\RH_aks47s.p3d";
	picture = "\RH_aks\inv\aks47s.paa";
	class Attachments {};
};

class AK_47_S;
class AKS_DZ: AK_47_S {
	displayName = $STR_DZ_WPN_AKS_NAME;
	modes[] = {"Single","FullAuto"};
	magazines[] = {30Rnd_762x39_AK47,30Rnd_762x39_SA58,60Rnd_762x39_AK47_Taped};
};