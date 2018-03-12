//main.cpp
#include <iostream>
#include "Weapon.h"
#include "Player.h"
#include "Rifle.h"

int main() {

	///Variables 
	///Weapon randomizes gun between primary, secondary and grenade
	///Rifle is a primary weapon only class using inheritance
	Weapon w1, w2, w3;
	Rifle r1, r2;
	Player p;

	std::cout << "*********************************\n  Equipping 3 Random Weapons\n*********************************\n";

	///Equip function calls, will call print statements within Player.cpp
	p.Equip(w1);
	p.Equip(w2);
	p.Equip(w3);

	std::cout << "****************************\n  Equipping 2 Rifles Below\n****************************\n";

	p.Equip(r1);
	p.Equip(r2);

	return 0;
}