#include <iostream>
using namespace std;

/*
给出一个不多于5位的正整数，要求：
实验2_1： 求出它是几位数；
实验2_2： 分别输出每一位数；
实验2_3： 按逆序输出各位数字，例如原数为5631，应输出为1365。
*/

int main()
{
	
	int num, place;
loop: 
	cout << "请输入一个不多于5位的正整数：";
	cin >> num;

	if (num < 0 || num>99999)
	{
		cout << "错啦 " << endl;
		goto loop;   // goto 语句检查输入的数字是否为5位数
	}

	if (num > 9999 && num <= 99999)
		place = 5;
	else  if (num > 999 && num <= 9999)
		place = 4;
	else  if (num > 99 && num <= 999)
		place = 3;
	else  if (num > 9 && num <= 99)
		place = 2;
	else if(num > 0 && num <= 9)
		place = 1;

	cout << num << "是" << place << "位数" << endl;

	int  a, b, c, d, e;
	cout << "分别输出每一位数以及逆序输出：" << endl;
	switch (place)
	{
	case 1: e = num % 10;
		cout << e << '\n';
		break;
	case 2:	d = (num / 10) % 10;
			e = num % 10;
			cout << d <<" " << e << '\n';
			cout << e <<" "  << d << '\n';
			break;
	case 3: c = (num / 100) % 10;
			d = (num / 10) % 10;
			e = num % 10;
			cout << c << " " << d << " "  << e << '\n';
			cout << e << " "  << d <<" "  << c << '\n';
			break;
	case 4: b = (num / 1000) % 10;
			c = (num / 100) % 10;
			d = (num / 10) % 10;
			e = num % 10;
			cout << b << " "  << c << " "  << d <<" "  << e << '\n';
			cout << e << " "  << d << " " << c <<" "  << b << '\n';
			break;
	case 5: a = (num / 10000) % 10;
			b = (num / 1000) % 10;
			c = (num / 100) % 10;
			d = (num / 10) % 10;
			e = num % 10;
			cout << a << " "  << b <<" "  << c << " "  << d << " "  << e << '\n';
			cout << e <<" "  << d << " " << c <<" "  << b << " "  << a << '\n';
			break;
	default:
		break;
	}

	return 0;
}

