#include "pch.h"
#include <iostream>

int main()
{
	int x;
	while (std::cin >> x)

		if (x % 2 == 0)
			std::cout << " even ";
		else
			std::cout << " odd ";
}

