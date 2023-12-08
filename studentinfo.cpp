#include "studentinfo.h"
#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void runstu()
{
	cout << "Enter class size: ";
	int size;
	while (!(cin >> size))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Incorrect input!\ntry again: ";
	}
	cin.get();
	student* ptr_stu = new student[size];
	int ent = getinfo(ptr_stu, size);
	for (int i = 0; i < ent; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, ent);
	delete[] ptr_stu;
	cout << "Done\n";
}


int getinfo(student s[], int len)
{
	cout << "Enter student information.\n";
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int  w = 0;
		cout << "--" << "student " << i + 1 << "--" << endl;
		cout << "name: ";
		cin.get(s[i].fullname, slen);//return i if name all character blank ;
		for (int j = 0; j < strlen(s[i].fullname); j++)
		{
			//if (!(ch != ' ' and ch != '\t' and ch != '\r' and ch != '\n'))
			if (isgraph(s[i].fullname[j]))
			{
				w++;
			}
		}
		if (w == 0)
			return i;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "hobby: ";
		cin.get(s[i].hobby, slen);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "ooplevel: ";
		while (!(cin >> s[i].ooplevel))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Incorrect input!\ntry again: ";
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return i;
}

void display1(student st)
{
	cout << st.fullname << endl;
	cout << st.hobby << endl;
	cout << st.ooplevel << endl;
}

void display2(const student* st)
{
	cout << st->fullname << endl;
	cout << st->hobby << endl;
	cout << st->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "-- student " << i + 1 << " --" << endl;
		cout << "fullname:  " << pa[i].fullname << endl
			<< "hobby   :  " << pa[i].hobby << endl
			<< "ooplevel:  " << pa[i].ooplevel << endl;
	}
}