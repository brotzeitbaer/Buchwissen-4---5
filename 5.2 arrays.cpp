#include <iostream>

using namespace std;

int main()
{
	
	int bonus [5];
	int level;
	
	bonus[0] = 100;
	bonus[1] = 150;
	bonus[2] = 200;
	bonus[3] = 300;
	bonus[4] = 500;
	
	do
	{
		cout << "level eingeben: \n";
		cin  >> level;
		
	 }while (level < 1 || level > 5); 
	 // wenn diese bedingung nicht erfüllt ist, fängt die do schleife wieder von vorn an.
	 
	 level--;
	 
	 cout << "bonus " << bonus[level] << endl;
	
	return 0;
}
