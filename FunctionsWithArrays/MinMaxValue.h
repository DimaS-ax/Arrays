#pragma once
#include"STDAFX.h"
#include"Constants.h"


template<typename T>
T MinValue(T arr[], const int n);
template<typename T>
T MinValue(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MaxValue(T arr[], const int n);
template<typename T>
T MaxValue(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
T MinValue(T arr[], const int n)
{
	T min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>
T MinValue(T arr[ROWS][COLS], const int ROWS, const int COLS)
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

template<typename T>
T MaxValue(T arr[], const int n)
{
	T max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>
T MaxValue(T arr[ROWS][COLS], const int ROWS, const int COLS)
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

