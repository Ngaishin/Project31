#include "golfscores.h"
#include <iostream>

using namespace std;

//run
void runGolfScores()
{
	Es* es = entrscore;
	Ds* ds = disscores;
	Cs* cs = calscomea;
	array<float, 10> gfs = (*es)();
	(*ds)(gfs);
	float mean = (*cs)(gfs);
	cout << "\ngolf mean score: " << mean << endl;

}


//input
array<float, 10> entrscore()
{
	cout << "Enter 10 golf scores('q' to exit):";
	float gs;
	array<float, 10> gfs{ NULL };
	auto a = gfs.begin();
	while (a != gfs.end() && (cin >> gs))
	{
		*a = gs;
		++a;
	}
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Incorrect input!\n\n";
	}

	return gfs;
}

//display
void disscores(array<float, 10> gfs)
{
	cout << "Score: ";
	for (const auto& element : gfs)
	{
		cout << element << "  ";
	}
}

//calculate mean
float calscomea(array<float, 10> gfs)
{
	float mean = 0;
	int size = 0;
	for (const auto& element : gfs)
	{
		if (element != 0)
		{
			mean += element;
			size++;
		}
	}
	if (size == 0)
		return mean;
	return mean / size;
}