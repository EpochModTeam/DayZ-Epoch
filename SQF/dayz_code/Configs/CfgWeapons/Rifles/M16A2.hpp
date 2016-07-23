//no attachments on either of the M16A2s.
class M16A2_DZ : M16A2
{
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
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
		30Rnd_556x45_StanagSD
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