#include <iostream>

using namespace std;

int main()
{
	
	char schreiben[50];
	
	cout << "schreib was\n";
	cin.get(schreiben, 49);
	//durch die null terminierung wird ein feld vom arrays reserviert, deshalb nur 49 von 50.
	
	cout << "dein text lautet: " << schreiben << endl; 
	
	return 0;
}
