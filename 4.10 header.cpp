#include <iostream>
#include "charakter.hpp"

using namespace std;

int main ()
{
	int staerke;
	float geschwindigkeit;
	int prozent;

	cout << "staerke eingeben\n";
	cin  >> staerke;
	
	cout << "geschwindigkeit eingeben\n";
	cin  >> geschwindigkeit;
	
	cout << "prozent eingeben\n";
	cin  >> prozent;
	
	staerke = addpercent (staerke, prozent);
	geschwindigkeit = addpercent (geschwindigkeit, prozent);
	
	cout << "neue staerke: " << staerke << endl;
	cout << "neue geschwindigkeit: " << geschwindigkeit << endl;
	
	return 0;
}
