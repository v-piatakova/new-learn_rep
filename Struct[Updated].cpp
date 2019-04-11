#include "pch.h"
#include <iostream>
#include <math.h>
#include<string>
using namespace std;
struct StudentList
{
	string name, surname, patronym;
	int drwing, phys, progr, maths;
	double averageball;
}*table,*searchtable,*tableTn;

void input(int numb, StudentList *tableT)
{
	int i;
	for (i = 0; i < numb; i++)
	{
		cout << "input name " << endl;
		cin >> (&tableT[i])->name;
		cout << "input surname " << endl;
		cin >> (&tableT[i])->surname;
		cout << "input patronym " << endl;
		cin >> (&tableT[i])->patronym;
		cout << "Input Marks: " << endl;
		cout << "Drawing: ";
		cin >> (&tableT[i])->drwing;
		cout << "Physics: ";
		cin >> (&tableT[i])->phys;
		cout << "Programming: ";
		cin >> (&tableT[i])->progr;
		cout << "Maths: ";
		cin >> (&tableT[i]) ->maths;
	}
}
void output(int numb, StudentList *tableT)
{
	int i;
	for (i = 0; i < numb; i++)
	{
		cout << "Name " << (&tableT[i])->name;
		cout << "  Surname " << (&tableT[i])->surname;
		cout << "  Patronym " << (&tableT[i])->patronym << endl;
		cout << " Marks: ";
		cout << "Drawing: " << (&tableT[i])->drwing;
		cout << "  Physics: " << (&tableT[i])->phys;
		cout << "  Programming: " << (&tableT[i])->progr;
		cout << "  Maths: " << (&tableT[i])->maths << endl;
		cout << "  Average mark: " << (&tableT[i])->averageball << endl;

	}
}

void AddStudent(int numb, int num)
{
	int i;
	int sum = numb + num;
	StudentList *table2 = new StudentList[sum];
	for (i = 0; i < numb; i++)
	{
		addtable[i] = table[i];
	}
	for (i = numb, i < sum; i++)
	{
		cout << "input name " << endl;
		cin >> (&addtable)->name;
		cout << "input surname " << endl;
		cin >> (&addtable)->surname;
		cout << "input patronym " << endl;
		cin >> (&addtable)->patronym;
		cout << "Input Marks: " << endl;
		cout << "Drawing: ";
		cin >> (&addtable)->drwing;
		cout << "Physics: ";
		cin >> (&addtable)->phys;
		cout << "Programming: ";
		cin >> (&addtable)->progr;
		cout << "Maths: ";
		cin >> (&addtable)->maths;
	
	}
}
void AddRequest(int numb)
{

	int k;
	cout << "Want to add students? " << endl;
	cout << "1-yes,2-no " << endl;
	cin >> k;
	switch (k)
	{
	case 1:
	{
		cout << "How many students to add?" << endl;
		int num;
		cin >> num;
		AddStudent(numb, num);
	}
	break;
	case 2:break;
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
