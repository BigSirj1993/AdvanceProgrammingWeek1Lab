#pragma once
#include <string>
#include <iostream>
#include "NickLab2.cpp"

using namespace std;

class Character : public Weapon {// Note 4 :  the lab 2 wants this to be a abstract base class 
	int sword;
	int katanas;
	int staff;
	int armour;
	int potion;
	int wand;
	int shield;
	int health = NULL;
	int power = NULL;
	int magic = NULL;


public:


	Weapon equip_weapon;
	Weapon equip_sword;
	Weapon equip_katanas;
	Weapon equip_staff;
	Weapon equip_armour;
	Weapon equip_potion;
	Weapon equip_wand;
	Weapon equip_shield;
	Character() : equip_sword(none), equip_katanas(none), equip_armour(none), equip_potion(none), equip_staff(none), equip_shield(none), equip_weapon(none), // No instance of constructor matches the argument list
		sword(0), armour(0), potion(0), wand(0), shield(0), {  } // What identifier will it be expecting?
};
//Character Swordsman(200, 100, 100, 30, 30, 5, 40);
//Character Ninja(125, 70, 50, 60, 60, 5, 100);
//Character Spellcaster(150, 30, 30, 100, 100, 5, 50);


class Swordsman : public Character
{
	Swordsman(int health, int attack, int defence, int specialAttack, int specialDefence, int level, int speed) : attack(attack), defence(defence), specialAttack(specialAttack), specialDefence(specialDefence), speed(speed), health(health) { }
	int level = 5;
	int attack = 100;
	int defence = 100;
	int specialAttack = 30;
	int specialDefence = 30;
	int health = 200;
	int speed = 40;




};
//Character Swordsman(200, 100, 100, 30, 30, 5, 40); // No instance of constructer matches the argument

class Ninja : public Character
{
	Ninja(int health, int attack, int defence, int specialAttack, int specialDefence, int level, int speed) : attack(attack), defence(defence), specialAttack(specialAttack), specialDefence(specialDefence), speed(speed), health(health) { }
	int level = 5;
	int attack = 70;
	int defence = 50;
	int specialAttack = 60;
	int specialDefence = 60;
	int health = 125;
	int speed = 100;




};
//Character Ninja(125, 70, 50, 60, 60, 5, 100); // No instance of constructer matches the argument

class Spellcaster : public Character
{
	Spellcaster(int health, int attack, int defence, int specialAttack, int specialDefence, int level, int speed) : attack(attack), defence(defence), specialAttack(specialAttack), specialDefence(specialDefence), speed(speed), health(health) { }
	int level = 5;
	int attack = 30;
	int defence = 30;
	int specialAttack = 100;
	int specialDefence = 100;
	int health = 150;
	int speed = 50;




};
//Character Spellcaster(150, 30, 30, 100, 100, 5, 50); // No instance of constructer matches the argument


