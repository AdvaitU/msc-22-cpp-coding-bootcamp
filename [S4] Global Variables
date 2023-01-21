#include <iostream>
using namespace std;

int g_glob = 10; // global variable

void access_global();
void hide_global();
void change_global();

int main()
{
	cout << "In main() g_glob is: " << g_glob << "\n\n";
	access_global();

	hide_global();
	cout << "In main() g_glob is: " << g_glob << "\n\n";

	change_global();
	cout << "In main() g_glob is: " << g_glob << "\n\n";

	return 0;
}

void access_global() {

	cout << "In access_global() g_glob is: " << g_glob << "\n\n";
}

void hide_global() {

	int g_glob = 0; // hide global variable g_glob
	cout << "In hide_global() g_glob is: " << g_glob << "\n\n";
}

void change_global() {

	g_glob = -10; // change global variable g_glob
	cout << "In change_global() g_glob is: " << g_glob << "\n\n";
}
