#include "pch.h"
#include <iostream>
#include <iomanip>
#include <ios>

using namespace std;

int main()
{
	cout << "N    N^2    N^3\n";
	int i(1);
	while (i != 20)
	{
		i++;

		cout << setw(2) << 1
			<< setw(6) << i * i
			<< setw(6) << i * i * i
			<< endl;
	}
}
