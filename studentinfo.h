#ifndef STUDENTINFO_H
#define STUDENTINFO_H

const int slen = 30;
struct student
{
	char fullname[slen];
	char hobby[slen];
	int ooplevel;
};
void runstu();
int getinfo(student s[], int size);
void display1(student st);
void display2(const student* st);
void display3(const student pa[], int n);

#endif
