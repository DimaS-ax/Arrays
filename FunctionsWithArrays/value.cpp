#include "value.h"

int MinValue(int arr[], const int n)
{
	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double MinValue(double arr[], const int n)
{
	double min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int MinValue(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];
		}
	}
	return minValue;
}
double MinValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];
		}
	}
	return minValue;
}


int MaxValue(int arr[], const int n)
{
	int max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double MaxValue(double arr[], const int n)
{
	double max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int MaxValue(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxValue)maxValue = arr[i][j];
		}
	}
	return maxValue;
}
double MaxValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxValue)maxValue = arr[i][j];
		}
	}
	return maxValue;
}