#include<iostream>
using namespace std;

void FunArray(int arr[], const int SIZE);

void Shift(int arr[], int brr[], const int SIZE);

int SumArrayElements(int arr[], const int SIZE);

double ArithmeticMeanElements(int arr[], const int SIZE);

int MaxElement(int arr[], const int SIZE);

int MinElement(int arr[], const int SIZE);



void main()
{
	setlocale(LC_ALL, "ru");

	const int SIZE = 5;
	int arr[SIZE];
	int brr[SIZE];

	FunArray(arr, SIZE);

	Shift(arr, brr, SIZE);

	cout << SumArrayElements(arr, SIZE) << endl;

	cout << ArithmeticMeanElements(arr, SIZE) << endl;

	cout << MinElement(arr, SIZE);
	
	cout << MaxElement(arr, SIZE);

	

}


void FunArray(int arr[], const int SIZE)
{

	cout << "������� ������:\n";

	cout << "������� �������� �������: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	cout << "����� ��������� �������: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n����� ��������� ������� � �������� �������: " << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	cout << "\n����� ����� ��������� �������: " << endl;
	int Sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		Sum += arr[i];
	}
	cout << Sum;

	cout << "\n����� ��������-�������������� �������: " << endl;
	double ArithmeticMean;
	ArithmeticMean = (double)Sum / SIZE;
	cout << ArithmeticMean << endl;


	int MinElement = arr[0];
	int MaxElement = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > MaxElement)
		{
			MaxElement = arr[i];
		}
		else if (arr[i] < MinElement)
		{
			MinElement = arr[i];
		}
	}
	cout << "������������ �������: " << MaxElement << endl;
	cout << "����������� �������: " << MinElement << endl;
	cout << "________________________________" << endl;

}

void Shift(int arr[], int brr[], const int SIZE)
{
	cout << "����� �������: \n";

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}

	cout << endl;
	int SHIFT;

	for (int i = 0; i < SIZE; i++)
	{
		brr[i] = arr[i];
	}
	cout << "������� ���������� ������� � ���� : "; cin >> SHIFT;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = brr[(i + SHIFT) % SIZE];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n������� ���������� ������� � ����� : "; cin >> SHIFT;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = brr[(10 + i - SHIFT) % SIZE];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n________________________________" << endl;
}

int SumArrayElements(int arr[], const int SIZE)
{
	int sum = 0;
	cout << "������� �������� ������� ��� �� ��������� �����: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: ";
	return sum;
}

double ArithmeticMeanElements(int arr[], const int SIZE)
{
	cout << "____________________________\n";
	int Sum = 0;

	cout << "������� �������� ������� ��� �� ��������� ������� ��������������: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		Sum += arr[i];
	}

	cout << "������� �������������� �������: ";
	return (double)Sum / SIZE;
}

int MinElement(int arr[], const int SIZE)
{
	cout << "������� ��������� �������: " << endl;
	int minElement;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	minElement = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < minElement)
		{
			minElement = arr[i];
		}
	}
	cout << "����������� ������� �������: ";
	return minElement;

}

int MaxElement(int arr[], const int SIZE)
{
	cout << "\n������� ��������� �������: " << endl;
	int maxElement;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	maxElement = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > maxElement)
		{
			maxElement = arr[i];
		}
	}
	cout << "������������ ������� �������: ";
	return maxElement;
}
