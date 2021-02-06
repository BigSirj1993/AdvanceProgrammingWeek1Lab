#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include "Weapon.h"
#include "Character.h"

// lines 61, 62, 267, 295 i have problems on cpp.

using namespace std;
/* Note 6: Hierarchy Looks somthing like this
 Character base> the  player gets the heath, mana, attack and speed from the character>
 Player has a level and player name

 Weopon Base Has a Name and  Sound > Axe is a Weapon axe has damage, number of uses
  
*/
// Note 5 : Lab 2 wants a weapon class with three  different kinds of wepons  
struct Weapon
{
Weapon(int dmg, string snd, short nu, string name) : damage(dmg), sound(snd), numofUses(nu), name(name) {}
int damage;

string sound;
short numofUses;
string name;
};
Weapon sword(20, "SLASH!", 5, "Gucci Sword");
Weapon wand(15, "WHOOSH!", 5, "Tom Ford Wand");
Weapon armour(0, "DEFENSE!", 5, "Ferragamo Armour");
Weapon potion(0, "HEAL! HALLELUJER!", 5, "Ace of Spades Potion");
Weapon shield(7, "BLOCK!", 5, "Louis Vuitton Shield");
Weapon none(-1, "EQUIP YOUR ITEM", 0, "No Item Eqiupped");


class Character: public Weapon {// Note 4 :  the lab 2 wants this to be a abstract base class 
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
Character Swordsman(200, 100, 100, 30, 30, 5, 40); // No instance of constructer matches the argument

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
Character Ninja(125, 70, 50, 60, 60, 5, 100); // No instance of constructer matches the argument

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
Character Spellcaster(150, 30, 30, 100, 100, 5, 50); // No instance of constructer matches the argument




Character player;
Character myChara;

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

class VideoGame
{
public:

	VideoGame() {}

	explicit VideoGame(string t, string g, char r, string d) : //constructor
		title(t), genre(g), rating(r), developer(d)
	{
	}


	void setitle(const string& title)
	{
		this->title = title;
	}

	string getTitle()
	{
		return title;
	}

	void setGenre(const string& genre)
	{
		this->genre = genre;
	}

	string getGenre()
	{
		return genre;
	}

	void setRating(const char& rating)
	{
		this->rating = rating;
	}

	char getRating()
	{
		return rating;
	}

	void setDev(const string& dev)
	{
		this->developer = dev;
	}

	string getDev()
	{
		return developer;
	}



private:
	string title;
	string genre;
	char rating;
	string developer;

};









/*class Player
{

string playerClass;
string Name;
int level;
int attack;
int defence;
int specialAttack;
int specialDefence;
int speed;


public:

int health;
int mana;


Player(int choice)
{
if (choice == 1)
{
playerClass = "Swordsman";
level = 5;
health = 200;
attack = 100;
defence = 100;
specialAttack = 30;
specialDefence = 30;
speed = 40;


}
if (choice == 2)
{
playerClass = "Ninja";
level = 5;
health = 125;
attack = 70;
defence = 50;
specialAttack = 60;
specialDefence = 60;
speed = 100;


}
if (choice == 3)
{
playerClass = "Spellcaster";
level = 5;
health = 150;
attack = 30;
defence = 30;
specialAttack = 100;
specialDefence = 100;
speed = 50;



}

}

string printClass()
{
return playerClass;

}


};*/




// Note 3 : Character name was used two times 
int main()
{
	VideoGame Games[5];
	string info;
	char rate;

	for (size_t i = 0; i < 5; i++)
	{
		cout << "Enter a game name: ";
		getline(cin, info);
		Games[i].setitle(info);
		cout << "Entered game is " << Games[i].getTitle() << ".";
		cout << endl;

		cout << "Enter the game's genre: ";
		getline(cin, info);
		Games[i].setGenre(info);
		cout << Games[i].getTitle() << "'s" << " genre is " << Games[i].getGenre() << ".";
		cout << endl;

		cout << "Enter the games rating: ";
		cin >> rate;
		Games[i].setRating(rate);
		cout << Games[i].getTitle() << "'s" << " rating is " << Games[i].getRating() << ".";
		cout << endl;

		cout << "Enter the games developer: ";
		getline(cin, info);
		Games[i].setDev(info);
		cout << Games[i].getTitle() << "'s" << " developer is " << Games[i].getDev() << ".";
		cout << endl;

		cout << "Title: " << Games[i].getTitle() << endl;
		cout << "Genre: " << Games[i].getGenre() << endl;
		cout << "Rating: " << Games[i].getRating() << endl;
		cout << "Developer: " << Games[i].getDev() << endl;
		cout << endl;

	}



cout << "Choose you class for your player." << endl;
cout << "[1] Warrior (Strong and Durable!)" << endl;
cout << "[2] Ninja (Fast and Agile!)" << endl;
cout << "[3] Spellcaster (Mind over Matter!)" << endl;
int choice;
cin >> choice;

while (!cin >> choice || choice > 3 || choice < 1)
{
cout << "Incorrect selection." << endl;
cout << "Choose your class for your player." << endl;
cout << "[1] Warrior (Strong and Durable!)" << endl;
cout << "[2] Ninja (Fast and Agile!)" << endl;
cout << "[3] Spellcaster (Mind over Matter!)" << endl;
cin >> choice;
}
Character player();// Note 2: has no constructor to store ints and you cant make an object into a number  

cout << "Welcome " << player.printClass() << ". Let's start your adventure!" << endl; // (player) expression must have a class type
cout << "Now select your weapon." << endl;

//Weapons GreatSword("Shiva's GreatSword", 20, WeaponType::GreatSword);
//Weapons TwinKatana("Kami's Twin Katanas", 12, WeaponType::TwinKatana);
//Weapons Staff("Hecate's Staff", 15, WeaponType::Staff);


cout << "Choose you Weapon" << endl;

cout << "[1] Blessed Sword(Blessed by Shiva)" << endl;
cout << "[2] Blessed Katanas (Blessed by Kami!)" << endl;
cout << "[3] Blessed Staff (Blessed by Hecate)" << endl;
cin >> choice;
//int choice;


while (!cin >> choice || choice > 3 || choice < 1)
{

cout << "[1] Blessed Sword (Blessed by Shiva!)" << endl;
cout << "[2] Blessed Katanas (Blessed by Kami!)" << endl;
cout << "[3] Blessed Staff (Blessed by Hecate)" << endl;
cin >> choice;
}

//Character player(choice);
// Note 1: Character has no funchion named printClass() this is the pure virtal fuchion 
cout << "Welcome " << player.printClass() << ". Let's start your adventure!" << endl; // (player) expression must have a class type



Character weapons();




cin.ignore();
cin.get();
return 0;





};
