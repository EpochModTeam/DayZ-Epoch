//no attachments on either of the M16A2s.
class M16A2_DZ : M16A2
{
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36, 
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	class Attachments
	{
		Attachment_M203 = "M16A2_GL_DZ";
	};
};

class M16A2_GL_DZ : M16A2GL
{	
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M16A2_DZ'] call player_removeAttachment";
		};
	};
};
//ice apo resistance mod m16
class M16A2_Rusty_DZ : M16A2 {
	class FlashLight {
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1.0};
		position = "flash dir";
		direction = "flash";
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};
	scope = public;
	picture = "\ice_apo_weapons\Data\m16_ca.paa";
	model = "\ice_apo_weapons\M16_proxy";
	displayName = $STR_DZE_WPN_M16RUSTY_NAME;
	descriptionShort = $STR_DZE_WPN_M16RUSTY_DESC;
	selectionFireAnim = "zasleh";
	magazines[] = 
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36, 
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	class Library {
		libTextDesc = "This M16 rifle is in a very bad shape.";
	};
};

