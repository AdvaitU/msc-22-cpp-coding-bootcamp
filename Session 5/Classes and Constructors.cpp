#include <iostream>
using namespace std;

class Orc {
public: 

	int health = 90;
	const int MAX_HEALTH = 100;
	bool statusEffect = false;
	string name = "unnamed";

	void drinksPotion(int value);
	void healthCheck();
	Orc(string input);
	
};

void Orc::drinksPotion(int value) {

	if (statusEffect) {
		health = health + (2 * value);
	}
	else {
		health = health + value;
	}
	healthCheck();
}

void Orc::healthCheck() {

	if (health > MAX_HEALTH) {
		health = MAX_HEALTH;
	} else {}

}

Orc::Orc(string input) {

	name = input;

}

void main()
{
	
	Orc orc1("Nathaniel");
	Orc orc2("Ozymansias");
	orc1.health = 60;
	cout << "Orc 1's health: " << orc1.health 
		<< "\nOrc 2's health: " << orc2.health 
		<< endl;

	int healthPotion = 30;
	orc1.drinksPotion(healthPotion);
	orc2.drinksPotion(healthPotion);
	cout << "Orc 1's health: " << orc1.health
		<< "\nOrc 2's health: " << orc2.health
		<< endl;

	Orc orc3("Barthemeww");
	cout << orc3.name << endl;
	
}



