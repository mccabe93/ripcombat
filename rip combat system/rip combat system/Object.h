#pragma once

namespace rip
{
	class Object
	{
	public:

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