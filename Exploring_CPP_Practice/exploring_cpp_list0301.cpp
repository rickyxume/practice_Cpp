#include "pch.h"
#include <iostream>
#include <ostream>

int main()
{
	double sum(0);
	double count(0);
	double x;
	
	while (std::cin >> x)
	{
		sum = sum + x;
		count = count + 1;
	}

	if (count == 0)
		std::cout <<"No data.\n";
	else
		std::cout << "average = " << sum / count << '\n'; 
}
