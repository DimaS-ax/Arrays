#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

int Sum(int arr[], const int n);
double AVG(int arr[], const int n);
int MinValue(int arr[], const int n);
int MaxValue(int arr[], const int n);
void ShiftLeft(int arr[], const int n, const int Shifts);



void main()
{
	setlocale(LC_ALL, "ru");

	const int n = 5;
	int arr[n];
	

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);


	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;

	cout << "Среднее арифметическое " << AVG(arr, n) << endl;

	cout << "Минимальный эелемент массива " << MinValue(arr, n) << endl;

	cout << "Максимальный эелемент массива " << MaxValue(arr, n) << endl;

	int Shifts;
	cout << "Введите количество сдвигов: "; cin >> Shifts;
	ShiftLeft(arr, n, Shifts);
	Print(arr, n);


	/*const int SIZE = 8;
	int brr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		brr[i] = rand() % 100;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << brr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (brr[j] < brr[i])
			{
				int buffer = brr[i];
				brr[i] = brr[j];
				brr[j] = buffer;
			}

		}

	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << brr[i] << "\t";
	}
	cout << endl;*/

}
//_____________________________________________________
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double AVG(int arr[], const int n)
{

	return (double)Sum(arr, n) / n;

}

int MinValue(int arr[], const int n)
{
	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
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


void ShiftLeft(int arr[], const int n, const int Shifts)
{
	for (int i = 0; i < Shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}



