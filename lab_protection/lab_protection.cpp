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
			cout << "Операція (+,-,*,/) = "; cin >> type;
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
								cout << "На 0 ділити не можна! В школі вчитись треба було!" << endl;
							}
							else
							{
								cout << a / b << endl;
							}
						}
						else
						{
							cout << "Невірно вказано знак операціїї" << endl;
							
						}
			cout << "Хочете виконати ще операцію? 1 - Так 2 - Ні: "; cin >> i;
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
					cout << "сказано ж було 1 або 2" << endl;
				}
		} while (i != 2);
	
	
	
}

