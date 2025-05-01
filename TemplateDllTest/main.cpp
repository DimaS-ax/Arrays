#include<iostream>
#include"Template.h"
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");


	const int SIZE = 5;
	int arr[SIZE];
	FillRand(arr, SIZE);
	Print(arr, SIZE);
	Sort(arr, SIZE);
	Print(arr, SIZE);
	cout << "Сумма целочисленного массива:" << Sum(arr, SIZE) << endl;
	cout << "Среднее арифметическое массива:" << AVG(arr, SIZE) << endl;
	cout << "Минимальный элемент массива:" << MinValue(arr, SIZE) << endl;
	cout << "Максимальный элемент массива:" << MaxValue(arr, SIZE) << endl;
	int Shifts;
	Print(arr, SIZE);
	cout << "Введите количество сдвигов в лево : "; cin >> Shifts;
	ShiftLeft(arr, SIZE, Shifts);
	Print(arr, SIZE);
	cout << "Введите количество сдвигов в право : "; cin >> Shifts;
	Shiftright(arr, SIZE, Shifts);
	Print(arr, SIZE);


	const int SIZE_1 = 8;
	double brr[SIZE_1];
	FillRand(brr, SIZE_1);
	Print(brr, SIZE_1);
	Sort(brr, SIZE_1);
	Print(brr, SIZE_1);
	cout << "Сумма  массива:" << Sum(brr, SIZE_1) << endl;
	cout << "Среднее арифметическое  массива: " << AVG(brr, SIZE_1) << endl;
	cout << "Минимальный элемент массива:" << MinValue(brr, SIZE_1) << endl;
	cout << "Максимальный элемент массива:" << MaxValue(brr, SIZE_1) << endl;
	Print(brr, SIZE_1);
	cout << "Введите количество сдвигов в лево : "; cin >> Shifts;
	ShiftLeft(brr, SIZE_1, Shifts);
	Print(brr, SIZE_1);
	cout << "Введите количество сдвигов в право : "; cin >> Shifts;
	Shiftright(brr, SIZE_1, Shifts);
	Print(brr, SIZE_1);


	int crr[ROWS][COLS];
	FillRand(crr, ROWS, COLS);
	Print(crr, ROWS, COLS);
	Sort(crr, ROWS, COLS);
	Print(crr, ROWS, COLS);
	cout << "Сумма массива: " << Sum(crr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое массива:" << AVG(crr, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива:" << MinValue(crr, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива:" << MaxValue(crr, ROWS, COLS) << endl;
	Print(crr, ROWS, COLS);
	cout << "Введите количество сдвигов в лево : "; cin >> Shifts;
	ShiftLeft(crr, ROWS, COLS, Shifts);
	Print(crr, ROWS, COLS);
	cout << "Введите количество сдвигов в право : "; cin >> Shifts;
	Shiftright(crr, ROWS, COLS, Shifts);
	Print(crr, ROWS, COLS);


	double drr[ROWS][COLS];
	FillRand(drr, ROWS, COLS);
	Print(drr, ROWS, COLS);
	Sort(drr, ROWS, COLS);
	Print(drr, ROWS, COLS);
	cout << "Сумма массива: " << Sum(drr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое массива: " << AVG(drr, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива:" << MinValue(drr, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива:" << MaxValue(drr, ROWS, COLS) << endl;
	Print(drr, ROWS, COLS);
	cout << "Введите количество сдвигов в лево : "; cin >> Shifts;
	ShiftLeft(drr, ROWS, COLS, Shifts);
	Print(drr, ROWS, COLS);
	cout << "Введите количество сдвигов в право : "; cin >> Shifts;
	Shiftright(drr, ROWS, COLS, Shifts);
	Print(drr, ROWS, COLS);




}