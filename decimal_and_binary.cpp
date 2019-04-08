﻿// 3_anton.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void binary(int bin_size)
{
	int *array_bin = new int[bin_size];// по возможности старайся не мешать ввод и функцию !
	cout << "Your elements" << endl;
	for (int i = 0; i < bin_size; i++)
	{
		cin >> array_bin[i];
	}
	double count = 0;
	int j = 0;
	for (int i = bin_size - 1; i >= 0; i--, j++)
	{
		count += array_bin[j] * pow(2, i);
	}
	cout << endl << count << endl;
}

string dec(int number)
{
	int for_number;
	string str, result;
	while (number != 0)
	{
		for_number = number % 2;
		number = number / 2;
		str += to_string(for_number);
	}
	for (int i = str.length() - 1; i >= 0; i--)
	{
		result += str[i];// а иначе перевернуть строку можно?
	}
	return result;
}

int main()
{
	int code, number;
	cout << "1-binary 2-decimal" << endl;
	cin >> code;
	switch (code)
	{
	case 1:
	{
		int bin_size;
		cout << "size of binary array" << endl;
		cin >> bin_size;
		binary(bin_size);
	}break;
	case 2:
	{
		cout << "decimal:" << endl;
		cin >> number;
		cout << endl << dec(number) << endl;
	}break;
	}
}