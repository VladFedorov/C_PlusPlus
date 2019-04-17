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

void input(school_guy *pupil, int amount_of_users, int counter)
{

		cout << "Enter name(ex. Vasiliy)		" << endl;
		cin >> pupil[counter].name ;
		cout << "Enter sur name(ex. Pupkin)		" << endl;
		cin >> pupil[counter].surname;
		cout << "Enter paronymic(ex. Sergeevich)		" << endl;
		cin >> pupil[counter].paronymic;
		cout << "Your nationality is (ex. ukrainian)" << endl;
		cin >> pupil[counter].nationality;
		cout << "Enter your sex(M/m - man, W/w - woman)" << endl;
		for (;;)
		{
			cin >> pupil[counter].sex;
			if (pupil[counter].sex == "M" || pupil[counter].sex == "m" || pupil[counter].sex == "man" || pupil[counter].sex == "Man")
			{

				pupil[counter].sex = "Man";
				break;
			}
			else if (pupil[counter].sex == "W" || pupil[counter].sex == "w" || pupil[counter].sex == "woman" || pupil[counter].sex == "Woman")
			{
				pupil[counter].sex = "Woman";
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
			//try
			{
				cin >> pupil[counter].weight;
			}
			//catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
					pupil[counter].weight = 0;
				}
			}
			if (pupil[counter].weight > 0 && pupil[counter].weight < 200)
				break;
		}

		cout << "Enter height (60)		" << endl;
		for (;;)
		{
			//try
			{
				cin >> pupil[counter].height;
			}
			//catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if (pupil[counter].height > 50 && pupil[counter].height < 250)
				break;
		}

		cout << "Enter a number of your school(ex. 1)		" << endl;
		for (;;)
		{
			//try
			{
				cin >> pupil[counter].school;
			}
			//catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if(pupil[counter].school >0)
				break;
		}

		cout << "Enter class(ex. '11')		" << endl;
		for (;;)
		{
			//try
			{
				cin >> pupil[counter].clas;
			}
			//catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if (pupil[counter].clas > 0 && pupil[counter].clas < 12)
				break;
		}
		cout << "Enter phone number IT MUST HAVE 9 DIGITS! (ex. 0123456789)		" << endl;
		for (;;)
		{
			//try
			{
				cin >> pupil[counter].phonenomber;
			}
			//catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if (pupil[counter].phonenomber > 111111119 && pupil[counter].phonenomber < 10000000000)
				break;
		}

		for (;;)
		{
			cout << "Enter year of birthday	(ex. 2001)	" << endl;
			for (;;)
			{
				for (;;)
				{
					//try
					{
						cin >> pupil[counter].date[2];
					}
					//catch (...)
					{
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
						}
					}
					if (pupil[counter].date[2] > 0 && pupil[counter].date[2] < 2020)
					{
						break;
					}
				}
				if (pupil[counter].date[2] > 0 && pupil[counter].date[2] < 2020)
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
					//try
					{
						cin >> pupil[counter].date[1];
					}
					//catch (...)
					{
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
						}
					}
					if (pupil[counter].date[1] > 0 && pupil[counter].date[1] < 13)
					{
						break;
					}
				}
				if (pupil[counter].date[1] > 0 && pupil[counter].date[1] < 13)
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
					//try
					{
						cin >> pupil[counter].date[0];
					}
					//catch (...)
					{
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
						}
					}
					if (pupil[counter].date[0] > 0 && pupil[counter].date[0] < 32)
					{
						break;
					}
				}

				if (pupil[counter].date[0] > 0 && pupil[counter].date[0] < 32)
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
		cin >> pupil[counter].adress.country;

		cout << "Enter your region (ex. Sverdlovsk)" << endl;
		cin >> pupil[counter].adress.region;

		cout << "Enter your area (ex. Prebrejnaya)" << endl;
		cin >> pupil[counter].adress.area;

		cout << "Enter your post index (ex. 68100)" << endl;
		for (;;)
		{
			//try
			{
				cin >> pupil[counter].adress.post;
			}
			//catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if (pupil[counter].adress.post> 9999 && pupil[counter].adress.post<100000)
				break;
		}
		cout << "Enter your town (ex. Nazarovka)" << endl;
		cin >> pupil[counter].adress.town;

		cout << "Enter  number of your house (ex. 7)" << endl;
		for (;;)
		{
			//try
			{
				cin >> pupil[counter].adress.house;
			}
			//catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if(pupil[counter].adress.house>0)
				break;
		}

		cout << "Enter number of your flat (ex. 213)" << endl;
		for (;;)
		{
			//try
			{
				cin >> pupil[counter].adress.flat;
			}
			//catch (...)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
				}
			}
			if(pupil[counter].adress.flat>0)
				break;
		}
}
void output(school_guy *pupil, int amount_of_users)
{
	for (int i = 0;i<amount_of_users; i++)
	{
		cout << "\tInformation about user #" << i + 1 << "\t" << endl;
		cout << "Name:\t\t\t" << pupil[i].name<<endl;
		cout << "Surname:\t\t" << pupil[i].surname << endl;
		cout << "Patronymic:\t\t" << pupil[i].paronymic << endl;
		cout << "Sex:\t\t\t" << pupil[i].sex << endl;
		cout << "Nationality:\t\t" << pupil[i].nationality << endl;
		cout << "Weight:\t\t\t" << pupil[i].weight << endl;
		cout << "Height:\t\t\t" << pupil[i].height << endl;
		cout << "Date of birsday:\t" << pupil[i].date[0] << "." << pupil[i].date[1] << "." << pupil[i].date[2] << endl;
		cout << "Phone nomber:\t\t" << pupil[i].phonenomber << endl;
		cout << "Country:\t\t" << pupil[i].adress.country << endl;
		cout << "Region:\t\t\t" << pupil[i].adress.region << endl;
		cout << "Area:\t\t\t" << pupil[i].adress.area << endl;
		cout << "Town:\t\t\t" << pupil[i].adress.town << endl;
		cout << "Post index:\t\t" << pupil[i].adress.post << endl;
		cout << "House:\t\t\t" << pupil[i].adress.house << endl;
		cout << "Flat:\t\t\t" << pupil[i].adress.flat << endl;
		cout << "Clas:\t\t\t" << pupil[i].phonenomber << endl;
		cout << "School:\t\t\t" << pupil[i].school << endl;
	}
}
void sort(school_guy *pupil, int amount_of_users)
{
	for (int i = 0; i < amount_of_users; i++)
	{
		for (int j = i + 1; j < amount_of_users; j++)
		{
			if (strcmp(pupil[i].name.c_str(), pupil[j].name.c_str()) > 0)
			{
				swap(pupil[i], pupil[j]);
			}
		}
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

int Resize_User_Mas(school_guy* pupil, int size)
{
	school_guy* resize_pupil = new school_guy[size + 1];
	for (int i = 0; i < size; i++)
	{
		resize_pupil[i] = pupil[i];
	}
	if (pupil != NULL)
	{
		delete[]pupil;
	}
	else
	{
		pupil = resize_pupil;
	}
	size++;
	pupil = resize_pupil;
	delete[] resize_pupil;
    return size;
}
 
//получение информации о читателе
//Get_Reader	-	input
 
//добавление читателя
//void Add_User (school_guy*& pupil, int& size,int counter)
//{
//    Resize_User_Mas(pupil, size);
//	
//
//}
int main()
{
	setlocale(LC_ALL, "rus");
	int amount_of_users = 0, counter = 0;
	school_guy *pupil = new school_guy[amount_of_users];
	for (;;)
	{		
		int variant = main_menu();
		switch (variant)
		{
		case 1:
			for (counter;;)
			{
				system("cls");
				school_guy* resize_pupil = new school_guy[amount_of_users + 1];
				for (int i = 0; i < amount_of_users; i++)
				{
					resize_pupil[i] = pupil[i];
				}
				if (pupil != NULL)
				{
					delete[]pupil;
				}
				else
				{
					pupil = resize_pupil;
				}
				amount_of_users = amount_of_users+1;
				pupil = resize_pupil;
				delete[] resize_pupil;
				school_guy *pupil = new school_guy[amount_of_users];
				input(pupil, amount_of_users, counter);
				counter = counter + 1;
				system("cls");
				cout << "Choose an action\n" << endl;
				cout << "1. Add user\n"
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
							variant = 0;
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
		}
	}


}