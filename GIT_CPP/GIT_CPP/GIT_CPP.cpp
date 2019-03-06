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
	void out(int tempnumb)
	{
		tempnumb = tempnumb + 1;
		cout<<"Information about product #"<<tempnumb<<":"<<endl;
		cout << "Name:\t" << name << endl;
		cout << "Count:\t" << count << endl;
		cout << "Manufacturer:\t" << manufacturer << endl;
		cout << "Date:\t" << date[0] << "." << date[1] << "." << date[2] << endl;
		cout << "Price:\t" << price << endl;
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
			if (object[i].date[2] > 0 && object[2].date[1] < 2020)
			{
				break;
			}
			else
			{
				cout << "Please input real year" << endl;
			}
		}
		cout << "Enter price	" << "\n";
		cin >> object[i].price;
		cout << "Enter count	" << "\n";
		cin >> object[i].count;
		system("cls");
	}
}
void AvaP(product *object, int n, int average)
{
	for (int i = 0; i < n; i++)
	{
		average = average + object[i].price;
	}
	average = average / n;
	cout << "Avarage cost of products:	" << average << endl;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int average = 0, n = 0, tempnumb =0;
	for (;;)
	{
		cout << "Enter number of products	" << endl;
		cin >> n;
		if ( n >=1)
		{
			break;
		}
		else
		{
			cout << "Are you joking?" << endl;
		}
	}
	
	

	system("cls");
	product *object = new product[n];
	input(object, n);
	int temprice = object[0].price;
	for (int i = 0; i < n; i++)
	{
		if (object[i].price < temprice)
		{
			temprice = object[i].price;
			tempnumb = i;
		}
	}
	AvaP(object,n,average);
	object[tempnumb].out(tempnumb);
	delete[]object;
	return 0;
}