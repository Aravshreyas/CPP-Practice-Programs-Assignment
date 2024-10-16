#include <iostream>
using namespace std;

int main() {
    float kms, miles;

    cout << "Enter distance in kilometers: ";
    cin >> kms;

    miles = kms * 0.621371;

    cout << "Distance in miles: " << miles << endl;

    return 0;
}
