#include <iostream>  
#include <string>
using namespace std; 

struct {

	int health = 4;
	int height;
	string name;
	string position;
	char isAlive;

} enemy1, enemy2, enemy3;

struct shelf {
	
	bool isAvailable = false;
	int noOfCompartments;
	const int BOOKS_PER_SHELF = 4;
	string firstBook;
	float sizeX;
	float sizeY = 6.50;
	string unit = "cm";

};


int main() {

	// Enemy
	enemy1.health = 6;
	enemy2.name = "Harold";
	enemy3.isAlive = 'y';

	cout << "Enemy 1's health is at " 
		<< enemy1.health 
		<< "\nEnemy 2's health is at " 
		<< enemy2.health << endl;

	
	// Shelf
	shelf shelf1;          //Instantiate object
	shelf1.sizeX = 13.0;   // Set value

	cout << "Shelf 1's dimensions are " <<
		shelf1.sizeX << shelf1.unit <<
		" by " << shelf1.sizeY <<
		shelf1.unit << endl;
	
}
