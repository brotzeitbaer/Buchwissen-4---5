#include <iostream>
#include <windows.h>
#include <time.h> /*der zufallsgenerator wird von der zeit des laufenden betriebssystems
abhängig gemacht. wir müssen also die zeit includieren.*/

using namespace std;


int spielen (int level);
int waehlelevel (int level);
int testehighscore (int punkte, int highscore);
void zeigeinfos();

int main ()
{

char auswahl;
int level = 5;
int highscore = 100;

//zufallsgenerator initialisieren
srand((unsigned)time(NULL));
	do
	{
	
	cout << "zahlenraten menue\n";
	cout << "-----------------\n";
	cout << "1. neues spiel\n";
	cout << "2. level waehlen\n";
	cout << "3. highscore anzeigen\n";
	cout << "4. info\n";
	cout << "5. beenden\n\n";
	
	cout << "auswahl:\n";
	cin  >> auswahl;
	
	switch (auswahl)
		{
		case ('N'):
		case ('n'):
		case ('1'):
			{
			int punkte;
			punkte = spielen (level);
			
			highscore = testehighscore (punkte, highscore);
			}break;
		
		case ('L'):
		case ('l'):
		case ('2'):
			{
			level = waehlelevel (level);
			}break;
		
		case ('H'):
		case ('h'):
		case ('3'):
			{
			cout << "der aktuelle highscore liegt bei " << highscore << " punkten\n\n";
			}break;
		
		case ('I'):
		case ('i'):
		case ('4'):
			{
			zeigeinfos ();
			}break;
		
		case ('B'):
		case ('b'):
		case ('5'):
			{
		cout << "spiel wird beendet\n";
			}break;
		
		default:
			{
				cout << "ungueltige eingabe\n\n";
			}
		}
	} while ((auswahl != 'b') && (auswahl != 'B') && (auswahl != 5));

cout << "tschoe\n";

return 0;
}

void zeigeinfos ()
{
	cout << "zahlenraten ver. 0.4\n\n";
}

int waehlelevel (int level)
{
	int neuerlevel;
	
	do
	{
		cout << " aktueller level: " << level << endl;
		cout << "neuer level (1-10): \n";
		cin  >> neuerlevel;
		
		if (neuerlevel < 1 || neuerlevel > 10)
		{
		cout << "ungueltiger wert\n";
		}
	}while (neuerlevel < 1 || neuerlevel > 10);
	
	return neuerlevel;
}

int spielen (int level)
{
	int zufallszahl;
	int geratenezahl = 0;
	int bereich = level*10;
	int versuche = 0;
	int punkte = 0;
	
	zufallszahl = (rand()%bereich)+1;
	
	cout << "die gesuchte zahl liegt zwichen 1 und " << bereich << endl;
	
	while (geratenezahl != zufallszahl)
	{
		cout << "dein tipp: \n";
		cin  >> geratenezahl;
		
		versuche++;
		
		if (geratenezahl < zufallszahl)
		{
		cout << "die gesuchte zahl ist groesser\n";
		}
		if (geratenezahl > zufallszahl)
		{
		cout << "die gesuchte zahl ist kleiner\n";
		}
	}
	
	cout << "du hast die zahl erraten\n";
	cout << "du hast " << versuche << " versuche gebraucht\n\n";
	
	punkte = bereich - versuche + 1;
	punkte *= level;
	
	if (punkte < 0)
	punkte = 0;
	
	cout << "punkte: " << punkte << endl;
	
	return punkte;
}

int testehighscore (int punkte, int highscore)
{
	if (punkte > highscore)
	{
	cout << "neuer rekord\n";
	highscore = punkte;
	}
	else
	{ 
	cout << "kein neuer rekord\n";
	}
	
	return highscore;
}
