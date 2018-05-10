#include <iostream>

using namespace std;

int main()
{
			
	struct s_spieler
	{
		int team;
		char name[30];
		
	};
	
	s_spieler spielerliste[4];
	int auswahl = 0;
		
	for (int i = 0; i<4; i++)
	{
		spielerliste[i].team = 0;
		
		cout << "spieler " << i+1 << " namen eingeben\n";
		cin.get(spielerliste[i].name, 29);
		
		do
		{
			cout << "team waehlen: (1 oder 2)\n";
			cin  >> spielerliste[i].team;
			 
		}while(spielerliste[i].team != 1 && spielerliste[i].team != 2);
		
		cout << endl;
		cin.ignore();
		
	}
	
	cout << "welches team soll angezeigt werden? (5 fuer beenden)\n";
	cin  >> auswahl;
	
	if (auswahl == 1 || auswahl == 2)
	{
		cout << "team " << auswahl << " besteht aus: \n";
		
		for (int j = 0; j<4; j++)
		{
			if (spielerliste[j].team == auswahl)
			{
				cout << "spieler: " << spielerliste[j].name << " ist in team " << auswahl << endl;
			}
		}
		
		cout << endl;
		
	}while (auswahl != 0)
	
	return 0;
}
