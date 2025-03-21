#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	cout << "Объявлен массив чисел: " << endl;
	const int size = 10;
	int arr[size]{ 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";// Изначально,как массив есть,вывели на экран.
	}

	/*Создал новый массив на столько же элементов в нем 'size = 10'
	  и скопировал "НАЧАЛЬНЫЙ" массив в "НОВЫЙ" массив*/
	int brr[size];
	for (int i = 0; i < size; i++)
	{
		brr[i] = arr[i];
	}

	//Перед циклом 'do while' создал переменную 'shift'
	int shift;

	/*В цикле 'do while' реализован СДВИГ этого массива на заданное количество раз
	  пока переменная 'shift' не будет равна '0'*/
	do
	{
		cout << endl;
		cout << "Введите количество сдвигов влево в массиве: "; cin >> shift; cout << endl;
		for (int i = 0; i < size; i++)
		{
			arr[i] = brr[(i + shift) % size];//В массив 'arr' присваеваится СДВИГ массива 'brr'
		}

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";//Вывод СДВИНУТОГО массива.
		}
	} while (shift != 0);// Если переменная 'shift' будет равно = 0, то программа завершиться.


	cout << endl;

}