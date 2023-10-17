#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    double v, t, a;

    cout << "Enter v: ";
    cin >> v;
    cout << "Enter t: ";
    cin >> t;
    cout << "Enter a: ";
    cin >> a;

    double S = v * t + (a * t * t) / 2;

    cout << "S is equal -> " << S << endl;

    return 0;
}