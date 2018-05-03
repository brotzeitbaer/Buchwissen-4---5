#include "charakter.hpp"

int addpercent (int staerke, int prozent)
{
	int wert;
	
	wert = staerke + (staerke * prozent) / 100;
	
	return wert;
}
float addpercent (float geschwindigkeit,int prozent)
{
	float wert;
	
	wert = geschwindigkeit + (geschwindigkeit * prozent) / 100.0f;
	
	return wert;
}
