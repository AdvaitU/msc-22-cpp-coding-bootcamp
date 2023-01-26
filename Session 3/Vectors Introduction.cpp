#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector <string> myVector;
	vector <int> intVector(10);
	vector <string> nullVector(13, "nothing");
	vector <string> copyCat(nullVector);

	vector <string> backpack;
	backpack.push_back("shovel");
	backpack.push_back("canvas sheet");
	backpack.push_back("cleaver");
	backpack[3] = "matchsticks";
	
	cout << "You have " << backpack.size() << " items and a shifty agenda\n";
	cout << "What is the " << backpack[0] << " for?\n";
	cout << "And the " << backpack[3] << "?\n";
	cout << "Shovel has " << backpack[0].size() << " letters\n";

	backpack.clear();
	cout << "Oh no! You have been robbed. You now have " << backpack.size() << " items\n";


	if (backpack.empty()) {
		cout << "There's nothing here!\n";
	}
	

}
