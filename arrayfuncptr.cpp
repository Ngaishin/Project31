#include "arrayfuncptr.h"
#include <iostream>

using namespace std;

float* array_fill(float a[], int limit)
{

	float* teil = a;
	for (int i = 0; i < limit; i++, teil++)
	{
		cout << "Enter value: ";
		while (!(cin >> *teil))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Bad input; input process terminated.\n";
			return teil;
		}
		if (a[i] < 0)
			return teil;
	}
	return teil;
}


void show_array(float* head, float* teil)
{
	cout << "Show array:\n";
	for (auto e = head; e != teil; e++)
	{
		cout << "property: " << *e << endl;
	}
}

void revalue(float r, float* head, float* teil)
{
	/*for (int i = 0; i < (teil - head); i++)
	{
		head[i] *= r;
	}*/
	for (auto e = head; e != teil; e++)
	{
		*e *= r;
	}
}
