#include "pch.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	vector<int>data;
	int x(0);

	while (cin >> x)
		data.push_back(x);
	for (vector<int>::iterator i = data.begin(); i != data.end(); ++i)
	{
		*i = *i * 2;
	}
	for (vector<int>::iterator i(data.begin()); i != data.end(); ++i)
	{
		cout << *i << '\n';
	}




}
