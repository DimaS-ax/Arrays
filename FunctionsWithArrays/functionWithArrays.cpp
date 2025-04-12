#include<iostream>
using namespace std;

#define delimiter "\n--------------------------------------\n"
const int ROWS = 4;
const int COLS = 5;



void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);




template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
void Sort(T arr[], const int n);
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);



template<typename T>
int Sum(T arr[], const int n);
template<typename T>
int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);



template<typename T>
double AVG(T arr[], const int n);
template<typename T>
double AVG(T arr[ROWS][COLS], const int ROWS, const int COLS);



template<typename T>
T MinValue(T arr[], const int n);
template<typename T>
T MinValue(T arr[ROWS][COLS], const int ROWS, const int COLS);



template<typename T>
T MaxValue(T arr[], const int n);
template<typename T>
T MaxValue(T arr[ROWS][COLS], const int ROWS, const int COLS);



void ShiftLeft(int arr[], const int n, int Shifts);
void ShiftLeft(double arr[], const int n, const int Shifts);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);

void Shiftright(int arr[], const int n, const int Shifts);
void Shiftright(double arr[], const int n, const int Shifts);
void Shiftright(int arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);
void Shiftright(double arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);

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
	cout << delimiter << endl;
	int Shifts;
	Print(arr, n);
	cout << "Введите количество сдвигов в лево : "; cin >> Shifts;
	ShiftLeft(arr, n, Shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов в право : "; cin >> Shifts;
	Shiftright(arr, n, Shifts);
	Print(arr, n);

	//Объявление двумерного массива
	cout << delimiter << endl;
	int i_arr_2[ROWS][COLS];

	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое двумерного массива: " << AVG(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение двумерного массива: " << MinValue(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение двумерного массива: " << MaxValue(i_arr_2, ROWS, COLS) << endl;

	Print(i_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов в лево : "; cin >> Shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, Shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов в право : "; cin >> Shifts;
	Shiftright(i_arr_2, ROWS, COLS, Shifts);
	Print(i_arr_2, ROWS, COLS);


	cout << delimiter << endl;
	const int SIZE = 8;
	double brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое " << AVG(brr, SIZE) << endl;
	cout << "Минимальный эелемент массива " << MinValue(brr, SIZE) << endl;
	cout << "Максимальный эелемент массива " << MaxValue(brr, SIZE) << endl;

	Print(brr, SIZE);
	cout << "Введите количество сдвигов в лево : "; cin >> Shifts;
	ShiftLeft(brr, SIZE, Shifts);
	Print(brr, SIZE);
	cout << "Введите количество сдвигов в право : "; cin >> Shifts;
	Shiftright(brr, SIZE, Shifts);
	Print(brr, SIZE);
}
//_____________________________________________________
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}


template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
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



template<typename T>
void Sort(T arr[], const int n)
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
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
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



template<typename T>
int Sum(T arr[], const int n)
{
	T sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
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


template<typename T>
double AVG(T arr[], const int n)
{

	return (double)Sum(arr, n) / n;

}
template<typename T>
double AVG(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}



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




void ShiftLeft(int arr[], const int n, const int Shifts)
{
	for (int i = 0; i < Shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, int Shifts)
{
	for (int i = 0; i < Shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		double bufer[10];

		for (int j = 0; j < COLS; j++)
		{
			bufer[j] = arr[i][(j + Shifts) % COLS];
		}

		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = bufer[j];
		}
	}

}
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, Shifts);
	}*/

	ShiftLeft(arr[0], ROWS * COLS, Shifts);
}



void Shiftright(int arr[], const int n, const int Shifts)
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
			int buffer = arr[0];
			for (int i = 1; i < n; i++)
			{
				arr[i - 1] = arr[i];
			}
			arr[n - 1] = buffer;
		}
	}
}
void Shiftright(double arr[], const int n, const int Shifts)
{
	for (int i = 0; i < Shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			double buffer = arr[0];
			for (int i = 1; i < n; i++)
			{
				arr[i - 1] = arr[i];
			}
			arr[n - 1] = buffer;
		}
	}
}
void Shiftright(int arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		int bufer[10];

		for (int j = 0; j < COLS; j++)
		{
			bufer[(j + Shifts) % COLS] = arr[i][j];
		}

		for (int j = 0; j < COLS;j++)
		{
			arr[i][j] = bufer[j];
		}
	}

}
void Shiftright(double arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		double bufer[10];

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