#include <iostream>
using std

int main() {

	double R1, R2, R3;

	cout << "������ �������� ����� R1: ";
	cin >> R1;
	cout << "������ �������� ����� R2: ";
	cin >> R2;
	cout << "������ �������� ����� R3: ";
	cin >> R3;


	double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);


	cout << "��� R0 = " << R0 << std::endl;

	return 0;
}