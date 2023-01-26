#include <iostream>

using namespace std;

int main()
{	
	srand(time(0));  // Seeding Random
	int x = rand() % 6 + 1;  // Creating a dice roll
	
	cout << "Your roll was " << x << endl;


	switch (x) {
	case 1:
		cout << "Oooof. Today's not your day!";
		break;

	case 2:
		cout << "Oooof. Today's not your day!";
		break;

	case 3:
		cout << "Mediocrity is comforting to some.";
		break;

	case 4:
		cout << "Mediocrity is comforting to some.";
		break;

	default:
		cout << "Ever thought about the lottery?";
		break;

	}


}

