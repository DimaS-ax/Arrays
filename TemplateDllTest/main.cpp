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
	cout << "����� �������������� �������:" << Sum(arr, SIZE) << endl;
	cout << "������� �������������� �������:" << AVG(arr, SIZE) << endl;
	cout << "����������� ������� �������:" << MinValue(arr, SIZE) << endl;
	cout << "������������ ������� �������:" << MaxValue(arr, SIZE) << endl;
	int Shifts;
	Print(arr, SIZE);
	cout << "������� ���������� ������� � ���� : "; cin >> Shifts;
	ShiftLeft(arr, SIZE, Shifts);
	Print(arr, SIZE);
	cout << "������� ���������� ������� � ����� : "; cin >> Shifts;
	Shiftright(arr, SIZE, Shifts);
	Print(arr, SIZE);


	const int SIZE_1 = 8;
	double brr[SIZE_1];
	FillRand(brr, SIZE_1);
	Print(brr, SIZE_1);
	Sort(brr, SIZE_1);
	Print(brr, SIZE_1);
	cout << "�����  �������:" << Sum(brr, SIZE_1) << endl;
	cout << "������� ��������������  �������: " << AVG(brr, SIZE_1) << endl;
	cout << "����������� ������� �������:" << MinValue(brr, SIZE_1) << endl;
	cout << "������������ ������� �������:" << MaxValue(brr, SIZE_1) << endl;
	Print(brr, SIZE_1);
	cout << "������� ���������� ������� � ���� : "; cin >> Shifts;
	ShiftLeft(brr, SIZE_1, Shifts);
	Print(brr, SIZE_1);
	cout << "������� ���������� ������� � ����� : "; cin >> Shifts;
	Shiftright(brr, SIZE_1, Shifts);
	Print(brr, SIZE_1);


	int crr[ROWS][COLS];
	FillRand(crr, ROWS, COLS);
	Print(crr, ROWS, COLS);
	Sort(crr, ROWS, COLS);
	Print(crr, ROWS, COLS);
	cout << "����� �������: " << Sum(crr, ROWS, COLS) << endl;
	cout << "������� �������������� �������:" << AVG(crr, ROWS, COLS) << endl;
	cout << "����������� ������� �������:" << MinValue(crr, ROWS, COLS) << endl;
	cout << "������������ ������� �������:" << MaxValue(crr, ROWS, COLS) << endl;
	Print(crr, ROWS, COLS);
	cout << "������� ���������� ������� � ���� : "; cin >> Shifts;
	ShiftLeft(crr, ROWS, COLS, Shifts);
	Print(crr, ROWS, COLS);
	cout << "������� ���������� ������� � ����� : "; cin >> Shifts;
	Shiftright(crr, ROWS, COLS, Shifts);
	Print(crr, ROWS, COLS);


	double drr[ROWS][COLS];
	FillRand(drr, ROWS, COLS);
	Print(drr, ROWS, COLS);
	Sort(drr, ROWS, COLS);
	Print(drr, ROWS, COLS);
	cout << "����� �������: " << Sum(drr, ROWS, COLS) << endl;
	cout << "������� �������������� �������: " << AVG(drr, ROWS, COLS) << endl;
	cout << "����������� ������� �������:" << MinValue(drr, ROWS, COLS) << endl;
	cout << "������������ ������� �������:" << MaxValue(drr, ROWS, COLS) << endl;
	Print(drr, ROWS, COLS);
	cout << "������� ���������� ������� � ���� : "; cin >> Shifts;
	ShiftLeft(drr, ROWS, COLS, Shifts);
	Print(drr, ROWS, COLS);
	cout << "������� ���������� ������� � ����� : "; cin >> Shifts;
	Shiftright(drr, ROWS, COLS, Shifts);
	Print(drr, ROWS, COLS);




}