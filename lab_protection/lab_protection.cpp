#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double a, b, check, i;
	string type;


	

		do
		{
			cout << "a = "; cin >> a;
			cout << "b = "; cin >> b;
			cout << "�������� (+,-,*,/) = "; cin >> type;
			if (type == "+")
			{
				cout << a + b << endl;
			}
			else
				if (type == "-")
				{
					cout << a - b << endl;
				}
				else
					if (type == "*")
					{
						cout << a * b << endl;
					}
					else
						if (type == "/")
						{
							if (b == 0)
							{
								cout << "�� 0 ����� �� �����! � ���� ������� ����� ����!" << endl;
							}
							else
							{
								cout << a / b << endl;
							}
						}
						else
						{
							cout << "������ ������� ���� ���������" << endl;
							
						}
			cout << "������ �������� �� ��������? 1 - ��� 2 - ͳ: "; cin >> i;
			if (i == 1)
			{
				check = 1;
				
			}
			else
				if (i == 2) {
					return 0;
				}
				else
				{
					i = 2;
					cout << "error" << endl;
					cout << "������� � ���� 1 ��� 2" << endl;
				}
		} while (i != 2);
	
	
	
}

