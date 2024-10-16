#include <iostream>
using namespace std;

int main() {
    float mass, force, velocity;

    cout << "Enter mass: ";
    cin >> mass;

    cout << "Enter force: ";
    cin >> force;

    if (mass != 0) {
        velocity = force / mass;
        cout << "Velocity is: " << velocity << " m/s" << endl;
    } else {
        cout << "Mass cannot be zero." << endl;
    }

    return 0;
}
