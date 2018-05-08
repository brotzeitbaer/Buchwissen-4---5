#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int spiel (int level);
int schwierigkeit (int level);
int seehighscore(int highscore);

int main()
{
srand (time(NULL));
	
	
	char auswahl;
	int level = 5;
	int highscore = 130;
	
	do
	{
		cout << "       |Menue|\n";
		cout << "---------------------\n";
		cout << "Neues           Spiel\n";
		cout << "Schwierigkeit Waehlen\n";
		cout << "Highscore    Anzeigen\n";
		cout << "Info         Anzeigen\n";
		cout << "Beenden\n";
		cout << "---------------------\n\n";
		cout << "auswahl treffen\n";
		cin  >> auswahl;
		
		switch (auswahl)
		{
			case ('N'):
			case ('n'):
			{
				int punkte;
				
				punkte = spiel (level);
				
				if (punkte > highscore)
				{
					cout << "neuer rekord\n\n";
					highscore = punkte;
				}
				if (punkte < highscore)
				{
					cout << "kein neuer rekord\n\n";
				}
				
			}break;
			
			case ('S'):
			case ('s'):
			{
					level = schwierigkeit (level);
			}break;
			
			case ('H'):
			case ('h'):
			{
				seehighscore (highscore);
			}break;
			
			case ('I'):
			case ('i'):
			{
				cout << "Zahlenzeugs ver. 1.0\n\n";
			}break;
			
			case ('B'):
			case ('b'):
			{
				cout << "spiel wird beendet...\n";
			}break;
			
			default:
			{
			cout << "ungueltige eingabe\n\n";
			}
		}
		
	}while ((auswahl != 'B') && (auswahl != 'b'));
	
	cout << "auf wiedersehen\n";
	
	return 0;
	
}

int spiel (int level)
{
	
int bereich = level*10;
int eingabezahl = 0;
int zufallszahl;
int versuche = 0;
int punkte = 0;

zufallszahl = (rand()%bereich)+1;

cout << "die zu erratene zahl liegt zwichen 1 und " << bereich << endl;

while (eingabezahl != zufallszahl)

{
	cout << "zahl eingeben\n";
	cin  >> eingabezahl;
	
	versuche++;
	
	if (eingabezahl < zufallszahl)
	{
		cout << "die gesuchte zahl ist groesser\n";
	}
	if (eingabezahl > zufallszahl)
	{
		cout << "die gesuchte zahl ist kleiner\n";
	}
	
}
	
	cout << "die gesuchte zahl wurde gefunden\n";
	if (versuche < 2)
	{
		cout << "glueckstreffer, hast nur einen versuch gebraucht\n";
	}
	else
	{
	cout << "du hast " << versuche << " versuche gebraucht\n";
	}

	punkte = bereich - versuche;
	punkte *= level;
	
	cout << "du hast " << punkte << " punkte erreicht\n";
}

int schwierigkeit (int level)
{
int newlvl;

cout << "momentane schwierigkeit liegt bei " << level << endl;
cout << "neue schwierigkeit waehlen (1 - 25)\n";
cin  >> newlvl;

if (newlvl < 25 && newlvl > 1)
{
	cout << "neue schwierigkeit leigt bei " << newlvl << endl << endl;
return newlvl;
}

else
{
	cout << "ungueltige eingabe\n";
}
}

int seehighscore (int highscore)
{
	cout << "highscore liegt bei " << highscore << " punkten\n\n";
}

