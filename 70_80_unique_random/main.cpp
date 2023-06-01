#include <iostream>
using namespace std;


void main() 
{
	setlocale(LC_ALL, " ");

	int const n = 10;
	int arr[n];
	int MIN_RAND = 70;
	int MAX_RAND = 80;

	for (int i = 0; i < n; i++)
	{
		bool unique;// отметка уникальности 
		do
		{
			arr[i] = rand() % (MAX_RAND - MIN_RAND) + MIN_RAND;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	

}