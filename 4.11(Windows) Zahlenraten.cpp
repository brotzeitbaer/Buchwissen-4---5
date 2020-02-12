#include <iostream>
#include <Windows.h>

using namespace std;

#pragma comment (lib, "winmm.lib")

int spielen(int level);
int waehleLevel(int level);
int testHighscore(int punkte, int highscore);
void zeigeInfos();

int main()
{
	char auswahl;
	int level = 5;
	int highscore = 100;

	srand(timeGetTime());

	do
	{

		cout << "_____Menue_____\n"
			<< "(N)eues Spiel\n"
			<< "(L)evel waehlen\n"
			<< "(H)ighscore anzeigen\n"
			<< "(I)nfo anzeigen\n"
			<< "(B)eenden\n" << endl;

		cout << "Auswahl\n" << endl;
		cin >> auswahl;

		switch (auswahl)
		{
			case ('N'):
			case ('n'):
			{

				int punkte;
				punkte = spielen(level);

				highscore = testHighscore(punkte, highscore);

			}break;

			case ('L'):
			case ('l'):
			{

				level = waehleLevel(level);

			}break;

			case ('H'):
			case ('h'):
			{

				cout << "Aktueller Highscore liegt bei " << highscore << " Punkten \n" << endl;

			}break;

			case ('I'):
			case ('i'):
			{

				zeigeInfos();

			}break;

			case ('B'):
			case ('b'):
			{
				cout << "Spiel beendet" << endl;

			}break;
		

			default:
			{

				cout << "Falsche Eingabe" << endl;
			}
		}
	} while (auswahl != 'B' && auswahl != 'b');

	cout << "Hau ab\n" << endl;

	return 0;
}

void zeigeInfos()
{

	cout << "Version 1.01\n" << endl;

}

int waehleLevel(int level)
{

	int neuerLevel;

	do
	{

		cout << "aktueller Level: " << level << endl;
		cout << "Neuer Level (1-10): \n" << endl;
		cin >> neuerLevel;

		if (neuerLevel < 1 || neuerLevel >10 )
		{ 
			cout << "Ungueltige Eingabe \n" << endl;

		}

	} while (neuerLevel < 1 || neuerLevel > 10);

		return neuerLevel;

}

int spielen(int level)
{

	int zufallszahl;
	int gerateneZahl = 0;
	int bereich = level * 10;
	int versuche = 0;
	int punkte = 0;

	zufallszahl = (rand() % bereich) + 1;

		cout << "Die geratene Zahl liegt zwichen 1 und " << bereich << endl;

		while (gerateneZahl != zufallszahl)
		{

			cout << "Zahl eingeben: " << endl;
			cin >> gerateneZahl;
			versuche++;

			if (gerateneZahl > zufallszahl)
			{
				cout << "Die gesuchte Zahl ist kleiner. " << endl;
			}
			if (gerateneZahl < zufallszahl)
			{
				cout << "Die geratene Zahl ist groesser. " << endl;
			}
		}

		cout << "Richtig.\nDu hast die Zahl nach " << versuche << " Versuchen erraten. " << endl;

		punkte = bereich - versuche + 1;
		punkte *= level;

		if (punkte < 0)
		{ 
			punkte = 0;
		}
		cout << "Punkte: " << punkte << endl;

		return punkte;
}

int testHighscore(int punkte, int highscore)
{

	if (punkte > highscore)
	{

		cout << "Neuer Rekord. \n" << endl;
		highscore = punkte;
	}
	else
	{ 
		cout << "Kein neuer Rekord. \n" << endl;
	}

	return highscore;

}
