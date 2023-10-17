#include <iostream>
using std::cout;
using std::endl;

int main() {

	double R1, R2, R3;

	cout << "Enter R1: ";
	std::cin >> R1;
	cout << "Enter R2: ";
	std::cin >> R2;
	cout << "Enter R3: ";
	std::cin >> R3;


	double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);


	cout << "R0 = " << R0 << std::endl;

	return 0;
}