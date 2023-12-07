#ifndef SEASONSALS_H
#define SEASONSALS_H

struct sals
{
	double sal;
};

//const char* season[4] = { "Spring","Summer","Autumn","Winter" };
void fill(double* a);
void show(double* a);
void show(sals* a);
void fill(sals* a);

#endif // !SEASONSALS_H
