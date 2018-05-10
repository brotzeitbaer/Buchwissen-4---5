#include <iostream>

using namespace std;

int main()
{
	
	struct s_spieler // mit dem "struct" befehl ist es möglich variablen und arrays in gruppen zusammen zu fassen.
	{
		int energie;
		char name[30];
		
	};
	// mit dem zusammenfassen wird es übersichtlicher bei vielen variablen
	
	
	s_spieler spieler1;
	s_spieler spieler2;
	s_spieler spieler3;
	// die struct variable kann so oft vervielfältigt werden wie man möchte
	
	
	cout << "spieler 1 name eingeben   : \n";
	cin.get (spieler1.name, 29);
	
	cout << "spieler 1 energie eingeben: \n";
	cin  >> spieler1.energie;
	
	cin.ignore();
	//der cin.ignore befehl setzt die letzte eingabe wieder auf anfang.
	
	
	cout << "spieler 2 name eingeben   : \n";
	cin.get (spieler2.name, 29);
	
	cout << "spieler 2 energie eingeben: \n";
	cin  >> spieler2.energie;
	
	cin.ignore();
	
	cout << "spieler 3 name eingeben   : \n";
	cin.get (spieler3.name, 29);
	
	cout << "spieler 3 energie eingeben: \n";
	cin  >> spieler3.energie;
	
	cout << endl;
	
	cout  	 << "spieler 1 name:    "  << spieler1.name    << endl
		 << "spieler 1 energie: "  << spieler1.energie << endl
		 << "spieler 2 name:    "  << spieler2.name    << endl
		 << "spieler 2 energie: "  << spieler2.energie << endl
		 << "spieler 3 name:    "  << spieler3.name    << endl
		 << "spieler 3 energie: "  << spieler3.energie << endl;
		 
		 return 0;
}
