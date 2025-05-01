#pragma once
#ifdef TEMPLATEDYNAMIC_EXPORTS
#define TEMPLATEDYNAMIC_API __declspec(dllexport)
#else
#define TEMPLATEDYNAMIC_API __declspec(dllimport)
#endif
#include<iostream>
using namespace std;
const int ROWS = 4;
const int COLS = 5;

extern TEMPLATEDYNAMIC_API void FillRand(int arr[], const int n);
extern TEMPLATEDYNAMIC_API void FillRand(double arr[], const int n);
extern TEMPLATEDYNAMIC_API void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
extern TEMPLATEDYNAMIC_API void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> void Print(T arr[], const int n);
template<typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T> void Sort(T arr[], const int n);
template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	int exchange = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					iterations++;
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchange++;
					}
				}
			}
		}
	}
	cout << "Количество итераций:" << iterations << endl;
	cout << "Количество обменов: " << exchange << endl;
}


template<typename T> int Sum(T arr[], const int n);
template<typename T> int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> int Sum(T arr[], const int n)
{
	T sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T> int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}


template<typename T> T AVG(T arr[], const int n);
template<typename T> T AVG(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T AVG(T arr[], const int n)
{

	return (double)Sum(arr, n) / n;

}
template<typename T> T AVG(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}


template<typename T> T MinValue(T arr[], const int n);
template<typename T> T MinValue(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T MinValue(T arr[], const int n)
{
	T min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T> T MinValue(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];
		}
	}
	return minValue;
}


template<typename T> T MaxValue(T arr[], const int n);
template<typename T> T MaxValue(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T MaxValue(T arr[], const int n)
{
	T max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T> T MaxValue(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxValue)maxValue = arr[i][j];
		}
	}
	return maxValue;
}


template<typename T> void ShiftLeft(T arr[], const int n, int Shifts);
template<typename T> void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);
template<typename T> void ShiftLeft(T arr[], const int n, const int Shifts)
{
	for (int i = 0; i < Shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T> void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, Shifts);
	}*/

	ShiftLeft(arr[0], ROWS * COLS, Shifts);
}


template<typename T> void Shiftright(T arr[], const int n, const int Shifts);
template<typename T> void Shiftright(T arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);
template<typename T> void Shiftright(T arr[], const int n, const int Shifts)
{

	/* void ShiftRight(int arr[], const int n, const int shifts)
	{

		shiftLeft(arr, n, n - shifts);
	}*/

	for (int i = 0; i < Shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			T buffer = arr[0];
			for (int i = 1; i < n; i++)
			{
				arr[i - 1] = arr[i];
			}
			arr[n - 1] = buffer;
		}
	}
}
template<typename T> void Shiftright(T arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		T bufer[10];

		for (int j = 0; j < COLS; j++)
		{
			bufer[(j + Shifts) % COLS] = arr[i][j];
		}

		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = bufer[j];
		}
	}

}

