#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string shape("Triangle");
	int sides(3);

    cout << "Shape\t\tSides\n" 
		 << "-----\t\t-----\n"; 
	cout << "Square\t\t" << 4 << '\n'
		 << "Circle\t\t" << "? \n";
//		 << "Triangle\t"<< 3 << '\n';
	cout << shape << '\t' << sides << '\n';

	string empty;
	cout << "|" << empty << "|\n";


}
