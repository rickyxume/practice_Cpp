/*
cpp作业
输入底圆半径 r 和 柱高 h
计算圆柱体积和表面积
*/

#include "pch.h"
#include <iostream>

using namespace std;

//结构化方法
//2018-10-1
//by 许汝超

const double PI = 3.1415926;
double r, h, v, s;

int main()
{
	cout << "请分别输入圆柱底圆半径r和圆柱高h" << endl;

	cin >> r;
	cin >> h;

	cout << "圆柱底圆半径 r = " << r << endl;
	cout << "圆柱高 h = " << h << endl;

	v = PI * r * r * h;
	s = 2 * PI * r * r + 2 * PI * r * h;

	cout << "圆柱体积 v = " << v << endl;
	cout << "圆柱表面积 s = " << s << endl;

	system("pause");
}

/*
//面向对象方法

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
	cout << "圆柱的表面积 s = " << C.get_SurfaceArea() << endl;

	system("pause");
}
*/





