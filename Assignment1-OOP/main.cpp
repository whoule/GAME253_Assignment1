//main.cpp
#include <iostream>
#include "Weapon.h"
#include "Player.h"

int main() {

	//Variables
	Weapon w1, w2, w3;
	Player p;

	//Equip function calls, will call print statements within Player.cpp
	p.Equip(w1);
	p.Equip(w2);
	p.Equip(w3);

	return 0;
}