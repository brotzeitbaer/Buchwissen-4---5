#include <iostream>

using namespace std;

int main()
{
	
	const int breite = 3;
	const int hoehe  = 3;
	
	int karte [breite][hoehe];
	int x, y;
	int zaehler = 0;
	
	for (y = 0; y < hoehe; y++)
	{
		for (x = 0; x < breite; x++)
		{
			karte [x][y] = zaehler;
			zaehler++;
		}
	}
	
	for (y = 0; y < hoehe; y++)
	{
		for (x = 0; x < breite; x++)
		{
			cout << karte [x][y];
		}
		cout << endl;
	}
	return 0;
}
