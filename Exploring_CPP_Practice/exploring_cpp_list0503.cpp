
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "what is your name?\n";
	string name{};
	cin >> name;
	cout << "hi!" << name << "how old are you?\n";
	int age(0);
	cin >> age;
	cout << "ok~ byebye " << name << ", you are " << age << " year";
	if (age != 1)
		cout << "s old.\n";
	else
		cout << "\ old.\n";

}
