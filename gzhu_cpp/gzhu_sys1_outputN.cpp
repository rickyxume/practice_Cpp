#include <iostream>
using namespace std;

/*
����һ��������5λ����������Ҫ��
ʵ��2_1�� ������Ǽ�λ����
ʵ��2_2�� �ֱ����ÿһλ����
ʵ��2_3�� �����������λ���֣�����ԭ��Ϊ5631��Ӧ���Ϊ1365��
*/

int main()
{
	
	int num, place;
loop: 
	cout << "������һ��������5λ����������";
	cin >> num;

	if (num < 0 || num>99999)
	{
		cout << "���� " << endl;
		goto loop;   // goto ���������������Ƿ�Ϊ5λ��
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

	cout << num << "��" << place << "λ��" << endl;

	int  a, b, c, d, e;
	cout << "�ֱ����ÿһλ���Լ����������" << endl;
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

