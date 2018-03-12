#pragma once
#include "Weapon.h"

class Player
{

public:
	Player();
	~Player();

	void Equip(Weapon wep);
	void ShootMain();
	void ShootSecondary();
	void ThrowGrenade();
};