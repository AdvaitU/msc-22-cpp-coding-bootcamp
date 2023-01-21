#include <iostream>
#include <string>
#include <vector>

using namespace std;

//parameter vec is a constant reference to a vector of strings
void display(const vector<string>& inventory);

void main(){

	vector<string> backpack;
	backpack.push_back("A shovel");
	backpack.push_back("Kerosene");
	backpack.push_back("Matchsticks");
	display(backpack);

}

void display(const vector<string>& vec)
{
	cout << "Your items:\n\n";
	for (vector<string>::const_iterator iter = vec.begin();
		iter != vec.end(); ++iter)
	{
		cout << *iter << endl;
	}
}


