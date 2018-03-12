//Weapon.h
#pragma once

class Weapon {

	int type;

public:
	Weapon();
	~Weapon();

	int getType();
	void setType(int newType);
};