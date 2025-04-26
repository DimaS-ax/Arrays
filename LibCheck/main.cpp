#include<iostream>
#include<fillRand.h>
#include<Print.h>
#include<static.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	const int n = 5;
	double arr[n];
	FillRand(arr, n);
	Sort(arr, n);
	Print(arr, n);

	cout << "_______________________________" << endl;

	double i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

}