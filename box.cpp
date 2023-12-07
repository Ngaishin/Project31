#include "box.h"
#include <iostream>
#include <cstring>

using namespace std;

void disbox(box b)
{
	cout << "box's maker : " << b.maker << endl;
	cout << "box's height: " << b.height << endl;
	cout << "box's width : " << b.width << endl;
	cout << "box's length: " << b.length << endl;
	cout << "box's volume: " << b.volume << endl;
}

void mulvolbox(box* b)
{
	b->volume = b->height * b->width * b->length;
}

void runBox()
{
	box b;
	char name[40];
	cout << "Enter box's name: ";
	cin >> name;
	strcpy_s(b.maker, 40, name);
	cout << "Enter height: ";
	while (!(cin >> b.height))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Incorrect input!retry: ";
	}
	cout << "Enter width: ";
	while (!(cin >> b.width))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Incorrect input!retry: ";
	}
	cout << "Enter length: ";
	while (!(cin >> b.length))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Incorrect input!retry: ";
	}

	mulvolbox(&b);
	disbox(b);
}