#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	const int SIZE = 5; // ������ �������
	int arr[SIZE];
	arr[3] = 1024; // ��������� � ��������� ������� �� ������
	//cout << arr[3] << endl; //��������� � �������� ������� �� ������

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}