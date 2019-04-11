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
void AddStudent(int numb, int num )
{
	int i;
	int sum = numb + num;
	StudentList *addtable = new StudentList[sum];
	for (i = 0; i < numb; i++)
	{
		addtable[i] = table[i];
	}
	for (i = numb; i < sum; i++)
	{
		cout << "input name " << endl;
		cin >> (&addtable[i])->name;
		cout << "input surname " << endl;
		cin >> (&addtable[i])->surname;
		cout << "input patronym " << endl;
		cin >> (&addtable[i])->patronym;
		cout << "Input Marks: " << endl;
		cout << "Drawing: ";
		cin >> (&addtable[i])->drwing;
		cout << "Physics: ";
		cin >> (&addtable[i])->phys;
		cout << "Programming: ";
		cin >> (&addtable[i])->progr;
		cout << "Maths: ";
		cin >> (&addtable[i])->maths;
	}
}
void AddRequest(int numb)
{

	int Solution;
	cout << "Want to add students? " << endl;
	cout << "1-yes,2-no " << endl;
	cin >> Solution;
	switch (Solution)
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
void Averagemark(int numb, StudentList *tableT)
{
	for (int i = 0; i < numb; i++)
	{
		tableT[i].averageball = (tableT[i].drwing + tableT[i].phys + tableT[i].progr + tableT[i].maths) / 4.;
		cout << endl;
	}
}
void sort(int numb, StudentList *tableT)
{
	int i, j;
	StudentList temporary;
	for (int i = 0; i < numb; i++)
		for (int j = i + 1; j < numb; j++)
			if ((&tableT[i])->averageball < (&tableT[j])->averageball)
			{
				temporary = tableT[i];
				tableT[i] = tableT[j];
				tableT[j] = temporary;
			}
}
void searchName(int numb, StudentList *tableT)
{
	int i;
	string Name;
	cout << "Enter the name of student that youre searching: ";
	cin >> Name;
	for (i = 0; i < numb; i++)
	{
		if ((&tableT[i])->name == Name)
			searchtable = tableT;
	}

}
void searchSurname(int numb, StudentList *tableT)
{
	int i;
	string Surname;
	cout << "Enter the surname of student that youre searching: ";
	cin >> Surname;
	for (i = 0; i < numb; i++)
	{
		if ((&tableT->name[i]) == Surname)
			searchtable = tableT;
	}
}
void filters(int numb, StudentList *tableT)
{
	while (true)
	{
	int Solution2;
	cout << "Searching by Name(1) or Surname(2) or Exit(3)??: ";
	cin >> Solution2;
	
		switch (Solution2)
		{
		case 1: searchName(numb, tableT);
			cout << "Searching complete " << endl;
			output(numb, tableT);
			break;
		case 2: searchSurname(numb, tableT);
			cout << "Searching complete " << endl;
			output(numb, tableT);
			break;
		case 3: return;
		}
	}
}

int main()
{
	int numb;
	cout << "Enter a number of students ";
	cin >> numb;
	
	table = new StudentList[numb];
	input(numb,table);
	AddRequest(numb);

	Averagemark(numb,table);
	sort(numb, table);
	filters(numb, table);
	output(numb,table);
	delete[]table;
	system("pause");
	return 0;
}
