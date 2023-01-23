
#include <iostream>
#include <string>

using namespace std;

void main()
{
	int* pAPointer; //declare a pointer
	int* pScore = 0; //declare and initialize a pointer

	int score = 1000;

	pScore = &score; //assign pointer pScore address of variable score

	cout << "Score: " << score << "\nAddress of score: " << & score; 
	cout << "\nAddress of score: " << pScore << "\nScore: " << *pScore; 

	score += 500;
	cout << *pScore << endl;

	*pScore += 500;
	cout << score << endl;

	int newScore = 5000;
	pScore = &newScore;
	cout << *pScore << endl;

	string str = "score";
	string* pStr = &str; //pointer to string object

	cout << *pStr << endl;
	cout << (*pStr).size() << endl;
	cout << pStr->size() << endl;

}


