#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	short int o, p;

	do
	{
		cout << "������� �������:";
		cin >> o;
		
		switch (o)
		{
		case 1:
		{
			//111111111���������� ���������� ��������� ���������� � �������� �������� �������.
			int a[20], count = 0;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 5 + rand() % 40;
				cout << i << "=" << a[i] << endl;
			}
			for (int i = 1; i < 19; i++)
			{
				if (a[i - 1] < a[i] && a[i] > a[i + 1])
				{
					count++;


				}
				
			}

cout <<  "-" << count << endl;
		}
		break;
		case 2:
		{
//222222222222222222222222222222222222222 � �������� �������� ������� ���������� � ������� ������� ������������������ ����� ������� ��������� �������
			//(������ ��������� ����� ������ �����������)
			int a[20], count = 0;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 5 + rand() % 40;
				cout << i << "=" << a[i] << endl;
			}
			for (int i = 0; i < 20; i++)
			{
				if (a[i] > a[i + 1])

				{
					cout << i << "-"  << endl;


				}
				else
					cout  <<"_____" << endl;

			}

			

		}
		break;
		case 3:
		{
			//9 ������� ������ � �������� ������� ������� ����.
			int a[20], count = 0;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 5 + rand() % 40;
				cout << i << "=" << a[i] << endl;
			}
			for (int i = 0; i < 20; i++)
			{
				if (a[i] > a[i + 1])

				{
					cout << i << "-" << endl;


				}
				else
					cout << "_____" << endl;

			}
		}
		break;
		case 4:
		{/*
			1.������ ��� ������� �������������� �����, ��������� �� 9 � 7 ���������.
				������������ ������ ������ �� ������������� �� ����������� �������� ����� ��������*/

			int a[7], b[9];
			for (int i = 0; i < 7; i++)
			{
				a[i] = 5 + rand() % 30;
			}
			for (int j = 0; j < 9; j++)
			{
				b[j] = 5 + rand() % 20;
			}

			for (int k = 0; k < 7; k++)
			{
				for (int y = 6; y >= 0; y--)
				{
					if (a[y - 1] > a[y])
					{
						int temp;
						temp = a[y - 1];
						a[y - 1] = a[y];
						a[y] = temp;
					}
				}cout << a[k] << "\t";
			}cout << endl;


			for (int k = 0; k < 9; k++)
			{
				for (int y = 8; y >= 0; y--)
				{
					if (a[y - 1] > a[y])
					{
						int temp;
						temp = a[y - 1];
						a[y - 1] = a[y];
						a[y] = temp;
					}
				}cout << b[k] << "\t";
			}


		}
		break;
		case 5:
		{
			//������ �� ������� 
		}
		break;
		case 6:
		{

		}
		break;
		case 7:
		{

		}
		break;
		case 8:
		{

		}
		break;
		case 9:
		{

		}
		break;
		case 10:
		{

		}
		break;
		default:cout << "�� ����� �������� ��������." << endl;
			break;
		}
		cout << "������ ���������? (1)�� (2)���." << endl;
		cin >> p;

	} while (p==1);

}