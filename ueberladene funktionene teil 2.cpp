#include <iostream>

using namespace std;

int testbereich (int wert, int min, int max);
float testbereich (float wert, float min, float max);

int main ()
{
	
	int min = 0;
	int max = 800;
	int wert;
	
	float fmin = 20.5f;
	float fmax = 200.5f;
	float fwert;
	
	
	testbereich ( wert, min, max);
	testbereich ( fwert, fmin, fmax);
	
	return 0;
}

int testbereich (int wert, int min, int max)
{
	cout << "wert fuer int\n";
	cin  >> wert;
	if ((wert >= min) && (wert < max))
	{
	cout << "wert im testbereich\n";
	}else
	cout << "wert auserhalb des testbereiches\n";
}
	
float testbereich (float wert, float min, float max)
{
	
	cout << "wert fuer float\n";
	cin  >> wert;
	if ((wert >= min) && (wert < max))
	{
		cout << "wert (float) im testbereich\n";
	}else
	cout << "wert (float) auserhalb des testbereiches\n";
	
}
/*�berladene funktion hei�t nun: dass man mehrere funktionen mit dem selben namen
verwenden kann wenn die parameter verscheidene variablen typen sind oder es unterschiedlich viele parameter gibt.
m�glich ist auch das sich der r�ckgabewert untersheidet.
verboten ist nur eine funktion nur anhand des r�ckgabetyps zu unterscheiden.*/

