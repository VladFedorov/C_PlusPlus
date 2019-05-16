#include "pch.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<time.h>

using namespace std;

struct Product
{
	string name;
	int amount;
	string manufact;
	int date[3];
	double price;
};

void Input(Product *product, int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << "Enter name\n";
		cin >> product[i].name;
		cout << "Enter manufacturer\n";
		cin >> product[i].manufact;
		cout << "Enter amount\n";
		for (;;)
		{
				cin >> product[i].amount;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
				else
					break;
		}

				cout << "Enter year of creation		" << endl;

		for (;;)
		{

				cin >> product[i].date[2];

		if (cin.fail())
		{
				cin.clear();
				cin.ignore();
			}
	 
			if (product[i].date[2] > 0 && product[i].date[2] < 2020)
			{
				break;
			}
		}
		  cout << "Enter month of creation	" << endl;
		for (;;)
		{

				cin >> product[i].date[1];

				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}

			if (product[i].date[1] >= 0 && product[i].date[1] < 13)
			{
				break;
			}
		}
		cout << "Enter day of creation		" << endl;
		for (;;)
		{

				cin >> product[i].date[0];

				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			if (product[i].date[0] > 0 && product[i].date[0] < 32)
			{
				break;
			}
		}
		cout << "Enter price \n";
		for (;;)
		{
				cin >> product[i].price;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
				else
				break;
		}
		system("cls");
	}
}

void Check(Product *product, int k)
{
	double tmp = 0;
	for (int i = 0; i < k; i++)
	{
		/*struct tm *when;
		time_t now;

		time(&now);
		when = localtime(&now);
		if ((when->tm_mday)+((when->tm_mon) * 31) +((when->tm_year)*365) - (product[i].date[0] + product[i].date[1] * 31 + product[i].date[2] * 365)<5)
		{
			tmp += product[i].price;
		}*/

		int date[3]{ 17,5,2019};

		if (((product[i].date[0]) + (product[i].date[1] * 31) + (product[i].date[2] * 365)) - (date[0] + (date[1] * 31) + (date[2] * 365)) < 5)
		{
			tmp += (product[i].price * product[i].amount);
		}
	}
	cout << "sum price of dead products = " << tmp << endl;
}

void Out(Product *product, int k, ofstream &out)
{
	for (int i = 0; i < k; i++)
	{
		out << product[i].name << "\n";
		out << product[i].amount << "\n";
		out << product[i].manufact << "\n";
		for(int j =0; j<= 3; j++)
		out << product[i].date[j] << "\n";
		out << product[i].price << "\n";
		out << "\n";
	}
}

void Print(Product *product, int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << endl << "Name: " << product[i].name << endl;
		cout << "Manufacturer: " << product[i].manufact<<endl;
		cout << "Amount: " << product[i].amount << endl;
		cout << "Date: ";
		for (size_t j = 0; j < 3; j++)
		{
			cout << product[i].date[j]<<".";
		}
		cout<<endl << "Price: " << product[i].price << endl << endl;
	}
}

int main()
{
	int k = 0, selection = 0;
	cout << "Enter amount of products" << endl;
	cin >> k;
	ofstream out;
	Product *product = new Product[k];

	out.open("product.dssf", ios::binary);
	Input(product, k);

	if (!out.is_open())
		cout << "Error!" << endl;
	else
	{
		system("cls");
		Check(product, k);
		Out(product, k, out);
		cout <<endl<<endl<< "File created and all data writen" << endl;
		Print(product, k);
	}

	out.close();

	delete[] product;
	system("pause");
	return 0;
}