#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;

	for (; decimal; decimal /= 16, i++)
	{
		hex[i] = decimal % 16;
		hex[i] += hex[i] < 10 ? 48 : 55;
	}
	for (i--; i >= 0; i--)
	{
		cout << hex[i];

	}
	cout << endl;
}