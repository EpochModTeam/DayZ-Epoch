class Offroad_DSHKM_base : Car
{
	class Turrets : Turrets
	{
		class MainTurret;
	};
};

class Offroad_DSHKM_INS : Offroad_DSHKM_base
{
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			magazines[] =
			{
				50Rnd_127x107_DSHKM,
				50Rnd_127x107_DSHKM
			};
		};
	};
};