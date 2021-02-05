#pragma once 
// Weapon Data
#include <iostream>
#include<string>
#include "NickLab2.cpp"
using namespace std; 


class Weapon
{
	Weapon(int dmg, string snd, short nu, string name) : damage(dmg), sound(snd), numofUses(nu), name(name) {}
	int damage;

	string sound;
	short numofUses;
	string name;
};
Weapon sword(20, "SLASH!", 5, "Gucci Sword");
Weapon katanas(12, "SLICE!", 5, "Fendy Katanas");
Weapon staff(15, "WHOOSH!", 5, "Tom Ford Staff");
Weapon armour(0, "DEFENSE!", 5, "Ferragamo Armour");
Weapon potion(0, "HEAL! HALLELUJER!", 5, "Ace of Spades Potion");
Weapon shield(7, "BLOCK!", 5, "Louis Vuitton Shield");
Weapon none(-1, "EQUIP YOUR ITEM", 0, "No Item Eqiupped");

class sword :public Character
{
	sword(int dmg, string snd, short nu, string name) : damage(dmg), sound(snd), numofUses(nu), name(name) { }
	int damage;

	string sound;
	short numofUses;
	string name;




};
Weapon sword(20, "SLASH!", 5, "Gucci Sword");

class katanas :public Character
{
	katanas(int dmg, string snd, short nu, string name) : damage(dmg), sound(snd), numofUses(nu), name(name) { }
	int damage;

	string sound;
	short numofUses;
	string name;




};
Weapon katanas(12, "SLICE!", 5, "Fendy Katanas");

class staff :public Character
{
	staff(int dmg, string snd, short nu, string name) : damage(dmg), sound(snd), numofUses(nu), name(name) { }
	int damage;

	string sound;
	short numofUses;
	string name;




};
Weapon staff(15, "WHOOSH!", 5, "Tom Ford Staff");

class armour :public Character
{
	armour(int dmg, string snd, short nu, string name) : damage(dmg), sound(snd), numofUses(nu), name(name) { }
	int damage;

	string sound;
	short numofUses;
	string name;




};
Weapon armour(0, "DEFENSE!", 5, "Ferragamo Armour");

class potion :public Character
{
	potion(int dmg, string snd, short nu, string name) : damage(dmg), sound(snd), numofUses(nu), name(name) { }
	int damage;

	string sound;
	short numofUses;
	string name;




};
Weapon potion(0, "HEAL! HALLELUJER!", 5, "Ace of Spades Potion");

class shield :public Character
{
	shield(int dmg, string snd, short nu, string name) : damage(dmg), sound(snd), numofUses(nu), name(name) { }
	int damage;

	string sound;
	short numofUses;
	string name;




};
Weapon shield(7, "BLOCK!", 5, "Louis Vuitton Shield");


class none :public Character
{
	none(int dmg, string snd, short nu, string name) : damage(dmg), sound(snd), numofUses(nu), name(name) { }
	int damage;

	string sound;
	short numofUses;
	string name;




};
Weapon none(-1, "EQUIP YOUR ITEM", 0, "No Item Eqiupped");

