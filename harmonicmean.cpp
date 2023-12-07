#include "harmonicmean.h"
#include <iostream>

using namespace std;

void runHarMean()
{
	float f1, f2, f3, f4;
	cout << "Enter f1 f2 f3 and f4 to calculate harmonic mean.\n";
	while ((cin >> f1 >> f2 >> f3 >> f4) && f1 && f2 && f3 && f4)
	{
		float f = harmean(f1, f2, f3, f4);
		cout << "Harmonic mean is " << f << endl;
		cout << "Enter f1 f2 f3 and f4 to calculate harmonic mean.\n";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

float harmean(float f1, float f2)
{
	return 2 * f1 * f2 / (f1 + f2);
}


float harmean(float x1, float x2, float x3, float x4)
{
	return 4.0 * (x1 * x2 * x3 * x4) / (x4 * (x3 * (x1 + x2) + (x1 * x2)) + (x1 * x2 * x3));
}
