#include "pch.h"
#include <iostream>

int main()
{
	int sum(0);
	int count(0);
	int x;
	
	while (std::cin >> x)
	{
		sum = sum + x;
		count = count + 1;
	}

	if (count != 0)
    std::cout << "average = " << sum/count << '\n'; 
}
