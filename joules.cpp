#include <iostream>
using namespace std;

int main() {
    float force, distance, joules;

    cout << "Enter force in Newtons: ";
    cin >> force;

    cout << "Enter distance in meters: ";
    cin >> distance;

    joules = force * distance;

    cout << "Energy in joules: " << joules << " J" << endl;

    return 0;
}
