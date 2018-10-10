
#include <iostream>

using namespace std;

int main()
{
	cout << "N\t" << "N^2\t" << "N^3" << endl;
	int a, b;
	for (int N(1); N != 21; N++)
	{
		a = N * N;
		b = N * N * N;
		cout << N << "\t" << a << "\t" << b<<endl;
	}
	system("pause");
}

