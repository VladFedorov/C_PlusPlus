#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin("input.txt");
	//ofstream fout("output.txt");
	int N, k;
	int A[1000];
	if (!fin.good())
	{
		cout << "Файл input.txt не найден!" << endl;
	}
	else
	{
		k = 0;
		while (fin >> N)
		{
			A[k++] = N;
		}
		int tmp = A[1];
		for (int i = 0; i < k; i++)
		{
			if (i/*+1*/ % 2 == 0)
				if (A[i] < tmp)
					tmp = A[i];
		}

		cout << "Искомый массив:" << endl;
		for (int i = 0; i < k; i++)
		{
			cout << A[i] << " ";
		}

		cout << "Little ="<< tmp << endl;

	}
	fin.close();
	//fout.close();
	cin.get();
	return 0;
}