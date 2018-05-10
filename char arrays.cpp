#include <iostream>

using namespace std;

int main()
{
	
	char zeichenfolge1[]   = "string 1";
	char zeichenfolge2[9]  = "string 2";
	char zeichenfolge3[20] = "teil 1\0teil 2"; //\0 ist null terminierung. für weitere infos kapitel 5.5.
	
	cout << zeichenfolge1 << endl;
	cout << zeichenfolge2 << endl;
	cout << zeichenfolge3 << endl;
	
	for (int i = 0; i< 20; i++)
	{
		cout << zeichenfolge3[i];
	}
	
	return 0;
}
