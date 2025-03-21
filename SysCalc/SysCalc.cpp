#include<iostream>
using namespace std;

//#define BINARY
//#define HEXADECIMAL

void main()
{
	setlocale(LC_ALL, "ru");

	int number;
	char symbol[20];
	int size = 0;
	//number = 1991;// дл€ примера без ввода
	cout << "¬ведите число: "; cin >> number;


#ifdef BINARY
	while (number > 0)
	{
		symbol[size] = number % 2 + '0';
		number /= 2;
		size++;
	}

	for (int i = size - 1; i >= 0; i--)
	{
		cout << symbol[i];
	}
#endif // BINARY


#ifdef HEXADECIMAL
	while (number > 0)
	{
		int result = number % 16;
		if (result < 10)
		{
			symbol[size] = result + '0';
		}
		else
		{
			symbol[size] = (result - 10) + 'A';
		}
		number /= 16;
		size++;
	}

	for (int i = size - 1; i >= 0; i--)
	{
		cout << symbol[i];
	}
#endif // HEXADECIMAL



}