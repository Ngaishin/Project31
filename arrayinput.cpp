#include "arrayinput.h"
#include <iostream>

using namespace std;


int fill_array(double* ar, int len)
{
	cout << "Enter double: ";
	int i = 0;
	while (len-- && (cin >> ar[i++]))
	{
		if (len)
			cout << "next number: ";
	}
	return i;
}
void show_array(double* ar, int j)
{
	for (int i = 0; i < j; i++)
		cout << ar[i] << " ";
	cout << endl;
}
void reverse_array(double* ar, int len)
{
	double tem;
	for (int i = 0; i < len / 2; i++)
	{
		tem = ar[i];
		ar[i] = ar[len - 1 - i];
		ar[len - 1 - i] = tem;
	}
}