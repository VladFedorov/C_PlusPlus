#include "pch.h"
#include <iostream>
#include <stack>

int main()
{
	std::stack<int> st({1,2,3,4,0,9,8,7,5,6});
	double avar =0;
	int cifra = 0;
	bool chetkiy = true;
	while (!st.empty())
	{
		chetkiy = !chetkiy;
		if (chetkiy == true)
		{
			avar += st.top();
			cifra +=1 ;
		}
		std::cout << st.top() << " ";
		st.pop();
	}
	avar = avar / cifra;
	std::cout << "\nAvarage: " << avar << std::endl;
}