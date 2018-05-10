#include <iostream>

using namespace std;

int addpercent (int staerke, int prozent);
float addpercent (float geschwindigkeit,int prozent);

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

int addpercent (int staerke, int prozent)
{
	int wert;
	
	wert = staerke + (staerke * prozent) / 100;
	
	return wert;
}
float addpercent (float geschwindigkeit,int prozent)
{
	float wert;
	
	wert = geschwindigkeit + (geschwindigkeit * prozent) / 100.0f;
	
	return wert;
}


