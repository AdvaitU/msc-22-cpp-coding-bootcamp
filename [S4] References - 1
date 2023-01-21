#include <iostream>
using namespace std;

void addTo3(int x);
void goodAddTo3(int& x);

void main()
{
	int myNum = 5;
	cout << myNum << endl;

	addTo3(myNum);
	cout << myNum << endl;

	int& myRef = myNum;
	goodAddTo3(myNum);  
	// Or use --> goodAddTo3(myRef);
	cout << myNum;
}

void addTo3(int x) {

	x += 3;

}

void goodAddTo3(int& x) {

	x += 3;

}


