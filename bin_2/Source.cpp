#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32;
	bool bin[MAX_BIN_CAPACITY] = {};
	int i = 0;

	while (decimal)
	{
		bin[i++] = decimal % 2;
		decimal /= 2;

	}

	for (i--; i >= 0; i--)
	{
		cout << bin[i];

		if (i % 8 == 0) cout << " ";
		if (i % 4 == 0) cout << " ";


	}
}