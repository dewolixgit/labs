#include <iostream>

using namespace std;

void program1() {
	int i;
	cout << "1. ��������� ���������, ������� ������ ���������� �������� ����, ��� ������ ����� � ������.\n" <<
		"������� ������ ����� � ������: ";
	cin >> i;
	i /= 1024; // ��� ������� int �� int ���������� int, � ������� ����� �������������, ������� �������������� ����� �� ���������
	cout << "������ ���� �������� " << i << " ������ ����������.\n\n"; //����� �������� �� ��������� ����� ���������������� ����������� � ������, ���� �������������� :)
}

void program2() {
	int a, b;
	cout << "2. ��������� ���������, ������� ������ �������� B ����� � ������� �, ��� A > B.\n" <<
		"������� ������ ������� A: ";
	cin >> a;
	cout << "������� ������ ������� B: ";
	cin >> b;
	cout << "� ������� A ���������� " << a / b << " ������ �������� B.\n\n";
}

void program3() {
	int a, b;
	cout << "3. ��������� ��������� ����� ��������� ����� ������� A ����� ����, ��� � ������� A ��������� ����������� ��������� ���������� ������ �������� B.\n" <<
		"������� ������ ������� A: ";
	cin >> a;
	cout << "������� ������ ������� B: ";
	cin >> b;
	cout << "� ������� A ����� ���������� � ��� ������ �������� B ��������� ��������� �����, ������ " << (float)a - (a / b)*b << ".\n\n";
}

void program4() {
	int a, f, s;
	cout << "4. ��������� �������� ������� ����� ��������� ����������� �����.\n" <<
		"������� ����������� �����: ";
	cin >> a;
	f = a % 10;
	s = a / 10;
	//a = f * 10 + s; - ���� ��������� �����, � �������� �� ����� ������ ��������
	cout << "����, �������� ����� " << s << f << " ������������� � " << f << s << ".\n\n";
}

void program5() {
	int a, d;
	cout << "5. ��������� �������� ������ ����� ��������� ������������ ����� � �����.\n" <<
		"������� ����������� �����: ";
	cin >> a;
	d = a / 100;
	cout << "����, �������� ����� " << a << " ������������� � " << (a%100)*10+d << ".\n\n";
}




void main() {
	setlocale(LC_ALL, "rus");

	program1();
	program2();
	program3();
	program4();
	program5();

}