#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;


void program1() {
	double price;
	int weight;
	cout << "1. ��������� �� �������� ��������� ������ ���������� ������ ������ ��������� 0.1, 0.2, 0.3, ..., 1 �� ������.\n" <<
		"������� �������� ������ ���������� ������: ";
	cin >> price;
	cout << "�����:\n";
	for (weight = 1; weight < 10; weight += 1) { //��������� weight ���� ���
		cout << "��������� 0." << weight << " ����������� ������ ���������� " << price * weight * 0.1 << ";\n";
	}
	cout << "��������� 1 ���������� ������ ���������� " << price << ".\n\n";
}

void program2() {
	int i, n, d;
	double product = 1;
	cout << "2. ��������� ������� ������������ 1.1*1.2*1.3*... (N ������������), ��� N - �������� ����� ����� (N > 0).\n" <<
		"������� ����� N: ";
	cin >> n;

	
	d = 0;
	for (i = 1; i <= n; i++) {
		if (i >= pow(10, d)) { // ��� ����, ����� i ��������� ��������� � ������� �����
			d++;
		}
		product *= (1 + i * pow(10, -d)); //����� ������� ������� i ������� � ������� ����� � ������� � ������� �� ��, ��� ������ �����������
	}

	cout << "�����: ������������ ���������� " << product << ".\n\n";
}

void program3() {
	int n, i, square;
	cout << "3. ��������� �������� ������� ��������� ����� �� �������, �������� ������� ������� ����� N ����� ����� 1, 3, 5, ..., (2*N - 1).\n" <<
		"����� ���������� ������� ���������� ����� ���������� ������� �����.\n" <<
		"������� ����� ����� N (N > 0): ";
	cin >> n;

	square = 0;
	for (i = 1; i <= n; i++) {
		square += 2 * i - 1;
		cout << "������� ����� ����� " << square << ";\n";
	}

	cout << "����, ������� " << n << " ����� " << square << ".\n\n";
}

void program4() {
	int i, n;
	double a, sum;
	cout << "4. ��������� �� �������� ������ A (������������) � N (�����) �������� ����� 1 + A + A^2 + A^3 + ... + A^N.\n" <<
		"������� ����� A: ";
	cin >> a;
	cout << "������� ����� ����� N (A > 0): ";
	cin >> n;
	
	sum = 0;
	for (i = 0; i <= n; i++) {
		sum += pow(a, i);
	}

	cout << "����� ����� " << sum << ".\n\n";
}

void program5() {
	int i, n;
	double a, sum;
	cout << "4. ��������� �� �������� ������ A (������������) � N (�����) �������� ����� 1 - A + A^2 - A^3 + ... +(-) A^N.\n" <<
		"������� ����� A: ";
	cin >> a;
	cout << "������� ����� ����� N (A > 0): ";
	cin >> n;

	sum = 0;
	for (i = 0; i <= n; i++) {
		sum += pow(a, i) * pow(-1,i);
		cout << pow(a, i) * pow(-1, i) << endl;
	}

	cout << "����� ����� " << sum << ".\n\n";
}


int main() {
	setlocale(LC_ALL, "rus");

	program1();
	program2();
	program3();
	program4();
	program5();

	return 0;
}