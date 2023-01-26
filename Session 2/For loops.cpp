#include <iostream>  
using namespace std; 

int main() {

	int i;
	int j;
	int runs = 0;

	for (i = 0, j = 100; i != j; i++, j--) {

		runs++;
		cout << runs << endl;

	}
	cout << '\n';

	string str{ "Hello!" };
	for (char c : str)
	{
		cout << " " << c << " ";
	}
	cout << '\n';

	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	for (int i : myNumbers) {
		cout << i << ", ";
	}

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			cout << a << b << endl;
		}
	}

}


