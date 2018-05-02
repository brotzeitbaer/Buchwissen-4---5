#include <iostream>

using namespace std;

int erhoehepunkte ( int punkte);

int main()
{
	
	int punkte = 1000;
	
	cout << "vor der funktion: " << punkte << endl;
	
	erhoehepunkte(punkte);
	
	punkte = erhoehepunkte (punkte);
	
	cout << "nach der funktion: " << punkte << endl;
	
	return 0;
}

int erhoehepunkte ( int punkte)
{
	
	punkte += 100;
	
	return punkte;
	
}
