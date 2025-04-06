#include"shift.h"

void ShiftLeft(int arr[], const int n, const int Shifts)
{
	for (int i = 0; i < Shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, int Shifts)
{
	for (int i = 0; i < Shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
//void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int Shifts)
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		int bufer[10];
//
//		for (int j = 0; j < COLS; j++)
//		{
//			bufer[j] = arr[i][(j + Shifts) % COLS];
//		}
//
//		for (int j = 0; j < COLS; j++)
//		{
//			arr[i][j] = bufer[j];
//		}
//	}
//}
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, Shifts);
	}*/

	ShiftLeft(arr[0], ROWS * COLS, Shifts);
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		double bufer[10];

		for (int j = 0; j < COLS; j++)
		{
			bufer[j] = arr[i][(j + Shifts) % COLS];
		}

		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = bufer[j];
		}
	}*/

	ShiftLeft(arr[0], ROWS * COLS, Shifts);
}


//void Shiftright(int arr[], const int n, const int Shifts)
//{
//
//	/* void ShiftRight(int arr[], const int n, const int shifts)
//	{
//
//		shiftLeft(arr, n, n - shifts);
//	}*/
//
//	for (int i = 0; i < Shifts; i++)
//	{
//		int buffer = arr[0];
//		for (int i = 1; i < n; i++)
//		{
//			int buffer = arr[0];
//			for (int i = 1; i < n; i++)
//			{
//				arr[i - 1] = arr[i];
//			}
//			arr[n - 1] = buffer;
//		}
//	}
//}
void Shiftright(int arr[], const int n, const int shifts)
{
	ShiftLeft(arr, n, n - shifts);
}
void Shiftright(double arr[], const int n, const int Shifts)
{
	/*for (int i = 0; i < Shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			double buffer = arr[0];
			for (int i = 1; i < n; i++)
			{
				arr[i - 1] = arr[i];
			}
			arr[n - 1] = buffer;
		}
	}*/

	ShiftLeft(arr, n, n - Shifts);
}
void Shiftright(int arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		int bufer[10];

		for (int j = 0; j < COLS; j++)
		{
			bufer[(j + Shifts) % COLS] = arr[i][j];
		}

		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = bufer[j];
		}
	}*/

	Shiftright(arr[0], ROWS * COLS, Shifts);

}
void Shiftright(double arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		double bufer[10];

		for (int j = 0; j < COLS; j++)
		{
			bufer[(j + Shifts) % COLS] = arr[i][j];
		}

		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = bufer[j];
		}
	}*/

	Shiftright(arr[0], ROWS * COLS, Shifts);
}
