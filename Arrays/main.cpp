#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	const int size = 5;
	int arr[size];
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cout << "____________________________" << endl;
	cout << "Вывод введенного массива на экран: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "____________________________" << endl;
	cout << "Вывод массива в обратном порядке: " << endl;

	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}

	cout << "____________________________" << endl;
	cout << "Вывод суммы эелементов массива: " << endl;

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	cout << sum << endl;
	cout << "____________________________" << endl;
	cout << "Вывод среднего арифметического массива: " << endl;

	float arithmeticMean = (float)sum / size;
	cout << arithmeticMean << endl;

	cout << "____________________________" << endl;
	cout << "Вывод наименьшего элемента массива: " << endl;

	int minElement = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < minElement)
		{
			minElement = arr[i];
		}
	}
	cout << minElement << endl;

	cout << "____________________________" << endl;
	cout << "Вывод наибольшего элемента массива: " << endl;

	int maxElement = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > maxElement)
		{
			maxElement = arr[i];
		}
	}
	cout << maxElement << endl;


	//const int SIZE = 5; // Размер массива
	//int arr[SIZE];
	//arr[3] = 1024; // Обращение к эелементу массива на запись
	////cout << arr[3] << endl; //Обращение к элементу массива на чтение

	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << arr[i] << "\t";
	//}
	//cout << endl;
}