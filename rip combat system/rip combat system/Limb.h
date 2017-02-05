#pragma once
#include <vector>
#include "Object.h"

namespace rip
{
	struct Limb : public Object
	{
	public:
		std::vector<Limb> attachedLimbs;
		int		owner;					// id of the creature owning this object (-1 if owned by world)

		int		maxBloodPool,			// maximum blood capacity
				maxAirPool,				// maximum air capacity

				maxIntelligence;		// maximum intelligence
		float	currentIntelligence,	// affects how much intelligence this contributes to the creature. in humans the brain would contain all intelligence
				

				limbBloodFlow,
				limbPainAmount,
				//limbToughness,			// a combination of the force of a blow and the toughness of the limb determine how much dexterity, intelligence, and power is lost
				// toughness is actually inherited by Object class

				currentBloodPool,
				currentAirPool,
				currentGrip;
	};
}