#include <iostream>

using namespace std;

/*Die Namen der Variablen müssen hier nicht stehen, sie dienen nur der Überschaubarkeit.
Es könnte auch (int, int, int) stehen.*/
int berechnepunkte ( int punkte,int restzeit,int zeitfaktor);

int main()
{
	
	int gesamtpunkte, punkte, restzeit, zeitfaktor;
	
	cout <<"punkte eingeben:\n ";
	cin  >> punkte;
	
	cout <<"verbleibende zeit eingeben: \n";
	cin  >> restzeit;
	
	cout <<"zeitfaktor eingeben: \n";
	cin  >> zeitfaktor;
	
	gesamtpunkte = berechnepunkte ( punkte, restzeit, zeitfaktor);
	
	cout << "insgesamt wurden " << gesamtpunkte << " punkte erreicht.\n";
	
	
	return 0;
}

int berechnepunkte (int punkte,int restzeit,int zeitfaktor)
{
	
	int temp;
	
	temp = punkte + restzeit * zeitfaktor;
	
	return temp;
	
}
