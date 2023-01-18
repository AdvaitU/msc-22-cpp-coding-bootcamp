#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> pockets;  // Creating a vector

	pockets.push_back("Wallet"); // Adding elements to the vector
	pockets.push_back("Phone");
	pockets.push_back("Keys");

	vector<string>::iterator myIterator;  // Creating iterator
	vector<string>::const_iterator constIterator;  // Creating const iterator

	int i;   // For numbering items
	cout << "In your pockets you have:\n";
	for (constIterator = pockets.begin(), i = 1; constIterator != pockets.end(); ++constIterator, ++i)
	{
		cout << i << ". " << *constIterator << endl;  // Dereferencing

	}

	myIterator = pockets.begin();  // Putting it at the beginning of pockets
	myIterator++;                    // Incrementing by 1
	*myIterator = "A brick";       // Changing value using iterator

	cout << "\nSomeone switched out your phone for a brick on the tube\n";
	cout << *myIterator << "'s size is " << (*myIterator).size() << endl;
	cout << "I repeat, it is " << myIterator->size() << endl;

	cout << "\nYou find someone's ID left on the seat. Now you have:\n";
	pockets.insert(pockets.begin(), "Random ID");    // Inserting new elements
	myIterator = pockets.begin();

	for (constIterator = pockets.begin(); constIterator != pockets.end(); ++constIterator)
	{
		cout << *constIterator << endl;
	}


	cout << "\nYou drop your keys as you leave the tube. Now you have:\n";
	pockets.erase((pockets.begin() + 3));        // Destroying elements

	for (constIterator = pockets.begin(); constIterator != pockets.end(); ++constIterator)
	{
		cout << *constIterator << endl;
	}

}
