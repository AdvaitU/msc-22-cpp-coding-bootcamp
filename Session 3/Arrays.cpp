#include <iostream>  
#include <string>
using namespace std; 


int main() {

	//Declaring Arrays
	int myNums[6] = { 2,4,6,8,10,12 };
	//int myNums[3] = { 0,1,2,3 };   // Can't do compile error

	int otherNums[] = { 1,2,3,4,5 };

	int moreNums[5]; //Declaring without array literals.
	moreNums[0] = 0; // Updating values
	moreNums[1] = 5;

	//cout << moreNums[0] << endl; // will give bs value

	//int evenMoreNums[]; ---> Won't work
	//cout << evenMoreNums[0];

	string myStrings[] = { "red", "blue", "green", 
		"orange", "yellow", "violet" };


	// Functions on Arrays
	cout << sizeof(myStrings) << " bytes" << endl;

	int arrayLength = sizeof(myStrings) / sizeof(string);
	cout << arrayLength << " elements" << "\n\n";

	string wordsIHate[5] = { "Moist", "Pus", "Phlegm", "Yeast", "Bulbous" };

	cout << "Words I Hate:" << "\n\n";
	for (int i = 0; i < 5; i++) {
		cout << i << " = " << wordsIHate[i] << "\n";
	}

	// Multi-Dimensional Arrays
	string letters[2][4] = {
		{ "A", "B", "C", "D" },
		{ "E", "F", "G", "H" }
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << letters[i][j] << "\n";
		}
	}
	
	int moreLetters[2][2][2] = {
		{
			{0,1}
			{1,0}
		}
		{
			{0,0}
			{1,1}
		}
	}

	
}



