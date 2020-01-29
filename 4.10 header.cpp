#include <iostream>
#include "character.hpp"

using namespace std;

int main()
{
	int strengh;
	int factor;
	float fspeed;
	float ffactor;

	cout << "Enter strengh: " << endl;
	cin >> strengh;

	cout << "Enter factor (strengh): " << endl;
	cin >> factor;

	cout << "Enter speed: " << endl;
	cin >> fspeed;

	cout << "Enter factor (speed): " << endl;
	cin >> ffactor;

	

	cout << "new strengh: " << berechnen(strengh, factor) << endl;
	cout << "new speed: "   << berechnen(fspeed, ffactor) << endl;
}
