#include <iostream>

using namespace std;

inline int testhighscore(int punkte, int highscore)
{ /*eine inline funktion spart rechenzeit aber braucht mehr speicher. (siehe kapitel 4.6).
die inline funktion muss noch vor der stelle stehen an der sie aufgerufen wird,
ansonsten wird sie als normale funktion ausgeführt.*/

/*wenn wir eine inline funktion schreiben dann ist dies lediglich ein vorschlag an den compiler.
wir können die inline funktion auch aufzwängen indem wir "__forceinline" schreiben.*/

	if ( punkte > highscore)
	{
	cout << "neuer highscore\n";
	}else
	cout << "kein neuer rekord\n";
	
}

int main ()
{
	
	int punkte = 0;
	int highscore = 155;
	
	cout << "erreichte punkte eingeben: \n";
	cin  >> punkte;
	
	testhighscore (punkte, highscore);
	
	return 0;
	
}/*wann verwende ich eigentlich eine funktion?
wenn ein codeblock häufiger verwendet wird, er kaum änderungen enthält
und ein paar zeilen umfasst dann ist er potentieller kandidat für eine funktion.*/
