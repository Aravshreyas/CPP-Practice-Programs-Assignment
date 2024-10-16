#include <iostream>
using namespace std;

int main() {
    int cents;

    cout << "Enter the amount in cents: ";
    cin >> cents;

    int dollars = cents / 100;
    cents %= 100;

    int quarters = cents / 25;
    cents %= 25;

    int pennies = cents;

    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}
