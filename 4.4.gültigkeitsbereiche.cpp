#include <iostream>

using namespace std;

int berechnepunkte();
int bonus = 500; /*diese variable ist außerhalb der funktionen deklariert und somit eine "globale variable".
der unterscheid zu einer lokalen ist das die globale überall gültig ist und nicht nur in einem bestimmten codeblock.*/

int main()
{
	
	int punkte; /*diese variable ist NICHT die selbe wie die in der funktion "brechnepunkte
	eine variable ist dort gültig wo sie deklariert wurde. das hier ist eine sogenannte "lokale variable". */
	
	punkte = berechnepunkte();
	
	cout << "punkte: " << punkte + bonus << endl;
	cout << " davon bonus: " << bonus << endl;
	
	return 0;
	
}

berechnepunkte()
{
	
	int punkte;
	
	cout << "punkte eingeben\n";
	cin >> punkte;
	
	return punkte; //den wert zurück geben
}
