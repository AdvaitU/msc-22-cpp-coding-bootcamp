
#include <iostream>
#include <string>

using namespace std;

void addTo3(int x);
void goodAddTo3(int* const pX);

void main()
{
	
	int myVar = 5;
	int* pPointer = &myVar;

	addTo3(myVar);
	cout << myVar << endl;

	goodAddTo3(&myVar);
	cout << myVar << endl;
	cout << *pPointer << endl;


}

void addTo3(int x) {

	x += 3;

}

void goodAddTo3(int* const pX) {

	*pX += 3;

}
