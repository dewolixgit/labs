#include <iostream>
#include <cmath>
using namespace std;

void program1() {
	int a, b, buf;
	cout << "1. ��������� �������� ������� ���������� �������� ���������� a � b.\n" << 
		"������� �������� a : ";
	cin >> a;
	cout << "������� �������� b: ";
	cin >> b;
	buf = a;
	a = b;
	b = buf;
	cout << "����: a = " << a << ", b = " << b << ".\n\n";
}

void program2() {
	int a, b, c, buf;
	cout << "1. ��������� �������� ������� ���������� �������� ���������� a, b, c ���, ��� ���������� a ������������ � b, b - � c, c - � a.\n" <<
		"������� �������� a : ";
	cin >> a;
	cout << "������� �������� b: ";
	cin >> b;
	cout << "������� �������� c: ";
	cin >> c;
	buf = a;
	a = c;
	c = b;
	b = buf;
	cout << "����: a = " << a << ", b = " << b << ", c = " << c << ".\n\n";
}

void program3() {
	int a, b, c, buf;
	cout << "1. ��������� �������� ������� ���������� �������� ���������� a, b, c ���, ��� ���������� a ������������ � c, c - � b, b - � a.\n" <<
		"������� �������� a : ";
	cin >> a;
	cout << "������� �������� b: ";
	cin >> b;
	cout << "������� �������� c: ";
	cin >> c;
	buf = a;
	a = b;
	b = c;
	c = buf;
	cout << "����: a = " << a << ", b = " << b << ", c = " << c << ".\n\n";
}

void program4() {
	double x,y;
	cout << "��������� ������� �������� ������� y = 3*x^6 - 6*x^2 - 7 ��� �������� �������� x.\n" <<
		"������� x: ";
	cin >> x;
	y = 3*pow(x,6) - 6*x*x - 7;
	cout << "������� y ����� " << y << ".\n\n";
}

void program5() {
	int x, y;
	cout << "��������� ������� �������� ������� y = 4*(x-3)^6 - 7*(x-3)^3 + 2 ��� �������� �������� x.\n" <<
		"������� x: ";
	cin >> x;
	y = 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2;
	cout << "������� y ����� " << y << ".\n\n";
}

void program6() {
	int a, buf;
	cout << "��������� �� �������� ���������� �������� � � ������� ������� � ������� ��������������� ���������� � ��� �������� ���������.\n" <<
		"������� ���������� a: ";
	cin >> a;
	buf = a;
	a *= buf;
	a *= a;
	a *= a;
	cout << "������� ������� ����� " << buf << " ����� " << a << ".\n\n"; 
}

void program7() {
	int a, buf1, buf2;
	cout << "��������� �� �������� ���������� �������� � � ����������� ������� � ������� ���� ��������������� ���������� � ���� �������� ���������.\n" <<
		"������� ���������� a: ";
	cin >> a;
	buf1 = a;
	a *= a;
	a *= buf1;
	buf2 = a;
	a *= a;
	a *= a;
	a *= buf2;
	cout << "����������� ������� ����� " << buf1 << " ����� " << a << ".\n\n";
}


int main() {
	setlocale(LC_ALL, "rus");

	program1();
	program2();
	program3();
	program4();
	program5();
	program6();
	program7();


	return 0;
}