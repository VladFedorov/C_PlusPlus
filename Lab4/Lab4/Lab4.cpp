#include "pch.h"
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

int main()
{
	//HARDDD
	string str;
	getline(cin, str);
	stringstream ss(str);
	for (string word; ss >> word;)
	{
		reverse(word.begin(), word.end());
		cout << word << " ";
	}
}