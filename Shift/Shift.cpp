#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	cout << "�������� ������ �����: " << endl;
	const int size = 10;
	int arr[size]{ 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";// ����������,��� ������ ����,������ �� �����.
	}

	/*������ ����� ������ �� ������� �� ��������� � ��� 'size = 10'
	  � ���������� "���������" ������ � "�����" ������*/
	int brr[size];
	for (int i = 0; i < size; i++)
	{
		brr[i] = arr[i];
	}

	//����� ������ 'do while' ������ ���������� 'shift'
	int shift;

	/*� ����� 'do while' ���������� ����� ����� ������� �� �������� ���������� ���
	  ���� ���������� 'shift' �� ����� ����� '0'*/
	do
	{
		cout << endl;
		cout << "������� ���������� ������� ����� � �������: "; cin >> shift; cout << endl;
		for (int i = 0; i < size; i++)
		{
			arr[i] = brr[(i + shift) % size];//� ������ 'arr' ������������� ����� ������� 'brr'
		}

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";//����� ���������� �������.
		}
	} while (shift != 0);// ���� ���������� 'shift' ����� ����� = 0, �� ��������� �����������.


	cout << endl;

}