#include "Player.h"
#include "Weapon.h"
#include <iostream>

using namespace std;

Player::Player()
{
}


Player::~Player()
{
}

///This function takes a weapon and checks the value of 'type' to determine what type of weapon it is (type is randomly generated in Weapon.cpp)
/// 0 = Main Weapon, 1 = Secondary Weapon, 2 = Grenade
///Then it calls the methods to print out shooting/throwing
void Player::Equip(Weapon wep) {
	switch (wep.getType()) {
	case 0:
		cout << "Main Weapon Equipped\n";
		ShootMain();
		cout << "\n";
		break;
	case 1:
		cout << "Secondary Weapon Equipped\n";
		ShootSecondary();
		cout << "\n";
		break;
	case 2:
		cout << "Grenade Equipped\n";
		ThrowGrenade();
		cout << "\n";
		break;
	default:
		cout << "Error\n";
	}
}

///print shooting
void Player::ShootMain() {
	cout << "    Shooting Primary: pew pew\n";
}

///print shooting
void Player::ShootSecondary() {
	cout << "    Shooting Secondary: tik tik tik tik\n";
}

///print throwing
void Player::ThrowGrenade() {
	cout << "    Throwing Grenade: BOOOOOM\n";
}