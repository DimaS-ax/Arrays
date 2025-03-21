#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	const int SIZE = 5; // Размер массива
	int arr[SIZE];
	arr[3] = 1024; // Обращение к эелементу массива на запись
	//cout << arr[3] << endl; //Обращение к элементу массива на чтение

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}