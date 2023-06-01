#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, " ");
	int const n = 10; // ������ �������
	int arr[n]; // ������� ������

	for (int i = 0; i < n; i++) // ���� for
	{
		arr[i] = rand(); // ������ arr[i] �������� �������� ���������������� �����
		cout << arr[i] << " "; // ������� ������ ��������������� �����

	}
		cout << endl;

	for (int step  = n/2; step > 0; step/=2) // ���� for � ������� �� ��������� ���������� int step, ������� �������� ����� � ����� �������� �� ������� �������
	{ // step > 0; � ����� ���������� ������ ������� �� ����� �� ����� ��� (step) ��� �� �������� (2). ������ ��� ����������� � ��� ���� ����� ������ ��������.
		for (int i = step; i < n; i++)
		{
			for (int j = i-step; j>= 0 && arr[j] > arr[j+ step];j-=step) // �������. arr[j] > arr[j+ step] - ��������� ���� ���������, ������� ����� �� ��������� ����(step)
			{// n/2. ���� j ������ ��� ����� 0 � arr[j](�������) ������ arr[j+step] ����� ������� ��������� �� ��������� (step) (n/2) �����, ��
				int buff = arr[j]; // ��������� ���������� ����, ������� ����� ������� � ���� arr[j] �������
				arr[j] = arr[j + step];// arr[j] ����������� �������� arr[j+step] ������� �������� ����������� �������� �����, ������� ���������
				// �� ��������� ����� ������� (step) (n/2)
				arr[j + step] = buff; // � ����� ������� ���� �� (n/2) (steps) ����� ������� ������������� �������� �������� �����
				// ��� ����� �� ������������ ����������� �������� � ����� ������� ��������� �� ��������� ���������� �����(steps) �� ����
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " "; // ������� ��������������� ������
	}
}