#include "seasonsals.h"
#include <iostream>

using namespace std;

const char* season[4] = { "Spring","Summer","Autumn","Winter" };

void fill(double* a)
{
	for (int i = 0; i < 4; i++)
	{
		cout << season[i] << " : $";
		while (!(cin >> a[i]))
		{
			cout << "Incorrect input!\nPlease retry: ";
		}
	}

}
void show(double* a)
{
	for (int i = 0; i < 4; i++)
	{
		cout << season[i] << " : $" << a[i] << endl;
	}
}
void show(sals* a)
{
	for (int i = 0; i < 4; i++)
	{
		cout << season[i] << " : $" << a[i].sal << endl;
	}
}
void fill(sals* a)
{
	for (int i = 0; i < 4; i++)
	{
		cout << season[i] << " : $";
		while (!(cin >> a[i].sal))
		{
			cout << "Incorrect input!\nPlease retry: ";
		}
	}

}
