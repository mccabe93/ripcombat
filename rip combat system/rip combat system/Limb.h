#pragma once
#include "Entity.h"

namespace rip
{
	class Limb : public Object
	{
	public:
		int		maxBloodPool,			// maximum blood capacity
				maxAirPool,				// maximum air capacity

				maxIntelligence;		// maximum intelligence
		float	currentIntelligence,	// affects how much intelligence this contributes to the creature. in humans the brain would contain all intelligence
				
				maxGrip,				// maximum grip
				

				limbBloodFlow,
				limbPainAmount,
				//limbToughness,			// a combination of the force of a blow and the toughness of the limb determine how much dexterity, intelligence, and power is lost
				// toughness is actually inherited by Entity class

				currentBloodPool,
				currentAirPool,
				currentGrip;
	};
}