#include <iostream>

using namespace std;

int main()
{
	
	int test[] {12, 14, 15, 17, 33, 55, 68, 99};
	
	int anzahl = sizeof (test) / sizeof (int);
	
	for (int i = 0; i < anzahl; i++)
	{
		cout << "test fuer level " << i+1 << " : " << test[i] << endl;
	}
	
	return 0;
}
