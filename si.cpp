#include <iostream>
using namespace std;

int main() {
    float p, r, t, i;

    cout << "Enter principal amount: ";
    cin >> p;

    cout << "Enter rate of interest: ";
    cin >> r;

    cout << "Enter time in years: ";
    cin >> t;

    i = (p * r* t) / 100;

    cout << "Simple Interest is: " << i << endl;

    return 0;
}
