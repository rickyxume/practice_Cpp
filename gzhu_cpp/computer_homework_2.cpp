#include "pch.h"
#include <iostream>

using namespace std;
//求1000以内所有完数（一个数恰好等于它所有因子之和，例完数6=1+2+3）
int main()
{
	int i, a, b;
	
	for (i=2; i <= 1000; i++)
	{
		a = 0;
		for (b = 1; b <= i; b++)
		{
			if (i%b == 0)
			{
				a = b+a;
				if (a == i)
					cout << i << '\n';
			}
			
		}
	}
	return 0;
}
