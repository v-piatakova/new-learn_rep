#include "pch.h"
#include <iostream>
#include <math.h>
#include<string>
using namespace std;
struct StudentList
{
	string name, surname, patronym;
	int drwing, phys, progr, maths;
}*table,*searchtable;

void input(int numb, StudentList *tableT)
{
	int i;
	for (i = 0; i < numb; i++)
	{
		cout << "input name " << endl;
		cin >> tableT->name;
		cout << "input surname " << endl;
		cin >> tableT->surname;
		cout << "input patronym " << endl;
		cin >> tableT->patronym;
		cout << "Input Marks: " << endl;
		cout << "Drawing: ";
		cin >> tableT->drwing;
		cout << "Physics: ";
		cin >> tableT->phys;
		cout << "Programming: ";
		cin >> tableT->progr;
		cout << "Maths: ";
		cin >> tableT->maths;
	}
}
void output(int numb, StudentList *tableT)
{
	int i;
	for (i = 0; i < numb; i++)
	{
		cout << "Name " << tableT->name;
		cout << "  Surname " << tableT->surname;
		cout << "  Patronym " << tableT->patronym << endl;
		cout << " Marks: ";
		cout << "Drawing: " << tableT->drwing;
		cout << "  Physics: " << tableT->phys;
		cout << "  Programming: " << tableT->progr;
		cout << "  Maths: " << tableT->maths << endl;

	}
}
int main()
{
	int numb;
	cout << "Enter a number of students ";
	cin >> numb;
	table = new StudentList[numb];
	input(numb,table);
	output(numb,table);

	delete[]table;
	system("pause");
	return 0;
}
