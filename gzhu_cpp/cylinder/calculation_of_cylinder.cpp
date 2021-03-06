
#include "pch.h"
#include <iostream>

using namespace std;

const double PI = 3.1415926;
double r, h, v, s;

class Cylinder
{
public:

	double get_SurfaceArea()
	{
		return 2 * PI * r * r + 2 * PI * r * h;
	}
	double get_Volume()
	{
		return PI * r * r * h;
	}


};

int main()
{
	cout << "请输入圆柱底圆的半径 r：";
	cin >> r;
	cout << "请输入圆柱的高 h：";
	cin >> h;
	
	Cylinder C;
	cout << "圆柱的体积 v = " << C.get_Volume() << endl;
	cout << "圆柱的面积 s = " << C.get_SurfaceArea() << endl;

	system("pause");

}
