//Weapon.cpp
#include "Weapon.h"

///researched using random number generation and was told to keep it global in order to keep the values different for each Weapon instantiated
#include <random>
#include <ctime>
std::default_random_engine e(time(0)); //global random engine
									   
///randomly generate a weapon type 
/// 0 = Main Weapon, 1 = Secondary Weapon, 2 = Grenade
Weapon::Weapon()
{
	type = e() % 3;
}

Weapon::~Weapon()
{
}

///return the type value
int Weapon::getType() {
	return type;
}

///set type of weapon
void Weapon::setType(int newType) {
	type = newType;
}