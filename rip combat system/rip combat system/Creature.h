#pragma once
#include <list>
#include "Limb.h"

namespace rip
{
	class Creature
	{
		// just make stuff we don't want the user to ever have to see private...
		// added benefit of less getters and setters!
	private:
		// filename for saving and loading statuses
		std::string filename;
		// internal id for the creature. differentiates several generic or just unnamed creatures
		int		id;
		void	load(),
				saveStatus();

		// allow custom modifiers such as additional skills
		std::list<float>	attackModifiers;

	public:
		bool	TRAUMA_EFFECTS,			// some creatures may not be affected by trauma
				BREATHES,				// some creatures may not breathe at all
				BLOODLOSS_FATAL,		// some creatures may bleed but it doesnt matter (eg zombies)
				GENERIC;				// generic creatures have their data deleted when cleanup is called 

		std::string	name;				// name of the creature for flavor. defaults to the creature fileobject name

		float	totalBloodPool,			// gallons
				totalPumpRate,			// gallons/sec (per step)
				totalBloodloss,			// gallons/sec (per step)
				totalBodyWeight,		// lbs. limb weight + inventory weight
				totalEquipmentWeight,	// lbs
				totalWeight,			// lbs. bodyweight + equipmentweight
				totalAirPool,			// litres
				totalRespiration,		// litres/sec
				totalVisibilty,
				totalBrainTrauma,
				totalBodilyTrauma,
				totalBalance,			// 100% is no problems, but the value can exceed 100% (excess limbs, eg walking horrors)

				generalFatigue;			// general fatigue from combat. each attack & defense will affect this value 	
		int		generalInsanity,		// setting relationship values to other objects/entities will affect this. outcomes of high insanity are random target selection and self harm
				generalFaction,			// factions can be used to affect perspective targets 
				generalPresence,		// an intimidating or seemingly unstoppable enemy will discourage targeting, and a weakened or cowering one will attract targeting
				generalCarryWeight;		// comfortable carry weight. if this is exceeded, injury may occur

		int		skillGrappling,
				skillOneHanded,
				skillDualWield,
				skillTwoHanded,
				skillCoolness,			// panic may set in with low respiration, high blood loss, lack of visibility, significant trauma, etc.
				skillAthletics,
				skillDodge,
				skillStrength;

		std::list<Object*>	inventory;
		// the "root" limbs of the body
		std::list<Limb*>	body;
		// unconscious, stunned, panicking, insanity, disabled, disabled(suffocating)
		std::list<bool>		status;

		Creature(std::string filename);
		
		const int	MULTIPLY	= 11,
					DIVIDE		= 22,
					ADD			= 33,
					SUBTRACT	= 44,
					EXPONENT	= 55;

		void addAttackModifier(float amount, int modType = 33);
		void addDefenseModifier(float amount, int modType = 33);

		void toggleUnconscious();			// unconscious duration is determined by willpower and a combination of body and brain trauma
		void toggleStunned();				// if significant enough trauma is inflicted, the creature could be stunned (very short duration disable)
		void togglePanic();					// panic makes the target wish to flee
		void toggleInsane();				// insanity as described
		void toggleDisabled();				// a general catchall for other disabling effects (paralysis, mind control, etc.)
		void toggleDisabledCantBreathe();	// an additional disabling effect for suffocating disabling effects (frozen, force choke, etc.)

		Creature();
	};
}