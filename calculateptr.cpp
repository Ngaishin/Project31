#include "calculateptr.h"
#include <iostream>

using namespace std;

typedef double pf(double, double);

void runcal()
{
	int times = 7;

	pf(*pa[]) = { add,div,mul };
	double d1, d2;

	const char* func[] = { "add","div" ,"mul" };

	while (times--)
	{
		cout << "d1: ";
		while (!(cin >> d1))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		cout << "d2: ";
		while (!(cin >> d2))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		cout << func[0] << " : " << calculate(d1, d2, pa[0]) << endl;
		cout << func[1] << " : " << calculate(d1, d2, pa[1]) << endl;
		cout << func[2] << " : " << calculate(d1, d2, pa[2]) << endl;
	}
}



double calculate(double d1, double d2, double (*f)(double, double))
{
	return (*f)(d1, d2);
}

double add(double d1, double d2)
{
	return d1 + d2;
}

double div(double d1, double d2)
{
	return d1 - d2;
}

double mul(double d1, double d2)
{
	return d1 * d2;
}