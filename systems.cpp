﻿// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

	int toDec(int nom)
	{
		char binStr[255];
		int res = 0, i, n, simv;
		float x = 0;  // в расчетах используй double - более точный тип данных
		cout << "enter mass using (1,0) " << endl;
		cin.getline(binStr, 255);
		n = strlen(binStr);
		for (i = n - 1; i >= 0; i--)
		{
			simv = binStr[i];
			if (simv == 48) res += 0;
			else if (simv == 49) res += (1 * (pow(2, x)));
			else
				cout << "no answer" << endl;
			x++;
		}
		cout << endl << binStr << "in 10-s form" << "=" << res << endl;
		system("pause");
		return res;
	}
	int toBinary(int nom)
	{
		int nam, res;
		cout << "enter the namber" << endl;
		cin >> nam;

		while (nam != 0)
		{
			res = nam % 2;
			nam /= 2;
			cout << "in binary" << res << endl;
		}
		return res;
	}
	int main()
	{
		int nom;
		cout << "enter bin nom" << endl;
		toDec(nom);
		int nam;
		cout << "enter 10-s namber" << endl;
		toBinary(nam);
		system("pause");
}

