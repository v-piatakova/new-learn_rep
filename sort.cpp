#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

void Output(int *array, int size)
{
	for (int i = 0; i < size; i++)cout << array[i] << " ";
	cout << endl;
}

void bubble(int *array, int size)
{
	int change;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				change = array[j];
				array[j] = array[j + 1];
				array[j + 1] = change;
			}
	}

}

void insert(int *array, int size)
{
	int change, index;
	for (int i = 1; i < size; i++)
	{
		change = array[i];
		index = i - 1;
		while (index >= 0 && array[index] > change)
		{
			array[index + 1] = array[index];
			array[index] = change;
			index--;
		}
	}
}

void Hoara(int *array, int first, int last)
{
	int mid, count;
	int f = first, l = last;
	mid = array[(f + l) / 2];
	do
	{
		while (array[f] < mid) f++;
		while (array[l] > mid) l--;
		if (f <= l)
		{
			count = array[f];
			array[f] = array[l];
			array[l] = count;
			f++;
			l--;
		}
	} while (f < l);
	if (first < l) Hoara(array, first, l);
	if (f < last) Hoara(array, f, last);
}


int main()
{
	int size;
	cout << "size of array" << endl;
	cin >> size;
	cout << "Your elements" << endl;
	int *array = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	double start_time_bubble = clock();
	bubble(array, size);
	Output(array, size);
	double end_time_bubble = clock();
	double search_time_bubble = end_time_bubble - start_time_bubble;
	cout << "bubble metod time" << " " << search_time_bubble << endl;

	double start_time_insert = clock();
	insert(array, size);
	Output(array, size);
	double end_time_insert = clock();
	double search_time_insert = end_time_insert - start_time_insert;
	cout << "insert metod time" << " " << search_time_insert << endl;

	double start_time_Hoara = clock();
	Hoara(array, 0, size - 1);
	Output(array, size);
	double end_time_Hoara = clock();
	double search_time_Hoara = end_time_Hoara - start_time_Hoara;
	cout << "Hoara metod time" << " " << search_time_Hoara << endl;

	delete[]array;
}