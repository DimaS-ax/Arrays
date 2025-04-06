#include"stdafx.h"
#include"constants.h"
#include"fillRand.h"
//#iclude"fillRand.cpp" // Реализации функции не подключчать на место вызова
#include"Print.h"
#include"static.h"
#include"value.h"
#include"shift.h"

void main()
{
	setlocale(LC_ALL, "ru");

	const int n = 5;
	double arr[n];

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
	double i_arr_2[ROWS][COLS];

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