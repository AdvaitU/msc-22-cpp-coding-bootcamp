#include <iostream>  
using namespace std; 

int main() { 

	cout << "While Loop Output:\n" << endl;

	int x = 1;  // Initialising variable

	while (x < 11) {

		cout << "The value of x is " << x << endl;  // Output value of x
		++x;  // Increment x

	}

	cout << "\nDo-While Loop Output:\n" << endl;

	x = 1;

	do {
		cout << "The value of x is " << x << "\n";
		x++;
	} while (x < 5);

}


