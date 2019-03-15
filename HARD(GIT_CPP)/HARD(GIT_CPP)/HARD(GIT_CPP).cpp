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
		cout << "Information about BLOKNOTE #" << tempnumb << ":" << endl;
		cout << "Name:\t" << NAME << endl;
		cout << "Phone number:\t" << TELE << endl;
		cout << "Date:\t" << DATE[0] << "." << DATE[1] << "." << DATE[2] << endl;
	}
	void input (NOTE *BLOKNOTE, int AmountOfUsers, int tmp)
	{
		cout << "WARNING! Input information about of pirson FROM OLDER TO YOUNGEST!" << endl;
		for (int i = 0; i < AmountOfUsers; i++)
		{
			cout << "Enter name		" << endl;
			cin >> BLOKNOTE[i].NAME;
			cout << "Enter phone number		" << endl;
			cin >> BLOKNOTE[i].TELE;
			for (;;)
			{
				cout << "Enter year of birthday		" << endl;
				for (;;)
				{
					cin >> BLOKNOTE[i].DATE[2];
					if (BLOKNOTE[i].DATE[2] > 0 && BLOKNOTE[2].DATE[1] < 2020)
					{
						break;
					}
					else
					{
						cout << "Please input real year" << endl;
					}
				}
				cout << "Enter month of birthday	" << endl;
				for (;;)
				{
					cin >> BLOKNOTE[i].DATE[1];
					if (BLOKNOTE[i].DATE[1] >= 0 && BLOKNOTE[i].DATE[1] < 13)
					{
						break;
					}
					else
					{
						cout << "Please input real month" << endl;
					}
				}
				cout << "Enter day of birthday		" << endl;
				for (;;)
				{
					cin >> BLOKNOTE[i].DATE[0];
					if (BLOKNOTE[i].DATE[0] > 0 && BLOKNOTE[i].DATE[0] < 32)
					{
						break;
					}
					else
					{
						cout << "Please input real day" << endl;
					}
				}
				if (i == 0)
				{
					break;
				}
				else
				{
					tmp = BLOKNOTE[i].DATE[0] + BLOKNOTE[i].DATE[1] * 31 + BLOKNOTE[i].DATE[2] * 365;
					if (tmp < BLOKNOTE[i - 1].DATE[0] + BLOKNOTE[i - 1].DATE[1] * 31 + BLOKNOTE[i - 1].DATE[2] * 365)
					{
						break;
					}
					else
					{
						system("cls");
						cout << "Please input another date" << endl;
					}
				}
			}
			system("cls");
		}
	}
};
int main()
{

	int const AmountOfUsers = 10;
	int nomber = 0, tmp = 0;
	NOTE BLOKNOTE[AmountOfUsers];
	setlocale(LC_ALL, "rus");
  BLOKNOTE->input(BLOKNOTE, AmountOfUsers, tmp);
 cout << "Please input a phone nomber of pirson		:" << endl;
 for(;;)
 {
	 cin >> nomber;
	 for (int i = 0; i < AmountOfUsers; i++)
	 {
		 if (nomber == BLOKNOTE[i].TELE)
		 {
			 BLOKNOTE->out(i);
		 }
	 }
 }
}