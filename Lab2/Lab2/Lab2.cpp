#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct school_guy
{
	string name;				///
	string surname;
	string paronymic;
	string sex;
	string nationality;
	int weight;
	int height;
	int date[3];				///
	int phonenomber;			///
	struct adress
	{
		int post;
		string country;
		string region;	
		string area;
		string town;
		int house;
		int flat;
	}adress;
	int school;
	int clas;
} pupil;

void input(school_guy *pupil, int amount_of_users)
{

		amount_of_users ++;
		cout << "Enter name(ex. Vasiliy)		" << endl;
		cin >> pupil->name ;
		cout << "Enter sur name(ex. Pupkin)		" << endl;
		cin >> pupil->surname;
		cout << "Enter paronymic(ex. Sergeevich)		" << endl;
		cin >> pupil->paronymic;
		cout << "Your nationality is (ex. ukrainian)" << endl;
		cin >> pupil->nationality;
		cout << "Enter your sex(M/m - man, W/w - woman)" << endl;
		for (;;)
		{
			cin >> pupil->sex;
			if (pupil->sex == "M" || pupil->sex == "m" || pupil->sex == "man" || pupil->sex == "Man")
			{

				pupil->sex = "Man";
				break;
			}
			else if (pupil->sex == "W" || pupil->sex == "w" || pupil->sex == "woman" || pupil->sex == "Woman")
			{
				pupil->sex = "Woman";
				break;
			}
			else
			{
				continue;
			}
		}

		cout << "Enter weight (175)		" << endl;
		for (;;)
		{
			try
			{
				cin >> pupil->weight;
			}
			catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if (pupil->weight > 0 && pupil->weight < 200)
				break;
		}

		cout << "Enter height (60)		" << endl;
		for (;;)
		{
			try
			{
				cin >> pupil->height;
			}
			catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if (pupil->height > 50 && pupil->height < 250)
				break;
		}

		cout << "Enter a number of your school(ex. 1)		" << endl;
		for (;;)
		{
			try
			{
				cin >> pupil->school;
			}
			catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if(pupil->school >0)
				break;
		}

		cout << "Enter class(ex. '11')		" << endl;
		for (;;)
		{
			try
			{
				cin >> pupil->clas;
			}
			catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if (pupil->clas > 0 && pupil->clas < 12)
				break;
		}
		cout << "Enter phone number IT MUST HAVE 9 DIGITS! (ex. 0123456789)		" << endl;
		for (;;)
		{
			try
			{
				cin >> pupil->phonenomber;
			}
			catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if (pupil->phonenomber > 111111119 && pupil->phonenomber < 10000000000)
				break;
		}

		for (;;)
		{
			cout << "Enter year of birthday	(ex. 2001)	" << endl;
			for (;;)
			{
				for (;;)
				{
					try
					{
						cin >> pupil->date[2];
					}
					catch (...)
					{
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
						}
					}
					if (pupil->date[2] > 0 && pupil->date[2] < 2020)
					{
						break;
					}
				}
				if (pupil->date[2] > 0 && pupil->date[2] < 2020)
				{
					break;
				}
				else
				{
					cout << "Please input real year" << endl;
				}
			}
			cout << "Enter month of birthday (ex. 2)	" << endl;
			for (;;)
			{
				for (;;)
				{
					try
					{
						cin >> pupil->date[1];
					}
					catch (...)
					{
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
						}
					}
					if (pupil->date[1] >= 0 && pupil->date[1] < 13)
					{
						break;
					}
				}
				if (pupil->date[1] >= 0 && pupil->date[1] < 13)
				{
					break;
				}
				else
				{
					cout << "Please input real month" << endl;
				}
			}
			cout << "Enter day of birthday(ex. 23)		" << endl;
			for (;;)
			{
				for (;;)
				{
					try
					{
						cin >> pupil->date[0];
					}
					catch (...)
					{
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
						}
					}
					if (pupil->date[0] > 0 && pupil->date[0] < 32)
					{
						break;
					}
				}

				if (pupil->date[0] > 0 && pupil->date[0] < 32)
				{
					break;
				}
				else
				{
					cout << "Please input real day" << endl;
				}
				
			}
			break;
		}

		cout << "Enter your country (ex. Uganda)" << endl;
		cin >> pupil->adress.country;

		cout << "Enter your region (ex. Sverdlovsk)" << endl;
		cin >> pupil->adress.region;

		cout << "Enter your area (ex. Prebrejnaya)" << endl;
		cin >> pupil->adress.area;

		cout << "Enter your post index (ex. 68100)" << endl;
		for (;;)
		{
			try
			{
				cin >> pupil->adress.post;
			}
			catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if (pupil->adress.post> 9999 && pupil->adress.post<100000)
				break;
		}
		cout << "Enter your town (ex. Nazarovka)" << endl;
		cin >> pupil->adress.town;

		cout << "Enter  number of your house (ex. 7)" << endl;
		for (;;)
		{
			try
			{
				cin >> pupil->adress.house;
			}
			catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if(pupil->adress.house>0)
				break;
		}

		cout << "Enter number of your flat (ex. 213)" << endl;
		for (;;)
		{
			try
			{
				cin >> pupil->adress.flat;
			}
			catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if(pupil->adress.flat>0)
				break;
		}
}
void output(school_guy *pupil, int amount_of_users)
{
	for (int i = 0;i<amount_of_users; i++)
	{
		cout << "Name:\t" << pupil[i].name;
		cout << "Surname:\t" << pupil[i].surname;
		cout << "Patronymic:\t" << pupil[i].paronymic;
		cout << "Sex:\t" << pupil[i].sex;
		cout << "Nationality:\t" << pupil[i].nationality;
		cout << "Weight:\t" << pupil[i].weight;
		cout << "Height:\t" << pupil[i].height;
		cout << "Date of birsday:\t" << pupil[i].date[0] << "." << pupil[i].date[1] << "." << pupil[i].date[2];
		cout << "Phone nomber:\t" << pupil[i].phonenomber;
		cout << "Country:\t" << pupil[i].adress.country;
		cout << "Region:\t" << pupil[i].adress.region;
		cout << "Area:\t" << pupil[i].adress.area;
		cout << "Town:\t" << pupil[i].adress.town;
		cout << "Post index:\t" << pupil[i].adress.post;
		cout << "House:\t" << pupil[i].adress.house;
		cout << "Flat:\t" << pupil[i].adress.flat;
		cout << "Clas:\t" << pupil[i].phonenomber;
		cout << "School:\t" << pupil[i].school;
	}
}

int main_menu()
{
	system("cls");
	int variant;
	cout << "Coose an action\n" << endl;
	cout << "1. Add user\n"
		<< "2. Look at list\n"
		<< "3. Exit\n" << endl;
	cout << ">>> ";
	cin >> variant;
	return variant;
}


int main()
{
	setlocale(LC_ALL, "rus");
	school_guy *pupil = new school_guy;
	int amount_of_users = 0;
	for (;;)
	{
		int variant = main_menu();
		switch (variant)
		{
		case 1:
			for (;;)
			{
				system("cls");
				input(pupil, amount_of_users);
				system("cls");
				cout << "Coose an action\n" << endl;
				cout << "1. Create/Add pupil\n"
					<< "2. Back\n" << endl;
				cout << ">>> ";
				for (;;)
				{
					try
					{
						cin >> variant;
					}
					catch (...)
					{
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
						}
					}
					if (variant > 0 && variant < 3)
						break;
				}
				if (variant == 1)
				{
					continue;
				}
				else
				{
					break;
				}
			}
			variant = 0;
			break;

		case 2:
			if (amount_of_users == 0)
			{
				cout << "ERROR\n";
					system("PAUSE");
			}
			else
			{
				output(pupil, amount_of_users);
				system("PAUSE");
			}

			break;
		case 3:
			cout << "Exit" << endl;
			delete[] pupil;
			exit(EXIT_SUCCESS);
		default:
			cerr << "Try again" << endl;
			system("PAUSE");
		}
	}


}