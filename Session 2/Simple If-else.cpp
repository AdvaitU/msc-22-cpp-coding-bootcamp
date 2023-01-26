#include <iostream>

using namespace std;

int main()
{	
	srand(time(0));  // Seeding Random
	int x = rand() % 6 + 1;  // Creating a dice roll
	
	cout << "Your roll was " << x << endl;

	if (x < 3) {
		cout << "Oooof. Today's not your day!";
	}
	else if ((x > 2) && (x < 5)) {
		cout << "Mediocrity is comforting to some.";
	}
	else {
		cout << "Ever thought about the lottery?";
	}


}

