#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "Limb.h"
#include "Creature.h"

namespace rip {
	Limb loadLimb(std::string filename);

	Object loadObject(std::string filename);

	Creature loadCreature(std::string filename);

	void saveLimb(Limb limb);

	void saveObject(Object object);

	void saveCreature(Creature creature);

}