#include <iostream>
using std::cout;
using std::endl;

int main() {

	float R;
	float pi = 3.14;

	cout << "Enter R: ";
	std::cin >> R;


	float S = pi * R * R;

	cout << "S = " << S << endl;

	float L = 2 * pi * R;

	cout << "L = " << L;

	return 0;
}