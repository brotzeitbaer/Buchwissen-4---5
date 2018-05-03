#include <iostream>

using namespace std;

bool testbereich (int position,int min,int max);

int main()
{
	
	int min = 0;
	int max = 800;
	int xposition;
	
		cout << "spielerposition eingeben\n";
		cin  >> xposition;
	
	if (testbereich ( xposition, min, max) == true)
	{
		cout << "spieler ist im testbereich\n";
	}else
		cout << "spieler ist auserhalb des bereiches\n";
	
	return 0;
}

bool testbereich (int position,int min,int max)
{
	
	if ((position >= min) && (position < max))
	return true;
	else 
	return false; 
	
}
