/*
输入底圆半径 r 和 柱高 h
计算圆柱体积和表面积
*/

#include "pch.h"
#include <iostream>

using namespace std;

//结构化方法
//2018-10-1
//by 许汝超

int main()
{
	const double PI = 3.1415926;

	double r, h, v, s;
	cout << "输入圆柱底圆半径r和柱高h \n计算圆柱体积v和面积s \n输入r：";
	cin >> r;
	cout << "输入h：";
	cin >> h;

	v = PI * r * r * h;
	s = 2 * PI * r * r + 2 * PI * r * h;

    cout << "v = "<< v <<endl; 
	cout << "s = " << s << endl;

	system("pause");
}





