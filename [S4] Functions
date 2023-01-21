#include <iostream>
#include <string>
using namespace std;

char askYesNo(string question);


int main()
{
	char answer1 = askYesNo("Hello there!");
	cout << "Thanks for answering: " << answer1 << "\n\n";

	if (askYesNo("Do you wish to save your game?") == 'y') {
		cout << "Game Saved";
	}
	else {
		cout << "Bye then";
	}
	return 0;
}

char askYesNo(string question)
{
	char response1;
	do
	{
		cout << question << "\nPlease enter ’y’ or ’n’: ";
		cin >> response1;
	} while (response1 != 'y' && response1 != 'n');
	return response1;
}

