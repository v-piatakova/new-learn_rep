#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
struct StudentList
{
	char name[15], surname[30], patronym[30];
	int drwing, phys, progr, maths;
}str[255];
int main()
{
	int numb, i;
	cout << "Enter a number of students ";
	cin >> numb;

	for (i = 0; i < numb; i++)
	{
		cout << "input name " << endl;
		cin >> (str[i].name);
		cout << "input surname " << endl;
		cin >> (str[i].surname);
		cout << "input patronym " << endl;
		cin >> (str[i].patronym);
		cout << "input marks: " << endl;
		cout << "Drawing: ";
		cin >> (str[i].drwing);
		cout << "Physics: ";
		cin >> (str[i].phys);
		cout << "Programming ";
		cin >> (str[i].progr);
		cout << "input marks: ";
		cin >> (str[i].maths);

	}

	system("pause");
	return 0;
}

// ---Реализовать интерфейс который позволяет вывести список студентов, с высчитанным средним баллом VETA
// ---Учесть возможность добавлять несколько студентов за время работы программы  NADYA
//---Сортировать студентов список студентов по среднему баллу любой сортировкой MAXIM
//(*)Поиск студента и вывода информации о нем по Имени, Фамилии, Если несколько имен Антонов - вывести всех Антонов  ROMA
