#include <iostream>
#include <string>

using namespace std;

class Animal {
public:

	const int MAX_LEVEL = 10;
	const int MIN_LEVEL = 0;
	string name;
	string greeting = "Hi! I am ";
	int getHunger();
	int getHappiness();
	Animal(string name1);
	void feedAnimal(int value);
	void petAnimal();
	void waitTime();
	void clipLevel();

private:

	int hunger = 8;
	int happiness = 6;

};

int Animal::getHunger() {
	return hunger;
}

int Animal::getHappiness() {
	return happiness;
}

Animal::Animal(string name1 = "Duncan") :
	name(name1)
{
	cout << "A new animal has been adopted! " << greeting << name1 << endl;
}

void Animal::feedAnimal(int value) {

	hunger = hunger + value;
	cout << name << " chomps down the food happily!\n";
	happiness++;
	clipLevel();

}

void Animal::petAnimal() {

	cout << name << " seems happy and gives you a high five!\n";
	happiness += 2;
	clipLevel();

}

void Animal::waitTime() {

	hunger--;
	happiness = happiness - (rand() % 2 + 1);
	clipLevel();

}

void Animal::clipLevel() {

	if (hunger > MAX_LEVEL) {
		hunger = MAX_LEVEL;
	}
	if (happiness > MAX_LEVEL) {
		happiness = MAX_LEVEL;
	}
	if (hunger < MIN_LEVEL) {
		hunger = MIN_LEVEL;
	}
	if (happiness < MIN_LEVEL) {
		happiness = MIN_LEVEL;
	}

}

void main() {

	string input;
	string name1;
	srand(time(0));
	
	do {
		cout << "Hello! Welcome to your farm! Respond with 1 if you want to adopt a new animal\n";
		cin >> input;
	} while (input != "1");

	cout << "What do you want to call your pet?" << endl;
	cin >> name1;

	Animal animal1(name1);
	
	while (1) {

		string userInput;
		

		if (animal1.getHunger() < 5) {
			cout << animal1.name << " is hungry :(\n";
		}
		if (animal1.getHappiness() < 5) {
			cout << animal1.name << " is sad :(\n";
		}

		cout << animal1.name << "'s hunger level is " << animal1.getHunger() << endl;
		cout << animal1.name << "'s happiness level is " << animal1.getHappiness() << endl;
		cout << "Press '1' to feed it, '2' to pet it, '3' to do nothing, and '4' to leave the game." << endl;
		cin >> userInput;

		if (userInput == "1") {
			animal1.feedAnimal(1);
		}
		else if (userInput == "2") {
			animal1.petAnimal();
		}
		else if (userInput == "3") {
			animal1.waitTime();
		}
		else if (userInput == "4") {
			cout << "Bye!\n\n";
			break;
		}
		else {
			cout << "Invalid Input\n";
			cout << "Press '1' to feed it, '2' to pet it, and '3' to leave the game." << endl;
		}

		if ((animal1.getHunger() <= animal1.MIN_LEVEL) && (animal1.getHappiness() <= animal1.MIN_LEVEL)) {
			cout << animal1.name << " is unhappy and has left you!\n";
			break;
		}
		else if ((animal1.getHunger() == animal1.MAX_LEVEL) && (animal1.getHappiness() == animal1.MAX_LEVEL)) {
			cout << animal1.name << " is extremely satisfied. You're a great owner!\n";
		}


		


	}
	
}
