#include "pch.h"
#include <iomanip>
#include<ios>
#include <iostream>

using namespace std;

int main()
{
	int const w(4);
	int const h(10);
	int const l(1);
	//*|123...
	cout << '*' << setw(w)<<'|';

	for (int i(1); i <= 10; i++)
	{
		cout << setw(w) << i;
	}
	cout << '\n';
	//---+-----
	cout << setfill('-')
		<< setw(w) << ""
		<< '+'
		<< setw((h - l + 1)*w) << " "
		<< '\n';
	//乘法表
	cout << setfill(' ');

	for (int r(l); r <= h; r++)
	{
		cout << setw(w) << r << '|';
		for (int c(l); c <= h; c++)
		{
			cout << setw(w) << r * c;
		}
		cout << '\n';
	}


}
