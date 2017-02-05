#include "Utilities.h"

using namespace rip;

Limb rip::loadLimb(std::string filename)
{
	Limb loaded_limb;
	std::string line;
	std::ifstream myfile(filename);
	int lineNumber = 0;
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			// line by line we can analyze the file
			if (line[0] != '/') {
				switch (lineNumber) {
				case 0:
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				// ...
				}
			}
		}
		myfile.close();
	}
	return loaded_limb;
}

Object rip::loadObject(std::string filename)
{
	Object loaded_object;
	std::string line;
	std::ifstream myfile(filename);
	int lineNumber = 0;
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			// line by line we can analyze the file
			if (line[0] != '/') {
				switch (lineNumber) {
				case 0:
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
					// ...
				}
			}
		}
		myfile.close();
	}
	return loaded_object;
}

Creature rip::loadCreature(std::string filename)
{
	Creature loaded_creature;
	std::string line;
	std::ifstream myfile(filename);
	int lineNumber = 0;
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			// line by line we can analyze the file
			if (line[0] != '/') {
				switch (lineNumber) {
				case 0:
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
					// ...
				}
			}
		}
		myfile.close();
	}
	return loaded_creature;
}

void rip::saveLimb(Limb limb)
{
}

void rip::saveObject(Object object)
{
}

void rip::saveCreature(Creature creature)
{
}
