﻿#include "pch.h"
#include <iostream>

using namespace std;
int factorial(int);

int factorial(int number)
{
	if (number <= 0)return 228; // почему 228, ты запускал код? Мне кажется он работает неверно!
	else return number * factorial(number - 1);
}

int main()
{
	int number;
	cout << "input number" << endl;
	cin >> number;
	cout << factorial(number) << endl;
}