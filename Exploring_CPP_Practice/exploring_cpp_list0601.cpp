#include "pch.h"
#include <iostream>//1.#include <iosteam>
// Look for errors
int main()
{//2.[
	std::cout << "This program prints a table of squares.\n"//3.std::cout < "This program prints a table of squares.\n";
	<< "Enter the starting value for the table: ";//4."Enter the starting value for the table: ";
int start{ 0 };
std::cin >> start;
std::cout << "Enter the ending value for the table: ";
int end(start);
std::cin >> end;//7.std::cin << end;//6.td::cin << endl
std::cout << "#   #^2\n";
int x{ start };
end = end + 1; // exit loop when x reaches end 
while (x != end)
{
std::cout << x << "   " << x * x << "\n";//8.std:cout << x << "   " << x * x << "\n";
	x = x + 1;
}
}