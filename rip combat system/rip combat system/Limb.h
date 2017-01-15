#pragma once
#include "Entity.h"

namespace rip
{
	class Limb
	{
	public:
		int		maxBloodPool,
				maxAirPool,
				maxDexterity;
		float	maxGrip,
				
				currentBloodPool,
				currentAirPool,
				currentDexterity,
				currentGrip;
	};
}