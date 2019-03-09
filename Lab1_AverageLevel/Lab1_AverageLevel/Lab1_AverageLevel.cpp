#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
struct product
{
	string name;
	int count;
	int price;
	string manufacturer;
	int date[3];
	int life[3];
	void out(int i)
	{
		cout << "Information about product #" << i << ":" << endl;
		cout << "Name:\t" << name << endl;
		cout << "Count:\t" << count << endl;
		cout << "Manufacturer:\t" << manufacturer << endl;
		cout << "Date:\t" << date[0] << "." << date[1] << "." << date[2] << endl;
		cout << "Price:\t" << price << endl;
		cout << "Shelf life :\t" << life[0] << "." << life[1] << "." << life[2] << endl;
	}
};

void input(product *object, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter name		" << "\n";
		cin >> object[i].name;
		cout << "Enter manufacturer		" << "\n";
		cin >> object[i].manufacturer;
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		cout << "Enter day of creating		" << "\n";
		for (;;)
		{
			cin >> object[i].date[0];
			if (object[i].date[0] > 0 && object[i].date[0] < 32)
			{
				break;
			}
			else
			{
				cout << "Please input real day" << endl;
			}
		}
		cout << "Enter month of creating	" << "\n";
		for (;;)
		{
			cin >> object[i].date[1];
			if (object[i].date[1] > 0 && object[i].date[1] < 13)
			{
				break;
			}
			else
			{
				cout << "Please input real month" << endl;
			}
		}
		cout << "Enter year of creating		" << "\n";
		for (;;)
		{
			cin >> object[i].date[2];
			if (object[i].date[2] > 0 && object[i].date[2] < 2020)
			{
				break;
			}
			else
			{
				cout << "Please input real year" << endl;
			}
		}
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		cout << "Enter the expiry day		 " << "\n";
		for (;;)
		{
			cin >> object[i].life[0];
			if (object[i].life[0] > 0 && object[i].life[0] < 32)
			{
				break;
			}
			else
			{
				cout << "Please input real day" << endl;
			}
		}
		cout << "Enter the expiry month		" << "\n";
		for (;;)
		{
			cin >> object[i].life[1];
			if (object[i].life[1] > 0 && object[i].life[1] < 13)
			{
				break;
			}
			else
			{
				cout << "Please input real month" << endl;
			}
		}
		cout << "Enter the expiry year		" << "\n";
		for (;;)
		{
			cin >> object[i].life[2];
			if (object[i].life[2] > 0 && object[i].life[2] < 3000)
			{
				break;
			}
			else
			{
				cout << "Please input real year" << endl;
			}
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		cout << "Enter price	" << "\n";
		cin >> object[i].price;
		cout << "Enter count	" << "\n";
		cin >> object[i].count;
		system("cls");
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	int tempife = 0, n = 0, dead = 0;
	for (;;)
	{
		cout << "Enter number of products	" << endl;
		cin >> n;
		if (n >= 1)
		{
			break;
		}
		else
		{
			cout << "Are you joking?" << endl;
		}
	}
	system("cls");
	int normaldate[3];
	cout << "Enter day		 " << "\n";
	for (;;)
	{
		cin >> normaldate[0];
		if (normaldate[0] > 0 && normaldate[0] < 32)
		{
			break;
		}
		else
		{
			cout << "Please input real day" << endl;
		}
	}
	cout << "Enter month		" << "\n";
	for (;;)
	{
		cin >> normaldate[1];
		if (normaldate[1] > 0 && normaldate[1] < 13)
		{
			break;
		}
		else
		{
			cout << "Please input real month" << endl;
		}
	}
	cout << "Enter year		" << "\n";
	for (;;)
	{
		cin >> normaldate[2];
		if (normaldate[2] > 2018 && normaldate[2] < 3000)
		{
			break;
		}
		else
		{
			cout << "Please input real year" << endl;
		}
	}
	system("cls");
	product *object = new product[n];
	input(object, n);
	for (int t = 0; t < n; t++)//////////DEAD_CHECK
	{
		if (object[t].life[2] < normaldate[2])//Years
		{
			dead = dead + 1;
		}
		else if (object[t].life[2] == normaldate[2])
		{
			if (object[t].life[1] < normaldate[1])//Month
			{
				dead = dead + 1;
			}
			else if (object[t].life[1] == normaldate[1])
			{
				if (object[t].life[0] < normaldate[0])//Days
				{
					dead = dead + 1;
				}
			}
		}
	}
	cout << "Amount of expired goods:  \t" << dead << endl;
	cout << "Goods which shelf life is less than 20 days: " << endl;
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		tempife = (object[i].life[2] * 365) + (object[i].life[1] * 30) + object[i].life[0];
		temp = (object[i].date[2] * 365) + (object[i].date[1] * 30) + object[i].date[0];
		if (temp - tempife < 21)
		{
			object[i].out(i);
		}
	}
	delete[]object;
	return 0;
}