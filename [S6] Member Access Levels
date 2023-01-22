#include <iostream>
using namespace std;

class Orc {
private:

	int health = 90;
	const int MAX_HEALTH = 100;
	bool statusEffect = false;
	string name = "unnamed"; 

public:

	void drinksPotion(int value);
	void healthCheck();
	Orc(string string1, int int1, bool stat1);
	int getHealth();
	void setHealth(int input);

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

Orc::Orc(string string1, int int1 = 50, bool stat1 = false) :

	name(string1),
	health(int1),
	statusEffect(stat1)
{}

int Orc::getHealth() {

	return health;

}

void Orc::setHealth(int input) {

	health = input;

}

void main()
{
	
	Orc nathaniel("Nathaniel");

	nathaniel.setHealth(90);
	cout << nathaniel.getHealth() << endl;

	nathaniel.drinksPotion(30);
	cout << nathaniel.getHealth() << endl;
	
}


