#include <iostream>

using namespace std;

struct s_feldinfo
{
	bool besetzt;
	char name[30];
};

const int breite = 5;
const int hoehe  = 5;
s_feldinfo spielfeld[breite][hoehe];

void loeschefeld();
void ausgabefeld();
void zeigefelddaten();
void besetzefeld();

int main()
{
	
	char auswahl = 0;
	
	do 
	{
	cout << "       | Hauptmenue |\n"
		 << "---------------------------\n"
		 << "1. (S)pielfeld     ausgeben\n"
		 << "2. (F)eld          besetzen\n"
		 << "3. (D)aten(Feld)   anzeigen\n"
		 << "4. (Z)urucksetzen Spielfeld\n"
		 << "5. (P)rogramm       beenden\n"
		 << "---------------------------\n\n";
		 
		 cout << "Auswahl treffen: \n\n";
		 cin  >> auswahl;
		 
		 switch (auswahl)
		 {
		 	case ('S'):
		 	case ('s'):
		 	case ('1'):
		 		{
		 			
		 		ausgabefeld();
		 		cout << endl;
		 			
				}break;
				
			case ('F'):
			case ('f'):
			case ('2'):
				{
					
				besetzefeld();
				cout << endl;
						
				}break;
					
			case ('D'):
			case ('d'):
			case ('3'):
				{
					
				zeigefelddaten();
				cout << endl;
						
				}break;
				
			case ('Z'):
			case ('z'):
			case ('4'):
				{
					
				loeschefeld();
				cout << "Spielfeld wurde zurueck gesetzt\n";
				cout << endl;
					
				}break;
			
			case ('P'):
			case ('p'):
			case ('5'):
				{
					
				cout << "\nMan sieht sich\n";	
				
				}break;
				
				default:
				{
					
				cout << "ungueltige eingabe\n\n";
				
				}break;
		 }
		 
	}while ((auswahl !='5') && (auswahl !='P') && (auswahl !='p'));

return 0;

}

void loeschefeld()
{
	
	for (int y = 0; y < hoehe; y++)
	{
		for (int x = 0; x < breite; x++)
		{
			spielfeld[x][y].besetzt = false;
		}
	}
}

void besetzefeld()
{
	int x = 0;
	int y = 0;
	
	do
	{
	cout << "x position fuer breite eingeben (1-5) \n";
	cin  >> x;
	}while (x<1 || x>breite);
	
	do
	{
	cout << "y position fuer hoehe eingeben (1-5) \n";
	cin  >> y;
	}while (y<1 || y>hoehe);
	
	cout << "Namen eingeben: \n";
	cin.ignore();
	cin.get(spielfeld[x-1][y-1].name, 29);
	spielfeld[x-1][y-1].besetzt = true;
}

void ausgabefeld()
{
	
	for (int y = 0; y < hoehe; y++)
	{
		for (int x = 0; x < breite; x++)
		{
			if (spielfeld[x][y].besetzt == true)
			{
			cout << "X";
			}else
			cout << "-";
		} cout << endl;
	}
}

void zeigefelddaten()
{
	for (int y = 0; y < hoehe; y++)
	{
		for (int x = 0; x < breite; x++)
		{
			if (spielfeld[x][y].besetzt == false)
			{
				
			}else
			cout << spielfeld[x][y].name << " steht auf den Positionen: \n\n" 
				 << "hoehe: " << y << endl << "Breite: " << x << endl;
		}
	}
}
