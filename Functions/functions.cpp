#include<iostream>
using namespace std;

int Sum(int a = 0, int b = 0, int c = 0);
int Diff(int a, int b);
int Prod(int a, int b);
double Quotiant(int a, int b);

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "Functions" << endl;

	int a = 2;
	int b = 3;
	
	int res = Sum(a, b, 11);
	cout << a << "+" << b << "+" << 11 << "=" << res << endl;
	cout << a << "-" << b << "=" << Diff(a,b) << endl;
	cout << a << "*" << b << "=" << Prod(a, b) << endl;
	cout << a << "/" << b << "=" << Quotiant(a, b) << endl;
	cout << 4 << "+" << 5 << "=" << Sum(4,5) << endl;
	cout << Sum() << endl;
}

int Sum(int a, int b, int c)
{
	int res = a + b + c;
	return res;
}
int Diff(int a, int b)
{
	return a - b;
}
int Prod(int a, int b)
{
	return a * b;
}
double Quotiant(int a, int b)
{
	return (double)a / b;
}