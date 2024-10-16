#include <iostream>
using namespace std;

int main() {
    float distance, time, acceleration;

    cout << "Enter distance : ";
    cin >> distance;

    cout << "Enter time : ";
    cin >> time;

    if (time != 0) {
        acceleration = distance / (time * time);
        cout << "Acceleration is: " << acceleration << " m/s^2" << endl;
    } else {
        cout << "Time cannot be zero." << endl;
    }

    return 0;
}
