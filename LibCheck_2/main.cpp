#include<iostream>
#include<FillRand.h>
#include<Statistic.h>
#include<Print.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Sort(arr, n);
	Print(arr, n);

}