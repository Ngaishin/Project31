#include "factorial.h"
#include <iostream>

using namespace std;

void runFactorial()
{
	int i;
	cout << "Enter an integer: ";
	while (!(cin >> i))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Incorrect input!\nretry: ";
	}
	long long ftrl = factorial(i);
	cout << "The factorial of " << i << " is : " << ftrl << endl;
}

long long factorial(int i)
{
	if (i == 0)
		return 1;
	//cout << "before: i = " << i << endl;
	long long ftrl = factorial(i-1);
	//cout << "after: i = " << i << endl;
	//cout << "after: ftrl = " << ftrl << endl;
	return i * ftrl;

}