#include "pch.h">
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i = 0, j, k;
	string s;
	cout << "String: ";
	getline(cin, s);

	while (s[i])
	{
		j = k = 0;
		while (s[j])
		{
			if (s[i] == s[j]) k++;
			j++;
		}
		if (k == 1) cout << s[i] << endl;
		i++;
	}
	system("pause");
	return 0;
}