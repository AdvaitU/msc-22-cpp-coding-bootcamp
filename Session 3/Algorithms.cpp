#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;


void main()
{		
	vector<int> identifiers;      
	identifiers.push_back(1500);
	identifiers.push_back(3500);
	identifiers.push_back(7500);
	vector<int>::const_iterator constIterator;  

	cout << "\nListing all IDs in the system:\n";
	int i = 1;
	for (constIterator = identifiers.begin(), i; constIterator 
		!= identifiers.end(); ++constIterator, ++i) {
		cout << i << ": " << * constIterator << endl;
	}


	// Find
	cout << "\nPart A: Finding an ID number";
	int input;
	cout << "\nEnter a number to find: ";
	cin >> input;

	constIterator = find(identifiers.begin(), 
		identifiers.end(), input);

	if (constIterator != identifiers.end()) {
		cout << "ID found.\n";
	}
	else {
		cout << "ID not found.\n";
	}


	// Randomising
	cout << "\nRandomising IDs";
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(identifiers.begin(), identifiers.end());

	cout << "\nShuffled IDs:\n";
	for (constIterator = identifiers.begin(); constIterator 
		!= identifiers.end(); ++constIterator) {
		cout << *constIterator << endl;
	}


	// Sorting 
	cout << "\nSorting IDs.";
	sort(identifiers.begin(), identifiers.end());

	cout << "\nSorted IDs:\n";
	for (constIterator = identifiers.begin(); constIterator 
		!= identifiers.end(); ++constIterator) {
		cout << *constIterator << endl;
	}

	
}
