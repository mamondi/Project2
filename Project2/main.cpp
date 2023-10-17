#include <iostream>
using std

int main() {

	double R1, R2, R3;

	cout << "¬вед≥ть значенн€ опору R1: ";
	cin >> R1;
	cout << "¬вед≥ть значенн€ опору R2: ";
	cin >> R2;
	cout << "¬вед≥ть значенн€ опору R3: ";
	cin >> R3;


	double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);


	cout << "ќп≥р R0 = " << R0 << std::endl;

	return 0;
}