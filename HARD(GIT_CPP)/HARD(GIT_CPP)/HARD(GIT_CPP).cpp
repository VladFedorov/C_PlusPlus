#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
struct NOTE
{
	string NAME;
	int TELE;
	int DATE[3];
	void out(int tempnumb)
	{
		tempnumb = tempnumb + 1;
		cout << "Information about person #" << tempnumb << ":" << endl;
		cout << "Name:\t" << NAME << endl;
		cout << "Phone number:\t" << TELE << endl;
		cout << "Date:\t" << DATE[0] << "." << DATE[1] << "." << DATE[2] << endl;
	}
	void input(NOTE *person, int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Enter name		" << endl;
			cin >> person[i].NAME;
			cout << "Enter phone number		" << endl;
			cin >> person[i].TELE;
			cout << "Enter year of birthday		" << endl;
			for (;;)
			{
				cin >> person[i].DATE[2];
				if (person[i].DATE[2] > 0 && person[2].DATE[1] < 2020)
				{
					if (i == 0)
					{
						break;
					}
					else
					{
						if (person[i].DATE[2] < person[i - 1].DATE[2])
						{
							break;
						}
						else
						{
							cout << "Please input another year" << endl;
						}
					}
				}
				else
				{
					cout << "Please input real year" << endl;
				}
			}
			cout << "Enter month of birthday	" << endl;
			for (;;)
			{
				cin >> person[i].DATE[1];
				if (person[i].DATE[1] > 0 && person[i].DATE[1] < 13)
				{
					if (i == 0)
					{
						break;
					}
					else
					{
						if (person[i].DATE[1] < person[i - 1].DATE[1])
						{
							break;
						}
						else
						{
							cout << "Please input another month" << endl;
						}
					}
				}
				else
				{
					cout << "Please input real month" << endl;
				}
			}
			cout << "Enter day of birthday		" << endl;
			for (;;)
			{
				cin >> person[i].DATE[0];
				if (person[i].DATE[0] > 0 && person[i].DATE[0] < 32)
				{
					if (i == 0)
					{
						break;
					}
					else
					{
						if (person[i].DATE[0] < person[i - 1].DATE[0])
						{
							break;
						}
						else
						{
							cout << "Please input another day" << endl;
						}
					}
				}
				else
				{
					cout << "Please input real day" << endl;
				}
			}
			system("cls");
		}
	}
};
int main()
{

	setlocale(LC_ALL, "rus");
	NOTE *person = new NOTE[10];
	cout << "WTF?";
}