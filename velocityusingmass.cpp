#include <iostream>
using namespace std;

int main() {
    float mass, force, velocity , time;

    cout << "Enter mass: ";
    cin >> mass;

    cout << "Enter force: ";
    cin >> force;

    cout<<"Enter time: ";
    cin>>time;

    if (mass != 0) {
        velocity = (force*time) / mass;
        cout << "Velocity is: " << velocity << " m/s" << endl;
    } else {
        cout << "Mass cannot be zero." << endl;
    }

    return 0;
}
