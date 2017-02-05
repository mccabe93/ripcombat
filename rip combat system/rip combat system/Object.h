#pragma once

namespace rip
{
	struct Object
	{
	public:
		int		owner;					// id of the creature owning this object (-1 if owned by world)

		int		value,
				maxSharpness,
				maxDexterity,			// maximum dex
				maxPower;				// maximum power

		float	width,
				height,
				depth,
				weight,
				currentPower,			// how much force the object can generate in movement
				currentDexterity,		// affects how nimble the object is. hands have high dexterity
				durability,
				maxGrip,
				currentGrip;
	};
}