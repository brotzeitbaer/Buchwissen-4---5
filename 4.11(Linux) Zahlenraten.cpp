#include <QCoreApplication>
#include <iostream>
#include <time.h>

using namespace std;

int GetRandomNumber(int Min, int Max);

int play (int play);
int wahl (int lvl);
int testhighscore (int highscore, int points);
void showinfo ();

int main()
{

    char auswahl;
    int lvl = 5;
    int highscore = 85;

   srand((int)time(NULL));

    do
    {
        cout << "_____Menue_____\n"
             << "(S)tart\n"
             << "(A)uswahl Lvl\n"
             << "(H)ighscore\n"
             << "(I)nfo\n"
             << "(E)xit\n" << endl;

        cout << "Auswahl: " << endl;
        cin >> auswahl;

    switch (auswahl)
        {
            case ('S'):
            case ('s'):
            {

                int points;

                points = play (lvl);

                highscore = testhighscore (highscore, points);

            }break;

            case ('A'):
            case ('a'):
            {

                lvl = wahl (lvl);

            }break;

            case ('H'):
            case ('h'):
            {

                cout << "Aktueller Highscore: " << highscore << endl;

            }break;

            case ('I'):
            case ('i'):
            {

                showinfo ();

            }break;

            case ('E'):
            case ('e'):
            {

                cout << "Exit\n" << endl;

            }break;

            default:
            {

                cout << "Falsche Eingabe" << endl;

            }

        }
    }while ((auswahl != 'E') && (auswahl != 'e'));

    cout << "Go fuck yourself." << endl;

    return 0;

}

void showinfo()
{
    cout << "Game version0.1" << endl;
}

int wahl(int lvl)
{
    int newlevel;

    do
    {
        cout << "Aktueller Level: " << lvl << endl;
        cout << "Neuen Level waehlen: (1-10) " << endl;
        cin >> newlevel;

        if (newlevel < 1 || newlevel >10)
        {
            cout << "Ungueltige Eingabe" << endl;
        }

    }while ((newlevel >= 1) || (newlevel <= 10));

     return newlevel;

}

int play (int lvl)
{
    int zufallszahl;
    int geratenezahl = 0;
    int bereich = lvl*10;
    int versuche = 0;
    int punkte = 0;

    zufallszahl = (rand()%bereich)+1;

    cout << "\nBereich liegt zwichen 1 - " << bereich << endl;

    while (geratenezahl != zufallszahl)
    {

        cout << "Zahl eingeben: " << endl;
        cin >> geratenezahl;

        versuche++;

        if (geratenezahl < zufallszahl)
            cout << "Die gesuchte Zahl ist groesser\n" << endl;
        if (geratenezahl > zufallszahl)
            cout << "Die geratene Zahl ist kleiner\n" << endl;

    }

    cout << "Richtig.\n" << "Die Zahl wurde nach: " << versuche << " gefunden." << endl;

    punkte = bereich - versuche + 1;
    punkte *= lvl;

    if (punkte < 0)
        punkte = 0;

    cout << "Punkte: " << punkte << endl;
    return punkte;
}

int testhighscore(int highscore, int points)
{

    if (points > highscore)
    {
        cout << "Neuer Highscore: " << points << endl;
        highscore = points;
    }
    else
    {
        cout << "Kein neuer Highscore. " << endl;
    }

    return highscore;

}
