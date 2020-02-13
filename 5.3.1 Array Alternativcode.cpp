#include <iostream>

using namespace std;

void level();

int main()
{
	char auswahl;

	do
	{

		cout << "_____Menue_____\n\n"
			<< "(L)evel waehlen.\n"
			<< "(B)eenden.\n" << endl;

		cin >> auswahl;

		switch (auswahl)
		{ 
			case ('L'):
			case ('l'):
			{

			level();

			}break;

			case('B'):
			case('b'):
			{

				cout << "Beenden. " << endl;

			}break;

			default:
			{

				cout << "Falsche Eingabe. " << endl;

			}

		}

	} while (auswahl != 'B' && auswahl != 'b');

	return 0;

}

void level()
{
	int level;
	int bonus[] = { 120, 155, 180, 220, 320 };

		cout << "Level waehlen: " << endl;
		cin >> level;

		if (level < 1 || level > 5)

			cout << "Falsche Eingabe. " << endl << endl;

		else

			cout << "Bonus: " << bonus[level - 1] << endl << endl;

	

}
