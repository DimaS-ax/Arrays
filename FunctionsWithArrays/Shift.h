#pragma once
#include"STDAFX.h"
#include"Constants.h"

template<typename T>
void ShiftLeft(T arr[], const int n, int Shifts);
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);


template<typename T>
void Shiftright(T arr[], const int n, const int Shifts);
template<typename T>
void Shiftright(T arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);


template<typename T>
void ShiftLeft(T arr[], const int n, const int Shifts)
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
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, Shifts);
	}*/

	ShiftLeft(arr[0], ROWS * COLS, Shifts);
}


template<typename T>
void Shiftright(T arr[], const int n, const int Shifts)
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
template<typename T>
void Shiftright(T arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
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
