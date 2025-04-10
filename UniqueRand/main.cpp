#include<iostream>
using namespace std;

void UniqueRand(int arr[], int const SIZE)
{
	bool Realy;
	for (int i = 0; i < SIZE; )
	{
		Realy = false;
		int Random = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == Random)
			{
				Realy = true;
				break;
			}
		}
		if (!Realy)
		{
			arr[i] = Random;
			i++;
		}
	}
}

void Print(int arr[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
}

void main()
{
	int const SIZE = 10;
	int arr[SIZE];
	UniqueRand(arr, SIZE);
	Print(arr, SIZE);
}